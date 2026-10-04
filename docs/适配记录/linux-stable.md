# linux-stable

## yt921x报错

```shell

root@armbian:~# ip link set eth0 up
RTNETLINK answers: Connection timed out
root@armbian:~# [  155.580514] rk_gmac-dwmac fe1c0000.ethernet eth0: Failed to reset the dma
[  155.580545] rk_gmac-dwmac fe1c0000.ethernet eth0: stmmac_hw_setup: DMA engine initialization failed
[  155.580568] rk_gmac-dwmac fe1c0000.ethernet eth0: __stmmac_open: Hw setup failed

root@armbian:~# ip link set eth1 up
[  161.410401] rk_gmac-dwmac fe1b0000.ethernet eth1: Failed to reset the dma
[  161.410462] rk_gmac-dwmac fe1b0000.ethernet eth1: stmmac_hw_setup: DMA engine initialization failed
[  161.410510] rk_gmac-dwmac fe1b0000.ethernet eth1: __stmmac_open: Hw setup failed

```


日志信息

```shell
root@armbian:~# dmesg |grep gmac
[    0.434636] rk_gmac-dwmac fe1c0000.ethernet: IRQ sfty not found
[    0.434763] rk_gmac-dwmac fe1c0000.ethernet: supply phy not found, using dummy regulator
[    0.434827] rk_gmac-dwmac fe1c0000.ethernet: clock input or output? (output).
[    0.434837] rk_gmac-dwmac fe1c0000.ethernet: TX delay(0x42).
[    0.434846] rk_gmac-dwmac fe1c0000.ethernet: Can not read property: rx_delay.
[    0.434854] rk_gmac-dwmac fe1c0000.ethernet: set rx_delay to 0x10
[    0.434867] rk_gmac-dwmac fe1c0000.ethernet: integrated PHY? (no).
[    0.439887] rk_gmac-dwmac fe1c0000.ethernet: init for RGMII_RXID
[    0.440097] rk_gmac-dwmac fe1c0000.ethernet: User ID: 0x30, Synopsys ID: 0x51
[    0.440109] rk_gmac-dwmac fe1c0000.ethernet: 	DWMAC4/5
[    0.440118] rk_gmac-dwmac fe1c0000.ethernet: DMA HW capability register supported
[    0.440127] rk_gmac-dwmac fe1c0000.ethernet: Active PHY interface: RGMII (1)
[    0.440135] rk_gmac-dwmac fe1c0000.ethernet: RX Checksum Offload Engine supported
[    0.440144] rk_gmac-dwmac fe1c0000.ethernet: TX Checksum insertion supported
[    0.440151] rk_gmac-dwmac fe1c0000.ethernet: Wake-Up On Lan supported
[    0.440160] rk_gmac-dwmac fe1c0000.ethernet: Enable RX Mitigation via HW Watchdog Timer
[    0.440170] rk_gmac-dwmac fe1c0000.ethernet: Enabled L3L4 Flow TC (entries=2)
[    0.440178] rk_gmac-dwmac fe1c0000.ethernet: Enabled RFS Flow TC (entries=10)
[    0.440186] rk_gmac-dwmac fe1c0000.ethernet: TSO supported
[    0.440193] rk_gmac-dwmac fe1c0000.ethernet: TSO feature enabled
[    0.440200] rk_gmac-dwmac fe1c0000.ethernet: SPH feature enabled
[    0.440208] rk_gmac-dwmac fe1c0000.ethernet: Using 32/32 bits DMA host/device width
[    0.574655] rk_gmac-dwmac fe1b0000.ethernet: IRQ sfty not found
[    0.574846] rk_gmac-dwmac fe1b0000.ethernet: supply phy not found, using dummy regulator
[    0.574913] rk_gmac-dwmac fe1b0000.ethernet: clock input or output? (output).
[    0.574923] rk_gmac-dwmac fe1b0000.ethernet: TX delay(0x44).
[    0.574932] rk_gmac-dwmac fe1b0000.ethernet: Can not read property: rx_delay.
[    0.574939] rk_gmac-dwmac fe1b0000.ethernet: set rx_delay to 0x10
[    0.574950] rk_gmac-dwmac fe1b0000.ethernet: integrated PHY? (no).
[    0.579971] rk_gmac-dwmac fe1b0000.ethernet: init for RGMII_RXID
[    0.580142] rk_gmac-dwmac fe1b0000.ethernet: User ID: 0x30, Synopsys ID: 0x51
[    0.580153] rk_gmac-dwmac fe1b0000.ethernet: 	DWMAC4/5
[    0.580162] rk_gmac-dwmac fe1b0000.ethernet: DMA HW capability register supported
[    0.580171] rk_gmac-dwmac fe1b0000.ethernet: Active PHY interface: RGMII (1)
[    0.580179] rk_gmac-dwmac fe1b0000.ethernet: RX Checksum Offload Engine supported
[    0.580187] rk_gmac-dwmac fe1b0000.ethernet: TX Checksum insertion supported
[    0.580195] rk_gmac-dwmac fe1b0000.ethernet: Wake-Up On Lan supported
[    0.580203] rk_gmac-dwmac fe1b0000.ethernet: Enable RX Mitigation via HW Watchdog Timer
[    0.580212] rk_gmac-dwmac fe1b0000.ethernet: Enabled L3L4 Flow TC (entries=2)
[    0.580220] rk_gmac-dwmac fe1b0000.ethernet: Enabled RFS Flow TC (entries=10)
[    0.580229] rk_gmac-dwmac fe1b0000.ethernet: TSO supported
[    0.580235] rk_gmac-dwmac fe1b0000.ethernet: TSO feature enabled
[    0.580249] rk_gmac-dwmac fe1b0000.ethernet: SPH feature enabled
[    0.580257] rk_gmac-dwmac fe1b0000.ethernet: Using 32/32 bits DMA host/device width
[    6.385065] rk_gmac-dwmac fe1c0000.ethernet eth0: Register MEM_TYPE_PAGE_POOL RxQ-0
[    6.385554] rk_gmac-dwmac fe1c0000.ethernet eth0: Register MEM_TYPE_PAGE_POOL RxQ-1
[    7.393660] rk_gmac-dwmac fe1c0000.ethernet eth0: Failed to reset the dma
[    7.395024] rk_gmac-dwmac fe1c0000.ethernet eth0: stmmac_hw_setup: DMA engine initialization failed
[    7.396345] rk_gmac-dwmac fe1c0000.ethernet eth0: __stmmac_open: Hw setup failed
[    7.412313] rk_gmac-dwmac fe1b0000.ethernet eth1: Register MEM_TYPE_PAGE_POOL RxQ-0
[    7.413566] rk_gmac-dwmac fe1b0000.ethernet eth1: Register MEM_TYPE_PAGE_POOL RxQ-1
[    8.423707] rk_gmac-dwmac fe1b0000.ethernet eth1: Failed to reset the dma
[    8.425333] rk_gmac-dwmac fe1b0000.ethernet eth1: stmmac_hw_setup: DMA engine initialization failed
[    8.426898] rk_gmac-dwmac fe1b0000.ethernet eth1: __stmmac_open: Hw setup failed
[    8.875117] rk_gmac-dwmac fe1c0000.ethernet eth0: Register MEM_TYPE_PAGE_POOL RxQ-0
[    8.876533] rk_gmac-dwmac fe1c0000.ethernet eth0: Register MEM_TYPE_PAGE_POOL RxQ-1
[    9.887030] rk_gmac-dwmac fe1c0000.ethernet eth0: Failed to reset the dma
[    9.887827] rk_gmac-dwmac fe1c0000.ethernet eth0: stmmac_hw_setup: DMA engine initialization failed
[    9.888570] rk_gmac-dwmac fe1c0000.ethernet eth0: __stmmac_open: Hw setup failed
[    9.900875] rk_gmac-dwmac fe1c0000.ethernet eth0: Register MEM_TYPE_PAGE_POOL RxQ-0
[    9.901372] rk_gmac-dwmac fe1c0000.ethernet eth0: Register MEM_TYPE_PAGE_POOL RxQ-1
[   10.910379] rk_gmac-dwmac fe1c0000.ethernet eth0: Failed to reset the dma
[   10.911173] rk_gmac-dwmac fe1c0000.ethernet eth0: stmmac_hw_setup: DMA engine initialization failed
[   10.911913] rk_gmac-dwmac fe1c0000.ethernet eth0: __stmmac_open: Hw setup failed
[   10.920802] rk_gmac-dwmac fe1c0000.ethernet eth0: Register MEM_TYPE_PAGE_POOL RxQ-0
[   10.921285] rk_gmac-dwmac fe1c0000.ethernet eth0: Register MEM_TYPE_PAGE_POOL RxQ-1
[   11.930369] rk_gmac-dwmac fe1c0000.ethernet eth0: Failed to reset the dma
[   11.931998] rk_gmac-dwmac fe1c0000.ethernet eth0: stmmac_hw_setup: DMA engine initialization failed
[   11.933640] rk_gmac-dwmac fe1c0000.ethernet eth0: __stmmac_open: Hw setup failed
[   11.954439] rk_gmac-dwmac fe1c0000.ethernet eth0: Register MEM_TYPE_PAGE_POOL RxQ-0
[   11.955903] rk_gmac-dwmac fe1c0000.ethernet eth0: Register MEM_TYPE_PAGE_POOL RxQ-1
[   12.967035] rk_gmac-dwmac fe1c0000.ethernet eth0: Failed to reset the dma
[   12.968393] rk_gmac-dwmac fe1c0000.ethernet eth0: stmmac_hw_setup: DMA engine initialization failed
[   12.969696] rk_gmac-dwmac fe1c0000.ethernet eth0: __stmmac_open: Hw setup failed
[   12.986510] rk_gmac-dwmac fe1b0000.ethernet eth1: Register MEM_TYPE_PAGE_POOL RxQ-0
[   12.987734] rk_gmac-dwmac fe1b0000.ethernet eth1: Register MEM_TYPE_PAGE_POOL RxQ-1
[   13.997036] rk_gmac-dwmac fe1b0000.ethernet eth1: Failed to reset the dma
[   13.998368] rk_gmac-dwmac fe1b0000.ethernet eth1: stmmac_hw_setup: DMA engine initialization failed
[   13.999651] rk_gmac-dwmac fe1b0000.ethernet eth1: __stmmac_open: Hw setup failed
[   14.017687] rk_gmac-dwmac fe1b0000.ethernet eth1: Register MEM_TYPE_PAGE_POOL RxQ-0
[   14.018824] rk_gmac-dwmac fe1b0000.ethernet eth1: Register MEM_TYPE_PAGE_POOL RxQ-1
[   15.027034] rk_gmac-dwmac fe1b0000.ethernet eth1: Failed to reset the dma
[   15.028392] rk_gmac-dwmac fe1b0000.ethernet eth1: stmmac_hw_setup: DMA engine initialization failed
[   15.029710] rk_gmac-dwmac fe1b0000.ethernet eth1: __stmmac_open: Hw setup failed
[   15.046372] rk_gmac-dwmac fe1b0000.ethernet eth1: Register MEM_TYPE_PAGE_POOL RxQ-0
[   15.047606] rk_gmac-dwmac fe1b0000.ethernet eth1: Register MEM_TYPE_PAGE_POOL RxQ-1
[   16.057023] rk_gmac-dwmac fe1b0000.ethernet eth1: Failed to reset the dma
[   16.058381] rk_gmac-dwmac fe1b0000.ethernet eth1: stmmac_hw_setup: DMA engine initialization failed
[   16.059681] rk_gmac-dwmac fe1b0000.ethernet eth1: __stmmac_open: Hw setup failed
[   16.076901] rk_gmac-dwmac fe1b0000.ethernet eth1: Register MEM_TYPE_PAGE_POOL RxQ-0
[   16.077470] rk_gmac-dwmac fe1b0000.ethernet eth1: Register MEM_TYPE_PAGE_POOL RxQ-1
[   17.087041] rk_gmac-dwmac fe1b0000.ethernet eth1: Failed to reset the dma
[   17.087921] rk_gmac-dwmac fe1b0000.ethernet eth1: stmmac_hw_setup: DMA engine initialization failed
[   17.088743] rk_gmac-dwmac fe1b0000.ethernet eth1: __stmmac_open: Hw setup failed
[  154.569916] rk_gmac-dwmac fe1c0000.ethernet eth0: Register MEM_TYPE_PAGE_POOL RxQ-0
[  154.571493] rk_gmac-dwmac fe1c0000.ethernet eth0: Register MEM_TYPE_PAGE_POOL RxQ-1
[  155.580514] rk_gmac-dwmac fe1c0000.ethernet eth0: Failed to reset the dma
[  155.580545] rk_gmac-dwmac fe1c0000.ethernet eth0: stmmac_hw_setup: DMA engine initialization failed
[  155.580568] rk_gmac-dwmac fe1c0000.ethernet eth0: __stmmac_open: Hw setup failed
[  160.399845] rk_gmac-dwmac fe1b0000.ethernet eth1: Register MEM_TYPE_PAGE_POOL RxQ-0
[  160.401381] rk_gmac-dwmac fe1b0000.ethernet eth1: Register MEM_TYPE_PAGE_POOL RxQ-1
[  161.410401] rk_gmac-dwmac fe1b0000.ethernet eth1: Failed to reset the dma
[  161.410462] rk_gmac-dwmac fe1b0000.ethernet eth1: stmmac_hw_setup: DMA engine initialization failed
[  161.410510] rk_gmac-dwmac fe1b0000.ethernet eth1: __stmmac_open: Hw setup failed


```


```shell

    2.759008] BPF: [177440] Invalid name_offset:3341058
[    2.834656] panthor fb000000.gpu: error -ENODEV: _opp_set_regulators: no regulator (mali) found
[    2.893399] BPF: [177441] Invalid name_offset:3341200
[    2.985058] rtc-hym8563 6-0051: could not init device, -6
[    3.270307] yt921x stmmac-1:1d: Failed to config port 9: -22
[    3.972721] yt921x stmmac-0:1d: Failed to config port 9: -22
[    6.130165] rk_gmac-dwmac fe1c0000.ethernet eth0: Failed to reset the dma
[    6.130816] rk_gmac-dwmac fe1c0000.ethernet eth0: stmmac_hw_setup: DMA engine initialization failed
[    6.131423] rk_gmac-dwmac fe1c0000.ethernet eth0: __stmmac_open: Hw setup failed
[    7.146864] rk_gmac-dwmac fe1b0000.ethernet eth1: Failed to reset the dma
[    7.148015] rk_gmac-dwmac fe1b0000.ethernet eth1: stmmac_hw_setup: DMA engine initialization failed
[    7.149120] rk_gmac-dwmac fe1b0000.ethernet eth1: __stmmac_open: Hw setup failed

armbian login: root (automatic login)

[    8.616800] rk_gmac-dwmac fe1c0000.ethernet eth0: Failed to reset the dma
[    8.616851] rk_gmac-dwmac fe1c0000.ethernet eth0: stmmac_hw_setup: DMA engine initialization failed
[    8.616881] rk_gmac-dwmac fe1c0000.ethernet eth0: __stmmac_open: Hw setup failed
[    8.619161] yt921x stmmac-1:1d lan3: failed to open conduit eth0
[    9.640154] rk_gmac-dwmac fe1c0000.ethernet eth0: Failed to reset the dma
[    9.640221] rk_gmac-dwmac fe1c0000.ethernet eth0: stmmac_hw_setup: DMA engine initialization failed
[    9.640277] rk_gmac-dwmac fe1c0000.ethernet eth0: __stmmac_open: Hw setup failed
[    9.644967] yt921x stmmac-1:1d lan1: failed to open conduit eth0
root@armbian:~# [   10.666746] rk_gmac-dwmac fe1c0000.ethernet eth0: Failed to reset the dma
[   10.666776] rk_gmac-dwmac fe1c0000.ethernet eth0: stmmac_hw_setup: DMA engine initialization failed
[   10.666799] rk_gmac-dwmac fe1c0000.ethernet eth0: __stmmac_open: Hw setup failed
[   10.668232] yt921x stmmac-1:1d lan2: failed to open conduit eth0
[   11.683400] rk_gmac-dwmac fe1c0000.ethernet eth0: Failed to reset the dma
[   11.683431] rk_gmac-dwmac fe1c0000.ethernet eth0: stmmac_hw_setup: DMA engine initialization failed
[   11.683454] rk_gmac-dwmac fe1c0000.ethernet eth0: __stmmac_open: Hw setup failed
[   11.684938] yt921x stmmac-1:1d lan4: failed to open conduit eth0

root@armbian:~# 
root@armbian:~# 
root@armbian:~# [   12.700066] rk_gmac-dwmac fe1b0000.ethernet eth1: Failed to reset the dma
[   12.700097] rk_gmac-dwmac fe1b0000.ethernet eth1: stmmac_hw_setup: DMA engine initialization failed
[   12.700120] rk_gmac-dwmac fe1b0000.ethernet eth1: __stmmac_open: Hw setup failed
[   12.701579] yt921x stmmac-0:1d lan5: failed to open conduit eth1
ip a
[   13.716718] rk_gmac-dwmac fe1b0000.ethernet eth1: Failed to reset the dma
[   13.716793] rk_gmac-dwmac fe1b0000.ethernet eth1: stmmac_hw_setup: DMA engine initialization failed
[   13.716849] rk_gmac-dwmac fe1b0000.ethernet eth1: __stmmac_open: Hw setup failed
[   13.721695] yt921x stmmac-0:1d lan6: failed to open conduit eth1
1: lo: <LOOPBACK,UP,LOWER_UP> mtu 65536 qdisc noqueue state UNKNOWN group default qlen 1000
    link/loopback 00:00:00:00:00:00 brd 00:00:00:00:00:00
    inet 127.0.0.1/8 scope host lo
       valid_lft forever preferred_lft forever
    inet6 ::1/128 scope host noprefixroute 
       valid_lft forever preferred_lft forever
2: eth0: <BROADCAST,MULTICAST> mtu 1508 qdisc noop state DOWN group default qlen 1000
    link/ether 42:3b:0e:b3:20:d5 brd ff:ff:ff:ff:ff:ff
    altname end1
    altname enx423b0eb320d5
3: eth1: <BROADCAST,MULTICAST> mtu 1508 qdisc noop state DOWN group default qlen 1000
    link/ether 42:3b:0e:b3:20:d4 brd ff:ff:ff:ff:ff:ff
    altname end0
    altname enx423b0eb320d4
4: sit0@NONE: <NOARP> mtu 1480 qdisc noop state DOWN group default qlen 1000
    link/sit 0.0.0.0 brd 0.0.0.0
5: ip6tnl0@NONE: <NOARP> mtu 1452 qdisc noop state DOWN group default qlen 1000
    link/tunnel6 :: brd :: permaddr b262:572c:b74a::
6: eth2: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc fq_codel state DOWN group default qlen 1000
    link/ether 8a:66:08:97:47:a9 brd ff:ff:ff:ff:ff:ff
    altname enP3p49s0
7: eth3: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc fq_codel state UP group default qlen 1000
    link/ether 8e:02:91:48:02:e8 brd ff:ff:ff:ff:ff:ff
    altname enP2p33s0
8: lan1@eth0: <BROADCAST,MULTICAST,M-DOWN> mtu 1500 qdisc noop state DOWN group default qlen 1000
    link/ether 42:3b:0e:b3:20:d5 brd ff:ff:ff:ff:ff:ff
9: lan2@eth0: <BROADCAST,MULTICAST,M-DOWN> mtu 1500 qdisc noop state DOWN group default qlen 1000
    link/ether 42:3b:0e:b3:20:d5 brd ff:ff:ff:ff:ff:ff
10: lan3@eth0: <BROADCAST,MULTICAST,M-DOWN> mtu 1500 qdisc noop state DOWN group default qlen 1000
    link/ether 42:3b:0e:b3:20:d5 brd ff:ff:ff:ff:ff:ff
11: lan4@eth0: <BROADCAST,MULTICAST,M-DOWN> mtu 1500 qdisc noop state DOWN group default qlen 1000
    link/ether 42:3b:0e:b3:20:d5 brd ff:ff:ff:ff:ff:ff
12: lan5@eth1: <BROADCAST,MULTICAST,M-DOWN> mtu 1500 qdisc noop state DOWN group default qlen 1000
    link/ether 42:3b:0e:b3:20:d4 brd ff:ff:ff:ff:ff:ff
13: lan6@eth1: <BROADCAST,MULTICAST,M-DOWN> mtu 1500 qdisc noop state DOWN group default qlen 1000
    link/ether 42:3b:0e:b3:20:d4 brd ff:ff:ff:ff:ff:ff
14: lan7@eth1: <BROADCAST,MULTICAST,M-DOWN> mtu 1500 qdisc noop state DOWN group default qlen 1000
    link/ether 42:3b:0e:b3:20:d4 brd ff:ff:ff:ff:ff:ff
15: lan8@eth1: <BROADCAST,MULTICAST,M-DOWN> mtu 1500 qdisc noop state DOWN group default qlen 1000
    link/ether 42:3b:0e:b3:20:d4 brd ff:ff:ff:ff:ff:ff
root@armbian:~# [   14.743343] rk_gmac-dwmac fe1b0000.ethernet eth1: Failed to reset the dma
[   14.743415] rk_gmac-dwmac fe1b0000.ethernet eth1: stmmac_hw_setup: DMA engine initialization failed
[   14.743471] rk_gmac-dwmac fe1b0000.ethernet eth1: __stmmac_open: Hw setup failed
[   14.748362] yt921x stmmac-0:1d lan7: failed to open conduit eth1
[   15.759978] rk_gmac-dwmac fe1b0000.ethernet eth1: Failed to reset the dma
[   15.760043] rk_gmac-dwmac fe1b0000.ethernet eth1: stmmac_hw_setup: DMA engine initialization failed
[   15.760099] rk_gmac-dwmac fe1b0000.ethernet eth1: __stmmac_open: Hw setup failed
[   15.764116] yt921x stmmac-0:1d lan8: failed to open conduit eth1


```

### 板卡概况

- **平台**: BYD G98, Rockchip RK3588, 从 NVMe 启动
- **网络拓扑**: 两个 GMAC (gmac0=eth1, gmac1=eth0), 各通过 RGMII fixed-link 连接一个 Motorcomm YT9215S DSA 交换芯片
- **内核版本**: 7.3.0-rc5 (原始 yt921x 驱动来自 6.18 内核)
- **对称拓扑**:
    - gmac0/eth1: `phy-mode = "rgmii-rxid"`, `tx_delay = <0x42>`, `clock_in_out = "output"`, fixed-link
    - gmac1/eth0: `phy-mode = "rgmii-rxid"`, `tx_delay = <0x44>`, `clock_in_out = "output"`, fixed-link
    - 两个交换芯片的 port 9 (CPU port): `phy-mode = "rgmii-txid"`, fixed-link speed=1000

### 故障现象

1. **DMA 复位超时**: `stmmac_open` → `dwmac4_dma_reset()` 超时, 报 `Failed to reset the dma`
2. **TX 超时**: 即使 DMA 复位偶然通过, 数据包也无法发出, 报 TX timeout
3. **yt921x port 9 配置失败**: `Failed to config port 9: -22` (-EINVAL)

### 根因分析

#### 问题一: DMA 复位超时 — dwmac-rk.c 的运行时 PM 缺陷

**根因**: `dwmac-rk.c` 使用 `stmmac_simple_pm_ops`, 该 PM ops 只定义了系统休眠/唤醒回调 (suspend/resume), **没有定义 runtime_suspend/runtime_resume 回调**。

##### 完整的故障链

1. **probe 阶段**: `stmmac_dvr_probe()` 中调用 `pm_runtime_put()` 使 GMAC device 的 runtime PM usage count 降为 0

2. **runtime PM 框架触发 suspend**: 因为 usage count = 0, PM core 排队执行 idle check → `pm_runtime_idle()` → `__rpm_callback()`

3. **NULL 回调被当作成功**: `rpm_callback()` 发现 driver 的 `runtime_suspend` 回调为 NULL, 直接返回 0 (视为成功), device 状态变为 `RPM_SUSPENDED`

4. **genpd 关闭电源域**: GMAC device 属于 `RK3588_PD_GMAC` 电源域 (DTS 中 `power-domains = <&power RK3588_PD_GMAC>`), genpd 的 `genpd_runtime_suspend()` 被调用:
    - 调用 `__genpd_runtime_suspend(dev)` → driver 无 runtime_suspend 回调, 返回 0
    - 调用 `genpd_stop_dev()` → 停止 device
    - 调用 `genpd_power_off()` → **关闭 GMAC 电源域**
    - 调用 `genpd_drop_performance_state()` → 降级性能状态

5. **时钟状态不一致**: 由于 driver 没有 runtime_suspend 回调:
    - `gmac_clk_enable(bsp_priv, false)` **从未被调用**
    - `bsp_priv->clk_enabled` 仍为 `true`
    - 但 genpd 已经关闭了电源域, 时钟物理上已停止

6. **stmmac_open 阶段**: `stmmac_open()` → `pm_runtime_resume_and_get()` 尝试恢复 device:
    - PM core 调用 genpd 的 `genpd_runtime_resume()`
    - genpd 重新开启电源域
    - 但 driver 的 runtime_resume 回调为 NULL, `__genpd_runtime_resume()` 返回 0
    - **`stmmac_bus_clks_config(priv, true)` 从未被调用**
    - **`gmac_clk_enable(bsp_priv, true)` 从未被调用**
    - `clk_bulk_prepare_enable()` 从未执行, 时钟没有被重新使能
    - 但 `bsp_priv->clk_enabled` 仍为 `true`, driver 认为时钟已开启

7. **DMA 复位超时**: `dwmac4_dma_reset()` 写 SFT_RESET 位后轮询, 由于时钟未使能, DMA 引擎无响应, 等待 2 秒后超时

##### 为什么 6.18 内核能工作

6.18 内核的 `dwmac-rk.c` 可能使用了 `stmmac_pltfr_pm_ops` (包含完整的 runtime PM 回调), 或者 6.18 的 PM 框架/genpd 行为不同, 在 runtime suspend 时不会关闭 GMAC 电源域。

#### 问题二: yt921x port 9 配置返回 -22 — 缺少 RGMII 支持

**根因**: 原始 yt921x 驱动的 `yt921x_port_config()` 函数只实现了 SERDES 模式 (SGMII/100BASEX/1000BASEX/2500BASEX) 的处理, **完全没有 XMII (RGMII) 模式的代码**。

##### 完整的故障链

1. DTS 中交换芯片的 port 9 (CPU port) 定义为 `phy-mode = "rgmii-txid"`

2. phylink 在配置 CPU port 时调用 `yt921x_phylink_mac_config()` → `yt921x_port_config(priv, 9, mode, PHY_INTERFACE_MODE_RGMII_TXID)`

3. `yt921x_port_config()` 的 `switch(interface)` 中没有 `PHY_INTERFACE_MODE_RGMII_*` 的 case

4. 进入 `default:` 分支, 直接 `return -EINVAL` (-22)

5. 交换芯片的 port 9 停留在硬件复位默认状态 (SERDES 模式), 与 gmac 端的 RGMII 模式不匹配

6. 即使 DMA 复位偶然通过, RGMII 链路也无法建立, 数据包无法发出, 导致 TX timeout

##### 附加问题: yt921x_dsa_phylink_get_caps() 未声明 RGMII 支持

`yt921x_dsa_phylink_get_caps()` 在 external port 的 "XMII" 注释处是空的, 没有向 phylink 声明任何 RGMII interface mode。这导致 phylink 无法正确协商 CPU port 的接口模式。

### 修复方案

#### 修复一: dwmac-rk.c — 添加 clks_config 回调 + 切换到 stmmac_pltfr_pm_ops

##### 1. 添加 `rk_gmac_clks_config()` 回调 (dwmac-rk.c:1558)

```c
static int rk_gmac_clks_config(void *bsp_priv_, bool enabled)
{
	struct rk_priv_data *bsp_priv = bsp_priv_;

	return gmac_clk_enable(bsp_priv, enabled);
}
```

该回调在 `stmmac_bus_clks_config()` 中被调用, 确保 runtime PM suspend/resume 时正确同步 RK GMAC 的所有时钟 (bulk clks + clk_phy)。

`gmac_clk_enable()` 内部有 `bsp_priv->clk_enabled` 状态跟踪, 保证了:
- runtime suspend 时: `clk_bulk_disable_unprepare()` + `clk_disable_unprepare(clk_phy)` + `bsp_priv->clk_enabled = false`
- runtime resume 时: `clk_bulk_prepare_enable()` + `clk_prepare_enable(clk_phy)` + `bsp_priv->clk_enabled = true`
- 与 genpd 的电源域开关操作保持同步

##### 2. 注册 clks_config 回调 (dwmac-rk.c:1614)

在 `rk_gmac_probe()` 中:
```c
plat_dat->clks_config = rk_gmac_clks_config;
```

这让 `stmmac_bus_clks_config()` 能够在 runtime PM 路径中调用 RK 平台特定的时钟控制逻辑。

##### 3. 切换 PM ops (dwmac-rk.c:1652)

```c
// 修改前:
.pm		= &stmmac_simple_pm_ops,

// 修改后:
.pm		= &stmmac_pltfr_pm_ops,
```

`stmmac_pltfr_pm_ops` 定义了完整的 runtime PM 回调:
```c
const struct dev_pm_ops stmmac_pltfr_pm_ops = {
	SET_SYSTEM_SLEEP_PM_OPS(stmmac_suspend, stmmac_resume)
	SET_RUNTIME_PM_OPS(stmmac_runtime_suspend, stmmac_runtime_resume, NULL)
	SET_NOIRQ_SYSTEM_SLEEP_PM_OPS(stmmac_pltfr_noirq_suspend, stmmac_pltfr_noirq_resume)
};
```

这样:
- `stmmac_runtime_suspend()` → `stmmac_bus_clks_config(priv, false)` → `gmac_clk_enable(bsp_priv, false)` → 关闭所有时钟
- `stmmac_runtime_resume()` → `stmmac_bus_clks_config(priv, true)` → `gmac_clk_enable(bsp_priv, true)` → 重新使能所有时钟
- genpd 开关电源域与时钟使能/禁用保持同步, 状态一致

##### 为什么之前测试 stmmac_pltfr_pm_ops 会失败

之前切换到 `stmmac_pltfr_pm_ops` 时没有同时添加 `clks_config` 回调。`stmmac_bus_clks_config()` 在没有 `clks_config` 回调时只处理 `stmmac_clk` 和 `pclk`, 不处理 RK 平台的全部 bulk clocks 和 `clk_phy`, 导致时钟恢复不完整。

#### 修复二: yt921x.c — 添加 RGMII 支持

##### 1. `yt921x_port_config()` 添加 RGMII case (yt921x.c:4171)

在 SERDES case 之后, 添加了完整的 RGMII 处理逻辑:

```c
case PHY_INTERFACE_MODE_RGMII:
case PHY_INTERFACE_MODE_RGMII_ID:
case PHY_INTERFACE_MODE_RGMII_RXID:
case PHY_INTERFACE_MODE_RGMII_TXID:
	/* 禁用 SERDES, 使能 XMII */
	mask = YT921X_SERDES_CTRL_PORTn(port);
	res = yt921x_reg_clear_bits(priv, YT921X_SERDES_CTRL, mask);
	if (res)
		return res;

	mask = YT921X_XMII_CTRL_PORTn(port);
	res = yt921x_reg_set_bits(priv, YT921X_XMII_CTRL, mask);
	if (res)
		return res;

	/* 配置 XMII 模式和延时 */
	ctrl = YT921X_XMII_MODE_RGMII | YT921X_XMII_EN;
	if (interface == PHY_INTERFACE_MODE_RGMII_ID ||
	    interface == PHY_INTERFACE_MODE_RGMII_TXID)
		ctrl |= YT921X_XMII_RGMII_TX_DELAY_2NS;
	if (interface == PHY_INTERFACE_MODE_RGMII_ID ||
	    interface == PHY_INTERFACE_MODE_RGMII_RXID)
		/* 13 * 150ps = 1.95ns, 最接近标准 2ns */
		ctrl |= YT921X_XMII_RGMII_RX_DELAY_150PS(13);

	mask = YT921X_XMII_MODE_M | YT921X_XMII_EN |
	       YT921X_XMII_RGMII_TX_DELAY_2NS |
	       YT921X_XMII_RGMII_TX_DELAY_150PS_M |
	       YT921X_XMII_RGMII_RX_DELAY_150PS_M;
	res = yt921x_reg_update_bits(priv, YT921X_XMIIn(port), mask, ctrl);
	if (res)
		return res;

	break;
```

关键寄存器操作:
- **YT921X_SERDES_CTRL**: 清除对应 port 位, 禁用 SERDES
- **YT921X_XMII_CTRL**: 设置对应 port 位, 使能 XMII
- **YT921X_XMIIn(port)**: 配置 XMII 模式 (RGMII)、使能位、TX/RX 延时

延时配置:
- TX 延时: `YT921X_XMII_RGMII_TX_DELAY_2NS` 提供 2ns 固定延时, 适用于 RGMII_ID 和 RGMII_TXID
- RX 延时: `YT921X_XMII_RGMII_RX_DELAY_150PS(13)` 提供 13×150ps=1.95ns 延时, 最接近 RGMII 标准的 2ns, 适用于 RGMII_ID 和 RGMII_RXID

##### 2. `yt921x_dsa_phylink_get_caps()` 声明 RGMII 支持 (yt921x.c:4317)

```c
/* XMII */
__set_bit(PHY_INTERFACE_MODE_RGMII, config->supported_interfaces);
__set_bit(PHY_INTERFACE_MODE_RGMII_ID, config->supported_interfaces);
__set_bit(PHY_INTERFACE_MODE_RGMII_RXID, config->supported_interfaces);
__set_bit(PHY_INTERFACE_MODE_RGMII_TXID, config->supported_interfaces);
```

这让 phylink 知道 external port 支持 RGMII 模式, 允许正确配置 CPU port 的接口模式。

#### 修复三: yt921x.c — 6.18→7.3 内核 API 适配

原始 yt921x 驱动来自 6.18 内核, 需要适配 7.3 内核的 API 变更:

##### 1. flow_action_police 结构体变更

6.18: `struct flow_action_police` 作为独立结构体传递
7.3: `flow_action_police` 嵌入在 `struct flow_action_entry` 的 `police` 成员中

相关修改:
- `yt921x_marker_tfm_police()`: 参数从 `const struct flow_action_police *police` 改为 `const struct flow_action_entry *act`
- `yt921x_police_validate()`: 参数从 `const struct flow_action_police *police, const struct flow_action *action, const struct flow_action_entry *act` 改为 `const struct flow_action *action, const struct flow_action_entry *act`
- 所有 `police->member` 访问改为 `act->police.member`
- `yt921x_dsa_port_policer_add()`: 简化为直接调用 `yt921x_marker_tfm()`, 跳过 `yt921x_police_validate()` (因为 DSA core 只传递 bytes/s 模式, rate=0 的包模式已在函数入口处单独拒绝)

##### 2. tc_tbf_qopt_offload 结构体变更

6.18 的 `struct tc_tbf_qopt_offload` 有 `extack` 成员
7.3 中该成员已被移除, 改为传入 `NULL`

##### 3. flow_cls_offload const 属性变更

6.18: `const struct flow_cls_offload *cls`
7.3: `struct flow_cls_offload *cls` (去掉了 const)

影响三个函数:
- `yt921x_acl_rule_ext_parse_flow_entries()`
- `yt921x_acl_rule_ext_parse_flow_action()`
- `yt921x_acl_rule_ext_parse_flow()`

##### 4. dsa_bridge_ports() 函数不存在

6.18 的 DSA 框架提供 `dsa_bridge_ports()` 辅助函数
7.3 中该函数不存在, 需要本地替代实现:

```c
static u32 yt921x_dsa_bridge_ports(struct dsa_switch *ds,
				   const struct net_device *bdev)
{
	struct dsa_port *dp;
	u32 mask = 0;

	dsa_switch_for_each_user_port(dp, ds)
		if (dsa_port_offloads_bridge_dev(dp, bdev))
			mask |= BIT(dp->index);

	return mask;
}
```

##### 5. 格式化字符串警告

`%08x` 格式化符与 `u32` 类型在某些编译器配置下产生警告, 通过 `(u32)` 强制转换解决。

#### 修复四: yt921x.h — 补充 LED 控制器寄存器定义

添加了完整的 LED 控制器寄存器定义 (yt921x.h), 包括:
- `YT921X_LED_GLB_CTRL`: LED 全局控制寄存器
- `YT921X_LED_CTRL_0/1/2(port)`: 每个 port 的 3 个 LED 控制寄存器
- 所有 LED 动作位定义 (10M/100M/1000M 亮/闪, RX/TX 活动, 半/全双工等)

这些定义支持板卡特有的 LED 配置需求 (BDY-G98 每个 RJ45 口的两个 LED 并联驱动)。

#### 修复五: yt921x.c — BDY-G98 LED 配置和 switch-id 支持

##### 1. LED profile 配置 (yt921x.c:4802)

为 BDY-G98 板卡特有的 LED 布局 (每个 RJ45 口的两个 LED 并联连接) 提供了联合配置:
- LED0: 链路时点亮 (10M/100M/1000M), 禁用 link-try 闪烁
- LED1: 链路时点亮 + 收发活动时闪烁

通过 DTS 属性 `motorcomm,bdy-g98-led-profile` 启用, 在 `yt921x_dsa_setup()` 中 chip setup 之后调用。

##### 2. SMI switch-id 支持 (yt921x.c:5036)

支持通过 DTS 属性 `motorcomm,switch-id` 为每个交换芯片指定 SMI 地址, 解决双芯片共享同一 MDIO 总线时的地址冲突问题。

### 修改文件清单

| 文件 | 修改类型 | 说明 |
|------|----------|------|
| `drivers/net/ethernet/stmicro/stmmac/dwmac-rk.c` | PM 修复 | 添加 `rk_gmac_clks_config()` 回调, 注册 `plat_dat->clks_config`, PM ops 从 `stmmac_simple_pm_ops` 改为 `stmmac_pltfr_pm_ops` |
| `drivers/net/dsa/yt921x.c` | RGMII 支持 + API 适配 | 添加 RGMII 模式处理代码, 适配 6.18→7.3 API 变更, LED profile, switch-id 支持, 调试打印 |
| `drivers/net/dsa/yt921x.h` | 寄存器定义 | LED 控制器寄存器定义, `yt921x_port_is_external` 宏重写 (语义不变) |

### 总结

两个问题是独立的, 但必须同时修复才能让网络正常工作:

1. **DMA 复位超时** = 运行时 PM 缺陷 → genpd 关电源域但时钟不关 → 恢复时时钟不开 → DMA 无时钟 → 复位超时
2. **TX 超时 + port 9 -22** = yt921x 缺少 RGMII 代码 → port 9 停留在 SERDES 默认模式 → RGMII 链路无法建立 → 数据包出不去

修复方案的两个部分缺一不可: 只修 PM 不修 RGMII, DMA 能复位但数据包发不出; 只修 RGMII 不修 PM, 时钟不开 DMA 复位就过不了。




## 主线内核压测爆炸


```shell

[  5][TX-C]  15.00-16.00  sec  14.0 MBytes   117 Mbits/sec   88    123 KBytes       
[  7][TX-C]  15.00-16.00  sec  13.4 MBytes   112 Mbits/sec   78    116 KBytes       
[  9][TX-C]  15.00-16.00  sec  14.0 MBytes   117 Mbits/sec   42    151 KBytes       
[ 11][TX-C]  15.00-16.00  sec  14.0 MBytes   117 Mbits/sec   41    150 KBytes       
[ 13][TX-C]  15.00-16.00  sec  13.1 MBytes   110 Mbits/sec   83    122 KBytes       
[ 15][TX-C]  15.00-16.00  sec  13.9 MBytes   116 Mbits/sec   45    153 KBytes       
[ 17][TX-C]  15.00-16.00  sec  13.9 MBytes   116 Mbits/sec   45    156 KBytes       
[ 19][TX-C]  15.00-16.00  sec  13.8 MBytes   115 Mbits/sec   86    119 KBytes       
[SUM][TX-C]  15.00-16.00  sec   110 MBytes   923 Mbits/sec  508             
[ 21][RX-C]  15.00-16.00  sec  8.62 MBytes  72.3 Mbits/sec                  
[ 23][RX-C]  15.00-16.00  sec  10.2 MBytes  86.0 Mbits/sec                  
[ 25][RX-C]  15.00-16.00  sec  11.9 MBytes  99.6 Mbits/sec                  
[ 27][RX-C]  15.00-16.00  sec  13.6 MBytes   114 Mbits/sec                  
[ 29][RX-C]  15.00-16.00  sec  11.2 MBytes  94.4 Mbits/sec                  
[ 31][RX-C]  15.00-16.00  sec  9.12 MBytes  76.5 Mbits/sec                  
[ 33][RX-C]  15.00-16.00  sec  11.2 MBytes  94.4 Mbits/sec                  
[ 35][RX-C]  15.00-16.00  sec  13.0 MBytes   109 Mbits/sec                  
[SUM][RX-C]  15.00-16.00  sec  89.0 MBytes   747 Mbits/sec                  
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5][TX-C]  16.00-17.00  sec  13.4 MBytes   112 Mbits/sec   40    141 KBytes       
[  7][TX-C]  16.00-17.00  sec  14.0 MBytes   117 Mbits/sec   45    134 KBytes       
[  9][TX-C]  16.00-17.00  sec  13.5 MBytes   113 Mbits/sec   45    163 KBytes       
[ 11][TX-C]  16.00-17.00  sec  13.9 MBytes   116 Mbits/sec   45    163 KBytes       
[ 13][TX-C]  16.00-17.00  sec  14.0 MBytes   117 Mbits/sec   45    139 KBytes       
[ 15][TX-C]  16.00-17.00  sec  13.4 MBytes   112 Mbits/sec   45    168 KBytes       
[ 17][TX-C]  16.00-17.00  sec  13.5 MBytes   113 Mbits/sec   45    164 KBytes       
[ 19][TX-C]  16.00-17.00  sec  13.6 MBytes   114 Mbits/sec   45    141 KBytes       
[SUM][TX-C]  16.00-17.00  sec   109 MBytes   916 Mbits/sec  355             
[ 21][RX-C]  16.00-17.00  sec  11.6 MBytes  97.5 Mbits/sec                  
[ 23][RX-C]  16.00-17.00  sec  11.9 MBytes  99.6 Mbits/sec                  
[ 25][RX-C]  16.00-17.00  sec  8.62 MBytes  72.4 Mbits/sec                  
[ 27][RX-C]  16.00-17.00  sec  11.6 MBytes  97.5 Mbits/sec                  
[ 29][RX-C]  16.00-17.00  sec  12.8 MBytes   107 Mbits/sec                  
[ 31][RX-C]  16.00-17.00  sec  11.4 MBytes  95.4 Mbits/sec                  
[ 33][RX-C]  16.00-17.00  sec  12.9 MBytes   108 Mbits/sec                  
[ 35][RX-C]  16.00-17.00  sec  12.0 MBytes   101 Mbits/sec                  
[SUM][RX-C]  16.00-17.00  sec  92.8 MBytes   778 Mbits/sec                  
- - - - - - - - - - - - - - - - - - - - - - - - -
[  5][TX-C]  17.00-18.00  sec  14.1 MBytes   118 Mbits/sec   45    163 KBytes       
[  7][TX-C]  17.00-18.00  sec  13.5 MBytes   113 Mbits/sec   45    156 KBytes       
[  9][TX-C]  17.00-18.00  sec  13.9 MBytes   116 Mbits/sec   83    129 KBytes       
[ 11][TX-C]  17.00-18.00  sec  13.4 MBytes   112 Mbits/sec   45    177 KBytes       
[ 13][TX-C]  17.00-18.00  sec  13.9 MBytes   116 Mbits/sec   41    157 KBytes       
[ 15][TX-C]  17.00-18.00  sec  14.0 MBytes   117 Mbits/sec   79    139 KBytes       
[ 17][TX-C]  17.00-18.00  sec  13.8 MBytes   115 Mbits/sec   85    126 KBytes       
[ 19][TX-C]  17.00-18.00  sec  14.0 MBytes   117 Mbits/sec   45    160 KBytes       
[SUM][TX-C]  17.00-18.00  sec   110 MBytes   927 Mbits/sec  468             
[ 21][RX-C]  17.00-18.00  sec  11.2 MBytes  94.4 Mbits/sec                  
[ 23][RX-C]  17.00-18.00  sec  10.8 MBytes  90.2 Mbits/sec                  
[ 25][RX-C]  17.00-18.00  sec  11.2 MBytes  94.4 Mbits/sec                  
[ 27][RX-C]  17.00-18.00  sec  12.6 MBytes   106 Mbits/sec                  
[ 29][RX-C]  17.00-18.00  sec  10.6 MBytes  89.1 Mbits/sec                  
[ 31][RX-C]  17.00-18.00  sec  10.1 MBytes  84.9 Mbits/sec                  
[ 33][RX-C]  17.00-18.00  sec  10.5 MBytes  88.1 Mbits/sec                  
[ 35][RX-C]  17.00-18.00  sec  12.2 MBytes   103 Mbits/sec                  
[SUM][RX-C]  17.00-18.00  sec  89.4 MBytes   750 Mbits/sec                  
[  583.590402] Unable to handle kernel write to read-only memory at virtual address ffff000002000000
[  583.590457] Mem abort info:
[  583.590470]   ESR = 0x000000009600014f
[  583.590487]   EC = 0x25: DABT (current EL), IL = 32 bits
[  583.590508]   SET = 0, FnV = 0
[  583.590522]   EA = 0, S1PTW = 0
[  583.590537]   FSC = 0x0f: level 3 permission fault
[  583.590556] Data abort info:
[  583.590569]   ISV = 0, ISS = 0x0000014f, ISS2 = 0x00000000
[  583.590589]   CM = 1, WnR = 1, TnD = 0, TagAccess = 0
[  583.590608]   GCS = 0, Overlay = 0, DirtyBit = 0
[  583.590626] swapper pgtable: 4k pages, 48-bit VAs, pgdp=0000000004445000
[  583.590650] [ffff000002000000] pgd=18000004fffff403, p4d=18000004fffff403, pud=18000004ffffe403, pmd=18000004ffffd403, pte=00e0000002000783
[  583.590700] Internal error: Oops: 000000009600014f [#1]  SMP
[  583.597208] Modules linked in: rfkill sunrpc zram binfmt_misc snd_soc_simple_card snd_soc_simple_card_utils phy_rockchip_usbdp phy_rockchip_samsung_hdptx tag_yt921x rtc_hym8563 yt921x rockchip_rng rockchipdrm dw_hdmi_qp inno_hdmi dw_dp panthor analogix_dp snd_soc_rockchip_i2s_tdm hantro_vpu rockchip_rga drm_gpuvm dw_mipi_dsi2 rockchip_vdec v4l2_jpeg v4l2_vp9 rocket v4l2_h264 r8169 videobuf2_dma_contig v4l2_mem2mem gpu_sched videobuf2_dma_sg drm_shmem_helper drm_exec drm_dp_aux_bus ohci_platform ohci_hcd ip_tables x_tables
[  583.601440] CPU: 0 UID: 0 PID: 14 Comm: ksoftirqd/0 Not tainted 7.3.0-rc5-kdev #8 PREEMPT(full) 
[  583.602233] Hardware name: BDY G98 (DT)
[  583.602585] pstate: 80400009 (Nzcv daif +PAN -UAO -TCO -DIT -SSBS BTYPE=--)
[  583.603215] pc : dcache_inval_poc_nosync+0x40/0x54
[  583.603661] lr : arch_sync_dma_for_cpu+0x2c/0x3c
[  583.604085] sp : ffff8000831fba80
[  583.604388] x29: ffff8000831fba80 x28: ffff000106428000 x27: 00000000000000db
[  583.605040] x26: ffff000103868ac0 x25: 0000000000000000 x24: ffff0001020cd600
[  583.605692] x23: ffff000100911c10 x22: 00000000ffffffe8 x21: 0000000001259000
[  583.606342] x20: 0000000000000002 x19: 0000000001259000 x18: 0000000000001830
[  583.606992] x17: 003fffffffffffff x16: ffff0003ffe41830 x15: ffff000101b82900
[  583.607643] x14: ffff000103274700 x13: ffff0000019c704e x12: ffff0000019c7000
[  583.608294] x11: 00000000ffffffe8 x10: ffff000107580e00 x9 : 0000000000000000
[  583.608945] x8 : ffff0001020cd6bc x7 : 0000000000000ec0 x6 : 0000000000000000
[  583.609595] x5 : 0000000000000000 x4 : 0000000000000003 x3 : 000000000000003f
[  583.610247] x2 : 0000000000000040 x1 : ffff000101258fc0 x0 : ffff000002000000
[  583.610899] Call trace:
[  583.611126]  dcache_inval_poc_nosync+0x40/0x54 (P)
[  583.611568]  __dma_sync_single_for_cpu+0x210/0x230
[  583.612009]  stmmac_napi_poll_rx+0x428/0x10f4
[  583.612411]  __napi_poll+0x38/0x278
[  583.612738]  net_rx_action+0x2dc/0x35c
[  583.613085]  handle_softirqs+0x118/0x45c
[  583.613450]  run_ksoftirqd+0x68/0x94
[  583.613781]  smpboot_thread_fn+0x19c/0x2b4
[  583.614159]  kthread+0x130/0x13c
[  583.614459]  ret_from_fork+0x10/0x20
[  583.614793] Code: 8a230000 54000060 d50b7e20 14000002 (d5087620) 
[  583.615346] ---[ end trace 0000000000000000 ]---
[  583.615769] Kernel panic - not syncing: Oops: Fatal exception in interrupt
[  583.616369] SMP: stopping secondary CPUs
[  583.616815] Kernel Offset: disabled
[  583.617135] CPU features: 0x0,e0000000,0070002a,01180a42,0802e20b
[  583.617687] Memory Limit: none
[  583.617974] ---[ end Kernel panic - not syncing: Oops: Fatal exception in interrupt ]---
DDR cb12b99cc23 hcy 26/08/04-14:19.50,fwver: v1.21
ch0 ttot10
ch1 ttot10


```



iperf3 -c 192.168.33.3 -p 2222 -P 4 -t 3600 --bidir -l 1400

iperf3 -c 192.168.33.2 -p 3333 -P 4 -t 60



## gpu


```shell
apt install -y glmark2-es2
glmark2-drm

```

GPU 完全可用，运行正常：                                                                                        
                                                                                                               
- GL_RENDERER: Mali-G610 (Panfrost)                                                                             
- GL_VERSION: OpenGL 3.1, OpenGL ES 3.1                                                                         
- FPS: 1400-2750 FPS（1080p 全屏），性能正常                                                                    
- 无崩溃、无 kernel panic、无 SError                                                                            
                                                                                                               
GPU 修复确认成功。DTS 加了 mali-supply = <&vdd_gpu_s0> 和 &pd_gpu { domain-supply = <&vdd_gpu_s0>; }            
两个属性，GPU 电源域正常上电，panthor 驱动 + Mesa 硬件加速全链路工作。

## npu

NPU 工作正常，无需修复。                                                                                        
                                                                                                               
- 三个 NPU core（fdab0000, fdac0000, fdad0000）全部被 rocket 驱动成功初始化                                     
- /dev/accel/accel0 设备节点存在，可以打开，DRM ioctl 正常响应                                                  
- 无任何错误日志（无 SError、无 crash、无 probe 失败）                                                          
- NPU runtime PM 状态 suspended 是正常的 — rocket 驱动是按需 resume 的，只在提交推理 job 时才唤醒 NPU core      
- DTS 配置完整：npu-supply、sram-supply、power-domains、iommus 都有                                             
                                                                                                               













