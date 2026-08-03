# SPI Nor Flash

![](images881892324300.png)

- 接口选择：RK3588 支持多个 SPI 控制器（如 SPI0-SPI4）。通常 SPI0 被保留用于系统启动（FSPI），建议优先将 NOR Flash 连接到 FSPI/SPI0 以确保原生 BootROM 支持。
- 电压匹配：RK3588 的 IO 电平通常为 1.8V 或 3.3V（取决于电源域设计）。务必确认 NOR Flash 的 VCC 和 IO 电平与 SoC 对应 Bank 的电平一致，否则可能损坏芯片或导致通信失败。
- 容量限制：虽然 SPI NOR 理论上支持大容量，但实际在 RK3588 上常用容量为 16MB ~ 256MB。超过 128MB 可能需要启用 4-byte 地址模式，需确保 Flash 型号在 Rockchip 的兼容列表中。
- 四线模式 (Quad SPI)：为了提升读取速度（尤其是 XIP 执行代码时），硬件设计上必须连接 WP# 和 HOLD#/RESET# 引脚以支持 Quad Read

## 区别于emmc

在 RK3588 平台上，SPI NOR Flash 和 eMMC 是两种定位截然不同的存储介质。它们既可以独立使用，也可以组合使用。以下是从架构、性能、成本和应用场景四个维度的深度对比：

### 1. 核心区别与联系

| 维度 | SPI NOR Flash | eMMC |
| :--- | :--- | :--- |
| **存储类型** | NOR 型闪存（字节寻址） | NAND 型闪存 + FTL 控制器（块寻址） |
| **接口协议** | SPI / QSPI / OSPI (FSPI) | SD/eMMC 并行总线 (HS400/HS200) |
| **片上执行 (XIP)** | ✅ **原生支持**，CPU 可直接映射运行代码 | ❌ 不支持，必须先拷贝到 RAM |
| **随机读取延迟** | 极低 (~μs 级) | 较高 (~ms 级，受 FTL 映射影响) |
| **顺序写入速度** | 慢 (通常 < 5 MB/s) | 快 (HS400 可达 150-300 MB/s) |
| **擦写寿命** | 较高 (约 10万次) | 较低 (TLC/QLC 约 1K-3K P/E) |
| **典型容量** | 16MB ~ 256MB (主流) | 8GB ~ 256GB+ |
| **单位成本** | 高 ($/GB 贵) | 低 ($/GB 便宜) |
| **启动角色** | BootROM 直接加载 SPL/U-Boot | 存储完整系统镜像 + 用户数据 |

### 🔗 两者的联系（协同工作模式）

在 RK3588 的实际工程中，最常见的方案是 **"NOR + eMMC" 混合启动**：

- **SPI NOR**：仅存放 `idbloader.img`、`u-boot.itb`、`trust.img` 等引导固件（通常占用 2-8MB）。利用 XIP 特性实现**快速冷启动**。
- **eMMC**：存放 Kernel、RootFS、APP 和用户数据。U-Boot 从 NOR 启动后，再从 eMMC 加载内核和根文件系统。

> 💡 **为什么这样搭配？** RK3588 的 BootROM 从 SPI NOR 加载 SPL 的速度远快于 eMMC 初始化+读取。这种组合兼顾了**秒级启动**和**大容量低成本**。

### 启动速度对比

| 阶段 | SPI NOR (QSPI 100MHz) | eMMC (HS400) | 差异原因 |
| :--- | :--- | :--- | :--- |
| BootROM → SPL | ~50ms | ~200-400ms | NOR 无需初始化控制器复杂时序 |
| SPL → U-Boot | ~80ms | ~150ms | XIP 直接执行 vs 拷贝到 RAM |
| U-Boot → Kernel Load | ~200ms | ~300-500ms | NOR 随机读快，但带宽受限 |
| **总冷启动到 U-Boot** | **~300-500ms** | **~800-1200ms** | NOR 优势明显 |

### 吞吐量对比

| 指标 | SPI NOR (Quad SPI) | SPI NOR (OSPI) | eMMC 5.1 HS400 |
| :--- | :--- | :--- | :--- |
| 顺序读取 | 40-50 MB/s | 100-200 MB/s | 250-300 MB/s |
| 顺序写入 | 1-5 MB/s | 10-30 MB/s | 100-200 MB/s |
| 4K 随机读 IOPS | 极高（无FTL开销） | 高 | 低（FTL 映射表查找） |
| 4K 随机写 IOPS | 极低（需整扇区擦除） | 低 | 中等（有缓存/WL） |

> ⚠️ **关键瓶颈**：SPI NOR 的**写入速度极慢**。如果你的系统需要频繁写入日志或更新 OTA 包到 NOR Flash，体验会非常差。所有可写数据应放在 eMMC 上。

1. **FSPI 控制器限制**：RK3588 的 FSPI 对 NOR Flash 的 SFDP 兼容性有要求。非兼容型号可能导致 XIP 失败，只能降级为普通 SPI 模式读取（无法直接执行代码）。**务必查阅 Rockchip
   官方《SPI NOR Flash Support List》**。
2. **eMMC 启动回退**：RK3588 BootROM 支持启动失败自动回退。可以配置为 "NOR 优先 → 失败则尝试 eMMC → 再失败进 Maskrom"，增强产品鲁棒性。
3. **OSPI 选项**：如果确实需要全部固件放在 NOR 上且追求速度，可选用 **OSPI NOR**（如 Macronix MX25UM51345G），带宽接近 eMMC HS200，但单价显著高于 QSPI NOR。
4. **分区对齐**：NOR Flash 擦除单元通常为 4KB/64KB，eMMC 为 512B/4KB。混合使用时注意 `parameter.txt` 中各分区偏移量必须同时满足两者的对齐要求。

如果你能提供具体的应用场景（如产品类型、启动时间要求、系统大小），我可以给出更精确的配置建议。

## spi镜像分区

组成部分：idbloader + uboot + gpt分区表

```shell
# binwalk G98_SPI_NVME.img 

DECIMAL       HEXADECIMAL     DESCRIPTION
--------------------------------------------------------------------------------
255720        0x3E6E8         CRC32 polynomial table, little endian
330392        0x50A98         Flattened device tree, size: 5446 bytes, version: 17
524288        0x80000         Flattened device tree, size: 1975 bytes, version: 17
1320588       0x14268C        CRC32 polynomial table, little endian
1378792       0x1509E8        Android bootimg, kernel size: 1919249152 bytes, kernel addr: 0x5F6C656E, ramdisk size: 1919181921 bytes, ramdisk addr: 0x5700635F, product name: ""
1895936       0x1CEE00        Flattened device tree, size: 17558 bytes, version: 17
```

![](images3550000625400.png)

## uboot中的spi

```shell
=> printenv devnum 
devnum=2
=> printenv devtype
devtype=mtd
=> dm uclass
uclass 0: root
  [ + ] root_driver @ ebae9240, seq 0, (req -1) *

uclass 10: simple_bus
  [ + ] adc-keys @ ebaee500, seq 0, (req -1) *

uclass 11: adc
  [ + ] saradc@fec10000 @ ebaec1b0, seq 0, (req -1) *

uclass 12: ahci
  [   ] sata@fe210000 @ ebaeb000 *

uclass 13: blk
  [   ] ramdisk-ro.blk @ ebae9550 | ramdisk0 *
  [   ] flash@0.blk @ ebaeb480 | mtd1 *
  [ + ] flash@1.blk @ ebaeb710, seq 0, (req -1) | mtd2 *
  [   ] mmc@fe2c0000.blk @ ebaebab0 | mmc1 *
  [   ] mmc@fe2e0000.blk @ ebaebe10 | mmc0 *
=> dm tree
 ebaeb200    spi        [ + ]   rockchip_sfc               |-- spi@fe2b0000 *
 ebaeb390    mtd        [   ]   spi_nand                   |   |-- flash@0 *
 ebaeb480    blk        [   ]   mtd_blk                    |   |   `-- flash@0.blk *
 ebaeb620    spi_flash  [ + ]   spi_flash_std              |   `-- flash@1 *
 ebaeb710    blk        [ + ]   mtd_blk                    |       `-- flash@1.blk *


```

uclass中，2对应的就是spi

```shell
=> rockusb 0 mtd 2
RKUSB: LUN 0, dev 2, hwpart 0, sector 0x0, count 0x10000
-usb device is high-speed
```

此时可见dev是2，扇区总数就是32MB







