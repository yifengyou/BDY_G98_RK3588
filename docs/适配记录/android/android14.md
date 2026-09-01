# android14适配







=> part list scsi 0

Partition Map for SCSI device 0  --   Partition Type: EFI

Part	Start LBA	End LBA		Name
Attributes
Type GUID
Partition GUID
1	0x00002000	0x00003fff	"security"
attrs:	0x0000000000000000
type:	3e370000-0000-4a39-8000-5332000032ba
guid:	aa370000-0000-4e79-8000-70df00007373
2	0x00004000	0x00005fff	"uboot"
attrs:	0x0000000000000000
type:	b06d0000-0000-476a-8000-5f1e0000554e
guid:	cf5f0000-0000-406b-8000-718b000005f8
3	0x00006000	0x00007fff	"trust"
attrs:	0x0000000000000000
type:	c14b0000-0000-4757-8000-750300006f5f
guid:	86350000-0000-4812-8000-4ba3000055af
4	0x00008000	0x00009fff	"misc"
attrs:	0x0000000000000000
type:	587b0000-0000-421d-8000-6fc800005a55
guid:	b75f0000-0000-4024-8000-100f000017fe
5	0x0000a000	0x0000bfff	"dtbo"
attrs:	0x0000000000000000
type:	5d1d0000-0000-400e-8000-195500002598
guid:	4a760000-0000-4f0e-8000-46b70000334f
6	0x0000c000	0x0000c7ff	"vbmeta"
attrs:	0x0000000000000000
type:	b9430000-0000-4930-8000-329200001290
guid:	27060000-0000-4c6e-8000-678300004609
7	0x0000c800	0x0002c7ff	"boot"
attrs:	0x0000000000000000
type:	52760000-0000-463c-8000-6e67000018a6
guid:	36110000-0000-4119-8000-615b00002194
8	0x0002c800	0x0006c7ff	"recovery"
attrs:	0x0000000000000000
type:	112f0000-0000-4d20-8000-76bc00006140
guid:	600c0000-0000-4517-8000-162700004858
9	0x0006c800	0x0012c7ff	"backup"
attrs:	0x0000000000000000
type:	de5d0000-0000-477e-8000-667900004bc8
guid:	8b5f0000-0000-4021-8000-5ccf000073bd
10	0x0012c800	0x001ec7ff	"cache"
attrs:	0x0000000000000000
type:	a2650000-0000-4d2a-8000-4d8600006aa4
guid:	a0680000-0000-4a29-8000-7e3b00000f2b
11	0x001ec800	0x0020c7ff	"metadata"
attrs:	0x0000000000000000
type:	431c0000-0000-452e-8000-31cb0000043e
guid:	88780000-0000-4b51-8000-385300003d0a
12	0x0020c800	0x0020cbff	"frp"
attrs:	0x0000000000000000
type:	ab4e0000-0000-4948-8000-0730000013fc
guid:	29540000-0000-4b72-8000-3e00000051c2
13	0x0020cc00	0x0020d3ff	"baseparameter"
attrs:	0x0000000000000000
type:	c03a0000-0000-406a-8000-3e9e00004648
guid:	6d350000-0000-4316-8000-3628000054bb
14	0x0020d400	0x008213ff	"super"
attrs:	0x0000000000000000
type:	6c120000-0000-4138-8000-34fb00000089
guid:	3b470000-0000-497d-8000-38b40000025d
15	0x00821400	0x0ee7c26e	"userdata"
attrs:	0x0000000000000000
type:	967f0000-0000-460d-8000-3e3100005626
guid:	7a2d0000-0000-461b-8000-548d00004b11
=>




setenv avb_mode disabled

scsi read ${scriptaddr}  0xc800 0x20000
iminfo ${scriptaddr}
bootm ${scriptaddr}:kernel - ${scriptaddr}:fdt
bootm ${scriptaddr}#conf







```shell
=> part list scsi 0

Partition Map for SCSI device 0  --   Partition Type: EFI

Part	Start LBA	End LBA		Name
Attributes
Type GUID
Partition GUID
1	0x00002000	0x00003fff	"security"
attrs:	0x0000000000000000
type:	3e370000-0000-4a39-8000-5332000032ba
guid:	aa370000-0000-4e79-8000-70df00007373
2	0x00004000	0x00005fff	"uboot"
attrs:	0x0000000000000000
type:	b06d0000-0000-476a-8000-5f1e0000554e
guid:	cf5f0000-0000-406b-8000-718b000005f8
3	0x00006000	0x00007fff	"trust"
attrs:	0x0000000000000000
type:	c14b0000-0000-4757-8000-750300006f5f
guid:	86350000-0000-4812-8000-4ba3000055af
4	0x00008000	0x00009fff	"misc"
attrs:	0x0000000000000000
type:	587b0000-0000-421d-8000-6fc800005a55
guid:	b75f0000-0000-4024-8000-100f000017fe
5	0x0000a000	0x0000bfff	"dtbo"
attrs:	0x0000000000000000
type:	5d1d0000-0000-400e-8000-195500002598
guid:	4a760000-0000-4f0e-8000-46b70000334f
6	0x0000c000	0x0000c7ff	"vbmeta"
attrs:	0x0000000000000000
type:	b9430000-0000-4930-8000-329200001290
guid:	27060000-0000-4c6e-8000-678300004609
7	0x0000c800	0x0002c7ff	"boot"
attrs:	0x0000000000000000
type:	52760000-0000-463c-8000-6e67000018a6
guid:	36110000-0000-4119-8000-615b00002194
8	0x0002c800	0x0006c7ff	"recovery"
attrs:	0x0000000000000000
type:	112f0000-0000-4d20-8000-76bc00006140
guid:	600c0000-0000-4517-8000-162700004858
9	0x0006c800	0x0012c7ff	"backup"
attrs:	0x0000000000000000
type:	de5d0000-0000-477e-8000-667900004bc8
guid:	8b5f0000-0000-4021-8000-5ccf000073bd
10	0x0012c800	0x001ec7ff	"cache"
attrs:	0x0000000000000000
type:	a2650000-0000-4d2a-8000-4d8600006aa4
guid:	a0680000-0000-4a29-8000-7e3b00000f2b
11	0x001ec800	0x0020c7ff	"metadata"
attrs:	0x0000000000000000
type:	431c0000-0000-452e-8000-31cb0000043e
guid:	88780000-0000-4b51-8000-385300003d0a
12	0x0020c800	0x0020cbff	"frp"
attrs:	0x0000000000000000
type:	ab4e0000-0000-4948-8000-0730000013fc
guid:	29540000-0000-4b72-8000-3e00000051c2
13	0x0020cc00	0x0020d3ff	"baseparameter"
attrs:	0x0000000000000000
type:	c03a0000-0000-406a-8000-3e9e00004648
guid:	6d350000-0000-4316-8000-3628000054bb
14	0x0020d400	0x008213ff	"super"
attrs:	0x0000000000000000
type:	6c120000-0000-4138-8000-34fb00000089
guid:	3b470000-0000-497d-8000-38b40000025d
15	0x00821400	0x0ee7c26e	"userdata"
attrs:	0x0000000000000000
type:	967f0000-0000-460d-8000-3e3100005626
guid:	7a2d0000-0000-461b-8000-548d00004b11
=> scsi read ${scriptaddr}  0xc800 0x20000

scsi read: device 0 block # 51200, count 131072 ... 131072 blocks read: OK
=> iminfo ${scriptaddr}

## Checking Image at 00500000 ...
Android image found
kernel size:      241c008
kernel address:   10008000
ramdisk size:     163fe4
ramdisk address: 11000000
second size:      156000
second address:   10f00000
tags address:     10000100
page size:        800
header_version:   2
os_version:       1c000191 (ver: 0.14.0, level: 2025.1)
name:             
cmdline:          console=ttyFIQ0 firmware_class.path=/vendor/etc/firmware init=/init rootwait ro loop.max_part=7 printk.devkmsg=on kvm-arm.mode=none androidboot.console=ttyFIQ0 androidboot.wificountrycode=CN androidboot.hardware=rk30board androidboot.boot_devices=fe2e0000.mmc androidboot.selinux=permissive
recovery dtbo size:    0
recovery dtbo offset:  0
header size:           67c
dtb size:              4602c
dtb addr:              11f00000
=> 
=> bootm ${scriptaddr}
BOOTM: transferring to board Android
DTB: rk-kernel.dtb
HASH(c): OK
Sysmem Error: "KERNEL" (0x003ff800 - 0x0281c200) alloc is overlap with existence "ANDROID" (0x00500000 - 0x02c1d804)

sysmem_dump_all:
    --------------------------------------------------------------------
    memory.rgn[0].addr     = 0x00200000 - 0x08400000 (size: 0x08200000)
    memory.rgn[1].addr     = 0x09400000 - 0xf0000000 (size: 0xe6c00000)

    memory.total	   = 0xeee00000 (3822 MiB. 0 KiB)
    --------------------------------------------------------------------
    allocated.rgn[0].name  = "STACK"  
		    .addr  = 0xeb5f6720 - 0xeb7f6720 (size: 0x00200000)
    allocated.rgn[1].name  = "ANDROID"  
		    .addr  = 0x00500000 - 0x02c1d804 (size: 0x0271d804)
    allocated.rgn[2].name  = "FDT"  
		    .addr  = 0x08300000 - 0x08349204 (size: 0x00049204)


    framework malloc_r     =  32 MiB
    framework malloc_f     = 512 KiB

    allocated.total	   = 0x02966a08 (41 MiB. 410 KiB)
    --------------------------------------------------------------------
    LMB.allocated[0].addr  = 0x00500000 - 0x02c1d804 (size: 0x0271d804)
    LMB.allocated[1].addr  = 0x08300000 - 0x08349204 (size: 0x00049204)
    LMB.allocated[2].addr  = 0xeb5f6720 - 0xeb7f6720 (size: 0x00200000)

    reserved.core.total	   = 0x02966a08 (41 MiB. 410 KiB)
    --------------------------------------------------------------------

board do bootm failed, ret=-1
bootm - boot application image from memory

Usage:
bootm [addr [arg ...]]
    - boot application image stored in memory
	passing arguments 'arg ...'; when booting a Linux kernel,
	'arg' can be the address of an initrd image
	When booting a Linux kernel which requires a flat device-tree
	a third argument is required which is the address of the
	device-tree blob. To boot that kernel without an initrd image,
	use a '-' for the second argument. If you do not pass a third
	a bd_info struct will be passed instead
	
For the new multi component uImage format (FIT) addresses
	must be extended to include component or configuration unit name:
	addr:<subimg_uname> - direct component image specification
	addr#<conf_uname>   - configuration specification
	Use iminfo command to get the list of existing component
	images and configurations.

Sub-commands to do part of the bootm sequence.  The sub-commands must be
issued in the order below (it's ok to not issue all sub-commands):
	start [addr [arg ...]]
	loados  - load OS image
	ramdisk - relocate initrd, set env initrd_start/initrd_end
	fdt     - relocate flat device tree
	cmdline - OS specific command line processing/setup
	bdt     - OS specific bd_t processing
	prep    - OS specific prep before relocation or go
	go      - start OS
=> 

```






=> boot_android scsi 0
ANDROID: reboot reason: "recovery"
Vboot=0, AVB images, AVB verify
No valid android hdr
AVB verify failed
Android boot failed, error -1.
=> scsi read 0x60000000 0xc800 0x10

scsi read: device 0 block # 51200, count 16 ... 16 blocks read: OK
=> md.b 0x60000000 0x40
60000000: 41 4e 44 52 4f 49 44 21 08 c0 41 02 00 80 00 10    ANDROID!..A.....
60000010: e4 3f 16 00 00 00 00 11 00 60 15 00 00 00 f0 10    .?.......`......
60000020: 00 01 00 10 00 08 00 00 02 00 00 00 91 01 00 1c    ................
60000030: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00    ................
=> 













