# uboot v2026适配


## 参考

* <https://docs.u-boot-project.org/en/stable/board/theobroma-systems/jaguar_rk3588.html>

## uboot2026默认引导顺序

```c
=> printenv
arch=arm
baudrate=1500000
boot_targets=mmc1 mmc0 nvme scsi usb pxe dhcp spi
bootcmd=bootflow scan -lb
bootdelay=2
cpu=armv8
cpuid#=415a4338470000000000000000040c19
eth1addr=42:d4:0b:b9:5a:15
ethaddr=42:d4:0b:b9:5a:14
fdt_addr_r=0x12000000
fdtcontroladdr=edbd0440
fdtfile=rockchip/rk3588-bdy-g98.dtb
fdtoverlay_addr_r=0x12100000
kernel_addr_r=0x02000000
kernel_comp_addr_r=0x0a000000
kernel_comp_size=0x8000000
loadaddr=0xc00800
pxefile_addr_r=0x00e00000
ramdisk_addr_r=0x12180000
script_offset_f=0xffe000
script_size_f=0x2000
scriptaddr=0x00c00000
serial#=bd7390265f6d69ff
soc=rk3588
stderr=serial@feb50000
stdin=serial@feb50000
stdout=serial@feb50000

Environment size: 653/126972 bytes
=> 
=> bootflow
bootflow - Boot flows

Usage:
bootflow scan [-abeGl] [bdev]  - scan for valid bootflows (-l list, -a all, -e errors, -b boot, -G no global)
bootflow list [-e]             - list scanned bootflows (-e errors)
bootflow select [<num>|<name>] - select a bootflow
bootflow info [-ds]            - show info on current bootflow (-d dump bootflow)
bootflow read                  - read all current-bootflow files
bootflow boot                  - boot current bootflow
bootflow menu [-t]             - show a menu of available bootflows
bootflow cmdline [set|get|clear|delete|auto] <param> [<value>] - update cmdline
=> bootflow list
Showing all bootflows
Seq  Method       State   Uclass    Part  Name                      Filename
---  -----------  ------  --------  ----  ------------------------  ----------------
---  -----------  ------  --------  ----  ------------------------  ----------------
(0 bootflows, 0 valid)
=> 

```


## rockusb无法进入loader

cmd/rockusb.c实现差异

uboot 2026
```c
	g_dnl_clear_detach();
	ret = g_dnl_register("usb_dnl_rockusb");
	if (ret)
		return CMD_RET_FAILURE;
```

uboot 2017:
```c
	rc = g_dnl_register("rkusb_ums_dnl");
	if (rc) {
		pr_err("g_dnl_register failed");
		rc = CMD_RET_FAILURE;
		goto cleanup_board;
	}
```

执行 `rockusb 0 mtd 2` 就变成 Maskrom


## TPL\SPL引导问题

在RK3588上，整个启动流程大致如下：

1. BOOTROM：芯片上电后，首先执行固化在芯片内部ROM中的启动代码。
2. TPL：BOOTROM将TPL加载到SRAM中并执行，由TPL完成DDR内存的初始化。
3. SPL：TPL将SPL加载到DDR中并执行，由SPL完成后续的低层初始化。
4. 加载固件：SPL从存储设备（如eMMC、SD卡）中读取trust.img和uboot.img到DDR。
5. U-Boot proper：执行主U-Boot，它负责引导Linux内核。
6. KERNEL：最终启动Linux操作系统。

在实际的固件中，u-boot-tpl.bin 和 u-boot-spl.bin 通常会被打包成一个名为 MiniLoaderAll.bin 的文件。


在 Rockchip（瑞芯微）等现代平台的 U-Boot 启动链中，TPL（Tiny Program Loader） 和 SPL（Secondary Program Loader） 是两个不同阶段的引导加载程序，它们分工明确：

* SPL（运行在 DDR 中）：
* 核心任务：在 DDR 初始化完成后，SPL 被加载到 DDR 中运行。它负责更复杂的硬件初始化、解析设备树（DT）、决定启动顺序（Boot Order），并从存储介质（如 MMC、SPI、NAND）中加载完整的 U-Boot 或 ATF。
TPL（运行在 SRAM 中）：
* 核心任务：代码极其精简（通常限制在 60KB 以内），其最核心的任务就是初始化 DDR 内存。
* 原因：因为完整的 SPL 代码太大（约 256KB），无法直接放进芯片内部有限的 SRAM 中运行，必须先由 TPL 把 DDR 内存打通。

停在SPL阶段的日志：

```shell
U-Boot SPL 2026.10-rc3-00074-g9466b3a6b00e-dirty (Sep 03 2026 - 23:38:46 +0800)
Trying to boot from MMC1
spl: could not initialize mmc. error: -19
Error: -19
SPL: Unsupported Boot Device!
SPL: failed to boot from all boot devices
  ### ERROR ### Please RESET the board ### 
```

停在TPL入口阶段的日志：

```shell
U-Boot SPL board init
Relocate from 00000000 to 03d00000.
U-Boot SPL 2017.09-gc28d9f4e210-250928 #lxh (Sep 28 2025 - 17:14:23), fwver: v1.14
Ram size: f0000000
sfc cmd=6bH(6BH-x4)
Trying to boot from MMC2
MMC: no card present
mmc_init: -123, time 0
spl: mmc init failed with error: -123
Trying to boot from MMC1
Card did not respond to voltage select!
mmc_init: -95, time 14
spl: mmc init failed with error: -95
Trying to boot from MTD2
No misc partition
Trying fit image at 0x800 sector
## Verified-boot: 0
## Checking atf-1 0x00060000 ... sha256(f99c6f8fb6...) + OK
## Checking u-boot 0x00800000 ... sha256(47fd2284d0...) + OK
## Checking fdt-1 0x008e3fa8 ... sha256(503f8d400c...) + OK
## Checking atf-2 0x000f0000 ... sha256(13b94d9d5a...) + OK
## Checking atf-3 0xff100000 ... sha256(74bbc58e20...) + OK
Jumping to U-Boot(0x00800000) via ARM Trusted Firmware(0x00060000)
Total: 516.194/719.244 ms
```

正常流程：

1. TPL 阶段：DDR 内存初始化
*   **日志特征**：从开头的 `DDR cb12b99cc23...` 到 `out`。
*   **执行过程**：TPL（Tiny Program Loader）运行在芯片内部的 SRAM 中，负责执行最核心的任务——DDR 初始化。日志中详细打印了 DDR 的训练参数（如 `DQS rds`、`RX/TX Vref`），以及频率切换过程（从 528MHz 逐步提升至 2112MHz）。
*   **结果**：成功识别出 4 通道 LPDDR4X 内存，总容量为 16GB（4 x 4096MB）。打印 `out` 标志着 DDR 初始化完成，TPL 将控制权交还。

2. SPL 阶段：镜像加载与安全校验
*   **日志特征**：从 `U-Boot SPL board init` 到 `Jumping to U-Boot...`。
*   **执行过程**：SPL 此时已经运行在刚初始化好的 DDR 中。它首先尝试从 MMC2（eMMC）和 MMC1（SD卡）启动，但因无卡或电压协商失败而跳过。随后转向 MTD2（SPI Flash），成功在 `0x800` 扇区找到了 FIT 格式的镜像。
*   **安全校验**：SPL 对加载的镜像进行了严格的 SHA256 校验，包括 ATF、U-Boot、FDT 和 OP-TEE，全部显示 `+ OK`。
*   **结果**：SPL 准备就绪，通过 ARM Trusted Firmware 将控制权跳转至 U-Boot 的入口地址 `0x00200000`。

3. ATF 与 OP-TEE 阶段：建立安全世界
*   **日志特征**：从 `INFO: Preloader serial: 2` 到 `SPSR = 0x3c9`。
*   **执行过程**：
    *   **BL31 (ATF)**：运行在最高特权级 EL3，负责初始化异常处理框架、GICv3 中断控制器，并配置 DDR 的动态频率调整（DFS）参数。
    *   **BL32 (OP-TEE)**：BL31 初始化了安全操作系统 OP-TEE（版本 3.13.0），分配了 TEE 内存空间，并完成了主 CPU 的初始化。
*   **结果**：安全环境建立完毕，BL31 准备退出 EL3 级别，将执行流移交给非安全世界（Normal World）的 U-Boot。

4. U-Boot Proper 阶段：完整系统接管
*   **日志特征**：从 `U-Boot next-dev (Sep 01 2026...)` 到 `=>`。
*   **执行过程**：U-Boot 主体在 EL2/EL1 级别运行。它完成了板级初始化（如识别 SPI Flash 为 `sfc_nor`）、内存重定位（Relocation）以及设备树（DTB）的加载。


RK3588 的标准启动链路：**BootROM (隐含) -> TPL (DDR初始化) -> SPL (加载与校验) -> ATF/OP-TEE (安全环境) -> U-Boot Proper (系统引导)**。



```shell
DDR cb12b99cc23 hcy 26/08/04-14:19.50,fwver: v1.21
ch0 ttot10
ch1 ttot10
ch2 ttot10
ch3 ttot10
ch0 ttot16
LPDDR4X, 2112MHz
channel[0] BW=16 Col=10 Bk=8 CS0 Row=17 CS1 Row=17 CS=2 Die BW=8 Size=4096MB
ch1 ttot16
channel[1] BW=16 Col=10 Bk=8 CS0 Row=17 CS1 Row=17 CS=2 Die BW=8 Size=4096MB
ch2 ttot16
channel[2] BW=16 Col=10 Bk=8 CS0 Row=17 CS1 Row=17 CS=2 Die BW=8 Size=4096MB
ch3 ttot16
channel[3] BW=16 Col=10 Bk=8 CS0 Row=17 CS1 Row=17 CS=2 Die BW=8 Size=4096MB
Manufacturer ID:0x6
DQS rds:h1,h1 
CH0 RX Vref:29.7%, TX Vref:21.8%,21.8%
DQ rds:h1 h4 l0 h4 h2 h6 h6 h2, h4 h3 l0 h4 h3 h2 h3 h4 

DQS rds:l0,h1 
CH1 RX Vref:29.3%, TX Vref:23.8%,22.8%
DQ rds:h2 h2 h1 h1 h2 h3 h3 h3, h3 h3 h4 l0 h3 h5 h2 l0 

DQS rds:l0,h2 
CH2 RX Vref:29.7%, TX Vref:21.8%,21.8%
DQ rds:h3 h1 h7 h1 h4 h3 l0 l0, h6 h3 h1 h4 h5 h1 h6 h4 

DQS rds:h1,h1 
CH3 RX Vref:30.1%, TX Vref:23.8%,22.8%
DQ rds:h6 h2 h4 h3 h2 h1 h1 h4, h2 h3 h3 h3 h1 h2 h1 h4 

stride=0x2, ddr_config=0x4
hash ch_mask0-1 0x20 0x40, bank_mask0-3 0xa00 0x1400 0x2800 0x0, rank_mask0 0x401000
change to F1: 528MHz
ch0 ttot10
ch1 ttot10
ch2 ttot10
ch3 ttot10
change to F2: 1068MHz
ch0 ttot12
ch1 ttot12
ch2 ttot12
ch3 ttot12
change to F3: 1560MHz
ch0 ttot14
ch1 ttot14
ch2 ttot14
ch3 ttot14
change to F0: 2112MHz
ch0 ttot16
ch1 ttot16
ch2 ttot16
ch3 ttot16
out
U-Boot SPL board init
Relocate from 00000000 to 03d00000.

U-Boot SPL 2017.09-gc28d9f4e210-250928 #lxh (Sep 28 2025 - 17:14:23), fwver: v1.14
Ram size: f0000000
sfc cmd=6bH(6BH-x4)
Trying to boot from MMC2
MMC: no card present
mmc_init: -123, time 0
spl: mmc init failed with error: -123
Trying to boot from MMC1
Card did not respond to voltage select!
mmc_init: -95, time 14
spl: mmc init failed with error: -95
Trying to boot from MTD2
No misc partition
Trying fit image at 0x800 sector
## Verified-boot: 0
## Checking atf-1 0x00060000 (gzip @0x00260000) ... sha256(4b63bcd523...) + sha256(f99c6f8fb6...) + OK
## Checking uboot 0x00200000 (gzip @0x00400000) ... sha256(59a930219d...) + sha256(5a786196dd...) + OK
## Checking fdt 0x00374a10 ... sha256(c756181587...) + OK
## Checking atf-2 0xff100000 ... sha256(74bbc58e20...) + OK
## Checking atf-3 0x000f0000 ... sha256(13b94d9d5a...) + OK
## Checking optee 0x08400000 (gzip @0x08600000) ... sha256(a3dfa44710...) + sha256(76eeb0b48d...) + OK
Jumping to U-Boot(0x00200000) via ARM Trusted Firmware(0x00060000)
Total: 510.11/710.762 ms

INFO:    Preloader serial: 2
NOTICE:  BL31: v2.3():v2.3-964-g8319968f5:derrick.huang, fwver: v1.54
NOTICE:  BL31: Built : 17:20:23, Dec 26 2025
INFO:    spec: 0x1
INFO:    code: 0x88
INFO:    customer demand: 0x0
INFO:    ext 32k is not valid
INFO:    ddr: stride-en 4CH
INFO:    GICv3 without legacy support detected.
INFO:    ARM GICv3 driver initialized in EL3
INFO:    valid_cpu_msk=0xff bcore0_rst = 0x0, bcore1_rst = 0x0
INFO:    l3 cache partition cfg-0
INFO:    system boots from cpu-hwid-0
INFO:    disable memory repair
INFO:    idle_st=0x21fff, pd_st=0x11fff9, repair_st=0xfff70001
INFO:    dfs DDR fsp_params[0].freq_mhz= 2112MHz
INFO:    dfs DDR fsp_params[1].freq_mhz= 528MHz
INFO:    dfs DDR fsp_params[2].freq_mhz= 1068MHz
INFO:    dfs DDR fsp_params[3].freq_mhz= 1560MHz
INFO:    BL31: Initialising Exception Handling Framework
INFO:    BL31: Initializing runtime services
INFO:    BL31: Initializing BL32
I/TC: 
I/TC: OP-TEE version: 3.13.0-999-g1e844e4ca #hisping.lin (gcc version 10.2.1 20201103 (GNU Toolchain for the A-profile Architecture 10.2-2020.11 (arm-10.16))) #2 Fri May  9 00:41:09 UTC 2025 aarch64, fwver: v1.20 
I/TC: OP-TEE memory size: TEEOS 0x200000 TA 0xc00000 SHM 0x200000
I/TC: Primary CPU initializing
I/TC: Primary CPU switching to normal world boot
INFO:    BL31: Preparing for EL3 exit to normal world
INFO:    Entry point address = 0x200000
INFO:    SPSR = 0x3c9


U-Boot next-dev (Sep 01 2026 - 12:35:24 +0800)

Model: BYD G98 Compiled By yifengyou v20260901
MPIDR: 0x0
PreSerial: 2, raw, 0xfeb50000
DRAM:  16 GiB
Sysmem: init
Relocation Offset: ed8e5000
Relocation fdt: eb7f66d0 - eb7fecc0, kfdt: 0037d000 - e8139d3d
CR: M/C/I
Using default environment

optee api revision: 2.0
JEDEC id bytes: ef, 60, 19
SF: Detected sfc_nor with page size 256 Bytes, erase size 4 KiB, total 32 MiB
Bootdev(atags): mtd 2
PartType: EFI
TEEC: Waring: Could not find security partition
DM: v2
No misc partition
boot mode: None
Failed to load DTB, ret=-2
No valid DTB, ret=-22
Failed to get kernel dtb, ret=-22
Model: BYD G98 Compiled By yifengyou v20260901
rockchip_set_ethaddr: vendor_storage_write failed -5
rockchip_set_serialno: could not find efuse/otp device
Minidump: init...
CLK: (sync kernel. arm: enter 1008000 KHz, init 1008000 KHz, kernel 0N/A)
  b0pll 24000 KHz
  b1pll 24000 KHz
  lpll 24000 KHz
  v0pll 24000 KHz
  aupll 24000 KHz
  cpll 1500000 KHz
  gpll 1188000 KHz
  npll 24000 KHz
  ppll 1100000 KHz
  aclk_center_root 702000 KHz
  pclk_center_root 100000 KHz
  hclk_center_root 396000 KHz
  aclk_center_low_root 500000 KHz
  aclk_top_root 750000 KHz
  pclk_top_root 100000 KHz
  aclk_low_top_root 396000 KHz
Net:   No ethernet found.
Hit key to stop autoboot('CTRL+C'):  0 
=> 
```

## SPL中的设备树

在 U-Boot SPL 阶段，为了节省宝贵的 SRAM 空间，它会使用一个被极度裁剪过的设备树（u-boot-spl.dtb）。如果一个 MMC 控制器节点没有被正确标记，SPL 就会忽略它，导致找不到设备。

```shell

 # cat .u-boot-spl.dtb.cmd 
cmd_spl/u-boot-spl.dtb := cp spl/dts/dt-spl.dtb spl/u-boot-spl.dtb

 # cat .dt-spl.dtb.cmd 
cmd_spl/dts/dt-spl.dtb := ./tools/fdtgrep -b bootph-all -b bootph-pre-ram -u -RT dts/dt.dtb -n /chosen -n /config -O dtb | ./tools/fdtgrep -r -O dtb - -o spl/dts/dt-spl.dtb -P bootph-all -P bootph-pre-ram -P bootph-pre-sram -P bootph-verify -P bootph-some-ram -P clock-names -P interrupt-parent -P assigned-clocks -P assigned-clock-rates -P assigned-clock-parents
  
  # cat .dt.dtb.cmd 
cmd_dts/dt.dtb := cat dts/upstream/src/arm64/rockchip/rk3588-bdy-g98.dtb > dts/dt.dtb

```

u-boot-spl.dtb 并非凭空生成，而是从完整的 dts/dt.dtb 中，通过 fdtgrep 工具根据 bootph-* 系列属性进行两轮过滤（先保留所需节点，再移除控制属性）后得到的精简版本。这解释了为什么在 SPL 阶段缺少 bootph-all 或 bootph-pre-ram 属性的 MMC 控制器节点会导致 -19 (ENODEV) 错误——因为它在第一步就被裁剪掉了

```text
dts/dt.dtb (完整设备树)
      │
      ▼
[fdtgrep 1: 筛选] 保留带 bootph-all/bootph-pre-ram 的节点及 /chosen, /config
      │
      ▼
[fdtgrep 2: 清理] 移除所有 bootph-* 和 assigned-* 等控制属性
      │
      ▼
spl/dts/dt-spl.dtb (中间精简设备树)
      │
      ▼
[cp: 复制]
      │
      ▼
spl/u-boot-spl.dtb (最终SPL设备树)
```


## spl扫描顺序

```c
u32 spl_boot_device(void)
{
        u32 boot_device = BOOT_DEVICE_MMC1;

#if defined(CONFIG_TARGET_CHROMEBOOK_JERRY) || \
                defined(CONFIG_TARGET_CHROMEBIT_MICKEY) || \
                defined(CONFIG_TARGET_CHROMEBOOK_MINNIE) || \
                defined(CONFIG_TARGET_CHROMEBOOK_SPEEDY) || \
                defined(CONFIG_TARGET_CHROMEBOOK_BOB) || \
                defined(CONFIG_TARGET_CHROMEBOOK_KEVIN)
        return BOOT_DEVICE_SPI;
#endif
        if (CONFIG_IS_ENABLED(ROCKCHIP_BACK_TO_BROM))
                return BOOT_DEVICE_BOOTROM;

        return boot_device;
}
__weak void board_boot_order(u32 *spl_boot_list)
{
	spl_boot_list[0] = spl_boot_device();
}
```

默认都是从 BOOT_DEVICE_MMC1，但是对于特定板子使用SPI引导




## dtb中包含nanopc信息

```shell
# grep -rni rk3588-nanopc-t6.dtsi
grep: .git/index: binary file matches
grep: .git/objects/40/d71643f1ecd985eb406ad03e91e5ee1e2a3622: binary file matches
grep: .git/objects/eb/286f2a68a392f69b612c4767d0d9e432c02f7e: binary file matches
grep: .git/objects/00/65227998e601697c87cbdd556f5b55dc0ab74e: binary file matches
dts/upstream/src/arm64/rockchip/rk3588-nanopc-t6-lts.dts:11:#include "rk3588-nanopc-t6.dtsi"
dts/upstream/src/arm64/rockchip/rk3588-nanopc-t6.dts:11:#include "rk3588-nanopc-t6.dtsi"
dts/upstream/src/arm64/rockchip/.rk3588-bdy-g98.dtb.cmd:26:  dts/upstream/src/arm64/rockchip/rk3588-nanopc-t6.dtsi \
dts/upstream/src/arm64/rockchip/rk3588-bdy-g98.dts:11:#include "rk3588-nanopc-t6.dtsi"
dts/upstream/src/arm64/rockchip/.rk3588-bdy-g98.dtb.pre.tmp:11:#include "rk3588-nanopc-t6.dtsi"
dts/upstream/src/arm64/rockchip/.rk3588-bdy-g98.dtb.dts.tmp:15:# 1 "dts/upstream/src/arm64/rockchip/rk3588-nanopc-t6.dtsi" 1
dts/upstream/src/arm64/rockchip/.rk3588-bdy-g98.dtb.dts.tmp:26:# 11 "dts/upstream/src/arm64/rockchip/rk3588-nanopc-t6.dtsi" 2
dts/upstream/src/arm64/rockchip/.rk3588-bdy-g98.dtb.dts.tmp:31:# 12 "dts/upstream/src/arm64/rockchip/rk3588-nanopc-t6.dtsi" 2
dts/upstream/src/arm64/rockchip/.rk3588-bdy-g98.dtb.dts.tmp:33:# 13 "dts/upstream/src/arm64/rockchip/rk3588-nanopc-t6.dtsi" 2
dts/upstream/src/arm64/rockchip/.rk3588-bdy-g98.dtb.dts.tmp:35:# 14 "dts/upstream/src/arm64/rockchip/rk3588-nanopc-t6.dtsi" 2
dts/upstream/src/arm64/rockchip/.rk3588-bdy-g98.dtb.dts.tmp:37:# 15 "dts/upstream/src/arm64/rockchip/rk3588-nanopc-t6.dtsi" 2
dts/upstream/src/arm64/rockchip/.rk3588-bdy-g98.dtb.dts.tmp:39:# 16 "dts/upstream/src/arm64/rockchip/rk3588-nanopc-t6.dtsi" 2
dts/upstream/src/arm64/rockchip/.rk3588-bdy-g98.dtb.dts.tmp:9235:# 17 "dts/upstream/src/arm64/rockchip/rk3588-nanopc-t6.dtsi" 2
dts/upstream/src/arm64/rockchip/.rk3588-bdy-g98.dtb.d.pre.tmp:4: dts/upstream/src/arm64/rockchip/rk3588-nanopc-t6.dtsi \
only-spi/rk3588-bdy-g98.dts:11:#include "rk3588-nanopc-t6.dtsi"
only-emmc/rk3588-bdy-g98.dts:11:#include "rk3588-nanopc-t6.dtsi"
```

大概率是因为configs中包含TARGET_NANOPCT6_RK3588，导致自动生成了一些配置

```shell
# grep -rni TARGET_NANOPCT6_RK3588
grep: .git/objects/2a/2d22b99681320c2eec295adb71e4046697aa0b: binary file matches
arch/arm/mach-rockchip/rk3588/Kconfig:111:config TARGET_NANOPCT6_RK3588
configs/bdy-g98-rk3588_defconfig:12:CONFIG_TARGET_NANOPCT6_RK3588=y
configs/nanopc-t6-rk3588_defconfig:12:CONFIG_TARGET_NANOPCT6_RK3588=y
board/friendlyelec/nanopc-t6-rk3588/Kconfig:1:if TARGET_NANOPCT6_RK3588
include/config/auto.conf:100:CONFIG_TARGET_NANOPCT6_RK3588=y
include/generated/autoconf.h:102:#define CONFIG_TARGET_NANOPCT6_RK3588 1
include/generated/env.txt:102:#define CONFIG_TARGET_NANOPCT6_RK3588 1
generated_defconfig:12:CONFIG_TARGET_NANOPCT6_RK3588=y
.config.old:260:CONFIG_TARGET_NANOPCT6_RK3588=y
.config:260:CONFIG_TARGET_NANOPCT6_RK3588=y
spl/u-boot.cfg:477:#define CONFIG_TARGET_NANOPCT6_RK3588 1
u-boot.cfg:476:#define CONFIG_TARGET_NANOPCT6_RK3588 1
only-spi/bdy-g98-rk3588_defconfig:12:CONFIG_TARGET_NANOPCT6_RK3588=y
only-emmc/bdy-g98-rk3588_defconfig:12:CONFIG_TARGET_NANOPCT6_RK3588=y
```

编辑 arch/arm/mach-rockchip/rk3588/Kconfig ，添加bdy信息

```text
config TARGET_BDY_G98_RK3588
        bool "BDY G98 RK3588 board"
        help
          BDY G98 is a Rockchip RK3588 based high-performance edge computing
          board, specially designed for multi-network gateway and NAS
          applications.

          Specification:
          Rockchip RK3588 SoC (8-core ARM architecture)
            4x Cortex-A76 @ up to 2.4GHz, 4x Cortex-A55
          ARM Mali-G610 MP4 GPU, with built-in NPU up to 6 TOPS INT8
          Onboard 16GB DDR4 memory (non-expandable)
          Storage: 2x NVMe (PCIe 3.0 x2) + 1x SATA interface
          Networking: 10x RJ45 Ethernet ports
            2x 2.5G Ethernet + 8x Gigabit Ethernet
          USB: 2x USB 3.0 ports
          Power Supply: Dual redundant design (220V AC input + DC-IN)
          No built-in Wi-Fi module

```

```text
board/friendlyelec/nanopc-t6-rk3588]# cat Kconfig 
if TARGET_NANOPCT6_RK3588

config SYS_BOARD
	default "nanopc-t6-rk3588"

config SYS_VENDOR
	default "friendlyelec"

config SYS_CONFIG_NAME
	default "nanopc-t6-rk3588"

endif
```

同理可以增加BDY_G98信息


## dts中chosen字段无法修改问题

* 构建dtb时，脚本默认把rk3588s-u-boot.dtsi append到了结尾，导致默认用该dtsi中的chosen。修改该文件后生效

arch/arm/dts/rk3588s-u-boot.dtsi

```shell

#include "rockchip-u-boot.dtsi"

/ {
        aliases {
                spi5 = &sfc;
        };

#ifdef CONFIG_ROCKCHIP_SPI_IMAGE
        chosen {
                u-boot,spl-boot-order = "same-as-spl", &spi_nor, &sdmmc, &sdhci;
        };
#else
        chosen {
                u-boot,spl-boot-order = "same-as-spl", &sdmmc, &sdhci;
        };
#endif

        dmc {
                compatible = "rockchip,rk3588-dmc";
                bootph-all;
        };
};

```

## idbloader.img如何生成



```text
    # cat  arch/arm/dts/rockchip-u-boot.dtsi   
...
    
   
    #ifdef CONFIG_ROCKCHIP_SPI_IMAGE
        simple-bin-spi {
            filename = "u-boot-rockchip-spi.bin";
            pad-byte = <0xff>;
    
            mkimage {
                filename = "idbloader-spi.img";
                args = "-n", CONFIG_SYS_SOC, "-T", "rkspi";
                multiple-data-files;
    
    #ifdef CONFIG_ROCKCHIP_EXTERNAL_TPL
                rockchip-tpl {
                };
    #elif defined(CONFIG_TPL)
                u-boot-tpl {
                };
    #endif
                u-boot-spl {
                };
            };
    
    #ifdef HAS_FIT
            fit {
                insert-template = <&fit_template>;
    #else
            u-boot-img {
    #endif
                /* Sync with u-boot,spl-payload-offset if present */
                offset = <CONFIG_SYS_SPI_U_BOOT_OFFS>;
            };
        };
    #endif /* CONFIG_ROCKCHIP_SPI_IMAGE */
    
 ...

```

，`idbloader.img` 的生成是一个将不同阶段的引导程序（Bootloader）打包合并的过程。

结合代码与底层逻辑，`idbloader.img` 的生成机制可以从以下几个维度进行分析：


1. 核心组成结构

`idbloader.img` 是瑞芯微 SoC 启动链路中的预加载程序（Pre-bootloader），它并非单一文件，而是由以下几个核心部分拼接而成：

*   **IDBlock Header**：由 Rockchip BootROM 识别的镜像头信息。
*   **TPL (Triple Program Loader)**：主要负责 DDR 内存的初始化，体积通常较小。
*   **SPL (Secondary Program Loader)**：负责加载下一级引导程序（如 U-Boot）。


2. 基于 DTSI 代码的自动化生成分析

在您提供的 `rockchip-u-boot.dtsi` 代码中，展示了通过 U-Boot 的构建系统（基于 FIT 镜像机制）自动生成 `idbloader` 的逻辑：

*   **触发条件**：代码受 `CONFIG_ROCKCHIP_SPI_IMAGE` 宏控制，表明此流程专门用于生成 **SPI Flash** 启动所需的镜像。
*   **打包工具与参数**：通过 `mkimage` 工具进行打包，参数 `-n CONFIG_SYS_SOC -T rkspi` 指定了目标芯片型号和 SPI 镜像格式。
*   **数据组装 (`multiple-data-files`)**：
    *   **TPL 阶段**：代码通过条件编译判断，如果定义了 `CONFIG_ROCKCHIP_EXTERNAL_TPL`，则引入外部 TPL 二进制文件；如果定义了 `CONFIG_TPL`，则使用 U-Boot 源码编译出的 `u-boot-tpl`。
    *   **SPL 阶段**：紧接着将 `u-boot-spl` 追加到镜像中。
*   **后续阶段衔接**：打包完 `idbloader-spi.img` 后，还会根据是否支持 FIT (`HAS_FIT`)，在指定的偏移量 (`CONFIG_SYS_SPI_U_BOOT_OFFS`) 处插入 U-Boot 主体镜像（`u-boot.img` 或 FIT 格式），从而形成一个完整的 SPI 启动固件。

3. 其他常见的生成方式

除了上述在 U-Boot 源码树内通过 DTS 自动化构建外，在实际开发中还有两种常见的生成方式：

*   **从 U-Boot TPL/SPL 手动打包（全开源方案）**：
    使用 `mkimage` 工具生成包含 TPL 的头部，然后使用 `cat` 命令将 SPL 追加到文件末尾：
    ```bash
    tools/mkimage -n rkxxxx -T rksd -d tpl/u-boot-tpl.bin idbloader.img
    cat spl/u-boot-spl.bin >> idbloader.img
    ```
*   **从 Rockchip 官方二进制文件打包（闭源方案）**：
    使用瑞芯微官方提供的 DDR 初始化二进制文件和 Miniloader 进行拼接：
    ```bash
    tools/mkimage -n rkxxxx -T rksd -d rkxx_ddr_vx.xx.bin idbloader.img
    cat rkxx_miniloader_vx.xx.bin >> idbloader.img
    ```

U-Boot 构建系统如何利用设备树（Device Tree）的节点配置，自动将 TPL 和 SPL 二进制文件通过 `mkimage` 工具封装成符合瑞芯微 SPI 启动规范的 `idbloader-spi.img`。其本质依然是 **TPL + SPL** 的结构化拼接。



```text
 simple-bin { 
  filename = "u-boot-rockchip.bin";
  pad-byte = <0xff>;
    
  mkimage { 
   filename = "idbloader.img";
   args = "-n", "rk3588", "-T", "rksd";
   multiple-data-files;


   rockchip-tpl {
   };
    
    
    
    
   u-boot-spl { 
   };
  };
    

  fit {
   filename = "u-boot.itb";
   insert-template = <&fit_template>;
    
     
    
   offset = <0x100000>;
  };
 };

```




## u-boot-rockchip.bin是什么，怎么生成的？

u-boot-rockchip.bin 是一个面向 Rockchip 平台的完整启动固件容器（All-in-One Binary）。它包含了芯片从 BootROM 启动到加载 Linux 内核所需的所有前置固件，具体包括：

* idbloader.img：包含 DDR 初始化程序（TPL/External TPL）和二级引导程序（SPL）。
* u-boot.itb：U-Boot 主程序（U-Boot Proper）、ARM Trusted Firmware (ATF/BL31)、TEE 安全固件以及 U-Boot 设备树（DTB）打包而成的 FIT 镜像。

u-boot-rockchip.bin 的生成不再依赖传统的 Makefile 脚本拼接，而是完全交由 U-Boot 内置的 Binman 镜像打包工具来实现。Binman 通过解析设备树文件 arch/arm/dts/rockchip-u-boot.dtsi 中的节点描述，自动完成多组件的格式化、偏移量对齐和拼接工作。

为了确保 BootROM 能够正确寻址，U-Boot 主镜像会被放置在 CONFIG_SPL_PAD_TO 指定的偏移量处（通常与 SPL 的最大限制大小对齐）。simple-bin 节点中定义的 pad-byte = <0xff> 确保了 IDBLoader 与主镜像之间的空隙被 0xff 填充，这完全符合 NAND Flash / NOR Flash 擦除后的默认物理状态。

u-boot-rockchip-spi.bin：专为 SPI Flash 启动生成，其主镜像偏移量由 CONFIG_SYS_SPI_U_BOOT_OFFS 决定

```shell
    # grep CONFIG_SYS_SPI_U_BOOT_OFFS .config
    CONFIG_SYS_SPI_U_BOOT_OFFS=0x60000
    
    # grep CONFIG_SPL_PAD_TO .config
    CONFIG_SPL_PAD_TO=0x7f8000
    
    # cat  arch/arm/dts/rockchip-u-boot.dtsi   
    // SPDX-License-Identifier: GPL-2.0+
    /*
     * Copyright (C) 2019 Jagan Teki <jagan@amarulasolutions.com>
     */
    
    #include <config.h>
    
    #ifdef CONFIG_ARM64
    #define FIT_ARCH		"arm64"
    #else
    #define FIT_ARCH		"arm"
    #endif
    
    #if defined(CONFIG_SPL_GZIP)
    #define FIT_UBOOT_COMP		"gzip"
    #elif defined(CONFIG_SPL_LZMA)
    #define FIT_UBOOT_COMP		"lzma"
    #else
    #define FIT_UBOOT_COMP		"none"
    #endif
    
    /*
     * SHA256 should be enabled in SPL when signature validation is involved,
     * CRC32 should only be used for basic checksum validation of FIT images.
     */
    #if defined(CONFIG_SPL_FIT_SIGNATURE)
    #if defined(CONFIG_SPL_SHA256)
    #define FIT_HASH_ALGO		"sha256"
    #elif defined(CONFIG_SPL_CRC32)
    #define FIT_HASH_ALGO		"crc32"
    #endif
    #endif
    
    #if defined(CONFIG_SPL_FIT) && (defined(CONFIG_ARM64) || defined(CONFIG_SPL_OPTEE_IMAGE))
    #define HAS_FIT
    #endif
    
    / {
        binman: binman {
            multiple-images;
        };
    };
    
    #ifdef CONFIG_SPL
    &binman {
    #ifdef HAS_FIT
        fit_template: template-1 {
            type = "fit";
    #ifdef CONFIG_ARM64
            description = "FIT image for U-Boot with bl31 (TF-A)";
    #else
            description = "FIT image with OP-TEE";
    #endif
            #address-cells = <1>;
            fit,fdt-list = "of-list";
            fit,external-offset = <CONFIG_FIT_EXTERNAL_OFFSET>;
            fit,align = <512>;
            images {
                u-boot {
                    description = "U-Boot";
                    type = "standalone";
                    os = "u-boot";
                    arch = FIT_ARCH;
                    compression = FIT_UBOOT_COMP;
                    load = <CONFIG_TEXT_BASE>;
                    entry = <CONFIG_TEXT_BASE>;
                    u-boot-nodtb {
                        compress = FIT_UBOOT_COMP;
                    };
    #ifdef FIT_HASH_ALGO
                    hash {
                        algo = FIT_HASH_ALGO;
                    };
    #endif
                };
    
    #ifdef CONFIG_ARM64
                @atf-SEQ {
                    fit,operation = "split-elf";
                    description = "ARM Trusted Firmware";
                    type = "firmware";
                    arch = FIT_ARCH;
                    os = "arm-trusted-firmware";
                    compression = "none";
                    fit,load;
                    fit,entry;
                    fit,data;
    
                    atf-bl31 {
                    };
    #ifdef FIT_HASH_ALGO
                    hash {
                        algo = FIT_HASH_ALGO;
                    };
    #endif
                };
                @tee-SEQ {
                    fit,operation = "split-elf";
                    description = "TEE";
                    type = "tee";
                    arch = FIT_ARCH;
                    os = "tee";
                    compression = "none";
                    fit,load;
                    fit,entry;
                    fit,data;
    
                    tee-os {
                        optional;
                    };
    #ifdef FIT_HASH_ALGO
                    hash {
                        algo = FIT_HASH_ALGO;
                    };
    #endif
                };
    #else /* !CONFIG_ARM64 */
                op-tee {
                    description = "OP-TEE";
                    type = "tee";
                    arch = FIT_ARCH;
                    os = "tee";
                    compression = "none";
                    load = <(CFG_SYS_SDRAM_BASE + 0x8400000)>;
                    entry = <(CFG_SYS_SDRAM_BASE + 0x8400000)>;
    
                    tee-os {
                    };
    #ifdef FIT_HASH_ALGO
                    hash {
                        algo = FIT_HASH_ALGO;
                    };
    #endif
                };
    #endif /* CONFIG_ARM64 */
    
                @fdt-SEQ {
                    description = "fdt-NAME";
                    compression = "none";
                    type = "flat_dt";
    #ifdef FIT_HASH_ALGO
                    hash {
                        algo = FIT_HASH_ALGO;
                    };
    #endif
                };
            };
    
            configurations {
                default = "@config-DEFAULT-SEQ";
                @config-SEQ {
                    description = "NAME.dtb";
                    fdt = "fdt-SEQ";
    #ifdef CONFIG_ARM64
                    fit,firmware = "atf-1", "u-boot";
    #else
                    fit,firmware = "op-tee", "u-boot";
    #endif
                    fit,loadables;
                    fit,compatible;
                };
            };
        };
    #endif /* HAS_FIT */
    
        simple-bin {
            filename = "u-boot-rockchip.bin";
            pad-byte = <0xff>;
    
            mkimage {
                filename = "idbloader.img";
                args = "-n", CONFIG_SYS_SOC, "-T", "rksd";
                multiple-data-files;
    
    #ifdef CONFIG_ROCKCHIP_EXTERNAL_TPL
                rockchip-tpl {
                };
    #elif defined(CONFIG_TPL)
                u-boot-tpl {
                };
    #endif
                u-boot-spl {
                };
            };
    
    #ifdef HAS_FIT
            fit {
                filename = "u-boot.itb";
                insert-template = <&fit_template>;
    #else
            u-boot-img {
    #endif
                offset = <CONFIG_SPL_PAD_TO>;
            };
        };
    
    #ifdef CONFIG_ROCKCHIP_SPI_IMAGE
        simple-bin-spi {
            filename = "u-boot-rockchip-spi.bin";
            pad-byte = <0xff>;
    
            mkimage {
                filename = "idbloader-spi.img";
                args = "-n", CONFIG_SYS_SOC, "-T", "rkspi";
                multiple-data-files;
    
    #ifdef CONFIG_ROCKCHIP_EXTERNAL_TPL
                rockchip-tpl {
                };
    #elif defined(CONFIG_TPL)
                u-boot-tpl {
                };
    #endif
                u-boot-spl {
                };
            };
    
    #ifdef HAS_FIT
            fit {
                insert-template = <&fit_template>;
    #else
            u-boot-img {
    #endif
                /* Sync with u-boot,spl-payload-offset if present */
                offset = <CONFIG_SYS_SPI_U_BOOT_OFFS>;
            };
        };
    #endif /* CONFIG_ROCKCHIP_SPI_IMAGE */
    
    #ifdef CONFIG_ROCKCHIP_MASKROM_IMAGE
        simple-bin-usb471 {
            filename = "u-boot-rockchip-usb471.bin";
    
    #ifdef CONFIG_ROCKCHIP_EXTERNAL_TPL
            rockchip-tpl {
            };
    #elif defined(CONFIG_TPL)
            u-boot-tpl {
                no-write-symbols;
            };
    #endif
        };
    
        simple-bin-usb472 {
            filename = "u-boot-rockchip-usb472.bin";
            pad-byte = <0x00>;
    
            u-boot-spl {
            };
    
            payload {
                type = "section";
                align = <CONFIG_SYS_CACHELINE_SIZE>;
    #ifdef HAS_FIT
            fit {
                insert-template = <&fit_template>;
    #else
            u-boot-img {
    #endif
            };
            };
        };
    #endif /* CONFIG_ROCKCHIP_MASKROM_IMAGE */
    };
    #endif /* CONFIG_SPL */
```



























































































