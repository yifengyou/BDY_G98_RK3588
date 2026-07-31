# uboot

## chongshengB适配的G98 uboot日志

* 支持nvme

```shell
DDR cb12b99cc23 hcy 25/10/17-18:57:13,fwver: v1.21
ch0 ttot10
ch1 ttot10
ch2 ttot10
ch3 ttot10
ch0 ttot16
LPDDR4X, 2112MHz
channel[0] BW=16 Col=10 Bk=8 CS0 Row=17 CS1 Row=17 CS=2 Die BW=8 Size=4096MB
ch1 ttot16
channel[1] BW=16 Col=10 Bk=8 CS0 Row=17 CS1 R1rk3588-spi_defconfig h4 h2 

DQS rds:h1,h1 
CH3 RX Vref:30.1%, TX Vref:22.8%,22.8%
DQ rds:h6 h2 h4 h3 h3 h2 h1 h4, h2 h3 h3 h3 h1 h2 h1 h3 

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
ch0 ttot18
ch1 ttot16
ch2 ttot16
ch3 ttot16
out
U-Boot SPL board init
U-Boot SPL 2017.09-g59fb85d-dirty #asus (Jul 20 2026 - 17:07:44)
Trying to boot from MMC1
spl: mmc init failed with error: -123
Trying to boot from MMC2
Card did not respond to voltage select!
spl: mmc init failed with error: -95
Trying to boot from MTD2
Trying fit image at 0x400 sector
## Verified-boot: 0
## Checking atf-1 0x00060000 ... sha256(f99c6f8fb6...) + OK
## Checking uboot 0x00200000 ... sha256(ba110f6b8c...) + OK
## Checking fdt 0x0031acd8 ... sha256(da89f086a1...) + OK
## Checking atf-2 0xff100000 ... sha256(74bbc58e20...) + OK
## Checking atf-3 0x000f0000 ... sha256(13b94d9d5a...) + OK
Jumping to U-Boot(0x00200000) via ARM Trusted Firmware(0x00060000)
Total: 96.167 ms

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
WARNING: No OPTEE provided by BL2 boot loader, Booting device without OPTEE initialization. SMC`s destined for OPTEE will return SMC_UNK
ERROR:   Error initializing runtime service opteed_fast
INFO:    BL31: Preparing for EL3 exit to normal world
INFO:    Entry point address = 0x200000
INFO:    SPSR = 0x3c9


U-Boot 2017.09-g59fb85d-dirty #asus (Jul 20 2026 - 17:07:44 +0800)

Model: Phoenix Compiled by Saigetsux@gmail.com
PreSerial: 2, raw, 0xfeb50000
DRAM:  16 GiB
Sysmem: init
Relocation Offset: eda5a000
Relocation fdt: eb9f7998 - eb9fecc0
CR: M/C/I
Using default environment

Phoenix: skip early PCI init
mmc@fe2c0000: 0, mmc@fe2e0000: 1
Bootdev(scan): ramdisk 0
rockchip_get_bootdev: Can't find dev_desc!
DM: v2
rockchip_get_bootdev: Can't find dev_desc!
FIT: No dev_desc!
rockchip_get_bootdev: Can't find dev_desc!
No dev_desc!
rockchip_get_bootdev: Can't find dev_desc!
No dev_desc!
Model: Phoenix Compiled by Saigetsux@gmail.com
rockchip_get_bootdev: Can't find dev_desc!
[Vendor ERROR]:Invalid boot device type(0)
rockchip_get_bootdev: Can't find dev_desc!
[Vendor ERROR]:Invalid boot device type(0)
rockchip_set_ethaddr: vendor_storage_write failed -19
rockchip_get_bootdev: Can't find dev_desc!
[Vendor ERROR]:Invalid boot device type(0)
rockchip_get_bootdev: Can't find dev_desc!
dev_desc is NULL!
boot mode: None
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
rockchip_get_bootdev: Can't find dev_desc!
Phoenix GMAC DM diag: begin
Phoenix GMAC DM diag: fdt /ethernet@fe1b0000 off=13916 enabled=1 status=okay compatible=rockchip,rk3588-gmac fixed-link=14660 bound_ret=-19 dev=<none>
Phoenix GMAC DM diag: fdt /ethernet@fe1c0000 off=4804 enabled=1 status=okay compatible=rockchip,rk3588-gmac fixed-link=5548 bound_ret=-19 dev=<none>
Phoenix GMAC DM diag: eth[0] name=ethernet@fe1c0000 driver=gmac_rockchip of=-339390120 seq=-1 req_seq=1 active=0 find_ret=0
Phoenix GMAC DM diag: eth[1] name=ethernet@fe1b0000 driver=gmac_rockchip of=-339373000 seq=-1 req_seq=0 active=0 find_ret=0
Phoenix GMAC DM diag: end count=2
Phoenix GMAC probe: ethernet@fe1c0000 seq=1 interface=9 clock_input=0 tx_delay=0x42 rx_delay=0x10
Phoenix GMAC probe: ethernet@fe1c0000 pinctrl default ret=0
FEC: can't find phy-handle
Phoenix EQOS probe: ethernet@fe1c0000 eth_phy_get_mdio_bus=0000000000000000
Phoenix EQOS probe: ethernet@fe1c0000 allocate private MDIO bus
Phoenix EQOS probe: ethernet@fe1c0000 mdio_register ok bus=ethernet@fe1c0000
Phoenix GMAC probe: ethernet@fe1c0000 eqos_probe ret=0
Phoenix YT921x: bus ethernet@fe1c0000 chip=0x90020002 EXTIF OK
Phoenix YT921x: bus ethernet@fe1c0000 VLAN/port config OK
Phoenix GMAC probe: ethernet@fe1b0000 seq=0 interface=9 clock_input=0 tx_delay=0x44 rx_delay=0x10
Phoenix GMAC probe: ethernet@fe1b0000 pinctrl default ret=0
FEC: can't find phy-handle
Phoenix EQOS probe: ethernet@fe1b0000 eth_phy_get_mdio_bus=0000000000000000
Phoenix EQOS probe: ethernet@fe1b0000 allocate private MDIO bus
Phoenix EQOS probe: ethernet@fe1b0000 mdio_register ok bus=ethernet@fe1b0000
Phoenix GMAC probe: ethernet@fe1b0000 eqos_probe ret=0
Phoenix YT921x: bus ethernet@fe1b0000 chip=0x90020002 EXTIF OK
Phoenix YT921x: bus ethernet@fe1b0000 VLAN/port config OK
Net:   eth1: ethernet@fe1c0000, eth0: ethernet@fe1b0000
Hit key to stop autoboot('CTRL+C'):  0 
Phoenix# help
?       - alias for 'help'
android_print_hdr- print android image header
atags   - Dump all atags
base    - print or set address offset
bdinfo  - print Board Info structure
bidram_dump- Dump bidram layout
blk     - Block device sub-system
boot    - boot default, i.e., run 'bootcmd'
boot_android- Execute the Android Bootloader flow.
boot_fit- Boot FIT Image from memory or boot/recovery partition
bootavb - Execute the Android avb a/b boot flow.
bootd   - boot default, i.e., run 'bootcmd'
booti   - boot arm64 Linux Image image from memory
bootm   - boot application image from memory
bootp   - boot image via network using BOOTP/TFTP protocol
bootz   - boot Linux zImage image from memory
cmp     - memory compare
coninfo - print console devices and information
cp      - memory copy
crc32   - checksum calculation
crypto_sum- crypto checksum engine
dhcp    - boot image via network using DHCP/TFTP protocol
dm      - Driver model low level access
download- enter rockusb/bootrom download mode
dtimg   - manipulate dtb/dtbo Android image
dump_irqs- Dump IRQs
dump_resource- dump resource list
echo    - echo args to console
editenv - edit environment variable
env     - environment handling commands
exit    - exit script
ext2load- load binary file from a Ext2 filesystem
ext2ls  - list files in a directory (default /)
ext4load- load binary file from a Ext4 filesystem
ext4ls  - list files in a directory (default /)
ext4size- determine a file's size
false   - do nothing, unsuccessfully
fastboot- use USB or UDP Fastboot protocol
fatinfo - print information about filesystem
fatload - load binary file from a dos filesystem
fatls   - list files in a directory (default /)
fatsize - determine a file's size
fatwrite- write file into a dos filesystem
fdt     - flattened device tree utility commands
fstype  - Look up a filesystem type
go      - start application at address 'addr'
gpt     - GUID Partition Table
help    - print command description/usage
iomem   - Show iomem data by device compatible(high priority) or node name
lcdputs - print string on video framebuffer
load    - load binary file from a filesystem
loadb   - load binary file over serial line (kermit mode)
loadx   - load binary file over serial line (xmodem mode)
loady   - load binary file over serial line (ymodem mode)
loadz   - load binary file over serial line (zmodem mode)
loadzflash- load binary file over serial line (zmodem mode) and flash to partition
loop    - infinite loop on address range
ls      - list files in a directory (default /)
md      - memory display
mdio    - MDIO utility commands
mii     - MII utility commands
mm      - memory modify (auto-incrementing address)
mmc     - MMC sub system
mmcinfo - display MMC info
mtd_blk - MTD Block device sub-system
mw      - memory write (fill)
nfs     - boot image via network using NFS protocol
nm      - memory modify (constant address)
nvme    - NVM Express sub-system
part    - disk partition related commands
pci     - list and access PCI Configuration Space
ping    - send ICMP ECHO_REQUEST to network host
printenv- print environment variables
pxe     - commands to get and boot from pxe files
rbrom   - Perform RESET of the CPU
reboot  - Perform RESET of the CPU, alias of 'reset'
reset   - Perform RESET of the CPU
rkimgtest- Test if storage media have rockchip image
rockchip_show_bmp- load and display bmp from resource partition
rockchip_show_logo- load and display log from resource partition
rockusb - Use the rockusb Protocol
run     - run commands in an environment variable
save    - save file to a filesystem
saveenv - save environment variables to persistent storage
setcurs - set cursor position within screen
setenv  - set environment variables
sf      - SPI flash sub-system
showvar - print local hushshell variables
size    - determine a file's size
source  - run script from memory
sspi    - SPI utility command
sysboot - command to get and boot from syslinux files
sysmem_dump- Dump sysmem layout
sysmem_search- Search a available sysmem region
test    - minimal test like /bin/sh
tftp    - download image via network using TFTP protocol
tftpbootm- tftpbootm aosp/uImage/FIT image via network using TFTP protocol
tftpflash- flash image via network using TFTP protocol
tftpput - TFTP put command, for uploading files to a server
true    - do nothing, successfully
ums     - Use the UMS [USB Mass Storage]
usb     - USB sub-system
usbboot - boot from USB device
version - print monitor, compiler and linker version
yt921x  - Motorcomm YT921x indirect SMI diagnostics
Phoenix# version
U-Boot 2017.09-g59fb85d-dirty #asus (Jul 20 2026 - 17:07:44 +0800)

aarch64-linux-gnu-gcc (Ubuntu 11.4.0-1ubuntu1~22.04.3) 11.4.0
GNU ld (GNU Binutils for Ubuntu) 2.38
Phoenix# printenv
arch=arm
autoload=no
baudrate=1500000
board=evb_rk3588
board_name=evb_rk3588
boot_a_script=load ${devtype} ${devnum}:${distro_bootpart} ${scriptaddr} ${prefix}${script}; source ${scriptaddr}
boot_extlinux=sysboot ${devtype} ${devnum}:${distro_bootpart} any ${scriptaddr} ${prefix}extlinux/extlinux.conf
boot_net_pci_enum=pci enum
boot_net_usb_start=usb start
boot_prefixes=/ /boot/
boot_script_dhcp=boot.scr.uimg
boot_scripts=boot.scr.uimg boot.scr
boot_targets=mmc0 mmc1 nvme usb0 mtd2 mtd1 mtd0 pxe dhcp 
bootargs=storagemedia=ramdisk androidboot.storagemedia=ramdisk androidboot.mode=normal 
bootcmd=run bootcmd_nvme; echo Phoenix NVMe boot failed; 
bootcmd_dhcp=run boot_net_usb_start; run boot_net_pci_enum; if dhcp ${scriptaddr} ${boot_script_dhcp}; then source ${scriptaddr}; fi;
bootcmd_mmc0=setenv devnum 0; run mmc_boot
bootcmd_mmc1=setenv devnum 1; run mmc_boot
bootcmd_mtd0=setenv devnum 0; run mtd_boot
bootcmd_mtd1=setenv devnum 1; run mtd_boot
bootcmd_mtd2=setenv devnum 2; run mtd_boot
bootcmd_nvme=echo Phoenix NVMe boot: pci enum; pci enum; echo Phoenix NVMe boot: scan; nvme scan; echo Phoenix NVMe boot: info; nvme info; echo Phoenix NVMe boot: part 0; nvme part 0; echo Phoenix NVMe boot: part 1; nvme part 1; setenv devnum 0; if nvme dev 0; then run nvme_boot; fi; setenv devnum 1; if nvme dev 1; then run nvme_boot; fi; echo Phoenix NVMe boot: no boot script found; 
bootcmd_pxe=run boot_net_usb_start; run boot_net_pci_enum; dhcp; if pxe get; then pxe boot; fi
bootcmd_usb0=setenv devnum 0; run usb_boot
bootdelay=3
cpu=armv8
devnum=0
devtype=ramdisk
distro_bootcmd=for target in ${boot_targets}; do run bootcmd_${target}; done
eth1addr=4a:ae:74:b4:00:11
ethaddr=46:ae:74:b4:00:11
fdt_addr_r=0x0a100000
fdtfile=rockchip/rk3588-orangepi-5-ultra.dtb
fdtoverlay_addr_r=0x0a000000
kernel_addr_c=0x05480000
kernel_addr_r=0x00400000
mmc_boot=if mmc dev ${devnum}; then setenv devtype mmc; run scan_dev_for_boot_part; fi
mtd_boot=if mtd_blk dev ${devnum}; then setenv devtype mtd; run scan_dev_for_boot_part; fi
nvme_boot=setenv devtype nvme; for distro_bootpart in 1 2 3 4; do for prefix in / /boot/; do for script in boot.scr.uimg boot.scr; do echo Trying nvme ${devnum}:${distro_bootpart} ${prefix}${script}; if test -e nvme ${devnum}:${distro_bootpart} ${prefix}${script}; then echo Found Armbian script ${prefix}${script} on nvme ${devnum}:${distro_bootpart}; load nvme ${devnum}:${distro_bootpart} ${scriptaddr} ${prefix}${script}; source ${scriptaddr}; echo SCRIPT FAILED: continuing...; fi; done; done; done
partitions=uuid_disk=${uuid_gpt_disk};name=uboot,start=8MB,size=4MB,uuid=${uuid_gpt_loader2};name=trust,size=4M,uuid=${uuid_gpt_atf};name=misc,size=4MB,uuid=${uuid_gpt_misc};name=resource,size=16MB,uuid=${uuid_gpt_resource};name=kernel,size=32M,uuid=${uuid_gpt_kernel};name=boot,size=32M,bootable,uuid=${uuid_gpt_boot};name=recovery,size=32M,uuid=${uuid_gpt_recovery};name=backup,size=112M,uuid=${uuid_gpt_backup};name=cache,size=512M,uuid=${uuid_gpt_cache};name=system,size=2048M,uuid=${uuid_gpt_system};name=metadata,size=16M,uuid=${uuid_gpt_metadata};name=vendor,size=32M,uuid=${uuid_gpt_vendor};name=oem,size=32M,uuid=${uuid_gpt_oem};name=frp,size=512K,uuid=${uuid_gpt_frp};name=security,size=2M,uuid=${uuid_gpt_security};name=userdata,size=-,uuid=${uuid_gpt_userdata};
pxefile_addr_r=0x00600000
ramdisk_addr_r=0x0a200000
rkimg_bootdev=if nvme dev 0; then setenv devtype nvme; setenv devnum 0; echo Boot from nvme;elif mmc dev 1 && rkimgtest mmc 1; then setenv devtype mmc; setenv devnum 1; echo Boot from SDcard;elif mmc dev 0; then setenv devtype mmc; setenv devnum 0;elif mtd_blk dev 0; then setenv devtype mtd; setenv devnum 0;elif mtd_blk dev 1; then setenv devtype mtd; setenv devnum 1;elif mtd_blk dev 2; then setenv devtype mtd; setenv devnum 2;elif rknand dev 0; then setenv devtype rknand; setenv devnum 0;elif rksfc dev 0; then setenv devtype spinand; setenv devnum 0;elif rksfc dev 1; then setenv devtype spinor; setenv devnum 1;elsesetenv devtype ramdisk; setenv devnum 0;fi; 
rkimg_bootdev_download=scsi scan;nvme scan;if mmc dev 1; then setenv devtype mmc; setenv devnum 1;elif mmc dev 0; then setenv devtype mmc; setenv devnum 0;elif nvme dev 0; then setenv devtype nvme; setenv devnum 0;elif scsi dev 0; then setenv devtype scsi; setenv devnum 0;fi; 
scan_dev_for_boot=echo Scanning ${devtype} ${devnum}:${distro_bootpart}...; for prefix in ${boot_prefixes}; do run scan_dev_for_extlinux; run scan_dev_for_scripts; done;
scan_dev_for_boot_part=part list ${devtype} ${devnum} -bootable devplist; env exists devplist || setenv devplist 1; for distro_bootpart in ${devplist}; do if fstype ${devtype} ${devnum}:${distro_bootpart} bootfstype; then run scan_dev_for_boot; fi; done
scan_dev_for_extlinux=if test -e ${devtype} ${devnum}:${distro_bootpart} ${prefix}extlinux/extlinux.conf; then echo Found ${prefix}extlinux/extlinux.conf; run boot_extlinux; echo SCRIPT FAILED: continuing...; fi
scan_dev_for_scripts=for script in ${boot_scripts}; do if test -e ${devtype} ${devnum}:${distro_bootpart} ${prefix}${script}; then echo Found U-Boot script ${prefix}${script}; run boot_a_script; echo SCRIPT FAILED: continuing...; fi; done
scriptaddr=0x00500000
soc=rockchip
stderr=serial,vidconsole
stdout=serial,vidconsole
usb_boot=usb start; if usb dev ${devnum}; then setenv devtype usb; run scan_dev_for_boot_part; fi
vendor=rockchip

Environment size: 5488/32764 bytes
Phoenix# mmc list
mmc@fe2c0000: 0
mmc@fe2e0000: 1
Phoenix# bdinfo 
arch_number = 0x00000000
boot_params = 0x00000000
DRAM bank   = 0x00000000
-> start    = 0x00200000
-> size     = 0xEFE00000
baudrate    = 1500000 bps
TLB addr    = 0xEFFF0000
relocaddr   = 0xEDC5A000
reloc off   = 0xEDA5A000
irq_sp      = 0xEB9F7980
sp start    = 0xEB9F7980
Early malloc usage: 4180 / 80000
fdt_blob = 00000000eb9f7998
Phoenix# 

Phoenix# dm tree
 Addr        Class      Probed    Driver                   Name
-------------------------------------------------------------------------
 ebc5a970    root       [ + ]   root_driver                root_driver *
 ebc5aa80    rsa_mod_ex [   ]   mod_exp_sw                 |-- mod_exp_sw *
 ebc5ab70    firmware   [ + ]   firmware                   |-- firmware *
 ebc5ac60    scmi_agent [ + ]   scmi-over-smccc            |   `-- scmi *
 ebc5ad50    clk        [ + ]   scmi_clk                   |       `-- protocol@14 *
 ebc5ae00    firmware   [   ]   psci                       |-- psci *
 ebc5aef0    sysreset   [   ]   psci-sysreset              |   `-- psci-sysreset *
 ebc5afa0    clk        [ + ]   fixed_rate_clock           |-- xin24m *
 ebc5b0d0    usb        [   ]   ehci_generic               |-- usb@fc800000 *
 ebc5b180    usb        [   ]   ohci_generic               |-- usb@fc840000 *
 ebc5b230    usb        [   ]   ehci_generic               |-- usb@fc880000 *
 ebc5b2e0    usb        [   ]   ohci_generic               |-- usb@fc8c0000 *
 ebc5b3d0    syscon     [ + ]   rk3588_syscon              |-- syscon@fd58c000 *
 ebc5b480    syscon     [ + ]   rk3588_syscon              |-- syscon@fd5b0000 *
 ebc5b530    syscon     [   ]   rk3588_syscon              |-- syscon@fd5bc000 *
 ebc5b5e0    syscon     [   ]   rk3588_syscon              |-- syscon@fd5c4000 *
 ebc5b690    syscon     [   ]   syscon                     |-- syscon@fd5d0000 *
 ebc5b780    phy        [   ]   rockchip_usb2phy           |   `-- usb2-phy@0 *
 ebc5b830    phy        [   ]   rockchip_usb2phy_port      |       `-- otg-port *
 ebc5b8e0    syscon     [   ]   syscon                     |-- syscon@fd5d8000 *
 ebc5b990    phy        [   ]   rockchip_usb2phy           |   `-- usb2-phy@8000 *
 ebc5ba40    phy        [   ]   rockchip_usb2phy_port      |       `-- host-port *
 ebc5baf0    syscon     [   ]   syscon                     |-- syscon@fd5dc000 *
 ebc5bba0    phy        [   ]   rockchip_usb2phy           |   `-- usb2-phy@c000 *
 ebc5bc50    phy        [   ]   rockchip_usb2phy_port      |       `-- host-port *
 ebc5bd00    syscon     [ + ]   syscon                     |-- syscon@fd5f0000 *
 ebc5bdb0    clk        [ + ]   rockchip_rk3588_cru        |-- clock-controller@fd7c0000 *
 ebc5be60    sysreset   [   ]   rockchip_sysreset          |   |-- sysreset *
 ebc5bf70    reset      [ + ]   rockchip_reset             |   `-- reset *
 ebc5c0a0    ethernet   [ + ]   gmac_rockchip              |-- ethernet@fe1c0000 *
 ebc5c1e0    spi        [   ]   rockchip_sfc               |-- spi@fe2b0000 *
 ebc5c330    spi_flash  [   ]   spi_flash_std              |   `-- flash@1 *
 ebc5c460    blk        [   ]   mtd_blk                    |       `-- flash@1.blk *
 ebc5c5e0    mmc        [ + ]   rockchip_rk3288_dw_mshc    |-- mmc@fe2c0000 *
 ebc5c7d0    blk        [   ]   mmc_blk                    |   `-- mmc@fe2c0000.blk *
 ebc5c910    mmc        [ + ]   rockchip_sdhci_5_1         |-- mmc@fe2e0000 *
 ebc5cb00    blk        [   ]   mmc_blk                    |   `-- mmc@fe2e0000.blk *
 ebc5cc80    misc       [   ]   rockchip_hw_decompress     |-- decompress@fea80000 *
 ebc5cd70    serial     [   ]   ns16550_serial             |-- serial@feb50000 *
 ebc5ce80    adc        [ + ]   rockchip_saradc_v2         |-- saradc@fec10000 *
 ebc5cfb0    pinctrl    [ + ]   rockchip_rk3588_pinctrl    |-- pinctrl *
 ebc5d0a0    gpio       [   ]   gpio_rockchip              |   |-- gpio@fd8a0000 *
 ebc5d150    gpio       [   ]   gpio_rockchip              |   |-- gpio@fec20000 *
 ebc5d200    gpio       [ + ]   gpio_rockchip              |   |-- gpio@fec30000 *
 ebc5d2b0    gpio       [ + ]   gpio_rockchip              |   |-- gpio@fec40000 *
 ebc5d360    gpio       [ + ]   gpio_rockchip              |   |-- gpio@fec50000 *
 ebc5d450    pinconfig  [   ]   pinconfig                  |   |-- pcfg-pull-up *
 ebc5d500    pinconfig  [   ]   pinconfig                  |   |-- pcfg-pull-none *
 ebc5d5b0    pinconfig  [   ]   pinconfig                  |   |-- pcfg-pull-up-drv-level-2 *
 ebc5d660    pinconfig  [   ]   pinconfig                  |   |-- fspi *
 ebc5d710    pinconfig  [   ]   pinconfig                  |   |   `-- fspim0-pins *
 ebc5d7c0    pinconfig  [ + ]   pinconfig                  |   |-- gmac1 *
 ebc5d870    pinconfig  [ + ]   pinconfig                  |   |   |-- gmac1-miim *
 ebc5d920    pinconfig  [ + ]   pinconfig                  |   |   |-- gmac1-rx-bus2 *
 ebc5d9d0    pinconfig  [ + ]   pinconfig                  |   |   |-- gmac1-tx-bus2 *
 ebc5da80    pinconfig  [ + ]   pinconfig                  |   |   |-- gmac1-rgmii-clk *
 ebc5db30    pinconfig  [ + ]   pinconfig                  |   |   `-- gmac1-rgmii-bus *
 ebc5dbe0    pinconfig  [ + ]   pinconfig                  |   |-- sdmmc *
 ebc5dc90    pinconfig  [ + ]   pinconfig                  |   |   |-- sdmmc-bus4 *
 ebc5dd40    pinconfig  [ + ]   pinconfig                  |   |   |-- sdmmc-clk *
 ebc5ddf0    pinconfig  [ + ]   pinconfig                  |   |   |-- sdmmc-cmd *
 ebc5dea0    pinconfig  [ + ]   pinconfig                  |   |   |-- sdmmc-det *
 ebc5df50    pinconfig  [   ]   pinconfig                  |   |   |-- sdmmc-pwren *
 ebc5e000    pinconfig  [   ]   pinconfig                  |   |   `-- sata-reset *
 ebc5e0b0    pinconfig  [ + ]   pinconfig                  |   `-- gmac0 *
 ebc5e160    pinconfig  [ + ]   pinconfig                  |       |-- gmac0-miim *
 ebc5e210    pinconfig  [ + ]   pinconfig                  |       |-- gmac0-rx-bus2 *
 ebc5e2c0    pinconfig  [ + ]   pinconfig                  |       |-- gmac0-tx-bus2 *
 ebc5e370    pinconfig  [ + ]   pinconfig                  |       |-- gmac0-rgmii-clk *
 ebc5e420    pinconfig  [ + ]   pinconfig                  |       `-- gmac0-rgmii-bus *
 ebc5e4d0    syscon     [   ]   rk3588_syscon              |-- syscon@fd5b8000 *
 ebc5e580    syscon     [   ]   rk3588_syscon              |-- syscon@fd5c0000 *
 ebc5e630    syscon     [   ]   syscon                     |-- syscon@fd5d4000 *
 ebc5e6e0    phy        [   ]   rockchip_usb2phy           |   `-- usb2-phy@4000 *
 ebc5e790    phy        [   ]   rockchip_usb2phy_port      |       `-- otg-port *
 ebc5e880    pci        [   ]   pcie_dw_rockchip           |-- pcie@fe150000 *
 ebc5e930    pci        [   ]   pcie_dw_rockchip           |-- pcie@fe160000 *
 ebc5e9e0    ethernet   [ + ]   gmac_rockchip              |-- ethernet@fe1b0000 *
 ebc5eb20    crypto     [   ]   rockchip_crypto_v2         |-- crypto@fe370000 *
 ebc5ec10    rng        [ + ]   rockchip-rng               |-- rng@fe378000 *
 ebc5ecc0    phy        [   ]   rockchip_pcie3phy          |-- phy@fee80000 *
 ebc5edb0    simple_bus [ + ]   adc_key_bus                |-- adc-keys *
 ebc5eec0    key        [ + ]   adc_key                    |   `-- volumeup-key *
 ebc5f020    regulator  [ + ]   fixed regulator            |-- vcc5v0-sys *
 ebc5f150    regulator  [ + ]   fixed regulator            |-- vcc5v0-host *
 ebc5f280    regulator  [ + ]   fixed regulator            |-- vcc3v3-pcie30 *
 ebc5f3b0    firmware   [   ]   firmware                   `-- firmware *
Phoenix# 

```


















































