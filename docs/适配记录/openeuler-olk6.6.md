# OpenEuler OLK-6.6内核


## yt921x适配

BDY G98 RK3588 板载两个 Motorcomm YT9215S DSA 交换芯片，分别通过 RGMII 连接到
GMAC0（fe1b0000）和 GMAC1（fe1c0000）。在 openEuler 6.6.0 内核上，GMAC DMA
复位失败：

```
rk_gmac-dwmac fe1c0000.ethernet: Failed to reset the dma
rk_gmac-dwmac fe1c0000.ethernet eth0: NETDEV WATCHDOG: transmit queue 0 timed out 5004 ms
rk_gmac-dwmac fe1c0000.ethernet eth0: Reset adapter.
```

链路可以 UP，但 DMA 引擎无法传输数据，每 5 秒触发一次 TX watchdog 超时并重置适配器。

7.3.0-rc5 内核（linux-stable）在同一硬件上工作完全正常，两个 GMAC 均 Link Up
1Gbps/Full，8 个 LAN 端口全部可用。

### 根因分析

#### 1. SFT_RESET 位在内核启动时已为 1

通过在 `rk3588_clk_init()`（`CLK_OF_DECLARE` 阶段，`[0.000000]`）和
`stmmac_dvr_probe()`（probe 阶段，`[1.8s]`）分别读取 DMA_BUS_MODE 寄存器，
确认 **SFT_RESET 位（bit 0）从内核能读寄存器的最早时刻起就是 1**。

#### 2. SFT_RESET 无法通过软件手段清除

测试了所有可能的清除方式，均无效：

| 方法 | 结果 |
|------|------|
| 写 0 到 DMA_BUS_MODE | bit 0 保持 1 |
| 写 0x02 到 DMA_BUS_MODE | bit 0 保持 1 |
| CRU 软复位 SRST_A_GMAC0/1 | 无效 |
| 关闭再打开时钟门控 | 无效 |

#### 3. 7.3 内核在同一时刻 SFT_RESET 为 0

对比 7.3 内核完全启动后的寄存器值：

| 寄存器 | 6.6（启动时） | 7.3（启动后） | 含义 |
|--------|-------------|-------------|------|
| PHP_GRF CON0 (0x08) | 0x00000020 | 0x00000208 | PHY 接口选择 |
| PHP_GRF CLK_CON1 (0x70) | 0x00000000 | 0x00000210 | 时钟模式选择 |
| SYS_GRF CON7 (0x31c) | 0x00000a00 | 0x00003a3c | TX/RX 延迟使能 |
| SYS_GRF CON8 (0x320) | 0x00000000 | 0x00000044 | GMAC0 延迟值 |
| SYS_GRF CON9 (0x324) | 0x00000000 | 0x00000042 | GMAC1 延迟值 |
| DMA_BUS_MODE (0x1000) | 0x00000001 | 0x00000000 | DMA 复位状态 |

#### 4. 根因：GRF 未配置 + switch 未复位 → 无 RGMII 接收时钟

**SFT_RESET 位需要 RGMII 接收时钟才能从 1 自动变为 0。** 这是 DWMAC4/5
硬件的设计行为——DMA 软复位在完成时需要时钟驱动自清除。

6.6 内核启动时：
- PHP_GRF 未配置为 RGMII 模式（PHY 接口选择为默认值）
- SYS_GRF 未配置 TX/RX 延迟
- YT9215 switch 未被复位，不输出 RGMII 接收时钟
- 因此 DMA SFT_RESET 保持 1

7.3 内核启动时这些 GRF 寄存器已预先配置好（可能由 7.3 内核的早期初始化代码
或不同的驱动初始化顺序完成），switch 也在 probe 前就被复位，RGMII 接收时钟
存在，SFT_RESET 为 0。

#### 5. 为什么 7.3 和 6.6 不同

7.3 内核（linux-stable ~7.3-rc5）的 `dwmac-rk.c` 使用 `devm_stmmac_pltfr_probe`，
通过 `plat->init` 回调（`rk_gmac_init` → `rk_gmac_powerup`）在 `stmmac_dvr_probe`
内部完成 GRF 配置和时钟使能。其时钟框架使用 `CLK_OF_DECLARE_DRIVER` 两阶段初始化。

6.6 内核（openEuler）的 `dwmac-rk.c` 原始代码直接调用 `stmmac_dvr_probe`，
GRF 配置（`set_to_rgmii`、`set_clock_selection`）在 `rk_gmac_powerup` 中完成，
但执行时机较晚——在 stmmac probe 阶段（~1.8s），而 DMA reset 在 `stmmac_open`
阶段（~8s）才调用。虽然时间上 GRF 配置先于 DMA reset，但 switch 复位（通过
`snps,reset-gpio`）也在 probe 阶段的 `stmmac_mdio_register` 中完成，switch
需要时间启动并输出时钟。

关键差异在于 **6.6 内核缺少早期 GRF 配置和 switch 复位**，导致在 `stmmac_open`
调用 `dwmac4_dma_reset` 时，SFT_RESET 仍然为 1。

### 解决方案

在 `clk-rk3588.c` 的 `rk3588_clk_init()` 函数最早期（`CLK_OF_DECLARE` 阶段），
在时钟树初始化之前，完成以下三步：

#### 1. 配置 PHP_GRF 为 RGMII 模式

```
PHP_GRF CON0 (0x08): PHY 接口选择 RGMII（GMAC0 和 GMAC1）
PHP_GRF CLK_CON1 (0x70): 时钟选择 CRU，RGMII 模式，不门控
```

#### 2. 配置 SYS_GRF TX/RX 延迟

```
SYS_GRF CON7 (0x31c): 使能 GMAC0 和 GMAC1 的 TX/RX 延迟
SYS_GRF CON8 (0x320): GMAC0 延迟值 TX=0x04 RX=0x04
SYS_GRF CON9 (0x324): GMAC1 延迟值 TX=0x02 RX=0x04
```

#### 3. GPIO 复位 YT9215 switch

```
GMAC0: GPIO4 (0xfec50000) pin 11, 低电平复位 → 等 20ms → 拉高 → 等 100ms
GMAC1: GPIO3 (0xfec40000) pin 24, 低电平复位 → 等 20ms → 拉高 → 等 100ms
```

switch 复位后开始输出 RGMII 接收时钟，DMA SFT_RESET 位在接收时钟驱动下
从 1 自动变为 0。此后 `stmmac_open` 中的 `dwmac4_dma_reset` 可以成功完成。

### 改动清单

改动涉及 9 个文件，核心改动集中在 `clk-rk3588.c` 和 `dwmac-rk.c`。

#### `drivers/clk/rockchip/clk-rk3588.c`

1. **`rk3588_clk_init()` 早期 GRF 配置 + switch 复位**（+73 行）
    - 在函数最开头配置 PHP_GRF、SYS_GRF 为 RGMII 模式
    - 通过 GPIO 复位两个 YT9215 switch

2. **CLK_IS_CRITICAL 标志**（8 处改动）
    - `refclko25m_eth0/1_out`：从 `0` 改为 `CLK_IS_CRITICAL`
    - `PCLK_PHP_ROOT`、`ACLK_MMU_PHP`：从 `0` 改为 `CLK_IS_CRITICAL`
    - `PCLK_GMAC0/1`、`ACLK_GMAC0/1`：从 `0` 改为 `CLK_IS_CRITICAL`

3. **GRF_BIT / GRF_CLR_BIT 宏定义**（+2 行）
    - HIWORD 写法的辅助宏

#### `drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c`

1. **`rk_gmac_clk_init()` 永久使能 bulk 时钟**（+8 行）
    - 添加 `clk_bulk_prepare_enable`，防止 runtime PM 门控 GMAC 总线时钟

2. **使用 `stmmac_pltfr_probe` 替代直接调用**（重构）
    - 改用 `stmmac_pltfr_probe` → `stmmac_pltfr_init` → `plat->init` 标准流程
    - 添加 `plat_dat->init/exit/clks_config` 回调
    - 使用 `stmmac_pltfr_pm_ops` 替代自定义 `rk_gmac_pm_ops`

3. **`gmac_clk_enable()` 移除 `set_clock_selection` 调用**（-8 行）
    - GRF 时钟选择已在早期 clk init 中完成，不需要在每次 runtime PM 循环中重复

#### `drivers/net/dsa/yt921x.c` + `net/dsa/tag_yt921x.c`（新增文件）

- 从 linux-stable 移植的 Motorcomm YT921x DSA 交换芯片驱动
- 适配 6.6 内核 API（`dsa_switch_ops`、`phylink_pcs_ops` 等接口变化）

#### `include/net/dsa.h` + `include/uapi/linux/if_ether.h`

- `DSA_TAG_PROTO_YT921X`（值 28）
- `ETH_P_YT921X 0x9988`

#### Kconfig / Makefile

- `CONFIG_NET_DSA_YT921X=y`（内置）
- `CONFIG_NET_DSA_TAG_YT921X=y`（内置）

### 改动是否最小化

改动**不是最小化的**。具体分析：

#### 必要改动

| 改动 | 必要性 | 说明 |
|------|--------|------|
| `rk3588_clk_init()` 早期 GRF 配置 + switch 复位 | **必要** | 核心修复，解决 SFT_RESET 问题 |
| yt921x 驱动移植 | **必要** | 新硬件支持 |
| DSA tag protocol 注册 | **必要** | yt921x 驱动依赖 |

#### 可能多余的改动

| 改动 | 必要性 | 说明 |
|------|--------|------|
| `refclko25m` CLK_IS_CRITICAL | **待验证** | 最初为了解决时钟门控添加，但最终发现时钟门控寄存器本就是 0（已启用）。可能可以移除。 |
| `PCLK_GMAC0/1` CLK_IS_CRITICAL | **待验证** | 同上 |
| `ACLK_GMAC0/1` CLK_IS_CRITICAL | **待验证** | 同上 |
| `ACLK_MMU_PHP` CLK_IS_CRITICAL | **待验证** | 同上 |
| `PCLK_PHP_ROOT` CLK_IS_CRITICAL | **待验证** | 同上 |
| `rk_gmac_clk_init()` 永久 `clk_bulk_prepare_enable` | **待验证** | 最初为了保持时钟使能添加，但早期 GRF 配置可能已经足够 |
| `dwmac-rk.c` 改用 `stmmac_pltfr_probe` | **可简化** | 可以改回直接调用 `stmmac_dvr_probe` + `rk_gmac_powerup`，只要早期 GRF 配置和 switch 复位在 clk init 中完成 |
| `gmac_clk_enable()` 移除 `set_clock_selection` | **可还原** | 如果 GRF 配置在 clk init 中完成，这里的调用是冗余的，但保留也无害 |

#### 最小化方案

如果只保留必要改动：

1. `clk-rk3588.c`：早期 GRF 配置 + switch 复位（**必须保留**）
2. `clk-rk3588.c`：`refclko25m` CLK_IS_CRITICAL（**可能需要保留**，需测试）
3. yt921x 驱动 + DSA tag（**必须保留**）
4. `dwmac-rk.c`：可以恢复到更接近原始代码的状态

建议后续逐项测试移除 CLK_IS_CRITICAL 和永久时钟使能改动，以确定哪些是真正必要的。

### 验证结果

6.6.0 内核启动后：

```
yt921x stmmac-1:1d: Motorcomm YT9215S ethernet switch, chipid: 0x90020002
yt921x stmmac-1:1d: Link is Up - 1Gbps/Full - flow control rx/tx
yt921x stmmac-1:1d lan1 (uninitialized): PHY [stmmac-1:1d:01] driver [Generic PHY]
...
yt921x stmmac-1:1d lan4 (uninitialized): PHY [stmmac-1:1d:04] driver [Generic PHY]
yt921x stmmac-0:1d: Motorcomm YT9215S ethernet switch, chipid: 0x90020002
yt921x stmmac-0:1d: Link is Up - 1Gbps/Full - flow control rx/tx
yt921x stmmac-0:1d lan5 (uninitialized): PHY [stmmac-0:1d:01] driver [Generic PHY]
...
yt921x stmmac-0:1d lan8 (uninitialized): PHY [stmmac-0:1d:04] driver [Generic PHY]
rk_gmac-dwmac fe1c0000.ethernet eth0: Link is Up - 1Gbps/Full - flow control rx/tx
rk_gmac-dwmac fe1b0000.ethernet eth1: Link is Up - 1Gbps/Full - flow control rx/tx
```

- 两个 GMAC 均 Link Up 1Gbps/Full
- 两个 YT9215 switch 成功初始化
- 8 个 LAN 端口全部注册 PHY
- **无 DMA reset 失败**
- **无 TX watchdog 超时**
- **无 Reset adapter 告警**

```
$ ip -br a
eth0             UP             fe80::.../64
eth1             UP             fe80::.../64
lan1@eth0        LOWERLAYERDOWN
lan2@eth0        LOWERLAYERDOWN
lan3@eth0        LOWERLAYERDOWN
lan4@eth0        LOWERLAYERDOWN
lan5@eth1        LOWERLAYERDOWN
lan6@eth1        LOWERLAYERDOWN
lan7@eth1        LOWERLAYERDOWN
lan8@eth1        LOWERLAYERDOWN
```

`LOWERLAYERDOWN` 是正常的——端口未插网线。










## r8125 mac地址固定问题

 MACAddressPolicy=persistent 的机制：不存储 MAC 值，每次开机时纯计算生成，保证同一台机器 +                       
 同一个设备永远得到相同的 MAC。                                                                                  
                                                                                                                 
 算法（在 systemd 的 link_config.c 中实现）：                                                                    
                                                                                                                 
 1. 取 machine-id（/etc/machine-id = 03ce4df0af2f46c3bf52aee10b54059b）                                          
 2. 取设备的稳定标识名（ID_NET_NAME_PATH = enP3p49s0，或 PCI 路径）                                              
 3. 用 HMAC-SHA256(machine-id, device_name) 计算哈希                                                             
 4. 取哈希前 6 字节，设置第 0 字节第 1 位为 0（单播）、第 1 位为 1（本地管理），生成 MAC                         
                                                                                                                 
 所以 8a:66:08:97:47:a9 不存储在任何文件中，而是每次开机由 systemd-udevd 实时计算出来的。只要 machine-id         
 和设备路径不变，MAC 就永远不变。                                                                                




## led灯问题

work-led echo 0 黄灯亮、echo 1 绿灯亮——这是双色 LED 硬件设计。板子上 work-led 用的是一个双引脚双色 LED     
灯（共阴或共阳），GPIO 高低电平切换选通不同颜色。这在硬件设计中很常见，不是软件复用。



两个内核都亮，且所有 GPIO 拉低都不影响。这几乎可以确定是硬件电源指示灯——直接接在电源 rail 上（如 3.3V 或        
5V），上电即亮，不受任何 GPIO 或软件控制。                                                                      
                                                                                                             
这是板子硬件设计决定的，无法通过软件控制。如果你需要控制它，需要硬件上飞线修改电路。 


## rockchip rga

```shell
[    5.550665] rockchip-rga fdb80000.rga: error -ENOENT: Unable to parse OF data
[    5.551302] rockchip-rga: probe of fdb80000.rga failed with error -2


```

## hdmi问题

```shell
$ sshpass -p admin ssh -o StrictHostKeyChecking=no 192.168.33.38 "cat /sys/class/drm/card0-HDMI-A-1/status &&   
cat /sys/class/drm/card0-HDMI-A-1/enabled" 2>&1                                                                 
                                                                                                              
connected                                                                                                       
enabled  

```




## iommu crash

```shell
Linux armbian 6.6.0-kdev #2 SMP PREEMPT_DYNAMIC Sun Oct  4 00:09:34 CST 2026 aarch64 aarch64 aarch64 GNU/Linux
[root@armbian ~]# reboot -f
Rebooting.
[ 1113.533199] kernelspace aet: 0 comm: reboot tgid: 1385 pid: 1385 cpu: 5
[ 1113.533207] SError Interrupt on CPU5, code 0x00000000be000011 -- SError
[ 1113.533212] CPU: 5 PID: 1385 Comm: reboot Tainted: G   M                6.6.0-kdev #2
[ 1113.533217] Hardware name: BDY G98 (DT)
[ 1113.533220] pstate: 20400009 (nzCv daif +PAN -UAO -TCO -DIT -SSBS BTYPE=--)
[ 1113.533225] pc : rk_iommu_read+0xc/0x1c
[ 1113.533237] lr : rk_iommu_enable_stall+0x40/0x1e4
[ 1113.533241] sp : ffff800087023b80
[ 1113.533243] x29: ffff800087023b80 x28: ffff0001154a0fc0 x27: 0000000000000000
[ 1113.533250] x26: ffff800081872910 x25: 0000000000000001 x24: ffff800082af8048
[ 1113.533256] x23: ffff000100dce490 x22: ffff000100dce410 x21: ffff000100dce400
[ 1113.533261] x20: ffff800080c5dfd4 x19: ffff000100ae3380 x18: 0000000000000000
[ 1113.533267] x17: 000000040044ffff x16: 001000f2b5503510 x15: 0000000000000000
[ 1113.533272] x14: 0000000000000004 x13: ffff0001006979f0 x12: 0000000000000000
[ 1113.533277] x11: 0000000000000040 x10: ffff0003fc50a768 x9 : ffff8000816162a0
[ 1113.533283] x8 : 0000000000000001 x7 : 0000000000000228 x6 : 0000000644a1b90a
[ 1113.533288] x5 : 00000000000000c0 x4 : 0000000001000100 x3 : 0000000000000001
[ 1113.533293] x2 : 0000000000000001 x1 : 0000000000000004 x0 : 0000000000000000
[ 1113.533300] Kernel panic - not syncing: Asynchronous SError Interrupt
[ 1113.533302] CPU: 5 PID: 1385 Comm: reboot Tainted: G   M                6.6.0-kdev #2
[ 1113.533307] Hardware name: BDY G98 (DT)
[ 1113.533309] Call trace:
[ 1113.533312]  dump_backtrace+0x94/0x114
[ 1113.533322]  show_stack+0x18/0x24
[ 1113.533330]  dump_stack_lvl+0x74/0xc0
[ 1113.533338]  dump_stack+0x18/0x24
[ 1113.533344]  panic+0x360/0x3b0
[ 1113.533349]  nmi_panic+0x8c/0x90
[ 1113.533354]  arm64_serror_panic+0x78/0x88
[ 1113.533359]  arm64_is_fatal_ras_serror+0x70/0x1b4
[ 1113.533363]  do_serror+0x78/0x8c
[ 1113.533366]  el1h_64_error_handler+0x44/0xa4
[ 1113.533375]  el1h_64_error+0x78/0x7c
[ 1113.533379]  rk_iommu_read+0xc/0x1c
[ 1113.533386]  rk_iommu_disable+0x2c/0x1e0
[ 1113.533390]  rk_iommu_suspend+0x2c/0x44
[ 1113.533393]  pm_generic_runtime_suspend+0x2c/0x44
[ 1113.533402]  pm_runtime_force_suspend+0x50/0x134
[ 1113.533406]  rk_iommu_shutdown+0x68/0x7c
[ 1113.533414]  platform_shutdown+0x24/0x34
[ 1113.533421]  device_shutdown+0x150/0x258
[ 1113.533424]  kernel_restart+0x40/0xc0
[ 1113.533433]  __se_sys_reboot+0x104/0x220
[ 1113.533440]  __arm64_sys_reboot+0x1c/0x28
[ 1113.533444]  invoke_syscall.constprop.0+0x50/0xec
[ 1113.533452]  do_el0_svc+0x40/0xc4
[ 1113.533459]  el0_svc+0x50/0x238
[ 1113.533465]  el0t_64_sync_handler+0x120/0x12c
[ 1113.533472]  el0t_64_sync+0x1a4/0x1a8
[ 1113.533568] Kernel Offset: disabled
[ 1113.533570] CPU features: 0x00,0000001c,00000003,80090143,1001720b
[ 1113.533574] Memory Limit: none
[ 1113.556527] ---[ end Kernel panic - not syncing: Asynchronous SError Interrupt ]---


```




## gpu crash - 电源域相关

```shell
[root@G98 ~]# [   54.338908] rockchip-pm-domain fd8d8000.power-management:power-controller: failed to get ack on domain 'gpu', val=0xa9fff
[   54.339929] kernelspace aet: 1024 comm: python3 tgid: 1374 pid: 1374 cpu: 6
[   54.339935] SError Interrupt on CPU6, code 0x00000000be000411 -- SError
[   54.339940] CPU: 6 PID: 1374 Comm: python3 Tainted: G   M                6.6.0-kdev #7
[   54.339946] Hardware name: BDY G98 (DT)
[   54.339949] pstate: 404000c9 (nZcv daIF +PAN -UAO -TCO -DIT -SSBS BTYPE=--)
[   54.339955] pc : _raw_spin_lock_irqsave+0x3c/0xb4
[   54.339967] lr : regmap_lock_spinlock+0x18/0x2c
[   54.339977] sp : ffff80008a90b640
[   54.339979] x29: ffff80008a90b640 x28: ffff80008a90bc60 x27: 0000000000020002
[   54.339987] x26: 0000000000000000 x25: 0000000000000000 x24: 0000000000000001
[   54.339993] x23: ffff000100a16c98 x22: 0000000000000001 x21: 0000000000000000
[   54.339998] x20: 000000000000000c x19: 0000000000000000 x18: ffffffffffffffff
[   54.340004] x17: 66203a72656c6c6f x16: 72746e6f632d7265 x15: 776f703a746e656d
[   54.340009] x14: 6567616e616d2d72 x13: ffff800082745718 x12: 0000000000000a23
[   54.340015] x11: 0000000000000361 x10: ffff8000827f5718 x9 : ffff800082745718
[   54.340020] x8 : 00000000ffffdfff x7 : ffff8000827f5718 x6 : 80000000ffffe000
[   54.340026] x5 : ffff800080c78808 x4 : 0000000000000008 x3 : ffff800080c782d0
[   54.340031] x2 : 0000000000000001 x1 : 0000000000000000 x0 : ffff000100a16000
[   54.340037] Kernel panic - not syncing: Asynchronous SError Interrupt
[   54.340040] CPU: 6 PID: 1374 Comm: python3 Tainted: G   M                6.6.0-kdev #7
[   54.340044] Hardware name: BDY G98 (DT)
[   54.340046] Call trace:
[   54.340049]  dump_backtrace+0x94/0x114
[   54.340060]  show_stack+0x18/0x24
[   54.340067]  dump_stack_lvl+0x74/0xc0
[   54.340075]  dump_stack+0x18/0x24
[   54.340081]  panic+0x360/0x3b0
[   54.340086]  nmi_panic+0x8c/0x90
[   54.340090]  arm64_serror_panic+0x78/0x88
[   54.340095]  do_serror+0x48/0x8c
[   54.340099]  el1h_64_error_handler+0x44/0xa4
[   54.340107]  el1h_64_error+0x78/0x7c
[   54.340111]  _raw_spin_lock_irqsave+0x3c/0xb4
[   54.340117]  regmap_lock_spinlock+0x18/0x2c
[   54.340125]  regmap_write+0x3c/0x78
[   54.340131]  rockchip_pd_power+0x440/0x584
[   54.340141]  rockchip_pd_power_on+0x14/0x20
[   54.340148]  genpd_power_on+0x180/0x264
[   54.340153]  genpd_runtime_resume+0xd0/0x29c
[   54.340159]  __rpm_callback+0x48/0x1dc
[   54.340162]  rpm_callback+0x68/0x74
[   54.340165]  rpm_resume+0x534/0x754
[   54.340169]  __pm_runtime_resume+0x5c/0xb0
[   54.340172]  rk_pm_callback_power_on+0x13c/0x1d8 [valhall_kbase]
[   54.340238]  kbase_pm_clock_on+0x54/0x314 [valhall_kbase]
[   54.340296]  kbase_pm_do_poweron+0x20/0x84 [valhall_kbase]
[   54.340352]  kbase_pm_update_active+0x134/0x17c [valhall_kbase]
[   54.340407]  kbase_hwaccess_pm_gpu_active+0x10/0x1c [valhall_kbase]
[   54.340461]  kbasep_pm_context_active_handle_suspend_locked+0xa0/0x158 [valhall_kbase]
[   54.340518]  kbase_pm_context_active+0x30/0x48 [valhall_kbase]
[   54.340573]  kbase_device_firmware_init_once+0x60/0x18c [valhall_kbase]
[   54.340629]  kbase_open+0x70/0x108 [valhall_kbase]
[   54.340684]  misc_open+0xdc/0x19c
[   54.340689]  chrdev_open+0xbc/0x204
[   54.340695]  do_dentry_open+0x13c/0x508
[   54.340701]  vfs_open+0x34/0xe0
[   54.340707]  path_openat+0xa90/0x109c
[   54.340716]  do_filp_open+0x84/0x134
[   54.340723]  do_sys_openat2+0x1fc/0x274
[   54.340728]  __arm64_sys_openat+0x64/0xac
[   54.340734]  invoke_syscall.constprop.0+0x50/0xec
[   54.340742]  do_el0_svc+0x40/0xc4
[   54.340748]  el0_svc+0x50/0x238
[   54.340755]  el0t_64_sync_handler+0x120/0x12c
[   54.340762]  el0t_64_sync+0x1a4/0x1a8
[   54.340766] SMP: stopping secondary CPUs
[   54.340865] Kernel Offset: disabled
[   54.340866] CPU features: 0x00,0000001c,00000003,80090143,1001720b
[   54.340871] Memory Limit: none


```






## gpu opp告警

```shell
[    5.727736] mali fb000000.gpu: Failed to init_opp_table (-95)
[    5.735589] mali fb000000.gpu: _find_key: OPP table not found (-19)
[    5.738026] mali fb000000.gpu: No OPPs found in device tree! Scaling timeouts using 100000 kHz
[    5.749542] mali fb000000.gpu: _find_key: OPP table not found (-19)
[    5.755898] mali fb000000.gpu: Continuing without devfreq


```






## npu日志频繁打印

```shell

] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  246.462243] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  249.662948] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  252.862869] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  256.063088] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  259.263023] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  262.462970] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  265.661896] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  268.862664] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  272.062815] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  275.261725] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  278.462426] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  281.662544] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  284.865895] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  288.062665] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  291.262303] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  294.462509] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  297.662541] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  300.862500] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  304.062468] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  307.262419] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  310.462184] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  313.661357] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  316.862141] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  320.061340] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  323.262096] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  326.462301] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  329.662054] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  332.862319] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  336.062231] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  339.262224] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  342.462183] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  345.662130] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  348.861918] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  352.061080] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  355.262063] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  358.461796] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  361.661744] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  364.861862] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  368.061871] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  371.260836] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  374.461579] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  377.660751] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  380.861748] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  384.061684] RKNPU fdab0000.npu: RKNPU: iommu still enabled
[  387.261670] RKNPU fdab0000.npu: RKNPU: iommu still enabled


```











## 用户态gpu


目标板（192.168.33.38）的 Mali-G610 GPU 内核驱动已正常工作（/dev/mali0），但缺少用户空间库（libmali），导致
glmark2-drm 只能用 llvmpipe 软件渲染。
                                                                                                                
解决步骤
                                                                                                                
1. 找到 libmali 源文件
在 /2T/panbaidu/sdk_rp_linux6.1/rk-linux6.1-SDK-20260511/external/libmali/ 下找到 libmali-valhall-g610-g6p0-     
gbm.so（43MB，aarch64）和 CSF 固件 mali_csffw.bin。
                                                                                                                
2. 安装 libmali 到目标板 
                                                                                                                
# 传文件到板子
scp libmali-valhall-g610-g6p0-gbm.so 192.168.33.38:/lib/aarch64-linux-gnu/                                       
scp mali_csffw.bin                   192.168.33.38:/lib/firmware/    

3. 用 libmali 替换 Mesa 的 EGL/GLES/GBM（关键）                                                                  
不能只做符号链接，必须把 libmali 复制成真实的 .so 文件，否则 ldconfig 仍会找到 Mesa 原文件：                     
                                                                                                                
cd /lib/aarch64-linux-gnu/                                                                                       
# 备份 Mesa 原文件                                                                                               
mv libEGL.so.1.1.0       /opt/mesa-backup/                                                                       
mv libGLESv2.so.2.1.0    /opt/mesa-backup/                                                                       
mv libgbm.so.1.0.0       /opt/mesa-backup/                                                                       
mv libGLESv1_CM.so.1.2.0 /opt/mesa-backup/
mv libEGL_mesa.so.0.0.0  /opt/mesa-backup/   # 必须移除，否则 Mesa DRI 驱动会冲突                                
rm -f libEGL_mesa.so.0                                                                                           
                                                                                                                
# libmali 复制为这些文件名（libmali 内置了 EGL+GLES2+GLES1+GBM）                                                 
cp libmali-valhall-g610-g6p0-gbm.so libEGL.so.1.1.0                                                              
cp libmali-valhall-g610-g6p0-gbm.so libGLESv2.so.2.1.0                                                           
cp libmali-valhall-g610-g6p0-gbm.so libgbm.so.1.0.0                                                              
cp libmali-valhall-g610-g6p0-gbm.so libGLESv1_CM.so.1.2.0                                                        
                                                                                                                
# 修正符号链接                                                                                                   
ln -sf libEGL.so.1.1.0       libEGL.so.1 && ln -sf libEGL.so.1 libEGL.so                                         
ln -sf libGLESv2.so.2.1.0    libGLESv2.so.2 && ln -sf libGLESv2.so.2 libGLESv2.so 
ln -sf libgbm.so.1.0.0       libgbm.so.1                                                                         
ln -sf libGLESv1_CM.so.1.2.0 libGLESv1_CM.so.1                                                                   
                                                                                                               
ldconfig                                                                                                        
                                                                                                               
4. 安装正确的 benchmark 包                                                                                      
                                                                                                               
apt install glmark2-es2-drm   # 不是 glmark2-drm！                                                              
                                                                                                               
glmark2-drm 调用 eglBindAPI(EGL_OPENGL_API)（桌面 OpenGL），libmali 不支持。                                    
glmark2-es2-drm 用 OpenGL ES，libmali 支持。                                                                    
                                                                                                               
验证结果                                                                                                        
                                                                                                               
GL_VENDOR:   ARM                                                                                                
GL_RENDERER: Mali-LODX                          ← 硬件渲染                                                      
GL_VERSION:  OpenGL ES 3.2 v1.g6p0-01eac0                                                                       
FPS: 61（vsync 60Hz 上限）                                                                                      
                                                                                                               
注意事项                                                                                                        
                                                                                                               
- DDK 版本不匹配（内核 g29p0 vs 用户空间 g6p0）——无害，只有一条 Clearing BASE_MEM_UNCACHED_GPU flag 警告        
- mali_csffw.bin 放在 /lib/firmware/ 但内核实际用的是 built-in 固件                                             
- Mesa 原文件备份在 /opt/mesa-backup/，需要时可还原  










## 重启出现crash

```shell

[root@G98 ~]# reboot -f
Rebooting.
[  166.980958] kernelspace aet: 0 comm: kworker/4:4 tgid: 213 pid: 213 cpu: 4
[  166.980965] SError Interrupt on CPU4, code 0x00000000be000011 -- SError
[  166.980970] CPU: 4 PID: 213 Comm: kworker/4:4 Tainted: G   M                6.6.0-kdev #14
[  166.980975] Hardware name: BDY G98 (DT)
[  166.980978] Workqueue: pm pm_runtime_work
[  166.980987] pstate: 20400009 (nzCv daif +PAN -UAO -TCO -DIT -SSBS BTYPE=--)
[  166.980992] pc : rk_iommu_read+0xc/0x1c
[  166.981001] lr : rk_iommu_enable_stall+0x40/0x1e4
[  166.981008] sp : ffff800084b9bc00
[  166.981009] x29: ffff800084b9bc00 x28: 0000000000000000 x27: 0000000000000000
[  166.981016] x26: 0000000000000000 x25: 0000000000000008 x24: 00000000000f4240
[  166.981021] x23: 0000000000000000 x22: ffff000100dcb4f4 x21: 0000000000000008
[  166.981027] x20: ffff800080c649ec x19: ffff000100ae6180 x18: 0000000000000040
[  166.981032] x17: ffff0001006b7200 x16: 0000000000000003 x15: 014b8f51298de0dc
[  166.981038] x14: 000000058084a964 x13: 00000000000001bf x12: 00000000000001bf
[  166.981043] x11: 00000000000000c0 x10: 0000000000000a60 x9 : ffff800084b9bd10
[  166.981048] x8 : ffff00010a3aba00 x7 : fefefefefefefeff x6 : 00000000f7c041b9
[  166.981053] x5 : 00000000000000c0 x4 : 0000000001000100 x3 : 0000000000000001
[  166.981059] x2 : 0000000000000001 x1 : 0000000000000004 x0 : 0000000000000000
[  166.981065] Kernel panic - not syncing: Asynchronous SError Interrupt
[  166.981067] CPU: 4 PID: 213 Comm: kworker/4:4 Tainted: G   M                6.6.0-kdev #14
[  166.981072] Hardware name: BDY G98 (DT)
[  166.981074] Workqueue: pm pm_runtime_work
[  166.981078] Call trace:
[  166.981081]  dump_backtrace+0x94/0x114
[  166.981091]  show_stack+0x18/0x24
[  166.981099]  dump_stack_lvl+0x74/0xc0
[  166.981107]  dump_stack+0x18/0x24
[  166.981113]  panic+0x360/0x3b0
[  166.981119]  nmi_panic+0x8c/0x90
[  166.981123]  arm64_serror_panic+0x78/0x88
[  166.981127]  arm64_is_fatal_ras_serror+0x70/0x1b4
[  166.981131]  do_serror+0x78/0x8c
[  166.981135]  el1h_64_error_handler+0x44/0xa4
[  166.981143]  el1h_64_error+0x78/0x7c
[  166.981147]  rk_iommu_read+0xc/0x1c
[  166.981153]  rk_iommu_disable+0x2c/0x1e0
[  166.981159]  rk_iommu_suspend+0x2c/0x44
[  166.981165]  pm_generic_runtime_suspend+0x2c/0x44
[  166.981172]  __rpm_callback+0x48/0x1dc
[  166.981177]  rpm_callback+0x68/0x74
[  166.981180]  rpm_suspend+0x114/0x664
[  166.981183]  pm_runtime_work+0xc4/0xc8
[  166.981187]  process_one_work+0x140/0x3bc
[  166.981193]  worker_thread+0x1a8/0x360
[  166.981197]  kthread+0x114/0x120
[  166.981201]  ret_from_fork+0x10/0x20
[  166.981301] Kernel Offset: disabled
[  166.981303] CPU features: 0x00,0000001c,00000003,80090143,1001720b
[  166.981307] Memory Limit: none
DDR cb12b99cc23 hcy 26/08/04-14:19.50,fwver: v1.21
ch0 ttot10
ch1 ttot10
ch2 ttot10

```





---