# uboot

## Saigetsux适配的G98 uboot日志

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





## chongshengB适配的G98 uboot日志

```shell
DDR b8ce94f14b cym 25/08/25-14:29:26,fwver: v1.20
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
DQ rds:h1 h3 l0 h4 h2 h5 h6 h1, h3 h3 l0 h3 h3 h1 h2 h3 

DQS rds:l0,h1 
CH1 RX Vref:29.3%, TX Vref:23.8%,23.8%
DQ rds:h2 h2 h1 h1 h2 h3 h3 h2, h3 h3 h4 l0 h3 h4 h1 l0 

DQS rds:l0,h3 
CH2 RX Vref:29.7%, TX Vref:22.8%,21.8%
DQ rds:h3 h2 h7 h1 h3 h2 l0 l0, h5 h2 l0 h3 h4 h1 h5 h3 

DQS rds:h1,h1 
CH3 RX Vref:30.1%, TX Vref:22.8%,21.8%
DQ rds:h6 h2 h5 h3 h2 h1 h1 h4, h2 h2 h3 h3 h1 h1 h1 h3 

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

U-Boot SPL 2026.07-CAI-gb635d43bca42-dirty (Jul 28 2026 - 09:46:54 +0000)
Trying to boot from SPI
## Checking hash(es) for config config-1 ... OK
## Checking hash(es) for Image atf-1 ... sha256+ OK
## Checking hash(es) for Image u-boot ... sha256+ OK
## Checking hash(es) for Image fdt-1 ... sha256+ OK
## Checking hash(es) for Image atf-2 ... sha256+ OK
## Checking hash(es) for Image atf-3 ... sha256+ OK
INFO:    Preloader serial: 2
NOTICE:  BL31: v2.3():v2.3-942-g98eaeb2f3:derrick.huang, fwver: v1.53
NOTICE:  BL31: Built : 12:10:56, Aug 25 2025
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
INFO:    Entry point address = 0x800000
INFO:    SPSR = 0x3c9


U-Boot 2026.07-CAI-gb635d43bca42-dirty (Jul 28 2026 - 09:46:54 +0000)

Model: BDY G98
SoC:   RK3588
DRAM:  16 GiB
PMIC:  RK806 (on=0x50, off=0x00)
ERROR: reserving fdt memory region failed (addr=10f000 size=100 flags=2): -22
Core:  828 devices, 35 uclasses, devicetree: separate
MMC:   mmc@fe2e0000: 2
Loading Environment from nowhere... OK
pcie_dw_rockchip pcie@fe160000: PCIe-4 Link Fail
In:    serial@feb50000
Out:   serial@feb50000
Err:   serial@feb50000
Model: BDY G98
SoC:   RK3588
Net:   eth3: eth_rtl8169, eth2: eth_rtl8169
Hit any key to stop autoboot: 0
=> <INTERRUPT>
=> bdinfo 
boot_params = 0x0000000000000000
DRAM bank   = 0x0000000000000000
-> start    = 0x0000000000200000
-> size     = 0x00000000efe00000
DRAM bank   = 0x0000000000000001
-> start    = 0x0000000100000000
-> size     = 0x00000002fc000000
DRAM bank   = 0x0000000000000002
-> start    = 0x00000003fc500000
-> size     = 0x0000000003a00000
DRAM bank   = 0x0000000000000003
-> start    = 0x00000004f0000000
-> size     = 0x0000000010000000
flashstart  = 0x0000000000000000
flashsize   = 0x0000000000000000
flashoffset = 0x0000000000000000
baudrate    = 1500000 bps
relocaddr   = 0x00000000efee4000
reloc off   = 0x00000000ef6e4000
Build       = 64-bit
current eth = eth_rtl8169
eth3addr    = 6e:e8:97:22:5b:24
IP addr     = <NULL>
fdt_blob    = 0x00000000edbd0520
lmb_dump_all:
 memory.count = 0x4
 memory[0]	[0x200000-0xefffffff], 0xefe00000 bytes, flags: none
 memory[1]	[0x100000000-0x3fbffffff], 0x2fc000000 bytes, flags: none
 memory[2]	[0x3fc500000-0x3ffefffff], 0x3a00000 bytes, flags: none
 memory[3]	[0x4f0000000-0x4ffffffff], 0x10000000 bytes, flags: none
 reserved.count = 0x5
 reserved[0]	[0xecbcd000-0xecbcffff], 0x3000 bytes, flags: no-notify, no-overwrite
 reserved[1]	[0xecbd0510-0xefffffff], 0x342faf0 bytes, flags: no-overwrite
 reserved[2]	[0x100000000-0x3fbffffff], 0x2fc000000 bytes, flags: no-overwrite
 reserved[3]	[0x3fc500000-0x3ffefffff], 0x3a00000 bytes, flags: no-overwrite
 reserved[4]	[0x4f0000000-0x4ffffffff], 0x10000000 bytes, flags: no-overwrite
devicetree  = separate
serial addr = 0x00000000feb50000
 width      = 0x0000000000000004
 shift      = 0x0000000000000002
 offset     = 0x0000000000000000
 clock      = 0x00000000016e3600
arch_number = 0x0000000000000000
TLB addr    = 0x00000000effe0000
irq_sp      = 0x00000000edbd0510
sp start    = 0x00000000edbd0510
Early malloc usage: 3190 / 10000
=> dm tree
 Class     Seq    Probed  Driver                Name
-----------------------------------------------------------
 root          0  [ + ]   root_driver           root_driver
 rsa_mod_ex    0  [   ]   mod_exp_sw            |-- mod_exp_sw
 firmware      0  [   ]   psci                  |-- psci
 clk           0  [   ]   fixed_clock           |-- clock-0
 clk           1  [   ]   fixed_clock           |-- clock-1
 clk           2  [   ]   fixed_clock           |-- clock-2
 nop           0  [   ]   dwc3-generic-wrapper  |-- usb@fc000000
 usb_gadget    0  [   ]   dwc3-generic-periphe  |   `-- usb@fc000000
 usb           0  [   ]   ehci_generic          |-- usb@fc800000
 usb           1  [   ]   ohci_generic          |-- usb@fc840000
 usb           2  [   ]   ehci_generic          |-- usb@fc880000
 usb           3  [   ]   ohci_generic          |-- usb@fc8c0000
 syscon        0  [   ]   rk3588_syscon         |-- syscon@fd58a000
 syscon        1  [ + ]   rk3588_syscon         |-- syscon@fd58c000
 syscon        2  [   ]   syscon                |-- syscon@fd5e8000
 syscon        3  [   ]   syscon                |-- syscon@fd5ec000
 syscon        4  [   ]   rk3588_syscon         |-- syscon@fd5a4000
 syscon        5  [   ]   syscon                |-- syscon@fd5a6000
 syscon        6  [   ]   syscon                |-- syscon@fd5a8000
 syscon        7  [   ]   syscon                |-- syscon@fd5ac000
 syscon        8  [ + ]   rk3588_syscon         |-- syscon@fd5b0000
 syscon        9  [   ]   syscon                |-- syscon@fd5b4000
 syscon       10  [   ]   syscon                |-- syscon@fd5b5000
 syscon       11  [   ]   syscon                |-- syscon@fd5bc000
 syscon       12  [ + ]   syscon                |-- syscon@fd5c4000
 syscon       13  [   ]   syscon                |-- syscon@fd5c8000
 syscon       14  [   ]   syscon                |-- syscon@fd5d0000
 nop           1  [   ]   rockchip_usb2phy      |   `-- usb2phy@0
 phy           0  [   ]   rockchip_usb2phy_por  |       |-- otg-port
 clk           3  [   ]   rockchip_usb2phy_clo  |       `-- usb480m_phy0
 syscon       15  [   ]   syscon                |-- syscon@fd5d8000
 nop           2  [   ]   rockchip_usb2phy      |   `-- usb2phy@8000
 phy           1  [   ]   rockchip_usb2phy_por  |       |-- host-port
 clk           4  [   ]   rockchip_usb2phy_clo  |       `-- usb480m_phy2
 syscon       16  [   ]   syscon                |-- syscon@fd5dc000
 nop           3  [   ]   rockchip_usb2phy      |   `-- usb2phy@c000
 phy           2  [   ]   rockchip_usb2phy_por  |       |-- host-port
 clk           5  [   ]   rockchip_usb2phy_clo  |       `-- usb480m_phy3
 syscon       17  [   ]   syscon                |-- syscon@fd5e0000
 syscon       18  [ + ]   syscon                |-- syscon@fd5f0000
 clk           6  [ + ]   rockchip_rk3588_cru   |-- clock-controller@fd7c0000
 sysreset      0  [   ]   rockchip_sysreset     |   |-- sysreset
 reset         0  [ + ]   rockchip_reset        |   `-- reset
 i2c           0  [   ]   rockchip_rk3066_i2c   |-- i2c@fd880000
 syscon       19  [   ]   rk3588_syscon         |-- power-management@fd8d8000
 syscon       20  [   ]   syscon                |-- qos@fdf35000
 syscon       21  [   ]   syscon                |-- qos@fdf35200
 syscon       22  [   ]   syscon                |-- qos@fdf35400
 syscon       23  [   ]   syscon                |-- qos@fdf35600
 syscon       24  [   ]   syscon                |-- qos@fdf36000
 syscon       25  [   ]   syscon                |-- qos@fdf39000
 syscon       26  [   ]   syscon                |-- qos@fdf3d800
 syscon       27  [   ]   syscon                |-- qos@fdf3e000
 syscon       28  [   ]   syscon                |-- qos@fdf3e200
 syscon       29  [   ]   syscon                |-- qos@fdf3e400
 syscon       30  [   ]   syscon                |-- qos@fdf3e600
 syscon       31  [   ]   syscon                |-- qos@fdf40000
 syscon       32  [   ]   syscon                |-- qos@fdf40200
 syscon       33  [   ]   syscon                |-- qos@fdf40400
 syscon       34  [   ]   syscon                |-- qos@fdf40500
 syscon       35  [   ]   syscon                |-- qos@fdf40600
 syscon       36  [   ]   syscon                |-- qos@fdf40800
 syscon       37  [   ]   syscon                |-- qos@fdf41000
 syscon       38  [   ]   syscon                |-- qos@fdf41100
 syscon       39  [   ]   syscon                |-- qos@fdf60000
 syscon       40  [   ]   syscon                |-- qos@fdf60200
 syscon       41  [   ]   syscon                |-- qos@fdf60400
 syscon       42  [   ]   syscon                |-- qos@fdf61000
 syscon       43  [   ]   syscon                |-- qos@fdf61200
 syscon       44  [   ]   syscon                |-- qos@fdf61400
 syscon       45  [   ]   syscon                |-- qos@fdf62000
 syscon       46  [   ]   syscon                |-- qos@fdf63000
 syscon       47  [   ]   syscon                |-- qos@fdf64000
 syscon       48  [   ]   syscon                |-- qos@fdf66000
 syscon       49  [   ]   syscon                |-- qos@fdf66200
 syscon       50  [   ]   syscon                |-- qos@fdf66400
 syscon       51  [   ]   syscon                |-- qos@fdf66600
 syscon       52  [   ]   syscon                |-- qos@fdf66800
 syscon       53  [   ]   syscon                |-- qos@fdf66a00
 syscon       54  [   ]   syscon                |-- qos@fdf66c00
 syscon       55  [   ]   syscon                |-- qos@fdf66e00
 syscon       56  [   ]   syscon                |-- qos@fdf67000
 syscon       57  [   ]   syscon                |-- qos@fdf67200
 syscon       58  [   ]   syscon                |-- qos@fdf70000
 syscon       59  [   ]   syscon                |-- qos@fdf71000
 syscon       60  [   ]   syscon                |-- qos@fdf72000
 syscon       61  [   ]   syscon                |-- qos@fdf72200
 syscon       62  [   ]   syscon                |-- qos@fdf72400
 syscon       63  [   ]   syscon                |-- qos@fdf80000
 syscon       64  [   ]   syscon                |-- qos@fdf81000
 syscon       65  [   ]   syscon                |-- qos@fdf81200
 syscon       66  [   ]   syscon                |-- qos@fdf82000
 syscon       67  [   ]   syscon                |-- qos@fdf82200
 pci           0  [ + ]   pcie_dw_rockchip      |-- pcie@fe180000
 pci           1  [ + ]   pci_bridge_drv        |   `-- pci_0:0.0
 ethernet      3  [ + ]   eth_rtl8169           |       `-- eth_rtl8169
 bootdev       1  [   ]   eth_bootdev           |           `-- eth_rtl8169.bootdev
 ahci          0  [   ]   dwc_ahci              |-- sata@fe210000
 scsi          0  [   ]   ahci_scsi             |   `-- ahci_scsi
 spi           5  [   ]   rockchip_sfc          |-- spi@fe2b0000
 spi_flash     0  [   ]   jedec_spi_nor         |   `-- flash@0
 mmc           2  [ + ]   rockchip_sdhci_5_1    |-- mmc@fe2e0000
 blk           0  [   ]   mmc_blk               |   |-- mmc@fe2e0000.blk
 bootdev       0  [   ]   mmc_bootdev           |   `-- mmc@fe2e0000.bootdev
 rng           0  [   ]   rockchip-rng          |-- rng@fe378000
 i2c           2  [   ]   rockchip_rk3066_i2c   |-- i2c@feaa0000
 i2c           3  [   ]   rockchip_rk3066_i2c   |-- i2c@feab0000
 i2c           4  [   ]   rockchip_rk3066_i2c   |-- i2c@feac0000
 spi           2  [ + ]   rockchip_rk3288_spi   |-- spi@feb20000
 pmic          0  [ + ]   rockchip_rk805        |   `-- pmic@0
 sysreset      1  [   ]   rk8xx_sysreset        |       |-- rk8xx_sysreset
 regulator     0  [ + ]   rk8xx_buck            |       |-- dcdc-reg1
 regulator     1  [ + ]   rk8xx_buck            |       |-- dcdc-reg2
 regulator     2  [ + ]   rk8xx_buck            |       |-- dcdc-reg3
 regulator     3  [ + ]   rk8xx_buck            |       |-- dcdc-reg4
 regulator     4  [ + ]   rk8xx_buck            |       |-- dcdc-reg5
 regulator     5  [ + ]   rk8xx_buck            |       |-- dcdc-reg6
 regulator     6  [ + ]   rk8xx_buck            |       |-- dcdc-reg7
 regulator     7  [ + ]   rk8xx_buck            |       |-- dcdc-reg8
 regulator     8  [ + ]   rk8xx_buck            |       |-- dcdc-reg9
 regulator     9  [ + ]   rk8xx_buck            |       |-- dcdc-reg10
 regulator    10  [ + ]   rk8xx_pldo            |       |-- pldo-reg1
 regulator    11  [ + ]   rk8xx_pldo            |       |-- pldo-reg2
 regulator    12  [ + ]   rk8xx_pldo            |       |-- pldo-reg3
 regulator    13  [ + ]   rk8xx_pldo            |       |-- pldo-reg4
 regulator    14  [ + ]   rk8xx_pldo            |       |-- pldo-reg5
 regulator    15  [ + ]   rk8xx_pldo            |       |-- pldo-reg6
 regulator    16  [ + ]   rk8xx_nldo            |       |-- nldo-reg1
 regulator    17  [ + ]   rk8xx_nldo            |       |-- nldo-reg2
 regulator    18  [ + ]   rk8xx_nldo            |       |-- nldo-reg3
 regulator    19  [ + ]   rk8xx_nldo            |       |-- nldo-reg4
 regulator    20  [ + ]   rk8xx_nldo            |       `-- nldo-reg5
 serial        2  [ + ]   ns16550_serial        |-- serial@feb50000
 adc           0  [ + ]   rockchip_saradc       |-- adc@fec10000
 i2c           6  [   ]   rockchip_rk3066_i2c   |-- i2c@fec80000
 misc          0  [ + ]   rockchip_otp          |-- efuse@fecc0000
 phy           3  [   ]   rockchip_udphy        |-- phy@fed80000
 phy           4  [   ]   naneng-combphy        |-- phy@fee00000
 phy           5  [ + ]   naneng-combphy        |-- phy@fee20000
 pinctrl       0  [ + ]   rockchip_rk3588_pinc  |-- pinctrl
 gpio          0  [   ]   rockchip_gpio_bank    |   |-- gpio@fd8a0000
 gpio          1  [ + ]   rockchip_gpio_bank    |   |-- gpio@fec20000
 gpio          2  [   ]   rockchip_gpio_bank    |   |-- gpio@fec30000
 gpio          3  [ + ]   rockchip_gpio_bank    |   |-- gpio@fec40000
 gpio          4  [ + ]   rockchip_gpio_bank    |   |-- gpio@fec50000
 pinconfig     0  [   ]   pinconfig             |   |-- pcfg-pull-up
 pinconfig     1  [   ]   pinconfig             |   |-- pcfg-pull-down
 pinconfig     2  [   ]   pinconfig             |   |-- pcfg-pull-none
 pinconfig     3  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-0
 pinconfig     4  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-1
 pinconfig     5  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-2
 pinconfig     6  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-3
 pinconfig     7  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-4
 pinconfig     8  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-5
 pinconfig     9  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-6
 pinconfig    10  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-7
 pinconfig    11  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-8
 pinconfig    12  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-9
 pinconfig    13  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-10
 pinconfig    14  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-11
 pinconfig    15  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-12
 pinconfig    16  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-13
 pinconfig    17  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-14
 pinconfig    18  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-15
 pinconfig    19  [   ]   pinconfig             |   |-- pcfg-pull-up-drv-level-0
 pinconfig    20  [   ]   pinconfig             |   |-- pcfg-pull-up-drv-level-1
 pinconfig    21  [   ]   pinconfig             |   |-- pcfg-pull-up-drv-level-2
 pinconfig    22  [   ]   pinconfig             |   |-- pcfg-pull-up-drv-level-3
 pinconfig    23  [   ]   pinconfig             |   |-- pcfg-pull-up-drv-level-4
 pinconfig    24  [   ]   pinconfig             |   |-- pcfg-pull-up-drv-level-5
 pinconfig    25  [   ]   pinconfig             |   |-- pcfg-pull-up-drv-level-6
 pinconfig    26  [   ]   pinconfig             |   |-- pcfg-pull-up-drv-level-7
 pinconfig    27  [   ]   pinconfig             |   |-- pcfg-pull-up-drv-level-8
 pinconfig    28  [   ]   pinconfig             |   |-- pcfg-pull-up-drv-level-9
 pinconfig    29  [   ]   pinconfig             |   |-- pcfg-pull-up-drv-level-10
 pinconfig    30  [   ]   pinconfig             |   |-- pcfg-pull-up-drv-level-11
 pinconfig    31  [   ]   pinconfig             |   |-- pcfg-pull-up-drv-level-12
 pinconfig    32  [   ]   pinconfig             |   |-- pcfg-pull-up-drv-level-13
 pinconfig    33  [   ]   pinconfig             |   |-- pcfg-pull-up-drv-level-14
 pinconfig    34  [   ]   pinconfig             |   |-- pcfg-pull-up-drv-level-15
 pinconfig    35  [   ]   pinconfig             |   |-- pcfg-pull-down-drv-level-0
 pinconfig    36  [   ]   pinconfig             |   |-- pcfg-pull-down-drv-level-1
 pinconfig    37  [   ]   pinconfig             |   |-- pcfg-pull-down-drv-level-2
 pinconfig    38  [   ]   pinconfig             |   |-- pcfg-pull-down-drv-level-3
 pinconfig    39  [   ]   pinconfig             |   |-- pcfg-pull-down-drv-level-4
 pinconfig    40  [   ]   pinconfig             |   |-- pcfg-pull-down-drv-level-5
 pinconfig    41  [   ]   pinconfig             |   |-- pcfg-pull-down-drv-level-6
 pinconfig    42  [   ]   pinconfig             |   |-- pcfg-pull-down-drv-level-7
 pinconfig    43  [   ]   pinconfig             |   |-- pcfg-pull-down-drv-level-8
 pinconfig    44  [   ]   pinconfig             |   |-- pcfg-pull-down-drv-level-9
 pinconfig    45  [   ]   pinconfig             |   |-- pcfg-pull-down-drv-level-10
 pinconfig    46  [   ]   pinconfig             |   |-- pcfg-pull-down-drv-level-11
 pinconfig    47  [   ]   pinconfig             |   |-- pcfg-pull-down-drv-level-12
 pinconfig    48  [   ]   pinconfig             |   |-- pcfg-pull-down-drv-level-13
 pinconfig    49  [   ]   pinconfig             |   |-- pcfg-pull-down-drv-level-14
 pinconfig    50  [   ]   pinconfig             |   |-- pcfg-pull-down-drv-level-15
 pinconfig    51  [   ]   pinconfig             |   |-- pcfg-pull-up-smt
 pinconfig    52  [   ]   pinconfig             |   |-- pcfg-pull-down-smt
 pinconfig    53  [   ]   pinconfig             |   |-- pcfg-pull-none-smt
 pinconfig    54  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-0-smt
 pinconfig    55  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-1-smt
 pinconfig    56  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-2-smt
 pinconfig    57  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-3-smt
 pinconfig    58  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-4-smt
 pinconfig    59  [   ]   pinconfig             |   |-- pcfg-pull-none-drv-level-5-smt
 pinconfig    60  [   ]   pinconfig             |   |-- pcfg-output-high
 pinconfig    61  [   ]   pinconfig             |   |-- pcfg-output-low
 pinconfig    62  [   ]   pinconfig             |   |-- auddsm
 pinconfig    63  [   ]   pinconfig             |   |   `-- auddsm-pins
 pinconfig    64  [   ]   pinconfig             |   |-- bt1120
 pinconfig    65  [   ]   pinconfig             |   |   `-- bt1120-pins
 pinconfig    66  [   ]   pinconfig             |   |-- can0
 pinconfig    67  [   ]   pinconfig             |   |   |-- can0m0-pins
 pinconfig    68  [   ]   pinconfig             |   |   `-- can0m1-pins
 pinconfig    69  [   ]   pinconfig             |   |-- can1
 pinconfig    70  [   ]   pinconfig             |   |   |-- can1m0-pins
 pinconfig    71  [   ]   pinconfig             |   |   `-- can1m1-pins
 pinconfig    72  [   ]   pinconfig             |   |-- can2
 pinconfig    73  [   ]   pinconfig             |   |   |-- can2m0-pins
 pinconfig    74  [   ]   pinconfig             |   |   `-- can2m1-pins
 pinconfig    75  [   ]   pinconfig             |   |-- cif
 pinconfig    76  [   ]   pinconfig             |   |   |-- cif-clk
 pinconfig    77  [   ]   pinconfig             |   |   |-- cif-dvp-clk
 pinconfig    78  [   ]   pinconfig             |   |   |-- cif-dvp-bus16
 pinconfig    79  [   ]   pinconfig             |   |   `-- cif-dvp-bus8
 pinconfig    80  [   ]   pinconfig             |   |-- clk32k
 pinconfig    81  [   ]   pinconfig             |   |   |-- clk32k-in
 pinconfig    82  [   ]   pinconfig             |   |   |-- clk32k-out0
 pinconfig    83  [   ]   pinconfig             |   |   `-- clk32k-out1
 pinconfig    84  [   ]   pinconfig             |   |-- cpu
 pinconfig    85  [   ]   pinconfig             |   |   `-- cpu-pins
 pinconfig    86  [   ]   pinconfig             |   |-- ddrphych0
 pinconfig    87  [   ]   pinconfig             |   |   `-- ddrphych0-pins
 pinconfig    88  [   ]   pinconfig             |   |-- ddrphych1
 pinconfig    89  [   ]   pinconfig             |   |   `-- ddrphych1-pins
 pinconfig    90  [   ]   pinconfig             |   |-- ddrphych2
 pinconfig    91  [   ]   pinconfig             |   |   `-- ddrphych2-pins
 pinconfig    92  [   ]   pinconfig             |   |-- ddrphych3
 pinconfig    93  [   ]   pinconfig             |   |   `-- ddrphych3-pins
 pinconfig    94  [   ]   pinconfig             |   |-- dp0
 pinconfig    95  [   ]   pinconfig             |   |   |-- dp0m0-pins
 pinconfig    96  [   ]   pinconfig             |   |   |-- dp0m1-pins
 pinconfig    97  [   ]   pinconfig             |   |   `-- dp0m2-pins
 pinconfig    98  [   ]   pinconfig             |   |-- dp1
 pinconfig    99  [   ]   pinconfig             |   |   |-- dp1m0-pins
 pinconfig   100  [   ]   pinconfig             |   |   |-- dp1m1-pins
 pinconfig   101  [   ]   pinconfig             |   |   `-- dp1m2-pins
 pinconfig   102  [ + ]   pinconfig             |   |-- emmc
 pinconfig   103  [ + ]   pinconfig             |   |   |-- emmc-rstnout
 pinconfig   104  [ + ]   pinconfig             |   |   |-- emmc-bus8
 pinconfig   105  [ + ]   pinconfig             |   |   |-- emmc-clk
 pinconfig   106  [ + ]   pinconfig             |   |   |-- emmc-cmd
 pinconfig   107  [ + ]   pinconfig             |   |   `-- emmc-data-strobe
 pinconfig   108  [   ]   pinconfig             |   |-- eth1
 pinconfig   109  [   ]   pinconfig             |   |   `-- eth1-pins
 pinconfig   110  [   ]   pinconfig             |   |-- fspi
 pinconfig   111  [   ]   pinconfig             |   |   |-- fspim0-pins
 pinconfig   112  [   ]   pinconfig             |   |   |-- fspim0-cs1
 pinconfig   113  [   ]   pinconfig             |   |   |-- fspim2-pins
 pinconfig   114  [   ]   pinconfig             |   |   |-- fspim2-cs1
 pinconfig   115  [   ]   pinconfig             |   |   |-- fspim1-pins
 pinconfig   116  [   ]   pinconfig             |   |   `-- fspim1-cs1
 pinconfig   117  [   ]   pinconfig             |   |-- gmac1
 pinconfig   118  [   ]   pinconfig             |   |   |-- gmac1-miim
 pinconfig   119  [   ]   pinconfig             |   |   |-- gmac1-clkinout
 pinconfig   120  [   ]   pinconfig             |   |   |-- gmac1-rx-bus2
 pinconfig   121  [   ]   pinconfig             |   |   |-- gmac1-tx-bus2
 pinconfig   122  [   ]   pinconfig             |   |   |-- gmac1-rgmii-clk
 pinconfig   123  [   ]   pinconfig             |   |   |-- gmac1-rgmii-bus
 pinconfig   124  [   ]   pinconfig             |   |   |-- gmac1-ppsclk
 pinconfig   125  [   ]   pinconfig             |   |   |-- gmac1-ppstrig
 pinconfig   126  [   ]   pinconfig             |   |   |-- gmac1-ptp-ref-clk
 pinconfig   127  [   ]   pinconfig             |   |   `-- gmac1-txer
 pinconfig   128  [   ]   pinconfig             |   |-- gpu
 pinconfig   129  [   ]   pinconfig             |   |   `-- gpu-pins
 pinconfig   130  [   ]   pinconfig             |   |-- hdmi
 pinconfig   131  [   ]   pinconfig             |   |   |-- hdmim0-rx-cec
 pinconfig   132  [   ]   pinconfig             |   |   |-- hdmim0-rx-hpdin
 pinconfig   133  [   ]   pinconfig             |   |   |-- hdmim0-rx-scl
 pinconfig   134  [   ]   pinconfig             |   |   |-- hdmim0-rx-sda
 pinconfig   135  [   ]   pinconfig             |   |   |-- hdmim0-tx0-cec
 pinconfig   136  [   ]   pinconfig             |   |   |-- hdmim0-tx0-hpd
 pinconfig   137  [   ]   pinconfig             |   |   |-- hdmim0-tx0-scl
 pinconfig   138  [   ]   pinconfig             |   |   |-- hdmim0-tx0-sda
 pinconfig   139  [   ]   pinconfig             |   |   |-- hdmim0-tx1-hpd
 pinconfig   140  [   ]   pinconfig             |   |   |-- hdmim1-rx-cec
 pinconfig   141  [   ]   pinconfig             |   |   |-- hdmim1-rx-hpdin
 pinconfig   142  [   ]   pinconfig             |   |   |-- hdmim1-rx-scl
 pinconfig   143  [   ]   pinconfig             |   |   |-- hdmim1-rx-sda
 pinconfig   144  [   ]   pinconfig             |   |   |-- hdmim1-tx0-cec
 pinconfig   145  [   ]   pinconfig             |   |   |-- hdmim1-tx0-hpd
 pinconfig   146  [   ]   pinconfig             |   |   |-- hdmim1-tx0-scl
 pinconfig   147  [   ]   pinconfig             |   |   |-- hdmim1-tx0-sda
 pinconfig   148  [   ]   pinconfig             |   |   |-- hdmim1-tx1-cec
 pinconfig   149  [   ]   pinconfig             |   |   |-- hdmim1-tx1-hpd
 pinconfig   150  [   ]   pinconfig             |   |   |-- hdmim1-tx1-scl
 pinconfig   151  [   ]   pinconfig             |   |   |-- hdmim1-tx1-sda
 pinconfig   152  [   ]   pinconfig             |   |   |-- hdmim2-rx-cec
 pinconfig   153  [   ]   pinconfig             |   |   |-- hdmim2-rx-hpdin
 pinconfig   154  [   ]   pinconfig             |   |   |-- hdmim2-rx-scl
 pinconfig   155  [   ]   pinconfig             |   |   |-- hdmim2-rx-sda
 pinconfig   156  [   ]   pinconfig             |   |   |-- hdmim2-tx0-scl
 pinconfig   157  [   ]   pinconfig             |   |   |-- hdmim2-tx0-sda
 pinconfig   158  [   ]   pinconfig             |   |   |-- hdmim2-tx1-cec
 pinconfig   159  [   ]   pinconfig             |   |   |-- hdmim2-tx1-scl
 pinconfig   160  [   ]   pinconfig             |   |   |-- hdmim2-tx1-sda
 pinconfig   161  [   ]   pinconfig             |   |   |-- hdmi-debug0
 pinconfig   162  [   ]   pinconfig             |   |   |-- hdmi-debug1
 pinconfig   163  [   ]   pinconfig             |   |   |-- hdmi-debug2
 pinconfig   164  [   ]   pinconfig             |   |   |-- hdmi-debug3
 pinconfig   165  [   ]   pinconfig             |   |   |-- hdmi-debug4
 pinconfig   166  [   ]   pinconfig             |   |   |-- hdmi-debug5
 pinconfig   167  [   ]   pinconfig             |   |   |-- hdmi-debug6
 pinconfig   168  [   ]   pinconfig             |   |   |-- hdmim0-tx1-cec
 pinconfig   169  [   ]   pinconfig             |   |   |-- hdmim0-tx1-scl
 pinconfig   170  [   ]   pinconfig             |   |   `-- hdmim0-tx1-sda
 pinconfig   171  [   ]   pinconfig             |   |-- i2c0
 pinconfig   172  [   ]   pinconfig             |   |   |-- i2c0m0-xfer
 pinconfig   173  [   ]   pinconfig             |   |   |-- i2c0m2-xfer
 pinconfig   174  [   ]   pinconfig             |   |   `-- i2c0m1-xfer
 pinconfig   175  [   ]   pinconfig             |   |-- i2c1
 pinconfig   176  [   ]   pinconfig             |   |   |-- i2c1m0-xfer
 pinconfig   177  [   ]   pinconfig             |   |   |-- i2c1m1-xfer
 pinconfig   178  [   ]   pinconfig             |   |   |-- i2c1m2-xfer
 pinconfig   179  [   ]   pinconfig             |   |   |-- i2c1m3-xfer
 pinconfig   180  [   ]   pinconfig             |   |   `-- i2c1m4-xfer
 pinconfig   181  [   ]   pinconfig             |   |-- i2c2
 pinconfig   182  [   ]   pinconfig             |   |   |-- i2c2m0-xfer
 pinconfig   183  [   ]   pinconfig             |   |   |-- i2c2m2-xfer
 pinconfig   184  [   ]   pinconfig             |   |   |-- i2c2m3-xfer
 pinconfig   185  [   ]   pinconfig             |   |   |-- i2c2m4-xfer
 pinconfig   186  [   ]   pinconfig             |   |   `-- i2c2m1-xfer
 pinconfig   187  [   ]   pinconfig             |   |-- i2c3
 pinconfig   188  [   ]   pinconfig             |   |   |-- i2c3m0-xfer
 pinconfig   189  [   ]   pinconfig             |   |   |-- i2c3m1-xfer
 pinconfig   190  [   ]   pinconfig             |   |   |-- i2c3m2-xfer
 pinconfig   191  [   ]   pinconfig             |   |   |-- i2c3m4-xfer
 pinconfig   192  [   ]   pinconfig             |   |   `-- i2c3m3-xfer
 pinconfig   193  [   ]   pinconfig             |   |-- i2c4
 pinconfig   194  [   ]   pinconfig             |   |   |-- i2c4m0-xfer
 pinconfig   195  [   ]   pinconfig             |   |   |-- i2c4m2-xfer
 pinconfig   196  [   ]   pinconfig             |   |   |-- i2c4m3-xfer
 pinconfig   197  [   ]   pinconfig             |   |   |-- i2c4m4-xfer
 pinconfig   198  [   ]   pinconfig             |   |   `-- i2c4m1-xfer
 pinconfig   199  [   ]   pinconfig             |   |-- i2c5
 pinconfig   200  [   ]   pinconfig             |   |   |-- i2c5m0-xfer
 pinconfig   201  [   ]   pinconfig             |   |   |-- i2c5m1-xfer
 pinconfig   202  [   ]   pinconfig             |   |   |-- i2c5m2-xfer
 pinconfig   203  [   ]   pinconfig             |   |   |-- i2c5m3-xfer
 pinconfig   204  [   ]   pinconfig             |   |   `-- i2c5m4-xfer
 pinconfig   205  [   ]   pinconfig             |   |-- i2c6
 pinconfig   206  [   ]   pinconfig             |   |   |-- i2c6m0-xfer
 pinconfig   207  [   ]   pinconfig             |   |   |-- i2c6m1-xfer
 pinconfig   208  [   ]   pinconfig             |   |   |-- i2c6m3-xfer
 pinconfig   209  [   ]   pinconfig             |   |   |-- i2c6m4-xfer
 pinconfig   210  [   ]   pinconfig             |   |   `-- i2c6m2-xfer
 pinconfig   211  [   ]   pinconfig             |   |-- i2c7
 pinconfig   212  [   ]   pinconfig             |   |   |-- i2c7m0-xfer
 pinconfig   213  [   ]   pinconfig             |   |   |-- i2c7m2-xfer
 pinconfig   214  [   ]   pinconfig             |   |   |-- i2c7m3-xfer
 pinconfig   215  [   ]   pinconfig             |   |   `-- i2c7m1-xfer
 pinconfig   216  [   ]   pinconfig             |   |-- i2c8
 pinconfig   217  [   ]   pinconfig             |   |   |-- i2c8m0-xfer
 pinconfig   218  [   ]   pinconfig             |   |   |-- i2c8m2-xfer
 pinconfig   219  [   ]   pinconfig             |   |   |-- i2c8m3-xfer
 pinconfig   220  [   ]   pinconfig             |   |   |-- i2c8m4-xfer
 pinconfig   221  [   ]   pinconfig             |   |   `-- i2c8m1-xfer
 pinconfig   222  [   ]   pinconfig             |   |-- i2s0
 pinconfig   223  [   ]   pinconfig             |   |   |-- i2s0-lrck
 pinconfig   224  [   ]   pinconfig             |   |   |-- i2s0-mclk
 pinconfig   225  [   ]   pinconfig             |   |   |-- i2s0-sclk
 pinconfig   226  [   ]   pinconfig             |   |   |-- i2s0-sdi0
 pinconfig   227  [   ]   pinconfig             |   |   |-- i2s0-sdi1
 pinconfig   228  [   ]   pinconfig             |   |   |-- i2s0-sdi2
 pinconfig   229  [   ]   pinconfig             |   |   |-- i2s0-sdi3
 pinconfig   230  [   ]   pinconfig             |   |   |-- i2s0-sdo0
 pinconfig   231  [   ]   pinconfig             |   |   |-- i2s0-sdo1
 pinconfig   232  [   ]   pinconfig             |   |   |-- i2s0-sdo2
 pinconfig   233  [   ]   pinconfig             |   |   `-- i2s0-sdo3
 pinconfig   234  [   ]   pinconfig             |   |-- i2s1
 pinconfig   235  [   ]   pinconfig             |   |   |-- i2s1m0-lrck
 pinconfig   236  [   ]   pinconfig             |   |   |-- i2s1m0-mclk
 pinconfig   237  [   ]   pinconfig             |   |   |-- i2s1m0-sclk
 pinconfig   238  [   ]   pinconfig             |   |   |-- i2s1m0-sdi0
 pinconfig   239  [   ]   pinconfig             |   |   |-- i2s1m0-sdi1
 pinconfig   240  [   ]   pinconfig             |   |   |-- i2s1m0-sdi2
 pinconfig   241  [   ]   pinconfig             |   |   |-- i2s1m0-sdi3
 pinconfig   242  [   ]   pinconfig             |   |   |-- i2s1m0-sdo0
 pinconfig   243  [   ]   pinconfig             |   |   |-- i2s1m0-sdo1
 pinconfig   244  [   ]   pinconfig             |   |   |-- i2s1m0-sdo2
 pinconfig   245  [   ]   pinconfig             |   |   |-- i2s1m0-sdo3
 pinconfig   246  [   ]   pinconfig             |   |   |-- i2s1m1-lrck
 pinconfig   247  [   ]   pinconfig             |   |   |-- i2s1m1-mclk
 pinconfig   248  [   ]   pinconfig             |   |   |-- i2s1m1-sclk
 pinconfig   249  [   ]   pinconfig             |   |   |-- i2s1m1-sdi0
 pinconfig   250  [   ]   pinconfig             |   |   |-- i2s1m1-sdi1
 pinconfig   251  [   ]   pinconfig             |   |   |-- i2s1m1-sdi2
 pinconfig   252  [   ]   pinconfig             |   |   |-- i2s1m1-sdi3
 pinconfig   253  [   ]   pinconfig             |   |   |-- i2s1m1-sdo0
 pinconfig   254  [   ]   pinconfig             |   |   |-- i2s1m1-sdo1
 pinconfig   255  [   ]   pinconfig             |   |   |-- i2s1m1-sdo2
 pinconfig   256  [   ]   pinconfig             |   |   `-- i2s1m1-sdo3
 pinconfig   257  [   ]   pinconfig             |   |-- i2s2
 pinconfig   258  [   ]   pinconfig             |   |   |-- i2s2m0-lrck
 pinconfig   259  [   ]   pinconfig             |   |   |-- i2s2m0-mclk
 pinconfig   260  [   ]   pinconfig             |   |   |-- i2s2m0-sclk
 pinconfig   261  [   ]   pinconfig             |   |   |-- i2s2m0-sdi
 pinconfig   262  [   ]   pinconfig             |   |   |-- i2s2m0-sdo
 pinconfig   263  [   ]   pinconfig             |   |   |-- i2s2m1-lrck
 pinconfig   264  [   ]   pinconfig             |   |   |-- i2s2m1-mclk
 pinconfig   265  [   ]   pinconfig             |   |   |-- i2s2m1-sclk
 pinconfig   266  [   ]   pinconfig             |   |   |-- i2s2m1-sdi
 pinconfig   267  [   ]   pinconfig             |   |   `-- i2s2m1-sdo
 pinconfig   268  [   ]   pinconfig             |   |-- i2s3
 pinconfig   269  [   ]   pinconfig             |   |   |-- i2s3-lrck
 pinconfig   270  [   ]   pinconfig             |   |   |-- i2s3-mclk
 pinconfig   271  [   ]   pinconfig             |   |   |-- i2s3-sclk
 pinconfig   272  [   ]   pinconfig             |   |   |-- i2s3-sdi
 pinconfig   273  [   ]   pinconfig             |   |   `-- i2s3-sdo
 pinconfig   274  [   ]   pinconfig             |   |-- jtag
 pinconfig   275  [   ]   pinconfig             |   |   |-- jtagm0-pins
 pinconfig   276  [   ]   pinconfig             |   |   |-- jtagm1-pins
 pinconfig   277  [   ]   pinconfig             |   |   `-- jtagm2-pins
 pinconfig   278  [   ]   pinconfig             |   |-- litcpu
 pinconfig   279  [   ]   pinconfig             |   |   `-- litcpu-pins
 pinconfig   280  [   ]   pinconfig             |   |-- mcu
 pinconfig   281  [   ]   pinconfig             |   |   |-- mcum0-pins
 pinconfig   282  [   ]   pinconfig             |   |   `-- mcum1-pins
 pinconfig   283  [   ]   pinconfig             |   |-- mipi
 pinconfig   284  [   ]   pinconfig             |   |   |-- mipim0-camera0-clk
 pinconfig   285  [   ]   pinconfig             |   |   |-- mipim0-camera1-clk
 pinconfig   286  [   ]   pinconfig             |   |   |-- mipim0-camera2-clk
 pinconfig   287  [   ]   pinconfig             |   |   |-- mipim0-camera3-clk
 pinconfig   288  [   ]   pinconfig             |   |   |-- mipim0-camera4-clk
 pinconfig   289  [   ]   pinconfig             |   |   |-- mipim1-camera0-clk
 pinconfig   290  [   ]   pinconfig             |   |   |-- mipim1-camera1-clk
 pinconfig   291  [   ]   pinconfig             |   |   |-- mipim1-camera2-clk
 pinconfig   292  [   ]   pinconfig             |   |   |-- mipim1-camera3-clk
 pinconfig   293  [   ]   pinconfig             |   |   |-- mipim1-camera4-clk
 pinconfig   294  [   ]   pinconfig             |   |   |-- mipi-te0
 pinconfig   295  [   ]   pinconfig             |   |   `-- mipi-te1
 pinconfig   296  [   ]   pinconfig             |   |-- npu
 pinconfig   297  [   ]   pinconfig             |   |   `-- npu-pins
 pinconfig   298  [   ]   pinconfig             |   |-- pcie20x1
 pinconfig   299  [   ]   pinconfig             |   |   |-- pcie20x1m0-clkreqn
 pinconfig   300  [   ]   pinconfig             |   |   |-- pcie20x1m0-perstn
 pinconfig   301  [   ]   pinconfig             |   |   |-- pcie20x1m0-waken
 pinconfig   302  [   ]   pinconfig             |   |   |-- pcie20x1m1-clkreqn
 pinconfig   303  [   ]   pinconfig             |   |   |-- pcie20x1m1-perstn
 pinconfig   304  [   ]   pinconfig             |   |   |-- pcie20x1m1-waken
 pinconfig   305  [   ]   pinconfig             |   |   `-- pcie20x1-2-button-rstn
 pinconfig   306  [   ]   pinconfig             |   |-- pcie30phy
 pinconfig   307  [   ]   pinconfig             |   |   `-- pcie30phy-pins
 pinconfig   308  [   ]   pinconfig             |   |-- pcie30x1
 pinconfig   309  [   ]   pinconfig             |   |   |-- pcie30x1m0-0-clkreqn
 pinconfig   310  [   ]   pinconfig             |   |   |-- pcie30x1m0-0-perstn
 pinconfig   311  [   ]   pinconfig             |   |   |-- pcie30x1m0-0-waken
 pinconfig   312  [   ]   pinconfig             |   |   |-- pcie30x1m0-1-clkreqn
 pinconfig   313  [   ]   pinconfig             |   |   |-- pcie30x1m0-1-perstn
 pinconfig   314  [   ]   pinconfig             |   |   |-- pcie30x1m0-1-waken
 pinconfig   315  [   ]   pinconfig             |   |   |-- pcie30x1m1-0-clkreqn
 pinconfig   316  [   ]   pinconfig             |   |   |-- pcie30x1m1-0-perstn
 pinconfig   317  [   ]   pinconfig             |   |   |-- pcie30x1m1-0-waken
 pinconfig   318  [   ]   pinconfig             |   |   |-- pcie30x1m1-1-clkreqn
 pinconfig   319  [   ]   pinconfig             |   |   |-- pcie30x1m1-1-perstn
 pinconfig   320  [   ]   pinconfig             |   |   |-- pcie30x1m1-1-waken
 pinconfig   321  [   ]   pinconfig             |   |   |-- pcie30x1m2-0-clkreqn
 pinconfig   322  [   ]   pinconfig             |   |   |-- pcie30x1m2-0-perstn
 pinconfig   323  [   ]   pinconfig             |   |   |-- pcie30x1m2-0-waken
 pinconfig   324  [   ]   pinconfig             |   |   |-- pcie30x1m2-1-clkreqn
 pinconfig   325  [   ]   pinconfig             |   |   |-- pcie30x1m2-1-perstn
 pinconfig   326  [   ]   pinconfig             |   |   |-- pcie30x1m2-1-waken
 pinconfig   327  [   ]   pinconfig             |   |   |-- pcie30x1-0-button-rstn
 pinconfig   328  [   ]   pinconfig             |   |   `-- pcie30x1-1-button-rstn
 pinconfig   329  [   ]   pinconfig             |   |-- pcie30x2
 pinconfig   330  [   ]   pinconfig             |   |   |-- pcie30x2m0-clkreqn
 pinconfig   331  [   ]   pinconfig             |   |   |-- pcie30x2m0-perstn
 pinconfig   332  [   ]   pinconfig             |   |   |-- pcie30x2m0-waken
 pinconfig   333  [   ]   pinconfig             |   |   |-- pcie30x2m1-clkreqn
 pinconfig   334  [   ]   pinconfig             |   |   |-- pcie30x2m1-perstn
 pinconfig   335  [   ]   pinconfig             |   |   |-- pcie30x2m1-waken
 pinconfig   336  [   ]   pinconfig             |   |   |-- pcie30x2m2-clkreqn
 pinconfig   337  [   ]   pinconfig             |   |   |-- pcie30x2m2-perstn
 pinconfig   338  [   ]   pinconfig             |   |   |-- pcie30x2m2-waken
 pinconfig   339  [   ]   pinconfig             |   |   |-- pcie30x2m3-clkreqn
 pinconfig   340  [   ]   pinconfig             |   |   |-- pcie30x2m3-perstn
 pinconfig   341  [   ]   pinconfig             |   |   |-- pcie30x2m3-waken
 pinconfig   342  [   ]   pinconfig             |   |   `-- pcie30x2-button-rstn
 pinconfig   343  [   ]   pinconfig             |   |-- pcie30x4
 pinconfig   344  [   ]   pinconfig             |   |   |-- pcie30x4m0-clkreqn
 pinconfig   345  [   ]   pinconfig             |   |   |-- pcie30x4m0-perstn
 pinconfig   346  [   ]   pinconfig             |   |   |-- pcie30x4m0-waken
 pinconfig   347  [   ]   pinconfig             |   |   |-- pcie30x4m1-clkreqn
 pinconfig   348  [   ]   pinconfig             |   |   |-- pcie30x4m1-perstn
 pinconfig   349  [   ]   pinconfig             |   |   |-- pcie30x4m1-waken
 pinconfig   350  [   ]   pinconfig             |   |   |-- pcie30x4m2-clkreqn
 pinconfig   351  [   ]   pinconfig             |   |   |-- pcie30x4m2-perstn
 pinconfig   352  [   ]   pinconfig             |   |   |-- pcie30x4m2-waken
 pinconfig   353  [   ]   pinconfig             |   |   |-- pcie30x4m3-clkreqn
 pinconfig   354  [   ]   pinconfig             |   |   |-- pcie30x4m3-perstn
 pinconfig   355  [   ]   pinconfig             |   |   |-- pcie30x4m3-waken
 pinconfig   356  [   ]   pinconfig             |   |   `-- pcie30x4-button-rstn
 pinconfig   357  [   ]   pinconfig             |   |-- pdm0
 pinconfig   358  [   ]   pinconfig             |   |   |-- pdm0m0-clk
 pinconfig   359  [   ]   pinconfig             |   |   |-- pdm0m0-clk1
 pinconfig   360  [   ]   pinconfig             |   |   |-- pdm0m0-sdi0
 pinconfig   361  [   ]   pinconfig             |   |   |-- pdm0m0-sdi1
 pinconfig   362  [   ]   pinconfig             |   |   |-- pdm0m0-sdi2
 pinconfig   363  [   ]   pinconfig             |   |   |-- pdm0m0-sdi3
 pinconfig   364  [   ]   pinconfig             |   |   |-- pdm0m1-clk
 pinconfig   365  [   ]   pinconfig             |   |   |-- pdm0m1-clk1
 pinconfig   366  [   ]   pinconfig             |   |   |-- pdm0m1-sdi0
 pinconfig   367  [   ]   pinconfig             |   |   |-- pdm0m1-sdi1
 pinconfig   368  [   ]   pinconfig             |   |   |-- pdm0m1-sdi2
 pinconfig   369  [   ]   pinconfig             |   |   `-- pdm0m1-sdi3
 pinconfig   370  [   ]   pinconfig             |   |-- pdm1
 pinconfig   371  [   ]   pinconfig             |   |   |-- pdm1m0-clk
 pinconfig   372  [   ]   pinconfig             |   |   |-- pdm1m0-clk1
 pinconfig   373  [   ]   pinconfig             |   |   |-- pdm1m0-sdi0
 pinconfig   374  [   ]   pinconfig             |   |   |-- pdm1m0-sdi1
 pinconfig   375  [   ]   pinconfig             |   |   |-- pdm1m0-sdi2
 pinconfig   376  [   ]   pinconfig             |   |   |-- pdm1m0-sdi3
 pinconfig   377  [   ]   pinconfig             |   |   |-- pdm1m1-clk
 pinconfig   378  [   ]   pinconfig             |   |   |-- pdm1m1-clk1
 pinconfig   379  [   ]   pinconfig             |   |   |-- pdm1m1-sdi0
 pinconfig   380  [   ]   pinconfig             |   |   |-- pdm1m1-sdi1
 pinconfig   381  [   ]   pinconfig             |   |   |-- pdm1m1-sdi2
 pinconfig   382  [   ]   pinconfig             |   |   `-- pdm1m1-sdi3
 pinconfig   383  [ + ]   pinconfig             |   |-- pmic
 pinconfig   384  [ + ]   pinconfig             |   |   `-- pmic-pins
 pinconfig   385  [   ]   pinconfig             |   |-- pmu
 pinconfig   386  [   ]   pinconfig             |   |   `-- pmu-pins
 pinconfig   387  [   ]   pinconfig             |   |-- pwm0
 pinconfig   388  [   ]   pinconfig             |   |   |-- pwm0m0-pins
 pinconfig   389  [   ]   pinconfig             |   |   |-- pwm0m1-pins
 pinconfig   390  [   ]   pinconfig             |   |   `-- pwm0m2-pins
 pinconfig   391  [   ]   pinconfig             |   |-- pwm1
 pinconfig   392  [   ]   pinconfig             |   |   |-- pwm1m0-pins
 pinconfig   393  [   ]   pinconfig             |   |   |-- pwm1m1-pins
 pinconfig   394  [   ]   pinconfig             |   |   `-- pwm1m2-pins
 pinconfig   395  [   ]   pinconfig             |   |-- pwm2
 pinconfig   396  [   ]   pinconfig             |   |   |-- pwm2m0-pins
 pinconfig   397  [   ]   pinconfig             |   |   |-- pwm2m1-pins
 pinconfig   398  [   ]   pinconfig             |   |   `-- pwm2m2-pins
 pinconfig   399  [   ]   pinconfig             |   |-- pwm3
 pinconfig   400  [   ]   pinconfig             |   |   |-- pwm3m0-pins
 pinconfig   401  [   ]   pinconfig             |   |   |-- pwm3m1-pins
 pinconfig   402  [   ]   pinconfig             |   |   |-- pwm3m2-pins
 pinconfig   403  [   ]   pinconfig             |   |   `-- pwm3m3-pins
 pinconfig   404  [   ]   pinconfig             |   |-- pwm4
 pinconfig   405  [   ]   pinconfig             |   |   |-- pwm4m0-pins
 pinconfig   406  [   ]   pinconfig             |   |   `-- pwm4m1-pins
 pinconfig   407  [   ]   pinconfig             |   |-- pwm5
 pinconfig   408  [   ]   pinconfig             |   |   |-- pwm5m0-pins
 pinconfig   409  [   ]   pinconfig             |   |   |-- pwm5m1-pins
 pinconfig   410  [   ]   pinconfig             |   |   `-- pwm5m2-pins
 pinconfig   411  [   ]   pinconfig             |   |-- pwm6
 pinconfig   412  [   ]   pinconfig             |   |   |-- pwm6m0-pins
 pinconfig   413  [   ]   pinconfig             |   |   |-- pwm6m1-pins
 pinconfig   414  [   ]   pinconfig             |   |   `-- pwm6m2-pins
 pinconfig   415  [   ]   pinconfig             |   |-- pwm7
 pinconfig   416  [   ]   pinconfig             |   |   |-- pwm7m0-pins
 pinconfig   417  [   ]   pinconfig             |   |   |-- pwm7m1-pins
 pinconfig   418  [   ]   pinconfig             |   |   |-- pwm7m2-pins
 pinconfig   419  [   ]   pinconfig             |   |   `-- pwm7m3-pins
 pinconfig   420  [   ]   pinconfig             |   |-- pwm8
 pinconfig   421  [   ]   pinconfig             |   |   |-- pwm8m0-pins
 pinconfig   422  [   ]   pinconfig             |   |   |-- pwm8m1-pins
 pinconfig   423  [   ]   pinconfig             |   |   `-- pwm8m2-pins
 pinconfig   424  [   ]   pinconfig             |   |-- pwm9
 pinconfig   425  [   ]   pinconfig             |   |   |-- pwm9m0-pins
 pinconfig   426  [   ]   pinconfig             |   |   |-- pwm9m1-pins
 pinconfig   427  [   ]   pinconfig             |   |   `-- pwm9m2-pins
 pinconfig   428  [   ]   pinconfig             |   |-- pwm10
 pinconfig   429  [   ]   pinconfig             |   |   |-- pwm10m0-pins
 pinconfig   430  [   ]   pinconfig             |   |   |-- pwm10m1-pins
 pinconfig   431  [   ]   pinconfig             |   |   `-- pwm10m2-pins
 pinconfig   432  [   ]   pinconfig             |   |-- pwm11
 pinconfig   433  [   ]   pinconfig             |   |   |-- pwm11m0-pins
 pinconfig   434  [   ]   pinconfig             |   |   |-- pwm11m1-pins
 pinconfig   435  [   ]   pinconfig             |   |   |-- pwm11m2-pins
 pinconfig   436  [   ]   pinconfig             |   |   `-- pwm11m3-pins
 pinconfig   437  [   ]   pinconfig             |   |-- pwm12
 pinconfig   438  [   ]   pinconfig             |   |   |-- pwm12m0-pins
 pinconfig   439  [   ]   pinconfig             |   |   `-- pwm12m1-pins
 pinconfig   440  [   ]   pinconfig             |   |-- pwm13
 pinconfig   441  [   ]   pinconfig             |   |   |-- pwm13m0-pins
 pinconfig   442  [   ]   pinconfig             |   |   |-- pwm13m1-pins
 pinconfig   443  [   ]   pinconfig             |   |   `-- pwm13m2-pins
 pinconfig   444  [   ]   pinconfig             |   |-- pwm14
 pinconfig   445  [   ]   pinconfig             |   |   |-- pwm14m0-pins
 pinconfig   446  [   ]   pinconfig             |   |   |-- pwm14m1-pins
 pinconfig   447  [   ]   pinconfig             |   |   `-- pwm14m2-pins
 pinconfig   448  [   ]   pinconfig             |   |-- pwm15
 pinconfig   449  [   ]   pinconfig             |   |   |-- pwm15m0-pins
 pinconfig   450  [   ]   pinconfig             |   |   |-- pwm15m1-pins
 pinconfig   451  [   ]   pinconfig             |   |   |-- pwm15m2-pins
 pinconfig   452  [   ]   pinconfig             |   |   `-- pwm15m3-pins
 pinconfig   453  [   ]   pinconfig             |   |-- refclk
 pinconfig   454  [   ]   pinconfig             |   |   `-- refclk-pins
 pinconfig   455  [   ]   pinconfig             |   |-- sata
 pinconfig   456  [   ]   pinconfig             |   |   |-- sata-pins
 pinconfig   457  [   ]   pinconfig             |   |   `-- sata0-pm-reset
 pinconfig   458  [   ]   pinconfig             |   |-- sata0
 pinconfig   459  [   ]   pinconfig             |   |   |-- sata0m0-pins
 pinconfig   460  [   ]   pinconfig             |   |   `-- sata0m1-pins
 pinconfig   461  [   ]   pinconfig             |   |-- sata1
 pinconfig   462  [   ]   pinconfig             |   |   |-- sata1m0-pins
 pinconfig   463  [   ]   pinconfig             |   |   `-- sata1m1-pins
 pinconfig   464  [   ]   pinconfig             |   |-- sata2
 pinconfig   465  [   ]   pinconfig             |   |   |-- sata2m0-pins
 pinconfig   466  [   ]   pinconfig             |   |   `-- sata2m1-pins
 pinconfig   467  [   ]   pinconfig             |   |-- sdio
 pinconfig   468  [   ]   pinconfig             |   |   |-- sdiom1-pins
 pinconfig   469  [   ]   pinconfig             |   |   `-- sdiom0-pins
 pinconfig   470  [   ]   pinconfig             |   |-- sdmmc
 pinconfig   471  [   ]   pinconfig             |   |   |-- sdmmc-bus4
 pinconfig   472  [   ]   pinconfig             |   |   |-- sdmmc-clk
 pinconfig   473  [   ]   pinconfig             |   |   |-- sdmmc-cmd
 pinconfig   474  [   ]   pinconfig             |   |   |-- sdmmc-det
 pinconfig   475  [   ]   pinconfig             |   |   `-- sdmmc-pwren
 pinconfig   476  [   ]   pinconfig             |   |-- spdif0
 pinconfig   477  [   ]   pinconfig             |   |   |-- spdif0m0-tx
 pinconfig   478  [   ]   pinconfig             |   |   `-- spdif0m1-tx
 pinconfig   479  [   ]   pinconfig             |   |-- spdif1
 pinconfig   480  [   ]   pinconfig             |   |   |-- spdif1m0-tx
 pinconfig   481  [   ]   pinconfig             |   |   |-- spdif1m1-tx
 pinconfig   482  [   ]   pinconfig             |   |   `-- spdif1m2-tx
 pinconfig   483  [   ]   pinconfig             |   |-- spi0
 pinconfig   484  [   ]   pinconfig             |   |   |-- spi0m0-pins
 pinconfig   485  [   ]   pinconfig             |   |   |-- spi0m0-cs0
 pinconfig   486  [   ]   pinconfig             |   |   |-- spi0m0-cs1
 pinconfig   487  [   ]   pinconfig             |   |   |-- spi0m1-pins
 pinconfig   488  [   ]   pinconfig             |   |   |-- spi0m1-cs0
 pinconfig   489  [   ]   pinconfig             |   |   |-- spi0m1-cs1
 pinconfig   490  [   ]   pinconfig             |   |   |-- spi0m2-pins
 pinconfig   491  [   ]   pinconfig             |   |   |-- spi0m2-cs0
 pinconfig   492  [   ]   pinconfig             |   |   |-- spi0m2-cs1
 pinconfig   493  [   ]   pinconfig             |   |   |-- spi0m3-pins
 pinconfig   494  [   ]   pinconfig             |   |   |-- spi0m3-cs0
 pinconfig   495  [   ]   pinconfig             |   |   `-- spi0m3-cs1
 pinconfig   496  [   ]   pinconfig             |   |-- spi1
 pinconfig   497  [   ]   pinconfig             |   |   |-- spi1m1-pins
 pinconfig   498  [   ]   pinconfig             |   |   |-- spi1m1-cs0
 pinconfig   499  [   ]   pinconfig             |   |   |-- spi1m1-cs1
 pinconfig   500  [   ]   pinconfig             |   |   |-- spi1m2-pins
 pinconfig   501  [   ]   pinconfig             |   |   |-- spi1m2-cs0
 pinconfig   502  [   ]   pinconfig             |   |   |-- spi1m2-cs1
 pinconfig   503  [   ]   pinconfig             |   |   |-- spi1m0-pins
 pinconfig   504  [   ]   pinconfig             |   |   |-- spi1m0-cs0
 pinconfig   505  [   ]   pinconfig             |   |   `-- spi1m0-cs1
 pinconfig   506  [ + ]   pinconfig             |   |-- spi2
 pinconfig   507  [   ]   pinconfig             |   |   |-- spi2m0-pins
 pinconfig   508  [   ]   pinconfig             |   |   |-- spi2m0-cs0
 pinconfig   509  [   ]   pinconfig             |   |   |-- spi2m0-cs1
 pinconfig   510  [   ]   pinconfig             |   |   |-- spi2m1-pins
 pinconfig   511  [   ]   pinconfig             |   |   |-- spi2m1-cs0
 pinconfig   512  [   ]   pinconfig             |   |   |-- spi2m1-cs1
 pinconfig   513  [ + ]   pinconfig             |   |   |-- spi2m2-pins
 pinconfig   514  [ + ]   pinconfig             |   |   |-- spi2m2-cs0
 pinconfig   515  [   ]   pinconfig             |   |   `-- spi2m2-cs1
 pinconfig   516  [   ]   pinconfig             |   |-- spi3
 pinconfig   517  [   ]   pinconfig             |   |   |-- spi3m1-pins
 pinconfig   518  [   ]   pinconfig             |   |   |-- spi3m1-cs0
 pinconfig   519  [   ]   pinconfig             |   |   |-- spi3m1-cs1
 pinconfig   520  [   ]   pinconfig             |   |   |-- spi3m2-pins
 pinconfig   521  [   ]   pinconfig             |   |   |-- spi3m2-cs0
 pinconfig   522  [   ]   pinconfig             |   |   |-- spi3m2-cs1
 pinconfig   523  [   ]   pinconfig             |   |   |-- spi3m3-pins
 pinconfig   524  [   ]   pinconfig             |   |   |-- spi3m3-cs0
 pinconfig   525  [   ]   pinconfig             |   |   |-- spi3m3-cs1
 pinconfig   526  [   ]   pinconfig             |   |   |-- spi3m0-pins
 pinconfig   527  [   ]   pinconfig             |   |   |-- spi3m0-cs0
 pinconfig   528  [   ]   pinconfig             |   |   `-- spi3m0-cs1
 pinconfig   529  [   ]   pinconfig             |   |-- spi4
 pinconfig   530  [   ]   pinconfig             |   |   |-- spi4m0-pins
 pinconfig   531  [   ]   pinconfig             |   |   |-- spi4m0-cs0
 pinconfig   532  [   ]   pinconfig             |   |   |-- spi4m0-cs1
 pinconfig   533  [   ]   pinconfig             |   |   |-- spi4m1-pins
 pinconfig   534  [   ]   pinconfig             |   |   |-- spi4m1-cs0
 pinconfig   535  [   ]   pinconfig             |   |   |-- spi4m1-cs1
 pinconfig   536  [   ]   pinconfig             |   |   |-- spi4m2-pins
 pinconfig   537  [   ]   pinconfig             |   |   `-- spi4m2-cs0
 pinconfig   538  [   ]   pinconfig             |   |-- tsadc
 pinconfig   539  [   ]   pinconfig             |   |   |-- tsadcm1-shut
 pinconfig   540  [   ]   pinconfig             |   |   |-- tsadc-shut
 pinconfig   541  [   ]   pinconfig             |   |   `-- tsadc-shut-org
 pinconfig   542  [   ]   pinconfig             |   |-- uart0
 pinconfig   543  [   ]   pinconfig             |   |   |-- uart0m0-xfer
 pinconfig   544  [   ]   pinconfig             |   |   |-- uart0m1-xfer
 pinconfig   545  [   ]   pinconfig             |   |   |-- uart0m2-xfer
 pinconfig   546  [   ]   pinconfig             |   |   |-- uart0-ctsn
 pinconfig   547  [   ]   pinconfig             |   |   `-- uart0-rtsn
 pinconfig   548  [   ]   pinconfig             |   |-- uart1
 pinconfig   549  [   ]   pinconfig             |   |   |-- uart1m1-xfer
 pinconfig   550  [   ]   pinconfig             |   |   |-- uart1m1-ctsn
 pinconfig   551  [   ]   pinconfig             |   |   |-- uart1m1-rtsn
 pinconfig   552  [   ]   pinconfig             |   |   |-- uart1m2-xfer
 pinconfig   553  [   ]   pinconfig             |   |   |-- uart1m2-ctsn
 pinconfig   554  [   ]   pinconfig             |   |   |-- uart1m2-rtsn
 pinconfig   555  [   ]   pinconfig             |   |   |-- uart1m0-xfer
 pinconfig   556  [   ]   pinconfig             |   |   |-- uart1m0-ctsn
 pinconfig   557  [   ]   pinconfig             |   |   `-- uart1m0-rtsn
 pinconfig   558  [ + ]   pinconfig             |   |-- uart2
 pinconfig   559  [ + ]   pinconfig             |   |   |-- uart2m0-xfer
 pinconfig   560  [   ]   pinconfig             |   |   |-- uart2m1-xfer
 pinconfig   561  [   ]   pinconfig             |   |   |-- uart2m2-xfer
 pinconfig   562  [   ]   pinconfig             |   |   |-- uart2-ctsn
 pinconfig   563  [   ]   pinconfig             |   |   `-- uart2-rtsn
 pinconfig   564  [   ]   pinconfig             |   |-- uart3
 pinconfig   565  [   ]   pinconfig             |   |   |-- uart3m0-xfer
 pinconfig   566  [   ]   pinconfig             |   |   |-- uart3m1-xfer
 pinconfig   567  [   ]   pinconfig             |   |   |-- uart3m2-xfer
 pinconfig   568  [   ]   pinconfig             |   |   |-- uart3-ctsn
 pinconfig   569  [   ]   pinconfig             |   |   `-- uart3-rtsn
 pinconfig   570  [   ]   pinconfig             |   |-- uart4
 pinconfig   571  [   ]   pinconfig             |   |   |-- uart4m0-xfer
 pinconfig   572  [   ]   pinconfig             |   |   |-- uart4m1-xfer
 pinconfig   573  [   ]   pinconfig             |   |   |-- uart4m2-xfer
 pinconfig   574  [   ]   pinconfig             |   |   |-- uart4-ctsn
 pinconfig   575  [   ]   pinconfig             |   |   `-- uart4-rtsn
 pinconfig   576  [   ]   pinconfig             |   |-- uart5
 pinconfig   577  [   ]   pinconfig             |   |   |-- uart5m0-xfer
 pinconfig   578  [   ]   pinconfig             |   |   |-- uart5m0-ctsn
 pinconfig   579  [   ]   pinconfig             |   |   |-- uart5m0-rtsn
 pinconfig   580  [   ]   pinconfig             |   |   |-- uart5m1-xfer
 pinconfig   581  [   ]   pinconfig             |   |   |-- uart5m1-ctsn
 pinconfig   582  [   ]   pinconfig             |   |   |-- uart5m1-rtsn
 pinconfig   583  [   ]   pinconfig             |   |   `-- uart5m2-xfer
 pinconfig   584  [   ]   pinconfig             |   |-- uart6
 pinconfig   585  [   ]   pinconfig             |   |   |-- uart6m1-xfer
 pinconfig   586  [   ]   pinconfig             |   |   |-- uart6m1-ctsn
 pinconfig   587  [   ]   pinconfig             |   |   |-- uart6m1-rtsn
 pinconfig   588  [   ]   pinconfig             |   |   |-- uart6m2-xfer
 pinconfig   589  [   ]   pinconfig             |   |   |-- uart6m0-xfer
 pinconfig   590  [   ]   pinconfig             |   |   |-- uart6m0-ctsn
 pinconfig   591  [   ]   pinconfig             |   |   `-- uart6m0-rtsn
 pinconfig   592  [   ]   pinconfig             |   |-- uart7
 pinconfig   593  [   ]   pinconfig             |   |   |-- uart7m1-xfer
 pinconfig   594  [   ]   pinconfig             |   |   |-- uart7m1-ctsn
 pinconfig   595  [   ]   pinconfig             |   |   |-- uart7m1-rtsn
 pinconfig   596  [   ]   pinconfig             |   |   |-- uart7m2-xfer
 pinconfig   597  [   ]   pinconfig             |   |   |-- uart7m0-xfer
 pinconfig   598  [   ]   pinconfig             |   |   |-- uart7m0-ctsn
 pinconfig   599  [   ]   pinconfig             |   |   `-- uart7m0-rtsn
 pinconfig   600  [   ]   pinconfig             |   |-- uart8
 pinconfig   601  [   ]   pinconfig             |   |   |-- uart8m0-xfer
 pinconfig   602  [   ]   pinconfig             |   |   |-- uart8m0-ctsn
 pinconfig   603  [   ]   pinconfig             |   |   |-- uart8m0-rtsn
 pinconfig   604  [   ]   pinconfig             |   |   |-- uart8m1-xfer
 pinconfig   605  [   ]   pinconfig             |   |   |-- uart8m1-ctsn
 pinconfig   606  [   ]   pinconfig             |   |   |-- uart8m1-rtsn
 pinconfig   607  [   ]   pinconfig             |   |   `-- uart8-xfer
 pinconfig   608  [   ]   pinconfig             |   |-- uart9
 pinconfig   609  [   ]   pinconfig             |   |   |-- uart9m0-xfer
 pinconfig   610  [   ]   pinconfig             |   |   |-- uart9m1-xfer
 pinconfig   611  [   ]   pinconfig             |   |   |-- uart9m1-ctsn
 pinconfig   612  [   ]   pinconfig             |   |   |-- uart9m1-rtsn
 pinconfig   613  [   ]   pinconfig             |   |   |-- uart9m2-xfer
 pinconfig   614  [   ]   pinconfig             |   |   |-- uart9m2-ctsn
 pinconfig   615  [   ]   pinconfig             |   |   |-- uart9m2-rtsn
 pinconfig   616  [   ]   pinconfig             |   |   |-- uart9m0-ctsn
 pinconfig   617  [   ]   pinconfig             |   |   `-- uart9m0-rtsn
 pinconfig   618  [   ]   pinconfig             |   |-- vop
 pinconfig   619  [   ]   pinconfig             |   |   `-- vop-pins
 pinconfig   620  [   ]   pinconfig             |   |-- bt656
 pinconfig   621  [   ]   pinconfig             |   |   `-- bt656-pins
 pinconfig   622  [   ]   pinconfig             |   |-- gpio-func
 pinconfig   623  [   ]   pinconfig             |   |   `-- tsadc-gpio-func
 pinconfig   624  [   ]   pinconfig             |   |-- eth0
 pinconfig   625  [   ]   pinconfig             |   |   `-- eth0-pins
 pinconfig   626  [   ]   pinconfig             |   |-- gmac0
 pinconfig   627  [   ]   pinconfig             |   |   |-- gmac0-miim
 pinconfig   628  [   ]   pinconfig             |   |   |-- gmac0-clkinout
 pinconfig   629  [   ]   pinconfig             |   |   |-- gmac0-rx-bus2
 pinconfig   630  [   ]   pinconfig             |   |   |-- gmac0-tx-bus2
 pinconfig   631  [   ]   pinconfig             |   |   |-- gmac0-rgmii-clk
 pinconfig   632  [   ]   pinconfig             |   |   |-- gmac0-rgmii-bus
 pinconfig   633  [   ]   pinconfig             |   |   |-- gmac0-ppsclk
 pinconfig   634  [   ]   pinconfig             |   |   |-- gmac0-ppstring
 pinconfig   635  [   ]   pinconfig             |   |   |-- gmac0-ptp-refclk
 pinconfig   636  [   ]   pinconfig             |   |   `-- gmac0-txer
 pinconfig   637  [   ]   pinconfig             |   |-- hym8563
 pinconfig   638  [   ]   pinconfig             |   |   `-- hym8563-int
 pinconfig   639  [ + ]   pinconfig             |   |-- pcie
 pinconfig   640  [ + ]   pinconfig             |   |   |-- pcie2-0-rst
 pinconfig   641  [ + ]   pinconfig             |   |   |-- pcie2-1-rst
 pinconfig   642  [ + ]   pinconfig             |   |   |-- pcie3x2-rst
 pinconfig   643  [ + ]   pinconfig             |   |   `-- pcie3x4-rst
 pinconfig   644  [ + ]   pinconfig             |   |-- nvme
 pinconfig   645  [ + ]   pinconfig             |   |   `-- nvme-power-en
 pinconfig   646  [ + ]   pinconfig             |   `-- usb
 pinconfig   647  [ + ]   pinconfig             |       |-- vcc5v0-host-en
 pinconfig   648  [   ]   pinconfig             |       `-- vcc5v0-otg-en
 nop           4  [   ]   dwc3-generic-wrapper  |-- usb@fc400000
 usb           4  [   ]   dwc3-generic-host     |   `-- usb@fc400000
 syscon       68  [ + ]   syscon                |-- syscon@fd5b8000
 syscon       69  [ + ]   syscon                |-- syscon@fd5c0000
 syscon       70  [   ]   syscon                |-- syscon@fd5cc000
 syscon       71  [   ]   syscon                |-- syscon@fd5d4000
 nop           5  [   ]   rockchip_usb2phy      |   `-- usb2phy@4000
 phy           6  [   ]   rockchip_usb2phy_por  |       |-- otg-port
 clk           7  [   ]   rockchip_usb2phy_clo  |       `-- usb480m_phy1
 syscon       72  [   ]   syscon                |-- syscon@fd5e4000
 pci           2  [ + ]   pcie_dw_rockchip      |-- pcie@fe150000
 pci           3  [ + ]   pci_bridge_drv        |   `-- pci_2:0.0
 nvme          0  [   ]   nvme                  |       `-- nvme#0
 pci           4  [   ]   pcie_dw_rockchip      |-- pcie@fe160000
 pci           5  [ + ]   pcie_dw_rockchip      |-- pcie@fe170000
 pci           6  [ + ]   pci_bridge_drv        |   `-- pci_5:0.0
 ethernet      2  [ + ]   eth_rtl8169           |       `-- eth_rtl8169
 bootdev       2  [   ]   eth_bootdev           |           `-- eth_rtl8169.bootdev
 phy           7  [   ]   rockchip_udphy        |-- phy@fed90000
 phy           8  [ + ]   naneng-combphy        |-- phy@fee10000
 phy           9  [ + ]   rockchip_pcie3phy     |-- phy@fee80000
 button        0  [   ]   button_adc            |-- adc-keys
 button        1  [   ]   button_adc            |   |-- vol-up-key
 button        2  [   ]   button_adc            |   `-- volumeup-key
 regulator    21  [ + ]   regulator_fixed       |-- regulator-vcc12v-dcin
 regulator    22  [ + ]   regulator_fixed       |-- regulator-vcc4v0-sys
 regulator    23  [ + ]   regulator_fixed       |-- regulator-vcc-1v1-nldo-s3
 regulator    24  [ + ]   regulator_fixed       |-- vcc5v0-sys
 regulator    25  [ + ]   regulator_fixed       |-- vcc3v3-nvme
 regulator    26  [ + ]   regulator_fixed       |-- vcc5v0-host-regulator
 regulator    27  [   ]   regulator_fixed       |-- vcc5v0-otg-regulator
 ram           0  [   ]   rockchip_rk3588_dmc   |-- dmc
 scmi_agent    0  [ + ]   scmi-over-smccc       |-- scmi
 scmi_base     0  [ + ]   scmi_base_drv         |   |-- scmi-base.0
 clk           8  [   ]   scmi_clk              |   `-- protocol@14
 bootstd       0  [   ]   bootstd_drv           |-- bootstd
 bootmeth      0  [   ]   bootmeth_extlinux     |   |-- extlinux
 bootmeth      1  [   ]   bootmeth_script       |   |-- script
 bootmeth      2  [   ]   bootmeth_efi_mgr      |   |-- efi_mgr
 bootmeth      3  [   ]   bootmeth_efi          |   |-- efi
 bootmeth      4  [   ]   bootmeth_pxe          |   |-- pxe
 bootmeth      5  [   ]   vbe_simple            |   `-- vbe_simple
 efi           0  [   ]   EFI block driver      `-- efi
=> version
U-Boot 2026.07-CAI-gb635d43bca42-dirty (Jul 28 2026 - 09:46:54 +0000)

aarch64-linux-gnu-gcc (Ubuntu 9.4.0-1ubuntu1~20.04.2) 9.4.0
GNU ld (GNU Binutils for Ubuntu) 2.34
=> 

=> printenv
arch=arm
baudrate=1500000
board=nanopc-t6-rk3588
board_name=nanopc-t6-rk3588
boot_targets=mmc1 mmc0 usb scsi nvme pxe dhcp spi
bootcmd=bootflow scan -lb
bootdelay=2
cpu=armv8
cpuid#=41325241410000000000000000140a1e
eth1addr=42:3b:0e:b3:20:d5
eth2addr=ee:df:be:d6:95:e7
eth3addr=6e:e8:97:22:5b:24
ethaddr=42:3b:0e:b3:20:d4
fdt_addr_r=0x12000000
fdtcontroladdr=edbd0520
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
serial#=3a53725ef135c0fb
soc=rk3588
stderr=serial@feb50000
stdin=serial@feb50000
stdout=serial@feb50000
vendor=friendlyelec

Environment size: 778/126972 bytes


```



## ums刷机

```shell

=> nvme info
=> nvme scan
=> nvme info
Device 0: Vendor: 0x1e4b Rev: SN10660 Prod: 0000307150297
            Type: Hard Disk
            Capacity: 244198.3 MB = 238.4 GB (500118192 x 512)
=> ums 0 nvme 0
UMS: LUN 0, dev nvme 0, hwpart 0, sector 0x0, count 0x1dcf32b0

```




## kdev 适配 uboot

```shell
scsi scan

# 1. 加载内核
load scsi 0:1 ${kernel_addr_r} /vmlinuz-6.18.18-trim

# 2. 加载 initramfs
load scsi 0:1 ${ramdisk_addr_r} /fnos-universal-initramfs-v3.cpio.gz

# 3. 加载设备树（RK3588 EVB）
load scsi 0:1 ${fdt_addr_r} /dtb/rockchip/rk3588-bdy-g98.dtb

# 4. 设置启动参数
setenv bootargs "storagemedia=mtd androidboot.storagemedia=mtd androidboot.mode=normal androidboot.verifiedbootstate=orange root=/dev/sda2 rw rootwait console=ttyS2,1500000 earlycon"

# 5. 启动内核
booti ${kernel_addr_r} ${ramdisk_addr_r}:${filesize} ${fdt_addr_r}
```


# 从 MMC 设备 0 分区 1 加载 boot.scr 到内存并执行
load mmc 1:1 ${scriptaddr} boot.scr && source ${scriptaddr}


``shell
root@G98:/# lsblk
NAME        MAJ:MIN RM   SIZE RO TYPE MOUNTPOINTS
sda           8:0    0 119.2G  0 disk
├─sda1        8:1    0   330M  0 part /boot
└─sda2        8:2    0    32G  0 part /
sdb           8:16   1  29.3G  0 disk
├─sdb1        8:17   1  29.3G  0 part /vol00/DataTraveler_3.0
└─sdb2        8:18   1    32M  0 part /vol00/DataTraveler_3.0_1
zram0       252:0    0   7.8G  0 disk [SWAP]
nvme0n1     259:0    0 119.2G  0 disk /vol00/aigo NVMe SSD P2000
nvme1n1     259:1    0 238.5G  0 disk
├─nvme1n1p1 259:2    0   330M  0 part /vol00/KINGBANK KP230
└─nvme1n1p2 259:3    0    32G  0 part /vol00/KINGBANK KP230_1
root@G98:/# blkid
/dev/sda2: LABEL="rootfs" UUID="0f053ba0-e232-4915-8247-236cf7c3b617" UUID_SUB="689a4c12-2380-411d-92d5-df6f8bb17845" BLOCK_SIZE="4096" TYPE="btrfs" PARTUUID="56e010cc-c18b-2e4f-9bd2-6429b2b82310"
/dev/sda1: LABEL="BOOT" UUID="03474b05-9e83-4d2e-99c1-17d31f507f0d" BLOCK_SIZE="1024" TYPE="ext4" PARTLABEL="BOOT" PARTUUID="48e10c2e-81bd-4c7d-8a57-afbb70a8012a"
/dev/nvme0n1: UUID="c9fe79ef-411f-4d35-9ff2-8c471132b7b0" BLOCK_SIZE="4096" TYPE="ext4"
/dev/sdb2: SEC_TYPE="msdos" LABEL_FATBOOT="VTOYEFI" LABEL="VTOYEFI" UUID="29A9-B74C" BLOCK_SIZE="512" TYPE="vfat" PARTUUID="3c79ab87-02"
/dev/sdb1: LABEL="Ventoy" UUID="4E21-0000" BLOCK_SIZE="512" TYPE="exfat" PTTYPE="dos" PARTUUID="3c79ab87-01"
/dev/nvme1n1p2: LABEL="rootfs" UUID="0f053ba0-e232-4915-8247-236cf7c3b617" UUID_SUB="689a4c12-2380-411d-92d5-df6f8bb17845" BLOCK_SIZE="4096" TYPE="btrfs" PARTUUID="8cd51f3c-2b55-6d44-a966-c80735b54822"
/dev/nvme1n1p1: LABEL="BOOT" UUID="03474b05-9e83-4d2e-99c1-17d31f507f0d" BLOCK_SIZE="1024" TYPE="ext4" PARTLABEL="BOOT" PARTUUID="48e10c2e-81bd-4c7d-8a57-afbb70a8012a"
/dev/zram0: UUID="03a2dca4-a072-49bd-a688-051fb35c1c28" TYPE="swap"
root@G98:/# [   31.712798] vcc3v3_sd_s0: disabling
``









## 启动顺序问题

```shell
=> printenv
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
boot_targets=mmc1 mmc0 mtd2 mtd1 mtd0 usb0 pxe dhcp 
bootargs=storagemedia=mtd androidboot.storagemedia=mtd androidboot.mode=normal  androidboot.verifiedbootstate=orange
bootcmd=boot_android ${devtype} ${devnum};boot_fit;bootrkp;run distro_bootcmd;
bootcmd_dhcp=run boot_net_usb_start; run boot_net_pci_enum; if dhcp ${scriptaddr} ${boot_script_dhcp}; then source ${scriptaddr}; fi;
bootcmd_mmc0=setenv devnum 0; run mmc_boot
bootcmd_mmc1=setenv devnum 1; run mmc_boot
bootcmd_mtd0=setenv devnum 0; run mtd_boot
bootcmd_mtd1=setenv devnum 1; run mtd_boot
bootcmd_mtd2=setenv devnum 2; run mtd_boot
bootcmd_pxe=run boot_net_usb_start; run boot_net_pci_enum; dhcp; if pxe get; then pxe boot; fi
bootcmd_usb0=setenv devnum 0; run usb_boot
bootdelay=0
cpu=armv8
devnum=0
devplist=1
devtype=usb
distro_bootcmd=setenv scsi_need_init; for target in ${boot_targets}; do run bootcmd_${target}; done
eth1addr=fa:0f:54:44:b8:9f
ethaddr=f6:0f:54:44:b8:9f
fdt_addr_r=0x08300000
kernel_addr_c=0x05480000
kernel_addr_r=0x00400000
mmc_boot=if mmc dev ${devnum}; then setenv devtype mmc; run scan_dev_for_boot_part; fi
mtd_boot=if mtd_blk dev ${devnum}; then setenv devtype mtd; run scan_dev_for_boot_part; fi
partitions=uuid_disk=${uuid_gpt_disk};name=uboot,start=8MB,size=4MB,uuid=${uuid_gpt_loader2};name=trust,size=4M,uuid=${uuid_gpt_atf};name=misc,size=4MB,uuid=${uuid_gpt_misc};name=resource,size=16MB,uuid=${uuid_gpt_resource};name=kernel,size=32M,uuid=${uuid_gpt_kernel};name=boot,size=32M,bootable,uuid=${uuid_gpt_boot};name=recovery,size=32M,uuid=${uuid_gpt_recovery};name=backup,size=112M,uuid=${uuid_gpt_backup};name=cache,size=512M,uuid=${uuid_gpt_cache};name=system,size=2048M,uuid=${uuid_gpt_system};name=metadata,size=16M,uuid=${uuid_gpt_metadata};name=vendor,size=32M,uuid=${uuid_gpt_vendor};name=oem,size=32M,uuid=${uuid_gpt_oem};name=frp,size=512K,uuid=${uuid_gpt_frp};name=security,size=2M,uuid=${uuid_gpt_security};name=userdata,size=-,uuid=${uuid_gpt_userdata};
pxefile_addr_r=0x00600000
ramdisk_addr_r=0x0a200000
rkimg_bootdev=if mmc dev 1 && rkimgtest mmc 1; then setenv devtype mmc; setenv devnum 1; echo Boot from SDcard;elif mmc dev 0; then setenv devtype mmc; setenv devnum 0;elif mtd_blk dev 0; then setenv devtype mtd; setenv devnum 0;elif mtd_blk dev 1; then setenv devtype mtd; setenv devnum 1;elif mtd_blk dev 2; then setenv devtype mtd; setenv devnum 2;elif rknand dev 0; then setenv devtype rknand; setenv devnum 0;elif rksfc dev 0; then setenv devtype spinand; setenv devnum 0;elif rksfc dev 1; then setenv devtype spinor; setenv devnum 1;else;setenv devtype ramdisk; setenv devnum 0;fi; 
scan_dev_for_boot=echo Scanning ${devtype} ${devnum}:${distro_bootpart}...; for prefix in ${boot_prefixes}; do run scan_dev_for_extlinux; run scan_dev_for_scripts; done;
scan_dev_for_boot_part=part list ${devtype} ${devnum} -bootable devplist; env exists devplist || setenv devplist 1; for distro_bootpart in ${devplist}; do if fstype ${devtype} ${devnum}:${distro_bootpart} bootfstype; then run scan_dev_for_boot; fi; done
scan_dev_for_extlinux=if test -e ${devtype} ${devnum}:${distro_bootpart} ${prefix}extlinux/extlinux.conf; then echo Found ${prefix}extlinux/extlinux.conf; run boot_extlinux; echo SCRIPT FAILED: continuing...; fi
scan_dev_for_scripts=for script in ${boot_scripts}; do if test -e ${devtype} ${devnum}:${distro_bootpart} ${prefix}${script}; then echo Found U-Boot script ${prefix}${script}; run boot_a_script; echo SCRIPT FAILED: continuing...; fi; done
scriptaddr=0x00500000
scsi_boot=run scsi_init; if scsi dev ${devnum}; then setenv devtype scsi; run scan_dev_for_boot_part; fi
scsi_init=if ${scsi_need_init}; then setenv scsi_need_init false; scsi scan; fi
soc=rockchip
stderr=serial,vidconsole
stdin=serial,usbkbd
stdout=serial,vidconsole
usb_boot=usb start; if usb dev ${devnum}; then setenv devtype usb; run scan_dev_for_boot_part; fi
vendor=rockchip

Environment size: 4443/32764 bytes
=> 

```









## uboot加载内核dtb

CONFIG_EMBED_KERNEL_DTB=y

```shell
********boot_merger ver 1.35********
Info:Pack loader ok.
pack loader okay! Input: /rockchip/BDY_G98_RK3588.git/rockchip-linux-u-boot.git/rkbin/RKBOOT/RK3588MINIALL.ini
/rockchip/BDY_G98_RK3588.git/rockchip-linux-u-boot.git

Image(no-signed, version=0): uboot.img (FIT with uboot, trust...) is ready
Image(no-signed): rk3588_spl_loader_v1.21.114.bin (with spl, ddr...) is ready
pack uboot.img okay! Input: /rockchip/BDY_G98_RK3588.git/rockchip-linux-u-boot.git/rkbin/RKTRUST/RK3588TRUST.ini
ERROR: 'dts/kern.dtb' was not found assigned by CONFIG_EMBED_KERNEL_DTB_PATH.
```











