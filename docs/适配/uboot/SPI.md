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



## saveenv 到 spi 引导crash问题

```shell
=> run bootcmd_scsi
SCSI: scsi scan
scanning bus for devices...
Target spinup took 0 ms.
AHCI 0001.0300 32 slots 1 ports 6 Gbps 0x1 impl SATA mode
flags: ncq stag pm led clo only pmp fbss pio slum part ccc apst 
  Device 0: (0:0) Vendor: ATA Prod.: ADATA SP920SS Rev: 1.08
            Type: Hard Disk
            Capacity: 122104.3 MB = 119.2 GB (250069679 x 512)

Device 0: (0:0) Vendor: ATA Prod.: ADATA SP920SS Rev: 1.08
            Type: Hard Disk
            Capacity: 122104.3 MB = 119.2 GB (250069679 x 512)
... is now current device
Try scsi 0:1 /boot.scr
Found boot.scr on scsi 0:1
4222 bytes read in 18 ms (228.5 KiB/s)
## Executing script at 00500000
Booting BDY-G98 fnOS universal media (v19 fdtfile, script v5, initramfs v3)
Selected fnOS media: scsi 0:1
127 bytes read in 26 ms (3.9 KiB/s)
32926208 bytes read in 32914 ms (976.6 KiB/s)
1799671 bytes read in 64 ms (26.8 MiB/s)
133135 bytes read in 665 ms (195.3 KiB/s)
Starting fnOS from scsi 0, root PARTUUID=56e010cc-c18b-2e4f-9bd2-6429b2b82310
Fdt Ramdisk skip relocation
"Synchronous Abort" handler, esr 0x96000010

* Reason:        Exception from a Data abort, from current exception level
* PC         =   000000000028bf10
* LR         =   000000000028bd48
* SP         =   00000000eb7f4750
* ESR_EL2    =   0000000096000010
* Reloc Off  =   00000000ed8e5000

x0 : 0000000000000000 x1 : 0000000000000000
x2 : 0000000000000200 x3 : 00000000eb7f49c0
x4 : 00000000edb70d1c x5 : 00000000edc27588
x6 : 0000000000000041 x7 : 00000000edc26e68
x8 : 00000000ebb0e8c0 x9 : 0000000000000008
x10: 00000000ebb0df30 x11: 00000000ebaf6c40
x12: 0000000000000000 x13: 0000000000000200
x14: 0000000000000006 x15: 00000000ffffffff
x16: 00000000edc241e3 x17: 00000000edc241e3
x18: 00000000eb7ffcd8 x19: 00000000ebaf5c80
x20: 00000000ebaf5790 x21: 0000000000000000
x22: 00000000edc60908 x23: 0000000000000001
x24: 00000000ebaf1a80 x25: 0000000000000001
x26: 00000000eb7f49c0 x27: 000000000000000c
x28: 00000000ebb0de40 x29: 00000000eb7f4930


Call trace:
  PC:	[< 0028bf10 >]
  LR:	[< 0028bd48 >]

Stack:
	[< 0028bf10 >]
	[< 00237168 >]
	[< 0023779c >]
	[< 00235c10 >]
	[< 0022d5e8 >]
	[< 00202e4c >]
	[< 00204ab4 >]
	[< 0021d720 >]
	[< 0020ac8c >]
	[< 002343f0 >]
	[< 0021bf0c >]
	[< 0021c0ac >]
	[< 0021b7f8 >]
	[< 0021bcc8 >]
	[< 0021bb84 >]
	[< 0021bb84 >]
	[< 0021bb84 >]
	[< 0021bb84 >]
	[< 0021bb84 >]
	[< 0021c0ac >]
	[< 0021b7b0 >]
	[< 002338f4 >]
	[< 00209e08 >]
	[< 00209f10 >]
	[< 002343f0 >]
	[< 0021bf0c >]
	[< 0021c0ac >]
	[< 0021b7f8 >]
	[< 0021bcc8 >]
	[< 0021bb84 >]
	[< 0021bb84 >]
	[< 0021bb84 >]
	[< 0021c0ac >]
	[< 0021b7b0 >]
	[< 002339a4 >]
	[< 002343f0 >]
	[< 0021bf0c >]
	[< 0021c0ac >]
	[< 0021b7b0 >]
	[< 002339a4 >]
	[< 002343f0 >]
	[< 0021bf0c >]
	[< 0021bb84 >]
	[< 0021c0ac >]
	[< 0021b7b0 >]
	[< 002339a4 >]
	[< 002343f0 >]
	[< 0021bf0c >]
	[< 0021c0ac >]
	[< 0021c5f0 >]
	[< 00233a9c >]
	[< 0021a210 >]
	[< 0021cdbc >]
	[< 002c2b8c >]
	[< 0021d138 >]
	[< 00201dd0 >]

Copy info from "Call trace..." to a file(eg. dump.txt), and run
command in your U-Boot project: ./scripts/stacktrace.sh dump.txt 

Resetting CPU ...

### ERROR ### Please RESET the board ###
```

解析堆栈后如下：

```shell
# ./scripts/stacktrace.sh dump.txt 

dos2unix: converting file dump.txt to Unix format...

SYMBOL File: ./u-boot.sym

Call trace:
 PC:	[< 0028bf10 >]  nanddev_isbad+0x4/0xb4      
 LR:	[< 0028bd48 >]  add_mtd_partitions+0x3c4/0x588      

Stack:
       [< 0028bf10 >]  nanddev_isbad+0x4/0xb4
       [< 00237168 >]  write_gpt_table+0x354/0x510
       [< 0023779c >]  gpt_fill_header+0xc4/0x2a4
       [< 00235c10 >]  is_gpt_valid+0x100/0x2b0
       [< 0022d5e8 >]  android_bootloader_message_load+0x28/0x88
       [< 00202e4c >]  get_bcb_recovery_msg+0x18/0x30
       [< 00204ab4 >]  bootm_board_start+0x74/0xdc
       [< 0021d720 >]  do_bootm_states+0x8ec/0x970
       [< 0020ac8c >]  dtimg_get_fdt+0xc8/0x12c
       [< 002343f0 >]  write_id_attestation+0x28/0x40
       [< 0021bf0c >]  bootdelay_process+0x10/0xc8
       [< 0021c0ac >]  autoboot_command+0xe8/0x110
       [< 0021b7f8 >]  parse_stream_outer+0x14/0x67c
       [< 0021bcc8 >]  parse_stream_outer+0x4e4/0x67c
       [< 0021bb84 >]  parse_stream_outer+0x3a0/0x67c
       [< 0021bb84 >]  parse_stream_outer+0x3a0/0x67c
       [< 0021bb84 >]  parse_stream_outer+0x3a0/0x67c
       [< 0021bb84 >]  parse_stream_outer+0x3a0/0x67c
       [< 0021bb84 >]  parse_stream_outer+0x3a0/0x67c
       [< 0021c0ac >]  autoboot_command+0xe8/0x110
       [< 0021b7b0 >]  run_list_real+0x6f8/0x72c
       [< 002338f4 >]  write_to_keymaster+0x154/0x170
       [< 00209e08 >]  source+0x17c/0x1c8
       [< 00209f10 >]  do_bdinfo+0x2c/0x134
       [< 002343f0 >]  write_id_attestation+0x28/0x40
       [< 0021bf0c >]  bootdelay_process+0x10/0xc8
       [< 0021c0ac >]  autoboot_command+0xe8/0x110
       [< 0021b7f8 >]  parse_stream_outer+0x14/0x67c
       [< 0021bcc8 >]  parse_stream_outer+0x4e4/0x67c
       [< 0021bb84 >]  parse_stream_outer+0x3a0/0x67c
       [< 0021bb84 >]  parse_stream_outer+0x3a0/0x67c
       [< 0021bb84 >]  parse_stream_outer+0x3a0/0x67c
       [< 0021c0ac >]  autoboot_command+0xe8/0x110
       [< 0021b7b0 >]  run_list_real+0x6f8/0x72c
       [< 002339a4 >]  write_key+0x34/0xb0
       [< 002343f0 >]  write_id_attestation+0x28/0x40
       [< 0021bf0c >]  bootdelay_process+0x10/0xc8
       [< 0021c0ac >]  autoboot_command+0xe8/0x110
       [< 0021b7b0 >]  run_list_real+0x6f8/0x72c
       [< 002339a4 >]  write_key+0x34/0xb0
       [< 002343f0 >]  write_id_attestation+0x28/0x40
       [< 0021bf0c >]  bootdelay_process+0x10/0xc8
       [< 0021bb84 >]  parse_stream_outer+0x3a0/0x67c
       [< 0021c0ac >]  autoboot_command+0xe8/0x110
       [< 0021b7b0 >]  run_list_real+0x6f8/0x72c
       [< 002339a4 >]  write_key+0x34/0xb0
       [< 002343f0 >]  write_id_attestation+0x28/0x40
       [< 0021bf0c >]  bootdelay_process+0x10/0xc8
       [< 0021c0ac >]  autoboot_command+0xe8/0x110
       [< 0021c5f0 >]  board_init_f+0x20/0x2c
       [< 00233a9c >]  copy_blob_from_buf+0x44/0x84
       [< 0021a210 >]  free_pipe_list+0x74/0xf4
       [< 0021cdbc >]  bootm_decomp_image+0x218/0x244
       [< 002c2b8c >]  bidram_dump+0x60/0x1c8
       [< 0021d138 >]  do_bootm_states+0x304/0x970
       [< 00201dd0 >]  relocation_return+0x4/0x0

PC Surrounding Instructions:
  28bf04:	8b0002b5 	add	x21, x21, x0
  28bf08:	17fffeaf 	b	28b9c4 <add_mtd_partitions+0x40>

000000000028bf0c <nanddev_isbad>:
  28bf0c:	a9bd7bfd 	stp	x29, x30, [sp,#-48]!
  28bf10:	910003fd 	mov	x29, sp
  28bf14:	f9401c02 	ldr	x2, [x0,#56]
  28bf18:	a90153f3 	stp	x19, x20, [sp,#16]
  28bf1c:	aa0003f3 	mov	x19, x0
  28bf20:	a9025bf5 	stp	x21, x22, [sp,#32]
  28bf24:	b4000422 	cbz	x2, 28bfa8 <nanddev_isbad+0x9c>


```

```shell
# git diff
diff --git a/configs/rk3588_defconfig b/configs/rk3588_defconfig
index a1f39f8f63..d0b7bfbd9f 100644
--- a/configs/rk3588_defconfig
+++ b/configs/rk3588_defconfig
@@ -265,3 +265,6 @@ CONFIG_CMD_IMI=y
 CONFIG_CMD_SETEXPR=y
 CONFIG_IMAGE_FORMAT_LEGACY=y
 # CONFIG_EMBED_KERNEL_DTB is not set
+CONFIG_ENV_IS_IN_SPI_FLASH=y
+CONFIG_ENV_OFFSET=0x1300000
+CONFIG_ENV_SIZE=0x1000
diff --git a/env/sf.c b/env/sf.c
index e51b1ae189..e9f8521342 100644
--- a/env/sf.c
+++ b/env/sf.c
@@ -251,6 +251,8 @@ out:
 }
 #else
 #ifdef CMD_SAVEENV
+
+//#define CONFIG_ENV_SECT_SIZE 0x1000
 static int env_sf_save(void)
 {
        u32     saved_size, saved_offset, sector;```
```


spi的设备树配置如下：
```shell
&sfc {
	status = "okay";
	u-boot,dm-pre-reloc;
	flash@0 {
		status = "disabled";
	};

	flash@1 {
		u-boot,dm-spl;
		compatible = "jedec,spi-nor";
		label = "sfc_nor";
		reg = <0x00>;
		spi-tx-bus-width = <0x01>;
		spi-rx-bus-width = <0x04>;
		spi-max-frequency = <0x5f5e100>;
		spi-4byte-addressing;
		broken-flash-reset;
		u-boot,dm-pre-reloc;
	};
};```

```shell
=> sf probe
JEDEC id bytes: ef, 60, 19
SF: Detected sfc_nor with page size 256 Bytes, erase size 4 KiB, total 32 MiB
=> 
```


将启动参数的bootargs去掉就解决了。

```shell
=> printenv bootargs
bootargs=storagemedia=mtd androidboot.storagemedia=mtd androidboot.mode=normal 
=> 
=> setenv bootargs
=> run bootcmd
```













