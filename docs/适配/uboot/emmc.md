# emmc

## rk3588中的EMMC

```shell
MMC:   mmc@fe2c0000: 1, mmc@fe2e0000: 0
```
在 Rockchip RK3588 平台中，设备树（Device Tree）里的 `mmc@fe2c0000` 和 `mmc@fe2e0000` 分别对应芯片内部不同的 SD/MMC 控制器实例。根据 RK3588 的技术参考手册（TRM）和通用 BSP 定义，它们的对应关系如下：

1. mmc@fe2c0000 → SDMMC (通常标记为 sdmmc / sdhci)
-   **控制器：** SD/MMC Host Controller
-   **基地址：** `0xFE2C0000`
-   **典型用途：** 这个控制器通常用于连接 **SD 卡槽**、**TF 卡** 或 **SDIO WiFi/蓝牙模块**。
-   **特点：** 支持标准 SD/SDIO 协议，一般不支持 eMMC 的 HS400 等高速模式。在 Linux 设备树节点中，它常被命名为 `sdmmc` 或 `sdio`。

2. mmc@fe2e0000 → EMMC (通常标记为 emmc / sdhci)
-   **控制器：** Enhanced MMC Host Controller (eMMC PHY)
-   **基地址：** `0xFE2E0000`
-   **典型用途：** 这个控制器专门用于连接板载 **eMMC 存储芯片**。
-   **特点：** 集成了专用的 eMMC PHY，支持 HS400/HS400ES 等高速传输模式。在 Linux 设备树节点中，它常被命名为 `emmc`。

---

这两个缩写分别代表：

**S**ecure **D**igital **M**ulti**M**edia **C**ard / **C**ontroller

-   这是一个组合术语，涵盖了 **SD**（Secure Digital）和 **MMC**（MultiMediaCard）两种存储卡标准。
-   在 RK3588 等设备树中，`sdmmc` 节点表示该控制器**同时兼容** SD 卡和 MMC 卡协议，是一个通用的存储卡接口控制器。

**S**ecure **D**igital **I**nput/**O**utput

-   它是 SD 协议的扩展，允许通过 SD 卡接口连接**非存储类外设**。
-   最常见的用途是连接 **WiFi 模块**、**蓝牙模块**、GPS 模块等。
-   虽然物理接口与 SD 卡相同，但传输的是 I/O 数据而非单纯的块存储数据。

| 缩写 | 全称 | 主要用途 |
| :--- | :--- | :--- |
| **SDMMC** | Secure Digital MultiMedia Card/Controller | 存储设备（SD卡、TF卡、MMC卡） |
| **SDIO** | Secure Digital Input/Output | I/O 外设（WiFi、蓝牙、传感器等） |

## 引脚冲突的精确分析

先明确 RK3588 SFC（SPI5）与 eMMC 在 GPIO2 上的实际引脚映射：

| SFC 信号 | RK3588 引脚 | eMMC 信号 | 是否冲突 |
|----------|-----------|----------|---------|
| SFC_CLK  | GPIO2_C4  | —        | ❌ 不冲突 |
| SFC_CS0  | GPIO2_C5  | —        | ❌ 不冲突 |
| SFC_D0 (MOSI) | GPIO2_C6 | —   | ❌ 不冲突 |
| SFC_D1 (MISO) | GPIO2_C7 | —   | ❌ 不冲突 |
| SFC_D2   | **GPIO2_D0** | EMMC_D0 | ✅ **冲突** |
| SFC_D3   | **GPIO2_D1** | EMMC_D1 | ✅ **冲突** |

> **只有 SFC_D2/D3（四线模式的额外两根数据线）与 EMMC_D0/D1 冲突。**
> SFC 的单线/双线模式（CLK + CS + D0 + D1）使用的引脚与 eMMC **完全不重叠**。

---

## g98中的EMMC

```shell
root@iStoreOS:~# lsblk
NAME         MAJ:MIN RM   SIZE RO TYPE MOUNTPOINTS
nbd0          43:0    0     0B  0 disk 
nbd1          43:32   0     0B  0 disk 
nbd2          43:64   0     0B  0 disk 
nbd3          43:96   0     0B  0 disk 
nbd4          43:128  0     0B  0 disk 
nbd5          43:160  0     0B  0 disk 
nbd6          43:192  0     0B  0 disk 
nbd7          43:224  0     0B  0 disk 
mmcblk0      179:0    0 116.6G  0 disk 
├─mmcblk0p1  179:1    0    64M  0 part /boot
├─mmcblk0p2  179:2    0   256M  0 part /rom
└─mmcblk0p3  179:3    0     2G  0 part /overlay/upper/opt/docker
                                       /overlay
mmcblk0boot0 179:32   0     4M  1 disk 
mmcblk0boot1 179:64   0     4M  1 disk 
zram0        252:0    0     0B  0 disk 
nbd8          43:256  0     0B  0 disk 
nbd9          43:288  0     0B  0 disk 
nbd10         43:320  0     0B  0 disk 
nbd11         43:352  0     0B  0 disk 
nbd12         43:384  0     0B  0 disk 
nbd13         43:416  0     0B  0 disk 
nbd14         43:448  0     0B  0 disk 
nbd15         43:480  0     0B  0 disk 
root@iStoreOS:~# find /sys -name mmcblk0boot0
/sys/kernel/debug/block/mmcblk0boot0
/sys/class/block/mmcblk0boot0
/sys/devices/platform/fe2e0000.mmc/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0boot0
/sys/block/mmcblk0boot0
root@iStoreOS:~# find /sys -name mmcblk0p1
/sys/class/block/mmcblk0p1
/sys/devices/platform/fe2e0000.mmc/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p1
/sys/fs/ext4/mmcblk0p1
root@iStoreOS:~# 
```



```shell
[    3.634444] mmc0: SDHCI controller on fe2e0000.mmc [fe2e0000.mmc] using ADMA
[    3.644160] NET: Registered PF_INET6 protocol family
[    3.645808] Segment Routing with IPv6
[    3.646150] In-situ OAM (IOAM) with IPv6
[    3.646529] NET: Registered PF_PACKET protocol family
[    3.646995] bridge: filtering via arp/ip/ip6tables is no longer available by default. Update your scripts to load br_netfilter if you need this.
[    3.648543] 8021q: 802.1Q VLAN Support v1.8
[    3.668538] sdhci-dwcmshc fe2e0000.mmc: Can't reduce the clock below 52MHz in HS200/HS400 mode
[    3.669772] mmc0: new HS400 Enhanced strobe MMC card at address 0001
[    3.671326] mmcblk0: mmc0:0001 Y29128 117 GiB
[    3.673645]  mmcblk0: p1 p2 p3
[    3.674618] mmcblk0boot0: mmc0:0001 Y29128 4.00 MiB
[    3.676232] mmcblk0boot1: mmc0:0001 Y29128 4.00 MiB
[    3.677553] mmcblk0rpmb: mmc0:0001 Y29128 4.00 MiB, chardev (243:0)
```



```shell
U-Boot next-dev-ga7159c6b5c-250929-dirty #root (Aug 08 2026 - 11:15:44 +0800)

Model: BYD G98 Compiled By yifengyou
MPIDR: 0x0
PreSerial: 2, raw, 0xfeb50000
DRAM:  16 GiB
Sysmem: init
Relocation Offset: ed8e6000
Relocation fdt: eb7f67d0 - eb7fecb8, kfdt: 0037c000 - 10037bfff
CR: M/C/I
Using default environment

optee api revision: 2.0
mmc@fe2e0000: 0   <- emmc
Bootdev(atags): mmc 0
MMC0: HS200, 200Mhz
PartType: EFI
TEEC: Waring: Could not find security partition
DM: v2
No misc partition
boot mode: None
FIT: No boot partition
```






## SPI与EMMC复用问题

![](./images/49696800188000.png)


RK3588 的 **eMMC 控制器**和 **FSPI（Flexible Serial Peripheral Interface）控制器**在 **FSPI_M0** 这组复用引脚上是**物理共享**的，即同一组 GPIO 引脚通过 IOMUX 寄存器只能二选一：

| 复用组 | 功能 A | 功能 B | 能否同时使用 |
|:---|:---|:---|:---|
| **FSPI_M0** | eMMC（CLK/CMD/DATA[0:7]/RSTn） | FSPI SPI NOR Flash（CLK/CS/D0~D3） | ❌ 互斥 |
| **FSPI_M1** | — | FSPI SPI NOR Flash（CLK/CS/D0~D3） | ✅ 独立引脚 |

> 这意味着：**eMMC 和 FSPI_M0 的 SPI NOR Flash 不能同时使用**，它们争夺的是同一组物理焊盘。

---

方案 1：使用 FSPI_M1 引出 SPI NOR Flash（推荐）

如果你的设计**同时需要 eMMC + SPI NOR Flash**，将 SPI NOR Flash 连接到 **FSPI_M1** 对应的另一组物理引脚上，彻底避开 eMMC 占用的 FSPI_M0 引脚。

**硬件改动：**
- SPI NOR Flash（如 W25Q128）的 CLK / CS / D0~D3 走线改接到 FSPI_M1 对应的 GPIO 引脚
- 参考 RK3588 TRM 中 FSPI_M1 的引脚定义（通常位于 GPIO2_C / GPIO2_D 区域，具体以你的芯片版本数据手册为准）

**设备树配置示例：**
```dts
/* 使用 FSPI_M1 引脚组 */
&fspi {
    status = "okay";
    pinctrl-names = "default";
    pinctrl-0 = <&fspim1_pins>;   /* 关键：选择 M1 而非 M0 */

    flash@0 {
        compatible = "jedec,spi-nor";
        reg = <0>;
        spi-max-frequency = <100000000>;
    };
};

/* eMMC 正常使用，不受影响 */
&emmc {
    status = "okay";
    /* ... 标准 eMMC 配置 ... */
};
```

2：二选一设计（只用 eMMC 或只用 SPI NOR）

如果产品只需要一种启动/存储介质：

- **只用 eMMC**：引导代码（Loader + U-Boot + Kernel）全部放在 eMMC 中，FSPI_M0 引脚全部留给 eMMC，不贴 SPI NOR Flash。
- **只用 SPI NOR Flash**：不贴 eMMC，FSPI_M0 引脚用于 SPI NOR Flash 启动。



---

启动引导（Boot）注意事项

| 启动介质 | BootROM 行为 | 引导代码位置 |
|:---|:---|:---|
| eMMC | BootROM 从 eMMC 的 User/Boot 分区加载 IDB → U-Boot → Kernel | eMMC 内部 |
| SPI NOR (FSPI) | BootROM 从 SPI NOR Flash 偏移 0 处加载 | SPI NOR Flash 内部 |

**使用 eMMC 启动时：**
- `BOOT_SEL` 引脚配置为 eMMC 启动模式
- 引导代码（idbloader.img / uboot.img / boot.img）烧写到 eMMC
- 无需 SPI NOR Flash 参与启动

**使用 SPI NOR 启动时：**
- `BOOT_SEL` 引脚配置为 SPI 启动模式
- 引导代码烧写到 SPI NOR Flash
- 此时 eMMC 不可用（引脚被 FSPI 占用）

---

> **核心原则：** eMMC 和 FSPI_M0 是硬件级互斥，无法通过软件切换同时使用。要两者共存，**唯一出路是让 SPI NOR Flash 走 FSPI_M1 引脚组**。设计 PCB 时务必提前规划好 FSPI_M1 的走线。

## 分时复用 + 限制 SPI 为单线/双线模式

RK3588 eMMC接口和FSPI Flash（一个复用口FSPI_M0）接口复用，在eMMC接口设计时，eMMC信号接法请按参考原理图，包含各路电源去耦电容。

使用eMMC时，引导代码放置在eMMC里。

**在 U-Boot 中通过时序控制，让 eMMC 和 SPI NOR 分时使用冲突引脚，并将 SPI NOR 限制在不使用冲突引脚的工作模式下。**


```shell
上电 → BootROM 从介质A加载 U-Boot → DDR 中运行
                                         ↓
                              此时介质A"使命完成"
                                         ↓
                         软件切换 IOMUX → 引脚改接介质B
                                         ↓
                              访问介质B（读配置/固件等）
                                         ↓
                         软件切换 IOMUX → 引脚切回介质A
```











### 方案架构

```
时间线：
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
阶段1: SPL早期     阶段2: eMMC初始化    阶段3: SPI NOR访问
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
GPIO2_D0/D1 →     GPIO2_D0/D1 →       GPIO2_D0/D1 →
  未配置/SPI功能     eMMC功能(func=1)     临时切回SPI或保持eMMC
  
SFC控制器:         SFC控制器:           SFC控制器:
  可能短暂probe      disabled/挂起        活跃(1-line/2-line)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
```

### 具体实现方法（三种可能路径）


## 四、实现路径详解

### 路径 A：SPI NOR 强制单线模式（最可能的方案）⭐

这是最优雅且最常见的做法：

#### 原理
SPI NOR Flash 支持 1-1-1（标准 SPI）、1-1-2（双线读）、1-1-4（四线读）等模式。**单线模式（1-1-1）只使用 CLK + CS + MOSI(D0) + MISO(D1) 四根线**，对应 GPIO2_C4~C7，与 eMMC 零冲突。

#### 设备树修改

```dts
spi@fe2b0000 {
    compatible = "rockchip,sfc";
    reg = <0x00 0xfe2b0000 0x00 0x4000>;
    status = "okay";                          // ← 改为启用
    u-boot,dm-spl;
    #address-cells = <0x01>;
    #size-cells = <0x00>;
    pinctrl-names = "default";
    pinctrl-0 = <&sfc_clk &sfc_cs0 &sfc_d0 &sfc_d1>;  // ← 只配4根线

    flash@0 {
        compatible = "jedec,spi-nor";
        label = "sfc_nor";
        reg = <0x00>;
        spi-tx-bus-width = <1>;               // ← 强制单线写
        spi-rx-bus-width = <1>;               // ← 强制单线读（关键！不用D2/D3）
        spi-max-frequency = <80000000>;       // 适当降频
    };
};
```

#### 新增 pinctrl（只用不冲突的引脚）

```dts
sfc {
    sfc_clk {
        rockchip,pins = <0x02 0x14 0x01 &pcfg_pull_none>;   // GPIO2_C4
    };
    sfc_cs0 {
        rockchip,pins = <0x02 0x15 0x01 &pcfg_pull_up>;     // GPIO2_C5
    };
    sfc_d0 {
        rockchip,pins = <0x02 0x16 0x01 &pcfg_pull_up>;     // GPIO2_C6
    };
    sfc_d1 {
        rockchip,pins = <0x02 0x17 0x01 &pcfg_pull_up>;     // GPIO2_C7
    };
    // 注意：故意不配置 GPIO2_D0/D1 (SFC_D2/D3)
};
```

#### 为什么这能工作？

```
eMMC 8-bit 占用:  GPIO2_D0(D0) ~ GPIO2_D7(D7) + GPIO2_B0~B3(CLK/CMD/RST/DS)
SPI 1-line 占用:  GPIO2_C4(CLK) ~ GPIO2_C7(D1)

两组引脚集合完全不相交 → 可以同时存在！
```

SPI NOR 在单线模式下速度约 **10 MB/s**（80MHz × 1bit / 8），对于 32MB 的 NOR Flash 来说，读取整个芯片约 3.2 秒，在 U-Boot 环境下完全可以接受。

---

### 路径 B：运行时动态切换 IOMUX（更复杂但更灵活）

如果需要在某些时刻使用四线模式加速 SPI 读取：

#### 核心代码逻辑（U-Boot driver 层修改）

```c
// drivers/spi/rockchip_sfc.c 或 board_init 中

static int rockchip_sfc_probe(struct udevice *dev)
{
    // 1. 先将冲突引脚(GPIO2_D0/D1)从 eMMC 功能切换到 SFC 功能
    rk3588_iomux_set(GPIO2_D0, SFC_D2_FUNC);  // func switch
    rk3588_iomux_set(GPIO2_D1, SFC_D3_FUNC);
    
    // 2. 初始化 SFC 控制器，执行 JEDEC ID 读取等操作
    sfc_hw_init(priv);
    spi_nor_scan(nor);
    
    // 3. 操作完成后，将引脚切回 eMMC 功能
    rk3588_iomux_set(GPIO2_D0, EMMC_D0_FUNC);
    rk3588_iomux_set(GPIO2_D1, EMMC_D1_FUNC);
    
    return 0;
}

// 每次 SPI 读写操作前后都需要切换
static int rockchip_sfc_transfer(struct udevice *dev, ...)
{
    // 切入 SPI 模式
    iomux_switch_to_sfc();
    
    // 执行 SPI 传输
    do_transfer(...);
    
    // 切回 eMMC 模式
    iomux_switch_to_emmc();
    
    return 0;
}
```

#### IOMUX 寄存器操作

RK3588 的引脚复用通过 GRF（General Register File）控制：

```c
// GPIO2_D0 的 IOMUX 寄存器在 IOC_GRF 或 PMU2_IOC_GRF 中
// bit[3:0] 控制功能选择:
//   0b00 = GPIO
//   0b01 = EMMC_D0 (func1)  
//   0b10 = SFC_D2  (func2)  ← 部分封装可能是其他值

#define GRF_GPIO2D_IOMUX  0x0148  // 示例偏移

void iomux_switch_to_sfc(void) {
    regmap_write(grf, GRF_GPIO2D_IOMUX,
        (0x3 << (0*4+16)) | (0x2 << (0*4)));  // D0 → SFC_D2
    regmap_write(grf, GRF_GPIO2D_IOMUX,
        (0x3 << (2*4+16)) | (0x2 << (2*4)));  // D1 → SFC_D3
}

void iomux_switch_to_emmc(void) {
    regmap_write(grf, GRF_GPIO2D_IOMUX,
        (0x3 << (0*4+16)) | (0x1 << (0*4)));  // D0 → EMMC_D0
    regmap_write(grf, GRF_GPIO2D_IOMUX,
        (0x3 << (2*4+16)) | (0x1 << (2*4)));  // D1 → EMMC_D1
}
```

---

### 路径 C：调整 Probe 顺序 + 延迟初始化

```c
// board/rk3588/bdy_g98.c

int board_late_init(void)
{
    // 此时 eMMC 已经完成初始化并处于 idle 状态
    // eMMC 在 idle 时不会驱动数据线，引脚处于高阻
    
    // 临时借用 GPIO2_D0/D1 给 SFC 做 JEDEC ID 读取
    // (NOR Flash 的 RDID 命令只需要单线即可)
    
    enable_sfc_with_1line_mode();
    
    return 0;
}
```

---

## 五、最可能的实际方案判定

| 线索 | 分析 |
|------|------|
| `Prod: sfc_nor` | 设备树中 `label = "sfc_nor"` 被保留，说明 flash@1 节点被启用 |
| `Capacity: 32.0 MB` | 256Mbit NOR Flash，典型容量 |
| `Bus Width: 8-bit` (eMMC) | eMMC 仍为 8-bit，**没有降位宽** |
| `Timing Interface: HS200` | eMMC 工作在 HS200 而非 HS400（可能是稳定性考虑） |
| 两者同时可用 | 必然是分时或分引脚方案 |

**最大概率是路径 A（SPI 单线模式）**，原因：
1. 实现最简单，只需改设备树，不需要改 C 代码
2. 32MB NOR Flash 在单线下性能足够
3. eMMC 8-bit 不受任何影响
4. 不需要运行时的 IOMUX 切换，无竞态风险

---

## 六、完整修改方案（推荐）

### 设备树改动汇总

```dts
/dts-v1/;

/ {
    // ... 其他不变 ...

    aliases {
        // 添加 spi5 alias（如果原来没有）
        spi5 = "/spi@fe2b0000";
        // mmc0/mmc1 保持不变
    };

    spi@fe2b0000 {
        compatible = "rockchip,sfc";
        reg = <0x00 0xfe2b0000 0x00 0x4000>;
        interrupts = <0x00 0xce 0x04>;
        clocks = <&cru CLK_SFC>, <&cru PCLK_SFC>;
        #address-cells = <0x01>;
        #size-cells = <0x00>;
        status = "okay";                        // ★ 改为 okay
        u-boot,dm-spl;
        pinctrl-names = "default";
        pinctrl-0 = <&sfc_clk &sfc_cs0 &sfc_d0 &sfc_d1>;  // ★ 只配4根

        flash@0 {
            u-boot,dm-spl;
            compatible = "jedec,spi-nor";
            label = "sfc_nor";
            reg = <0x00>;
            spi-tx-bus-width = <1>;             // ★ 单线写
            spi-rx-bus-width = <1>;             // ★ 单线读（避免D2/D3冲突）
            spi-max-frequency = <80000000>;
        };
        // 删除 flash@0 (spi-nand)，只保留 nor
    };

    pinctrl {
        // ... emmc/sdmmc 配置不变 ...

        sfc {                                    // ★ 新增
            sfc_clk {
                rockchip,pins = <0x02 0x14 0x01 0x10000099>;
                u-boot,dm-spl;
            };
            sfc_cs0 {
                rockchip,pins = <0x02 0x15 0x01 0x1000009b>;
                u-boot,dm-spl;
            };
            sfc_d0 {
                rockchip,pins = <0x02 0x16 0x01 0x1000009b>;
                u-boot,dm-spl;
            };
            sfc_d1 {
                rockchip,pins = <0x02 0x17 0x01 0x1000009b>;
                u-boot,dm-spl;
            };
        };
    };

    chosen {
        u-boot,spl-boot-order = 
            "/mmc@fe2c0000",
            "/mmc@fe2e0000",
            "/spi@fe2b0000/flash@0";    // 现在可达了
    };
};
```

### 引脚分配最终视图

```
GPIO2 Bank 引脚分配（共存方案）:

GPIO2_B0 ─── EMMC_CLK     ┐
GPIO2_B1 ─── EMMC_CMD     │
GPIO2_B2 ─── EMMC_DS      ├── eMMC 专用（无冲突）
GPIO2_B3 ─── EMMC_RSTN    │
GPIO2_C4 ─── SFC_CLK      ┐
GPIO2_C5 ─── SFC_CS0      │
GPIO2_C6 ─── SFC_D0(MOSI) ├── SPI 专用（无冲突）
GPIO2_C7 ─── SFC_D1(MISO) ┘
GPIO2_D0 ─── EMMC_D0      ┐
GPIO2_D1 ─── EMMC_D1      │
GPIO2_D2 ─── EMMC_D2      │
GPIO2_D3 ─── EMMC_D3      ├── eMMC 独占（SFC_D2/D3 不使用）
GPIO2_D4 ─── EMMC_D4      │
GPIO2_D5 ─── EMMC_D5      │
GPIO2_D6 ─── EMMC_D6      │
GPIO2_D7 ─── EMMC_D7      ┘

✅ 零冲突！两者完美共存
```

---

## 七、性能影响评估

| 指标 | 原始方案（SPI disabled） | 共存方案（SPI 1-line） |
|------|------------------------|---------------------|
| eMMC 带宽 | 8-bit HS200/HS400 | 8-bit HS200（不变） |
| SPI NOR 读速度 | N/A | ~10 MB/s (80MHz×1bit) |
| SPI NOR 写速度 | N/A | ~10 MB/s |
| 32MB 全片读取 | N/A | ~3.2 秒 |
| U-Boot 启动增加耗时 | 0 | < 100ms（仅 probe + RDID） |
| 环境变量存储 | 仅 eMMC | 可选 SPI NOR（更可靠） |

**结论**：对过将 SPI NOR 限制为 **单线模式（1-1-1）**，仅使用 GPIO2_C4~C7 四根不与 eMMC 冲突的引脚，实现了两者在 U-Boot 中的共存。这是 Rockchip 平台处理此类引脚复用的标准工程实践——**用 SPI 带宽换取硬件共存能力**，在 U-Boot 场景下完全可接受。
