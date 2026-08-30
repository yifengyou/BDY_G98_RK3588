# openwrt


## ophub openwrt

### 下载地址

* https://github.com/ophub/amlogic-s9xxx-openwrt/releases/download/OpenWrt_openwrt_main_save_2026.08/openwrt_official_rockchip_bdy-g98_k6.18.44_2026.08.13.img.gz
* https://github.com/ophub/amlogic-s9xxx-openwrt/releases/download/OpenWrt_openwrt_main_save_2026.08/openwrt_official_rockchip_bdy-g98_k6.18.45_2026.08.22.img.gz
* https://github.com/ophub/amlogic-s9xxx-openwrt/releases/download/OpenWrt_openwrt_main_save_2026.08/openwrt_official_rockchip_bdy-g98_k6.18.45_2026.08.24.img.gz
* https://github.com/ophub/amlogic-s9xxx-openwrt/releases/download/OpenWrt_lede_master_save_2026.08/openwrt_lede_rockchip_bdy-g98_k6.18.44_2026.08.15.img.gz
* https://github.com/ophub/amlogic-s9xxx-openwrt/releases/download/OpenWrt_lede_master_save_2026.08/openwrt_lede_rockchip_bdy-g98_k6.18.45_2026.08.24.img.gz
* https://github.com/ophub/amlogic-s9xxx-openwrt/releases/download/OpenWrt_immortalwrt_master_save_2026.08/openwrt_immortalwrt_rockchip_bdy-g98_k6.18.44_2026.08.13.img.gz
* https://github.com/ophub/amlogic-s9xxx-openwrt/releases/download/OpenWrt_immortalwrt_master_save_2026.08/openwrt_immortalwrt_rockchip_bdy-g98_k6.18.45_2026.08.22.img.gz
* https://github.com/ophub/amlogic-s9xxx-openwrt/releases/download/OpenWrt_immortalwrt_master_save_2026.08/openwrt_immortalwrt_rockchip_bdy-g98_k6.18.45_2026.08.24.img.gz
* https://github.com/ophub/amlogic-s9xxx-openwrt/releases/download/OpenWrt_lede_master_save_2026.07/openwrt_lede_rockchip_bdy-g98_k6.18.39_2026.07.23.img.gz
* https://github.com/ophub/amlogic-s9xxx-openwrt/releases/download/OpenWrt_lede_master_save_2026.07/openwrt_lede_rockchip_bdy-g98_k6.18.39_2026.07.26.img.gz
* https://github.com/ophub/amlogic-s9xxx-openwrt/releases/download/OpenWrt_immortalwrt_master_save_2026.07/openwrt_immortalwrt_rockchip_bdy-g98_k6.18.39_2026.07.23.img.gz
* https://github.com/ophub/amlogic-s9xxx-openwrt/releases/download/OpenWrt_immortalwrt_master_save_2026.07/openwrt_immortalwrt_rockchip_bdy-g98_k6.18.39_2026.07.26.img.gz
* https://github.com/ophub/amlogic-s9xxx-openwrt/releases/download/OpenWrt_openwrt_main_save_2026.07/openwrt_official_rockchip_bdy-g98_k6.18.39_2026.07.23.img.gz
* https://github.com/ophub/amlogic-s9xxx-openwrt/releases/download/OpenWrt_openwrt_main_save_2026.07/openwrt_official_rockchip_bdy-g98_k6.18.39_2026.07.26.img.gz


## openwrt_official_rockchip_bdy-g98_k6.18.39_2026.07.26.img.gz



### 引导日志

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
Try scsi 0:1 /boot/extlinux/extlinux.conf
Try scsi 0:1 /extlinux/extlinux.conf
Try scsi 0:1 /extlinux.conf
Try scsi 0:2 /boot/extlinux/extlinux.conf
Failed to mount ext2 filesystem...
** Unrecognized filesystem type **
Try scsi 0:2 /extlinux/extlinux.conf
Failed to mount ext2 filesystem...
** Unrecognized filesystem type **
Try scsi 0:2 /extlinux.conf
Failed to mount ext2 filesystem...
** Unrecognized filesystem type **
Try scsi 0:3 /boot/extlinux/extlinux.conf
** Invalid partition 3 **
Try scsi 0:3 /extlinux/extlinux.conf
** Invalid partition 3 **
Try scsi 0:3 /extlinux.conf
** Invalid partition 3 **
Try scsi 0:4 /boot/extlinux/extlinux.conf
** Invalid partition 4 **
Try scsi 0:4 /extlinux/extlinux.conf
** Invalid partition 4 **
Try scsi 0:4 /extlinux.conf
** Invalid partition 4 **
Try scsi 0:1 /boot.scr
Found boot.scr on scsi 0:1
3406 bytes read in 22 ms (150.4 KiB/s)
## Executing script at 00500000
Ignoring attempt to modify 'load_addr'
Boot script loaded from scsi 0
407 bytes read in 11 ms (36.1 KiB/s)
17969088 bytes read in 353 ms (48.5 MiB/s)
43153920 bytes read in 755 ms (54.5 MiB/s)
215252 bytes read in 92 ms (2.2 MiB/s)
** File not found /dtb/rockchip/overlay/rk3588-fixup.scr **
Fdt Ramdisk skip relocation
No misc partition
## Loading init Ramdisk from Legacy Image at 0a200000 ...
   Image Name:   uInitrd
   Image Type:   AArch64 Linux RAMDisk Image (uncompressed)
   Data Size:    17969024 Bytes = 17.1 MiB
   Load Address: 00000000
   Entry Point:  00000000
   Verifying Checksum ... OK
## Flattened Device Tree blob at 0x08300000
   Booting using the fdt blob at 0x08300000
   reserving fdt memory region: addr=8300000 size=9a000
   Using Device Tree in place at 0000000008300000, end 000000000839cfff
can't get otp device, ret=-19
can't found rockchip,drm-logo, use rockchip,fb-logo
WARNING: could not set reg FDT_ERR_BADOFFSET.
failed to reserve fb-loader-logo memory
## reserved-memory:
  shmem@10f000: addr=10f000 size=100
  ramoops@118000: addr=118000 size=d8000
Adding bank: 0x00200000 - 0x08400000 (size: 0x08200000)
Adding bank: 0x09400000 - 0xf0000000 (size: 0xe6c00000)
Adding bank: 0x100000000 - 0x3fc000000 (size: 0x2fc000000)
Adding bank: 0x3fc500000 - 0x3fff00000 (size: 0x03a00000)
Adding bank: 0x4f0000000 - 0x500000000 (size: 0x10000000)
Total: 6773.666/6849.58 ms

Starting kernel ...

[    0.000000] Booting Linux on physical CPU 0x0000000000 [0x412fd050]
[    0.000000] Linux version 6.18.45-ophub (root@983c9b3e3f04) (aarch64-none-linux-gnu-gcc (Arm GNU Toolchain 15.3.Rel1 (Build arm-15.149)) 15.3.1 20260627, GNU ld (Arm GNU Toolchain 15.3.Rel1 (Build arm-15.149)) 2.45.1.20260126) #1 SMP PREEMPT_DYNAMIC Sun Aug 23 02:35:19 UTC 2026
[    0.000000] random: crng init done
[    0.000000] Machine model: BDY G98
[    0.000000] efi: UEFI not found.
[    0.000000] Reserved memory: created CMA memory pool at 0x00000003dc000000, size 512 MiB
[    0.000000] OF: reserved mem: initialized node cma, compatible id shared-dma-pool
[    0.000000] OF: reserved mem: 0x00000003dc000000..0x00000003fbffffff (524288 KiB) map reusable cma
[    0.000000] earlycon: uart0 at MMIO32 0x00000000feb50000 (options '1500000n8')
[    0.000000] printk: legacy bootconsole [uart0] enabled
[    0.000000] OF: reserved mem: 0x000000000010f000..0x000000000010f0ff (0 KiB) nomap non-reusable shmem@10f000
[    0.000000] OF: reserved mem: 0x0000000000118000..0x00000000001effff (864 KiB) map non-reusable ramoops@118000
[    0.000000] Zone ranges:
[    0.000000]   DMA      [mem 0x0000000000200000-0x00000000ffffffff]
[    0.000000]   DMA32    empty
[    0.000000]   Normal   [mem 0x0000000100000000-0x00000004ffffffff]
[    0.000000] Movable zone start for each node
[    0.000000] Early memory node ranges
[    0.000000]   node   0: [mem 0x0000000000200000-0x00000000083fffff]
[    0.000000]   node   0: [mem 0x0000000009400000-0x00000000efffffff]
[    0.000000]   node   0: [mem 0x0000000100000000-0x00000003fbffffff]
[    0.000000]   node   0: [mem 0x00000003fc500000-0x00000003ffefffff]
[    0.000000]   node   0: [mem 0x00000004f0000000-0x00000004ffffffff]
[    0.000000] Initmem setup node 0 [mem 0x0000000000200000-0x00000004ffffffff]
[    0.000000] On node 0, zone DMA: 512 pages in unavailable ranges
[    0.000000] On node 0, zone DMA: 4096 pages in unavailable ranges
[    0.000000] On node 0, zone Normal: 1280 pages in unavailable ranges
[    0.000000] On node 0, zone Normal: 256 pages in unavailable ranges
[    0.000000] psci: probing for conduit method from DT.
[    0.000000] psci: PSCIv1.1 detected in firmware.
[    0.000000] psci: Using standard PSCI v0.2 function IDs
[    0.000000] psci: Trusted OS migration not required
[    0.000000] psci: SMC Calling Convention v1.2
[    0.000000] percpu: Embedded 31 pages/cpu s89624 r8192 d29160 u126976
[    0.000000] Detected VIPT I-cache on CPU0
[    0.000000] CPU features: detected: GICv3 CPU interface
[    0.000000] CPU features: detected: Virtualization Host Extensions
[    0.000000] CPU features: detected: Broken broadcast TLBI completion
[    0.000000] CPU features: detected: ARM errata 1165522, 1319367, or 1530923
[    0.000000] alternatives: applying boot alternatives
[    0.000000] Kernel command line: root=UUID=28718bf5-ff8b-4c36-bcac-98aa684c89e0 rootwait rootfstype=btrfs rootflags=compress=zstd:6 bootsplash.bootfile=bootsplash.armbian earlycon console=ttyS2,1500000 console=ttyFIQ0 console=tty1 consoleblank=0 loglevel=7 ubootpart=912db58a-a3f0-4ce7-9ed3-eade72fa920c usb-storage.quirks=0x2537:0x1066:u,0x2537:0x1068:u rw rootwait net.ifnames=0 max_loop=128 cgroup_enable=cpuset cgroup_memory=1 cgroup_enable=memory swapaccount=1 androidboot.fwver=ddr-v1.21-cb12b99cc23,spl-v1.14,bl31-v1.54,bl32-v1.20,uboot-gc09af4f87-08/29/2026
[    0.000000] Unknown kernel command line parameters "ubootpart=912db58a-a3f0-4ce7-9ed3-eade72fa920c cgroup_enable=memory cgroup_memory=1", will be passed to user space.
[    0.000000] printk: log buffer data + meta data: 262144 + 917504 = 1179648 bytes
[    0.000000] Dentry cache hash table entries: 2097152 (order: 12, 16777216 bytes, linear)
[    0.000000] Inode-cache hash table entries: 1048576 (order: 11, 8388608 bytes, linear)
[    0.000000] software IO TLB: area num 8.
[    0.000000] software IO TLB: mapped [mem 0x00000000ec000000-0x00000000f0000000] (64MB)
[    0.000000] Built 1 zonelists, mobility grouping on.  Total pages: 4188160
[    0.000000] mem auto-init: stack:off, heap alloc:off, heap free:off
[    0.000000] SLUB: HWalign=64, Order=0-3, MinObjects=0, CPUs=8, Nodes=1
[    0.000000] Dynamic Preempt: voluntary
[    0.000000] rcu: Preemptible hierarchical RCU implementation.
[    0.000000] 	Trampoline variant of Tasks RCU enabled.
[    0.000000] 	Tracing variant of Tasks RCU enabled.
[    0.000000] rcu: RCU calculated value of scheduler-enlistment delay is 30 jiffies.
[    0.000000] RCU Tasks: Setting shift to 3 and lim to 1 rcu_task_cb_adjust=1 rcu_task_cpu_ids=8.
[    0.000000] RCU Tasks Trace: Setting shift to 3 and lim to 1 rcu_task_cb_adjust=1 rcu_task_cpu_ids=8.
[    0.000000] NR_IRQS: 64, nr_irqs: 64, preallocated irqs: 0
[    0.000000] GIC: enabling workaround for GICv3: non-coherent attribute
[    0.000000] GICv3: GIC: Using split EOI/Deactivate mode
[    0.000000] GICv3: 480 SPIs implemented
[    0.000000] GICv3: 0 Extended SPIs implemented
[    0.000000] GICv3: MBI range [424:479]
[    0.000000] GICv3: Using MBI frame 0x00000000fe610000
[    0.000000] Root IRQ handler: gic_handle_irq
[    0.000000] GICv3: GICv3 features: 16 PPIs
[    0.000000] GICv3: GICD_CTLR.DS=0, SCR_EL3.FIQ=1
[    0.000000] GICv3: CPU0: found redistributor 0 region 0:0x00000000fe680000
[    0.000000] ITS [mem 0xfe640000-0xfe65ffff]
[    0.000000] GIC: enabling workaround for ITS: Rockchip erratum RK3588001
[    0.000000] GIC: enabling workaround for ITS: non-coherent attribute
[    0.000000] ITS@0x00000000fe640000: allocated 8192 Devices @100440000 (indirect, esz 8, psz 64K, shr 0)
[    0.000000] ITS@0x00000000fe640000: allocated 32768 Interrupt Collections @100450000 (flat, esz 2, psz 64K, shr 0)
[    0.000000] ITS: using cache flushing for cmd queue
[    0.000000] ITS [mem 0xfe660000-0xfe67ffff]
[    0.000000] GIC: enabling workaround for ITS: Rockchip erratum RK3588001
[    0.000000] GIC: enabling workaround for ITS: non-coherent attribute
[    0.000000] ITS@0x00000000fe660000: allocated 8192 Devices @100470000 (indirect, esz 8, psz 64K, shr 0)
[    0.000000] ITS@0x00000000fe660000: allocated 32768 Interrupt Collections @100480000 (flat, esz 2, psz 64K, shr 0)
[    0.000000] ITS: using cache flushing for cmd queue
[    0.000000] GICv3: using LPI property table @0x0000000100490000
[    0.000000] GIC: using cache flushing for LPI property table
[    0.000000] GICv3: CPU0: using allocated LPI pending table @0x00000001004a0000
[    0.000000] GICv3: GIC: PPI partition interrupt-partition-0[0] { /cpus/cpu@0[0] /cpus/cpu@100[1] /cpus/cpu@200[2] /cpus/cpu@300[3] }
[    0.000000] GICv3: GIC: PPI partition interrupt-partition-1[1] { /cpus/cpu@400[4] /cpus/cpu@500[5] /cpus/cpu@600[6] /cpus/cpu@700[7] }
[    0.000000] rcu: srcu_init: Setting srcu_struct sizes based on contention.
[    0.000000] clocksource: jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 6370867519511994 ns
[    0.000000] arch_timer: cp15 timer running at 24.00MHz (phys).
[    0.000000] clocksource: arch_sys_counter: mask: 0xffffffffffffff max_cycles: 0x588fe9dc0, max_idle_ns: 440795202592 ns
[    0.000000] sched_clock: 56 bits at 24MHz, resolution 41ns, wraps every 4398046511097ns
[    0.003022] Console: colour dummy device 80x25
[    0.003443] printk: legacy console [tty1] enabled
[    0.003886] printk: legacy bootconsole [uart0] disabled
ISr1ig/c sinwb
              ISr2igTc sinwo
                            ISr3igTc sinwb
                                          ISaUtiISr ttmrt
                                                         I aUiz
                                                               SaUt rro
                                                                       ISa tiISr ttmrt
                                                                                      ISa tiISa t mrt
                                                                                                     [    0.000000] Booting Linux on physical CPU 0x0000000000 [0x412fd050]
[    0.000000] Linux version 6.18.45-ophub (root@983c9b3e3f04) (aarch64-none-linux-gnu-gcc (Arm GNU Toolchain 15.3.Rel1 (Build arm-15.149)) 15.3.1 20260627, GNU ld (Arm GNU Toolchain 15.3.Rel1 (Build arm-15.149)) 2.45.1.20260126) #1 SMP PREEMPT_DYNAMIC Sun Aug 23 02:35:19 UTC 2026
[    0.000000] random: crng init done
[    0.000000] Machine model: BDY G98
[    0.000000] efi: UEFI not found.
[    0.000000] Reserved memory: created CMA memory pool at 0x00000003dc000000, size 512 MiB
[    0.000000] OF: reserved mem: initialized node cma, compatible id shared-dma-pool
[    0.000000] OF: reserved mem: 0x00000003dc000000..0x00000003fbffffff (524288 KiB) map reusable cma
[    0.000000] earlycon: uart0 at MMIO32 0x00000000feb50000 (options '1500000n8')
[    0.000000] printk: legacy bootconsole [uart0] enabled
[    0.000000] OF: reserved mem: 0x000000000010f000..0x000000000010f0ff (0 KiB) nomap non-reusable shmem@10f000
[    0.000000] OF: reserved mem: 0x0000000000118000..0x00000000001effff (864 KiB) map non-reusable ramoops@118000
[    0.000000] Zone ranges:
[    0.000000]   DMA      [mem 0x0000000000200000-0x00000000ffffffff]
[    0.000000]   DMA32    empty
[    0.000000]   Normal   [mem 0x0000000100000000-0x00000004ffffffff]
[    0.000000] Movable zone start for each node
[    0.000000] Early memory node ranges
[    0.000000]   node   0: [mem 0x0000000000200000-0x00000000083fffff]
[    0.000000]   node   0: [mem 0x0000000009400000-0x00000000efffffff]
[    0.000000]   node   0: [mem 0x0000000100000000-0x00000003fbffffff]
[    0.000000]   node   0: [mem 0x00000003fc500000-0x00000003ffefffff]
[    0.000000]   node   0: [mem 0x00000004f0000000-0x00000004ffffffff]
[    0.000000] Initmem setup node 0 [mem 0x0000000000200000-0x00000004ffffffff]
[    0.000000] On node 0, zone DMA: 512 pages in unavailable ranges
[    0.000000] On node 0, zone DMA: 4096 pages in unavailable ranges
[    0.000000] On node 0, zone Normal: 1280 pages in unavailable ranges
[    0.000000] On node 0, zone Normal: 256 pages in unavailable ranges
[    0.000000] psci: probing for conduit method from DT.
[    0.000000] psci: PSCIv1.1 detected in firmware.
[    0.000000] psci: Using standard PSCI v0.2 function IDs
[    0.000000] psci: Trusted OS migration not required
[    0.000000] psci: SMC Calling Convention v1.2
[    0.000000] percpu: Embedded 31 pages/cpu s89624 r8192 d29160 u126976
[    0.000000] Detected VIPT I-cache on CPU0
[    0.000000] CPU features: detected: GICv3 CPU interface
[    0.000000] CPU features: detected: Virtualization Host Extensions
[    0.000000] CPU features: detected: Broken broadcast TLBI completion
[    0.000000] CPU features: detected: ARM errata 1165522, 1319367, or 1530923
[    0.000000] alternatives: applying boot alternatives
[    0.000000] Kernel command line: root=UUID=28718bf5-ff8b-4c36-bcac-98aa684c89e0 rootwait rootfstype=btrfs rootflags=compress=zstd:6 bootsplash.bootfile=bootsplash.armbian earlycon console=ttyS2,1500000 console=ttyFIQ0 console=tty1 consoleblank=0 loglevel=7 ubootpart=912db58a-a3f0-4ce7-9ed3-eade72fa920c usb-storage.quirks=0x2537:0x1066:u,0x2537:0x1068:u rw rootwait net.ifnames=0 max_loop=128 cgroup_enable=cpuset cgroup_memory=1 cgroup_enable=memory swapaccount=1 androidboot.fwver=ddr-v1.21-cb12b99cc23,spl-v1.14,bl31-v1.54,bl32-v1.20,uboot-gc09af4f87-08/29/2026
[    0.000000] Unknown kernel command line parameters "ubootpart=912db58a-a3f0-4ce7-9ed3-eade72fa920c cgroup_enable=memory cgroup_memory=1", will be passed to user space.
[    0.000000] printk: log buffer data + meta data: 262144 + 917504 = 1179648 bytes
[    0.000000] Dentry cache hash table entries: 2097152 (order: 12, 16777216 bytes, linear)
[    0.000000] Inode-cache hash table entries: 1048576 (order: 11, 8388608 bytes, linear)
[    0.000000] software IO TLB: area num 8.
[    0.000000] software IO TLB: mapped [mem 0x00000000ec000000-0x00000000f0000000] (64MB)
[    0.000000] Built 1 zonelists, mobility grouping on.  Total pages: 4188160
[    0.000000] mem auto-init: stack:off, heap alloc:off, heap free:off
[    0.000000] SLUB: HWalign=64, Order=0-3, MinObjects=0, CPUs=8, Nodes=1
[    0.000000] Dynamic Preempt: voluntary
[    0.000000] rcu: Preemptible hierarchical RCU implementation.
[    0.000000] 	Trampoline variant of Tasks RCU enabled.
[    0.000000] 	Tracing variant of Tasks RCU enabled.
[    0.000000] rcu: RCU calculated value of scheduler-enlistment delay is 30 jiffies.
[    0.000000] RCU Tasks: Setting shift to 3 and lim to 1 rcu_task_cb_adjust=1 rcu_task_cpu_ids=8.
[    0.000000] RCU Tasks Trace: Setting shift to 3 and lim to 1 rcu_task_cb_adjust=1 rcu_task_cpu_ids=8.
[    0.000000] NR_IRQS: 64, nr_irqs: 64, preallocated irqs: 0
[    0.000000] GIC: enabling workaround for GICv3: non-coherent attribute
[    0.000000] GICv3: GIC: Using split EOI/Deactivate mode
[    0.000000] GICv3: 480 SPIs implemented
[    0.000000] GICv3: 0 Extended SPIs implemented
[    0.000000] GICv3: MBI range [424:479]
[    0.000000] GICv3: Using MBI frame 0x00000000fe610000
[    0.000000] Root IRQ handler: gic_handle_irq
[    0.000000] GICv3: GICv3 features: 16 PPIs
[    0.000000] GICv3: GICD_CTLR.DS=0, SCR_EL3.FIQ=1
[    0.000000] GICv3: CPU0: found redistributor 0 region 0:0x00000000fe680000
[    0.000000] ITS [mem 0xfe640000-0xfe65ffff]
[    0.000000] GIC: enabling workaround for ITS: Rockchip erratum RK3588001
[    0.000000] GIC: enabling workaround for ITS: non-coherent attribute
[    0.000000] ITS@0x00000000fe640000: allocated 8192 Devices @100440000 (indirect, esz 8, psz 64K, shr 0)
[    0.000000] ITS@0x00000000fe640000: allocated 32768 Interrupt Collections @100450000 (flat, esz 2, psz 64K, shr 0)
[    0.000000] ITS: using cache flushing for cmd queue
[    0.000000] ITS [mem 0xfe660000-0xfe67ffff]
[    0.000000] GIC: enabling workaround for ITS: Rockchip erratum RK3588001
[    0.000000] GIC: enabling workaround for ITS: non-coherent attribute
[    0.000000] ITS@0x00000000fe660000: allocated 8192 Devices @100470000 (indirect, esz 8, psz 64K, shr 0)
[    0.000000] ITS@0x00000000fe660000: allocated 32768 Interrupt Collections @100480000 (flat, esz 2, psz 64K, shr 0)
[    0.000000] ITS: using cache flushing for cmd queue
[    0.000000] GICv3: using LPI property table @0x0000000100490000
[    0.000000] GIC: using cache flushing for LPI property table
[    0.000000] GICv3: CPU0: using allocated LPI pending table @0x00000001004a0000
[    0.000000] GICv3: GIC: PPI partition interrupt-partition-0[0] { /cpus/cpu@0[0] /cpus/cpu@100[1] /cpus/cpu@200[2] /cpus/cpu@300[3] }
[    0.000000] GICv3: GIC: PPI partition interrupt-partition-1[1] { /cpus/cpu@400[4] /cpus/cpu@500[5] /cpus/cpu@600[6] /cpus/cpu@700[7] }
[    0.000000] rcu: srcu_init: Setting srcu_struct sizes based on contention.
[    0.000000] clocksource: jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 6370867519511994 ns
[    0.000000] arch_timer: cp15 timer running at 24.00MHz (phys).
[    0.000000] clocksource: arch_sys_counter: mask: 0xffffffffffffff max_cycles: 0x588fe9dc0, max_idle_ns: 440795202592 ns
[    0.000000] sched_clock: 56 bits at 24MHz, resolution 41ns, wraps every 4398046511097ns
[    0.003022] Console: colour dummy device 80x25
[    0.003443] printk: legacy console [tty1] enabled
[    0.003886] printk: legacy bootconsole [uart0] disabled
[    0.004409] Calibrating delay loop (skipped), value calculated using timer frequency.. 48.00 BogoMIPS (lpj=80000)
[    0.004432] pid_max: default: 32768 minimum: 301
[    0.004593] LSM: initializing lsm=capability,selinux
[    0.004760] SELinux:  Initializing.
[    0.005241] Mount-cache hash table entries: 32768 (order: 6, 262144 bytes, linear)
[    0.005288] Mountpoint-cache hash table entries: 32768 (order: 6, 262144 bytes, linear)
[    0.007640] rcu: Hierarchical SRCU implementation.
[    0.007656] rcu: 	Max phase no-delay instances is 1000.
[    0.009186] EFI services will not be available.
[    0.009464] smp: Bringing up secondary CPUs ...
[    0.010057] Detected VIPT I-cache on CPU1
[    0.010259] GICv3: CPU1: found redistributor 100 region 0:0x00000000fe6a0000
[    0.010271] GICv3: CPU1: using allocated LPI pending table @0x00000001004b0000
[    0.010312] CPU1: Booted secondary processor 0x0000000100 [0x412fd050]
[    0.010931] Detected VIPT I-cache on CPU2
[    0.011126] GICv3: CPU2: found redistributor 200 region 0:0x00000000fe6c0000
[    0.011137] GICv3: CPU2: using allocated LPI pending table @0x00000001004c0000
[    0.011172] CPU2: Booted secondary processor 0x0000000200 [0x412fd050]
[    0.011750] Detected VIPT I-cache on CPU3
[    0.011941] GICv3: CPU3: found redistributor 300 region 0:0x00000000fe6e0000
[    0.011953] GICv3: CPU3: using allocated LPI pending table @0x00000001004d0000
[    0.011986] CPU3: Booted secondary processor 0x0000000300 [0x412fd050]
[    0.012586] CPU features: detected: Spectre-v4
[    0.012592] CPU features: detected: Spectre-BHB
[    0.012597] CPU features: detected: SSBS not fully self-synchronizing
[    0.012599] Detected PIPT I-cache on CPU4
[    0.012704] GICv3: CPU4: found redistributor 400 region 0:0x00000000fe700000
[    0.012712] GICv3: CPU4: using allocated LPI pending table @0x00000001004e0000
[    0.012736] CPU4: Booted secondary processor 0x0000000400 [0x414fd0b0]
[    0.013318] Detected PIPT I-cache on CPU5
[    0.013429] GICv3: CPU5: found redistributor 500 region 0:0x00000000fe720000
[    0.013437] GICv3: CPU5: using allocated LPI pending table @0x00000001004f0000
[    0.013462] CPU5: Booted secondary processor 0x0000000500 [0x414fd0b0]
[    0.014024] Detected PIPT I-cache on CPU6
[    0.014137] GICv3: CPU6: found redistributor 600 region 0:0x00000000fe740000
[    0.014145] GICv3: CPU6: using allocated LPI pending table @0x0000000100500000
[    0.014169] CPU6: Booted secondary processor 0x0000000600 [0x414fd0b0]
[    0.014879] Detected PIPT I-cache on CPU7
[    0.014993] GICv3: CPU7: found redistributor 700 region 0:0x00000000fe760000
[    0.015001] GICv3: CPU7: using allocated LPI pending table @0x0000000100510000
[    0.015025] CPU7: Booted secondary processor 0x0000000700 [0x414fd0b0]
[    0.015077] smp: Brought up 1 node, 8 CPUs
[    0.015337] SMP: Total of 8 processors activated.
[    0.015348] CPU: All CPU(s) started at EL2
[    0.015360] CPU features: detected: 32-bit EL0 Support
[    0.015371] CPU features: detected: Data cache clean to the PoU not required for I/D coherence
[    0.015388] CPU features: detected: Common not Private translations
[    0.015400] CPU features: detected: CRC32 instructions
[    0.015411] CPU features: detected: Data cache clean to Point of Persistence
[    0.015429] CPU features: detected: RCpc load-acquire (LDAPR)
[    0.015441] CPU features: detected: LSE atomic instructions
[    0.015453] CPU features: detected: Privileged Access Never
[    0.015465] CPU features: detected: PMUv3
[    0.015475] CPU features: detected: RAS Extension Support
[    0.015491] CPU features: detected: Speculative Store Bypassing Safe (SSBS)
[    0.015551] alternatives: applying system-wide alternatives
[    0.019001] CPU features: detected: Hardware dirty bit management on CPU4-7
[    0.019321] Memory: 15770608K/16752640K available (20800K kernel code, 4190K rwdata, 14440K rodata, 2560K init, 619K bss, 448568K reserved, 524288K cma-reserved)
[    0.022746] devtmpfs: initialized
[    0.034723] posixtimers hash table entries: 4096 (order: 4, 65536 bytes, linear)
[    0.034770] futex hash table entries: 2048 (131072 bytes on 1 NUMA nodes, total 128 KiB, linear).
[    0.036120] 22064 pages in range for non-PLT usage
[    0.036123] 513584 pages in range for PLT usage
[    0.036232] prandom: seed boundary self test passed
[    0.037106] prandom: 100 self tests passed
[    0.037125] pinctrl core: initialized pinctrl subsystem
[    0.037384] DMI not present or invalid.
[    0.038767] NET: Registered PF_NETLINK/PF_ROUTE protocol family
[    0.039409] DMA: preallocated 2048 KiB GFP_KERNEL pool for atomic allocations
[    0.039511] DMA: preallocated 2048 KiB GFP_KERNEL|GFP_DMA pool for atomic allocations
[    0.039608] DMA: preallocated 2048 KiB GFP_KERNEL|GFP_DMA32 pool for atomic allocations
[    0.039632] audit: initializing netlink subsys (disabled)
[    0.039755] audit: type=2000 audit(0.036:1): state=initialized audit_enabled=0 res=1
[    0.041560] thermal_sys: Registered thermal governor 'fair_share'
[    0.041564] thermal_sys: Registered thermal governor 'bang_bang'
[    0.041572] thermal_sys: Registered thermal governor 'step_wise'
[    0.041577] thermal_sys: Registered thermal governor 'user_space'
[    0.041582] thermal_sys: Registered thermal governor 'power_allocator'
[    0.041610] cpuidle: using governor ladder
[    0.041712] hw-breakpoint: found 6 breakpoint and 4 watchpoint registers.
[    0.041804] ASID allocator initialised with 65536 entries
[    0.041864] Serial: AMBA PL011 UART driver
[    0.052649] /vop@fdd90000: Fixed dependency cycle(s) with /hdmi@fde80000
[    0.052686] /hdmi@fde80000: Fixed dependency cycle(s) with /vop@fdd90000
[    0.055157] /pcie@fe180000: Fixed dependency cycle(s) with /pcie@fe180000/legacy-interrupt-controller
[    0.063790] rockchip-gpio fd8a0000.gpio: probed /pinctrl/gpio@fd8a0000
[    0.064057] rockchip-gpio fec20000.gpio: probed /pinctrl/gpio@fec20000
[    0.064299] rockchip-gpio fec30000.gpio: probed /pinctrl/gpio@fec30000
[    0.064533] rockchip-gpio fec40000.gpio: probed /pinctrl/gpio@fec40000
[    0.064827] rockchip-gpio fec50000.gpio: probed /pinctrl/gpio@fec50000
[    0.066223] /pcie@fe150000: Fixed dependency cycle(s) with /pcie@fe150000/legacy-interrupt-controller
[    0.066551] /pcie@fe160000: Fixed dependency cycle(s) with /pcie@fe160000/legacy-interrupt-controller
[    0.066897] /pcie@fe170000: Fixed dependency cycle(s) with /pcie@fe170000/legacy-interrupt-controller
[    0.070941] /hdmi@fde80000: Fixed dependency cycle(s) with /hdmi0-con
[    0.070974] /hdmi0-con: Fixed dependency cycle(s) with /hdmi@fde80000
[    0.072048] HugeTLB: registered 1.00 GiB page size, pre-allocated 0 pages
[    0.072057] HugeTLB: 0 KiB vmemmap can be freed for a 1.00 GiB page
[    0.072064] HugeTLB: registered 32.0 MiB page size, pre-allocated 0 pages
[    0.072069] HugeTLB: 0 KiB vmemmap can be freed for a 32.0 MiB page
[    0.072075] HugeTLB: registered 2.00 MiB page size, pre-allocated 0 pages
[    0.072080] HugeTLB: 0 KiB vmemmap can be freed for a 2.00 MiB page
[    0.072085] HugeTLB: registered 64.0 KiB page size, pre-allocated 0 pages
[    0.072090] HugeTLB: 0 KiB vmemmap can be freed for a 64.0 KiB page
[    0.129140] raid6: neonx8   gen()  5132 MB/s
[    0.185868] raid6: neonx4   gen()  5141 MB/s
[    0.242601] raid6: neonx2   gen()  4288 MB/s
[    0.299328] raid6: neonx1   gen()  3403 MB/s
[    0.356065] raid6: int64x8  gen()  1956 MB/s
[    0.412792] raid6: int64x4  gen()  2372 MB/s
[    0.469514] raid6: int64x2  gen()  1962 MB/s
[    0.526249] raid6: int64x1  gen()  1646 MB/s
[    0.526254] raid6: using algorithm neonx4 gen() 5141 MB/s
[    0.582972] raid6: .... xor() 3855 MB/s, rmw enabled
[    0.582978] raid6: using neon recovery algorithm
[    0.583069] ACPI: Interpreter disabled.
[    0.583770] iommu: Default domain type: Translated
[    0.583777] iommu: DMA domain TLB invalidation policy: strict mode
[    0.584163] SCSI subsystem initialized
[    0.584329] usbcore: registered new interface driver usbfs
[    0.584347] usbcore: registered new interface driver hub
[    0.584363] usbcore: registered new device driver usb
[    0.584619] mc: Linux media interface: v0.10
[    0.584639] videodev: Linux video capture interface: v2.00
[    0.584670] pps_core: LinuxPPS API ver. 1 registered
[    0.584675] pps_core: Software ver. 5.3.6 - Copyright 2005-2007 Rodolfo Giometti <giometti@linux.it>
[    0.584685] PTP clock support registered
[    0.584704] EDAC MC: Ver: 3.0.0
[    0.584862] scmi_core: SCMI protocol bus registered
[    0.585039] Advanced Linux Sound Architecture Driver Initialized.
[    0.585484] vgaarb: loaded
[    0.585661] clocksource: Switched to clocksource arch_sys_counter
[    0.585848] VFS: Disk quotas dquot_6.6.0
[    0.585861] VFS: Dquot-cache hash table entries: 512 (order 0, 4096 bytes)
[    0.586028] pnp: PnP ACPI: disabled
[    0.589854] NET: Registered PF_INET protocol family
[    0.590046] IP idents hash table entries: 262144 (order: 9, 2097152 bytes, linear)
[    0.632932] tcp_listen_portaddr_hash hash table entries: 8192 (order: 5, 131072 bytes, linear)
[    0.633052] Table-perturb hash table entries: 65536 (order: 6, 262144 bytes, linear)
[    0.633081] TCP established hash table entries: 131072 (order: 8, 1048576 bytes, linear)
[    0.633905] TCP bind hash table entries: 65536 (order: 9, 2097152 bytes, linear)
[    0.635498] TCP: Hash tables configured (established 131072 bind 65536)
[    0.635632] MPTCP token hash table entries: 16384 (order: 7, 393216 bytes, linear)
[    0.635754] UDP hash table entries: 8192 (order: 7, 524288 bytes, linear)
[    0.636258] UDP-Lite hash table entries: 8192 (order: 7, 524288 bytes, linear)
[    0.636819] NET: Registered PF_UNIX/PF_LOCAL protocol family
[    0.636841] NET: Registered PF_XDP protocol family
[    0.636852] PCI: CLS 0 bytes, default 64
[    0.636914] ARM FF-A: FFA_VERSION returned not supported
[    0.636946] Trying to unpack rootfs image as initramfs...
[    0.644263] kvm [1]: nv: 568 coarse grained trap handlers
[    0.644466] kvm [1]: IPA Size Limit: 40 bits
[    0.644482] kvm [1]: GICv3: no GICV resource entry
[    0.644487] kvm [1]: disabling GICv2 emulation
[    0.644512] kvm [1]: GIC system register CPU interface enabled
[    0.644526] kvm [1]: vgic interrupt IRQ9
[    0.644552] kvm [1]: VHE mode initialized successfully
[    0.730630] Initialise system trusted keyrings
[    0.730757] workingset: timestamp_bits=46 max_order=22 bucket_order=0
[    0.731077] squashfs: version 4.0 (2009/01/31) Phillip Lougher
[    0.731217] fuse: init (API version 7.45)
[    0.731502] SGI XFS with ACLs, security attributes, quota, no debug enabled
[    0.732728] cryptd: max_cpu_qlen set to 1000
[    0.765391] NET: Registered PF_ALG protocol family
[    0.765433] xor: measuring software checksum speed
[    0.765903]    8regs           :  7056 MB/sec
[    0.766368]    32regs          :  7133 MB/sec
[    0.766743]    arm64_neon      :  8871 MB/sec
[    0.766748] xor: using function: arm64_neon (8871 MB/sec)
[    0.766757] Key type asymmetric registered
[    0.766762] Asymmetric key parser 'x509' registered
[    0.766799] Block layer SCSI generic (bsg) driver version 0.4 loaded (major 240)
[    0.766895] io scheduler mq-deadline registered
[    0.766901] io scheduler kyber registered
[    0.766926] io scheduler bfq registered
[    4.500351] Freeing initrd memory: 17540K
[    4.505752] ledtrig-cpu: registered to indicate activity on CPUs
[    4.511459] dma-pl330 fea10000.dma-controller: Loaded driver for PL330 DMAC-241330
[    4.511470] dma-pl330 fea10000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    4.512142] dma-pl330 fea30000.dma-controller: Loaded driver for PL330 DMAC-241330
[    4.512153] dma-pl330 fea30000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    4.512831] dma-pl330 fed10000.dma-controller: Loaded driver for PL330 DMAC-241330
[    4.512841] dma-pl330 fed10000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    4.515995] Serial: 8250/16550 driver, 5 ports, IRQ sharing disabled
[    4.517057] printk: legacy console [ttyS2] disabled
[    4.517194] feb50000.serial: ttyS2 at MMIO 0xfeb50000 (irq = 31, base_baud = 1500000) is a 16550A
[    4.517243] printk: legacy console [ttyS2] enabled
[    4.669279] Serial: AMBA driver
[    4.670068] misc dump reg init
[    4.670707] arm-smmu-v3 fc900000.iommu: ias 48-bit, oas 48-bit (features 0x001c1e8f)
[    4.672331] arm-smmu-v3 fc900000.iommu: allocated 65536 entries for cmdq
[    4.673146] arm-smmu-v3 fc900000.iommu: allocated 32768 entries for evtq
[    4.674007] arm-smmu-v3 fc900000.iommu: msi_domain absent - falling back to wired irqs
[    4.675607] rockchip-pm-domain fd8d8000.power-management:power-controller: supply domain not found, using dummy regulator
[    4.676986] platform fdab0000.npu: Adding to iommu group 0
[    4.678351] platform fdac0000.npu: Adding to iommu group 1
[    4.679738] platform fdad0000.npu: Adding to iommu group 2
[    4.681042] platform fdb50000.video-codec: Adding to iommu group 3
[    4.681842] platform fdb50400.vdpu: Adding to iommu group 3
[    4.682925] platform fdb60000.rga: Adding to iommu group 4
[    4.684166] platform fdb70000.rga: Adding to iommu group 5
[    4.685307] platform fdba0000.video-codec: Adding to iommu group 6
[    4.686101] platform fdba0000.jpege-core: Adding to iommu group 6
[    4.687105] platform fdba4000.video-codec: Adding to iommu group 7
[    4.687884] platform fdba4000.jpege-core: Adding to iommu group 7
[    4.688882] platform fdba8000.video-codec: Adding to iommu group 8
[    4.689668] platform fdba8000.jpege-core: Adding to iommu group 8
[    4.690663] platform fdbac000.video-codec: Adding to iommu group 9
[    4.691435] platform fdbac000.jpege-core: Adding to iommu group 9
[    4.692174] rockchip-pm-domain fd8d8000.power-management:power-controller: supply domain not found, using dummy regulator
[    4.693554] platform fdc38000.video-codec: Adding to iommu group 10
[    4.694345] platform fdc38100.rkvdec-core: Adding to iommu group 10
[    4.695527] platform fdc40000.video-codec: Adding to iommu group 11
[    4.696741] platform fdd90000.vop: Adding to iommu group 12
[    4.698024] platform fdb90000.jpegd: Adding to iommu group 13
[    4.699239] platform fdbd0000.rkvenc-core: Adding to iommu group 14
[    4.700541] platform fdbe0000.rkvenc-core: Adding to iommu group 15
[    4.701864] platform fdc48100.rkvdec-core: Adding to iommu group 16
[    4.707683] brd: module loaded
[    4.732835] loop: module loaded
[    4.733184] zloop: Module loaded
[    4.734702] ahci-dwc fe210000.sata: supply ahci not found, using dummy regulator
[    4.735401] ahci-dwc fe210000.sata: supply phy not found, using dummy regulator
[    4.736321] platform fe210000.sata:sata-port@0: supply target not found, using dummy regulator
[    4.737170] phy phy-fee00000.phy.0: Runtime PM usage count underflow!
[    4.737736] ahci-dwc fe210000.sata: PMPn is limited up to 5 ports
[    4.738309] ahci-dwc fe210000.sata: masking port_map 0x1 -> 0x1
[    4.738836] ahci-dwc fe210000.sata: SSS flag set, parallel bus scan disabled
[    4.739466] ahci-dwc fe210000.sata: AHCI vers 0001.0300, 32 command slots, 6 Gbps, platform mode
[    4.740237] ahci-dwc fe210000.sata: 1/1 ports implemented (port mask 0x1)
[    4.740832] ahci-dwc fe210000.sata: flags: ncq sntf stag pm led clo only pmp fbs pio slum part ccc apst 
[    4.742532] scsi host0: ahci-dwc
[    4.742911] ata1: SATA max UDMA/133 mmio [mem 0xfe210000-0xfe210fff] port 0x100 irq 53 lpm-pol 0
[    4.745154] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/regulators/dcdc-reg7
[    4.746040] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs3-null-pins
[    4.746843] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs2-null-pins
[    4.747644] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs1-null-pins
[    4.751049] rk_gmac-dwmac fe1c0000.ethernet: IRQ sfty not found
[    4.751662] rk_gmac-dwmac fe1c0000.ethernet: supply phy not found, using dummy regulator
[    4.752424] rk_gmac-dwmac fe1c0000.ethernet: clock input or output? (output).
[    4.753051] rk_gmac-dwmac fe1c0000.ethernet: TX delay(0x42).
[    4.753548] rk_gmac-dwmac fe1c0000.ethernet: Can not read property: rx_delay.
[    4.754172] rk_gmac-dwmac fe1c0000.ethernet: set rx_delay to 0x10
[    4.754710] rk_gmac-dwmac fe1c0000.ethernet: integrated PHY? (no).
[    4.760261] rk_gmac-dwmac fe1c0000.ethernet: init for RGMII_RXID
[    4.760865] rk_gmac-dwmac fe1c0000.ethernet: User ID: 0x30, Synopsys ID: 0x51
[    4.761491] rk_gmac-dwmac fe1c0000.ethernet: 	DWMAC4/5
[    4.761943] rk_gmac-dwmac fe1c0000.ethernet: DMA HW capability register supported
[    4.762617] rk_gmac-dwmac fe1c0000.ethernet: Active PHY interface: RGMII (1)
[    4.763233] rk_gmac-dwmac fe1c0000.ethernet: RX Checksum Offload Engine supported
[    4.763888] rk_gmac-dwmac fe1c0000.ethernet: TX Checksum insertion supported
[    4.764505] rk_gmac-dwmac fe1c0000.ethernet: Wake-Up On Lan supported
[    4.765070] rk_gmac-dwmac fe1c0000.ethernet: Enable RX Mitigation via HW Watchdog Timer
[    4.765773] rk_gmac-dwmac fe1c0000.ethernet: Enabled L3L4 Flow TC (entries=2)
[    4.766397] rk_gmac-dwmac fe1c0000.ethernet: Enabled RFS Flow TC (entries=10)
[    4.767022] rk_gmac-dwmac fe1c0000.ethernet: TSO supported
[    4.767502] rk_gmac-dwmac fe1c0000.ethernet: TSO feature enabled
[    4.768027] rk_gmac-dwmac fe1c0000.ethernet: SPH feature enabled
[    4.768552] rk_gmac-dwmac fe1c0000.ethernet: Using 32/32 bits DMA host/device width
[    4.903165] rk_gmac-dwmac fe1b0000.ethernet: IRQ sfty not found
[    4.903854] rk_gmac-dwmac fe1b0000.ethernet: supply phy not found, using dummy regulator
[    4.904612] rk_gmac-dwmac fe1b0000.ethernet: clock input or output? (output).
[    4.905238] rk_gmac-dwmac fe1b0000.ethernet: TX delay(0x44).
[    4.905744] rk_gmac-dwmac fe1b0000.ethernet: Can not read property: rx_delay.
[    4.906369] rk_gmac-dwmac fe1b0000.ethernet: set rx_delay to 0x10
[    4.906906] rk_gmac-dwmac fe1b0000.ethernet: integrated PHY? (no).
[    4.912458] rk_gmac-dwmac fe1b0000.ethernet: init for RGMII_RXID
[    4.913055] rk_gmac-dwmac fe1b0000.ethernet: User ID: 0x30, Synopsys ID: 0x51
[    4.913681] rk_gmac-dwmac fe1b0000.ethernet: 	DWMAC4/5
[    4.914132] rk_gmac-dwmac fe1b0000.ethernet: DMA HW capability register supported
[    4.914787] rk_gmac-dwmac fe1b0000.ethernet: Active PHY interface: RGMII (1)
[    4.915404] rk_gmac-dwmac fe1b0000.ethernet: RX Checksum Offload Engine supported
[    4.916066] rk_gmac-dwmac fe1b0000.ethernet: TX Checksum insertion supported
[    4.916681] rk_gmac-dwmac fe1b0000.ethernet: Wake-Up On Lan supported
[    4.917246] rk_gmac-dwmac fe1b0000.ethernet: Enable RX Mitigation via HW Watchdog Timer
[    4.917947] rk_gmac-dwmac fe1b0000.ethernet: Enabled L3L4 Flow TC (entries=2)
[    4.918571] rk_gmac-dwmac fe1b0000.ethernet: Enabled RFS Flow TC (entries=10)
[    4.919197] rk_gmac-dwmac fe1b0000.ethernet: TSO supported
[    4.919679] rk_gmac-dwmac fe1b0000.ethernet: TSO feature enabled
[    4.920204] rk_gmac-dwmac fe1b0000.ethernet: SPH feature enabled
[    4.920730] rk_gmac-dwmac fe1b0000.ethernet: Using 32/32 bits DMA host/device width
[    5.054977] usbcore: registered new interface driver cdc_wdm
[    5.055538] usbcore: registered new interface driver uas
[    5.056028] usbcore: registered new interface driver usb-storage
[    5.056591] usbcore: registered new interface driver usbserial_generic
[    5.057169] usbserial: USB Serial support registered for generic
[    5.057704] usbcore: registered new interface driver ch341
[    5.058191] usbserial: USB Serial support registered for ch341-uart
[    5.058749] usbcore: registered new interface driver cp210x
[    5.059249] usbserial: USB Serial support registered for cp210x
[    5.059779] usbcore: registered new interface driver ftdi_sio
[    5.060288] usbserial: USB Serial support registered for FTDI USB Serial Device
[    5.060937] usbcore: registered new interface driver pl2303
[    5.061430] usbserial: USB Serial support registered for pl2303
[    5.061956] usbcore: registered new device driver onboard-usb-dev
[    5.064011] i2c_dev: i2c /dev entries driver
[    5.074659] mmc2: CQHCI version 5.10
[    5.074745] arm-scmi arm-scmi.0.auto: Using scmi_smc_transport
[    5.075503] arm-scmi arm-scmi.0.auto: SCMI max-rx-timeout: 30ms / max-msg-size: 104bytes / max-msg: 20
[    5.076403] scmi_protocol scmi_dev.1: Enabled polling mode TX channel - prot_id:16
[    5.077146] arm-scmi arm-scmi.0.auto: SCMI Notifications - Core Enabled.
[    5.077759] arm-scmi arm-scmi.0.auto: SCMI Protocol v2.0 'rockchip:' Firmware version 0x0
[    5.078493] arm-scmi arm-scmi.0.auto: Enabling SCMI Quirk [quirk_clock_rates_triplet_out_of_spec]
[    5.080279] SMCCC: SOC_ID: ARCH_SOC_ID not implemented, skipping ....
[    5.081565] hid: raw HID events driver (C) Jiri Kosina
[    5.082060] usbcore: registered new interface driver usbhid
[    5.082554] usbhid: USB HID core driver
[    5.085563] hw perfevents: enabled with armv8_cortex_a55 PMU driver, 7 (0,8000003f) counters available
[    5.087327] hw perfevents: enabled with armv8_cortex_a76 PMU driver, 7 (0,8000003f) counters available
[    5.090949] NET: Registered PF_LLC protocol family
[    5.092306] Initializing XFRM netlink socket
[    5.092733] NET: Registered PF_INET6 protocol family
[    5.094064] Segment Routing with IPv6
[    5.094391] RPL Segment Routing with IPv6
[    5.094755] In-situ OAM (IOAM) with IPv6
[    5.095146] sit: IPv6, IPv4 and MPLS over IPv4 tunneling driver
[    5.096063] NET: Registered PF_PACKET protocol family
[    5.096512] NET: Registered PF_KEY protocol family
[    5.096947] bridge: filtering via arp/ip/ip6tables is no longer available by default. Update your scripts to load br_netfilter if you need this.
[    5.102478] mmc2: SDHCI controller on fe2e0000.mmc [fe2e0000.mmc] using ADMA
[    5.104003] registered taskstats version 1
[    5.104660] Loading compiled-in X.509 certificates
[    5.110643] zswap: loaded using pool zstd
[    5.111102] Key type .fscrypt registered
[    5.111449] Key type fscrypt-provisioning registered
[    5.112538] Btrfs loaded, zoned=yes, fsverity=no
[    5.123719] mmc2: Failed to initialize a non-removable card
[    5.148178] phy phy-fee20000.phy.1: Runtime PM usage count underflow!
[    5.149314] rockchip-dw-pcie a40c00000.pcie: host bridge /pcie@fe180000 ranges:
[    5.149987] rockchip-dw-pcie a40c00000.pcie:       IO 0x00f3100000..0x00f31fffff -> 0x00f3100000
[    5.150780] rockchip-dw-pcie a40c00000.pcie:      MEM 0x00f3200000..0x00f3ffffff -> 0x00f3200000
[    5.151567] rockchip-dw-pcie a40c00000.pcie:      MEM 0x09c0000000..0x09ffffffff -> 0x09c0000000
[    5.152527] rockchip-dw-pcie a40c00000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    5.205793] ata1: SATA link up 6.0 Gbps (SStatus 133 SControl 300)
[    5.208100] ata1.00: ATA-9: ADATA SP920SS, 1.08, max UDMA/133
[    5.208622] ata1.00: 250069679 sectors, multi 0: LBA48 NCQ (depth 32)
[    5.210063] ata1.00: Features: HIPM DIPM
[    5.212640] ata1.00: configured for UDMA/133
[    5.213286] scsi 0:0:0:0: Direct-Access     ATA      ADATA SP920SS    1.08 PQ: 0 ANSI: 5
[    5.214583] sd 0:0:0:0: [sda] 250069679 512-byte logical blocks: (128 GB/119 GiB)
[    5.215289] sd 0:0:0:0: [sda] Write Protect is off
[    5.215794] sd 0:0:0:0: [sda] Write cache: enabled, read cache: enabled, doesn't support DPO or FUA
[    5.216682] sd 0:0:0:0: [sda] Preferred minimum I/O size 512 bytes
[    5.262311] GPT:Primary header thinks Alt. header is not at the end of the disk.
[    5.262983] GPT:3440639 != 250069678
[    5.263308] GPT:Alternate GPT header not at the end of the disk.
[    5.263841] GPT:3440639 != 250069678
[    5.264164] GPT: Use GNU Parted to correct GPT errors.
[    5.264636]  sda: sda1 sda2
[    5.265390] sd 0:0:0:0: [sda] Attached SCSI disk
[    5.352401] rockchip-dw-pcie a40c00000.pcie: PCIe Gen.2 x1 link up
[    5.353340] rockchip-dw-pcie a40c00000.pcie: PCI host bridge to bus 0003:30
[    5.353969] pci_bus 0003:30: root bus resource [bus 30-3f]
[    5.354465] pci_bus 0003:30: root bus resource [io  0x0000-0xfffff] (bus address [0xf3100000-0xf31fffff])
[    5.355315] pci_bus 0003:30: root bus resource [mem 0xf3200000-0xf3ffffff]
[    5.355944] pci_bus 0003:30: root bus resource [mem 0x9c0000000-0x9ffffffff]
[    5.356736] pci 0003:30:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    5.357404] pci 0003:30:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    5.357959] pci 0003:30:00.0: PCI bridge to [bus 01-ff]
[    5.358430] pci 0003:30:00.0:   bridge window [io  0x0000-0x0fff]
[    5.358976] pci 0003:30:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    5.359594] pci 0003:30:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    5.360329] pci 0003:30:00.0: supports D1 D2
[    5.360715] pci 0003:30:00.0: PME# supported from D0 D1 D3hot
[    5.363567] pci 0003:30:00.0: Adding to iommu group 17
[    5.371848] pci 0003:30:00.0: Primary bus is hard wired to 0
[    5.372371] pci 0003:30:00.0: bridge configuration invalid ([bus 01-ff]), reconfiguring
[    5.373360] pci 0003:31:00.0: [10ec:8125] type 00 class 0x020000 PCIe Endpoint
[    5.374161] pci 0003:31:00.0: BAR 0: initial BAR value 0x00000000 invalid
[    5.374767] pci 0003:31:00.0: BAR 0 [io  size 0x0100]
[    5.375236] pci 0003:31:00.0: BAR 2 [mem 0x00000000-0x0000ffff 64bit]
[    5.375831] pci 0003:31:00.0: BAR 4 [mem 0x00000000-0x00003fff 64bit]
[    5.376434] pci 0003:31:00.0: Max Payload Size set to 256 (was 128, max 256)
[    5.377412] pci 0003:31:00.0: supports D1 D2
[    5.377798] pci 0003:31:00.0: PME# supported from D0 D1 D2 D3hot D3cold
[    5.379025] pci 0003:31:00.0: Adding to iommu group 17
[    5.389193] pci 0003:31:00.0: ASPM: default states L0s L1
[    5.389773] pci_bus 0003:31: busn_res: [bus 31-3f] end is updated to 31
[    5.390385] pci 0003:30:00.0: bridge window [mem 0xf3200000-0xf32fffff]: assigned
[    5.391055] pci 0003:30:00.0: ROM [mem 0xf3300000-0xf330ffff pref]: assigned
[    5.391685] pci 0003:30:00.0: bridge window [io  0x1000-0x1fff]: assigned
[    5.392295] pci 0003:31:00.0: BAR 2 [mem 0xf3200000-0xf320ffff 64bit]: assigned
[    5.392992] pci 0003:31:00.0: BAR 4 [mem 0xf3210000-0xf3213fff 64bit]: assigned
[    5.393676] pci 0003:31:00.0: BAR 0 [io  0x1000-0x10ff]: assigned
[    5.394232] pci 0003:30:00.0: PCI bridge to [bus 31]
[    5.394679] pci 0003:30:00.0:   bridge window [io  0x1000-0x1fff]
[    5.395225] pci 0003:30:00.0:   bridge window [mem 0xf3200000-0xf32fffff]
[    5.395841] pci_bus 0003:30: resource 4 [io  0x0000-0xfffff]
[    5.396349] pci_bus 0003:30: resource 5 [mem 0xf3200000-0xf3ffffff]
[    5.396910] pci_bus 0003:30: resource 6 [mem 0x9c0000000-0x9ffffffff]
[    5.397485] pci_bus 0003:31: resource 0 [io  0x1000-0x1fff]
[    5.397984] pci_bus 0003:31: resource 1 [mem 0xf3200000-0xf32fffff]
[    5.401335] pcieport 0003:30:00.0: PME: Signaling with IRQ 78
[    5.403108] phy phy-fee80000.phy.3: Runtime PM usage count underflow!
[    5.403728] rockchip-dw-pcie a40000000.pcie: host bridge /pcie@fe150000 ranges:
[    5.404399] rockchip-dw-pcie a40000000.pcie:       IO 0x00f0100000..0x00f01fffff -> 0x00f0100000
[    5.405192] rockchip-dw-pcie a40000000.pcie:      MEM 0x00f0200000..0x00f0ffffff -> 0x00f0200000
[    5.405995] rockchip-dw-pcie a40000000.pcie:      MEM 0x0900000000..0x093fffffff -> 0x0900000000
[    5.414649] rockchip-dw-pcie a40000000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    5.715729] rockchip-dw-pcie a40000000.pcie: PCIe Gen.2 x2 link up
[    5.716389] rockchip-dw-pcie a40000000.pcie: PCI host bridge to bus 0000:00
[    5.717017] pci_bus 0000:00: root bus resource [bus 00-0f]
[    5.717512] pci_bus 0000:00: root bus resource [io  0x100000-0x1fffff] (bus address [0xf0100000-0xf01fffff])
[    5.718384] pci_bus 0000:00: root bus resource [mem 0xf0200000-0xf0ffffff]
[    5.719011] pci_bus 0000:00: root bus resource [mem 0x900000000-0x93fffffff]
[    5.719663] pci 0000:00:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    5.720329] pci 0000:00:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    5.720884] pci 0000:00:00.0: PCI bridge to [bus 01-ff]
[    5.721355] pci 0000:00:00.0:   bridge window [io  0x0000-0x0fff]
[    5.721902] pci 0000:00:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    5.722519] pci 0000:00:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    5.723254] pci 0000:00:00.0: supports D1 D2
[    5.723641] pci 0000:00:00.0: PME# supported from D0 D1 D3hot
[    5.724676] pci 0000:00:00.0: Adding to iommu group 18
[    5.732631] pci_bus 0000:01: busn_res: can not insert [bus 01-ff] under [bus 00-0f] (conflicts with (null) [bus 00-0f])
[    5.733672] pci 0000:01:00.0: [9000:1003] type 00 class 0x058000 PCIe Endpoint
[    5.734475] pci 0000:01:00.0: BAR 0 [mem 0x00000000-0x000fffff 64bit]
[    5.735057] pci 0000:01:00.0: BAR 2 [mem 0x00000000-0x000fffff]
[    5.735592] pci 0000:01:00.0: BAR 3 [mem 0x00000000-0x0000ffff]
[    5.736135] pci 0000:01:00.0: BAR 4 [mem 0x00000000-0x00000fff]
[    5.736672] pci 0000:01:00.0: BAR 5 [mem 0x00000000-0x0000ffff]
[    5.737206] pci 0000:01:00.0: ROM [mem 0x00000000-0x007fffff pref]
[    5.737782] pci 0000:01:00.0: Max Payload Size set to 256 (was 128, max 512)
[    5.738592] pci 0000:01:00.0: supports D1
[    5.738954] pci 0000:01:00.0: PME# supported from D0 D1 D3hot
[    5.739545] pci 0000:01:00.0: 8.000 Gb/s available PCIe bandwidth, limited by 5.0 GT/s PCIe x2 link at 0000:00:00.0 (capable of 16.000 Gb/s with 5.0 GT/s PCIe x4 link)
[    5.741261] pci 0000:01:00.0: Adding to iommu group 18
[    5.741829] pci 0000:00:00.0: bridge window [mem 0x00100000-0x003fffff] to [bus 01-ff] add_size 800000 add_align 800000
[    5.742813] pci 0000:00:00.0: bridge window [mem size 0x00b00000]: can't assign; no space
[    5.743545] pci 0000:00:00.0: bridge window [mem size 0x00b00000]: failed to assign
[    5.744230] pci 0000:00:00.0: ROM [mem 0xf0200000-0xf020ffff pref]: assigned
[    5.744861] pci 0000:00:00.0: ROM [mem 0xf0200000-0xf020ffff pref]: releasing
[    5.745499] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: assigned
[    5.746176] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: failed to expand by 0x800000
[    5.746996] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: failed to add optional 800000
[    5.747829] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: can't assign; no space
[    5.748520] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: failed to assign
[    5.749172] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: assigned
[    5.749857] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: assigned
[    5.750472] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: assigned
[    5.751087] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: assigned
[    5.751702] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: assigned
[    5.752316] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: releasing
[    5.752983] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: releasing
[    5.753597] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: releasing
[    5.754210] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: releasing
[    5.754823] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: releasing
[    5.755438] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: assigned
[    5.756127] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: assigned
[    5.756743] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: assigned
[    5.757359] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: assigned
[    5.757973] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: assigned
[    5.758587] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: can't assign; no space
[    5.759284] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: failed to assign
[    5.759933] pci 0000:00:00.0: PCI bridge to [bus 01-ff]
[    5.760403] pci 0000:00:00.0:   bridge window [mem 0xf0200000-0xf04fffff]
[    5.761012] pci_bus 0000:00: Some PCI device resources are unassigned, try booting with pci=realloc
[    5.761814] pci_bus 0000:00: resource 4 [io  0x100000-0x1fffff]
[    5.762351] pci_bus 0000:00: resource 5 [mem 0xf0200000-0xf0ffffff]
[    5.762913] pci_bus 0000:00: resource 6 [mem 0x900000000-0x93fffffff]
[    5.763489] pci_bus 0000:01: resource 1 [mem 0xf0200000-0xf04fffff]
[    5.766741] pcieport 0000:00:00.0: PME: Signaling with IRQ 89
[    5.768198] phy phy-fee80000.phy.3: Runtime PM usage count underflow!
[    5.768819] rockchip-dw-pcie a40400000.pcie: host bridge /pcie@fe160000 ranges:
[    5.769503] rockchip-dw-pcie a40400000.pcie:       IO 0x00f1100000..0x00f11fffff -> 0x00f1100000
[    5.770298] rockchip-dw-pcie a40400000.pcie:      MEM 0x00f1200000..0x00f1ffffff -> 0x00f1200000
[    5.771084] rockchip-dw-pcie a40400000.pcie:      MEM 0x0940000000..0x097fffffff -> 0x0940000000
[    5.779769] rockchip-dw-pcie a40400000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    6.079146] rockchip-dw-pcie a40400000.pcie: PCIe Gen.3 x2 link up
[    6.079754] rockchip-dw-pcie a40400000.pcie: PCI host bridge to bus 0001:10
[    6.080368] pci_bus 0001:10: root bus resource [bus 10-1f]
[    6.080852] pci_bus 0001:10: root bus resource [io  0x200000-0x2fffff] (bus address [0xf1100000-0xf11fffff])
[    6.081711] pci_bus 0001:10: root bus resource [mem 0xf1200000-0xf1ffffff]
[    6.082313] pci_bus 0001:10: root bus resource [mem 0x940000000-0x97fffffff]
[    6.082951] pci 0001:10:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    6.083601] pci 0001:10:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    6.084143] pci 0001:10:00.0: PCI bridge to [bus 01-ff]
[    6.084603] pci 0001:10:00.0:   bridge window [io  0x0000-0x0fff]
[    6.085139] pci 0001:10:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    6.085739] pci 0001:10:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    6.086443] pci 0001:10:00.0: supports D1 D2
[    6.086819] pci 0001:10:00.0: PME# supported from D0 D1 D3hot
[    6.087618] pci 0001:10:00.0: Adding to iommu group 19
[    6.092224] pci 0001:10:00.0: Primary bus is hard wired to 0
[    6.092729] pci 0001:10:00.0: bridge configuration invalid ([bus 01-ff]), reconfiguring
[    6.093526] pci 0001:11:00.0: [1e4b:1202] type 00 class 0x010802 PCIe Endpoint
[    6.094275] pci 0001:11:00.0: BAR 0 [mem 0x00000000-0x00003fff 64bit]
[    6.094870] pci 0001:11:00.0: Max Payload Size set to 256 (was 128, max 512)
[    6.095752] pci 0001:11:00.0: PME# supported from D0 D3hot D3cold
[    6.096409] pci 0001:11:00.0: 15.752 Gb/s available PCIe bandwidth, limited by 8.0 GT/s PCIe x2 link at 0001:10:00.0 (capable of 31.504 Gb/s with 8.0 GT/s PCIe x4 link)
[    6.098021] pci 0001:11:00.0: Adding to iommu group 19
[    6.102462] pci 0001:11:00.0: ASPM: default states L1
[    6.102950] pci_bus 0001:11: busn_res: [bus 11-1f] end is updated to 11
[    6.103541] pci 0001:10:00.0: bridge window [mem 0xf1200000-0xf12fffff]: assigned
[    6.104198] pci 0001:10:00.0: ROM [mem 0xf1300000-0xf130ffff pref]: assigned
[    6.104818] pci 0001:11:00.0: BAR 0 [mem 0xf1200000-0xf1203fff 64bit]: assigned
[    6.105498] pci 0001:10:00.0: PCI bridge to [bus 11]
[    6.105941] pci 0001:10:00.0:   bridge window [mem 0xf1200000-0xf12fffff]
[    6.106538] pci_bus 0001:10: resource 4 [io  0x200000-0x2fffff]
[    6.107058] pci_bus 0001:10: resource 5 [mem 0xf1200000-0xf1ffffff]
[    6.107608] pci_bus 0001:10: resource 6 [mem 0x940000000-0x97fffffff]
[    6.108172] pci_bus 0001:11: resource 1 [mem 0xf1200000-0xf12fffff]
[    6.110031] pcieport 0001:10:00.0: PME: Signaling with IRQ 100
[    6.111235] phy phy-fee10000.phy.2: Runtime PM usage count underflow!
[    6.111269] nvme nvme0: pci function 0001:11:00.0
[    6.111819] rockchip-dw-pcie a40800000.pcie: host bridge /pcie@fe170000 ranges:
[    6.112247] nvme 0001:11:00.0: enabling device (0000 -> 0002)
[    6.112876] rockchip-dw-pcie a40800000.pcie:       IO 0x00f2100000..0x00f21fffff -> 0x00f2100000
[    6.114140] rockchip-dw-pcie a40800000.pcie:      MEM 0x00f2200000..0x00f2ffffff -> 0x00f2200000
[    6.114910] rockchip-dw-pcie a40800000.pcie:      MEM 0x0980000000..0x09bfffffff -> 0x0980000000
[    6.115774] rockchip-dw-pcie a40800000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    6.162026] hwmon hwmon7: temp1_input not attached to any thermal zone
[    6.162661] hwmon hwmon7: temp2_input not attached to any thermal zone
[    6.163276] hwmon hwmon7: temp3_input not attached to any thermal zone
[    6.164185] nvme nvme0: allocated 8 MiB host memory buffer (1 segment).
[    6.169698] nvme nvme0: 8/0/0 default/read/poll queues
[    6.172479] nvme nvme0: Ignoring bogus Namespace Identifiers
[    6.176328]  nvme0n1: p1 p2 p3
[    6.219135] rockchip-dw-pcie a40800000.pcie: PCIe Gen.2 x1 link up
[    6.219753] rockchip-dw-pcie a40800000.pcie: PCI host bridge to bus 0002:20
[    6.220367] pci_bus 0002:20: root bus resource [bus 20-2f]
[    6.220851] pci_bus 0002:20: root bus resource [io  0x300000-0x3fffff] (bus address [0xf2100000-0xf21fffff])
[    6.221710] pci_bus 0002:20: root bus resource [mem 0xf2200000-0xf2ffffff]
[    6.222313] pci_bus 0002:20: root bus resource [mem 0x980000000-0x9bfffffff]
[    6.223003] pci 0002:20:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    6.223655] pci 0002:20:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    6.224197] pci 0002:20:00.0: PCI bridge to [bus 01-ff]
[    6.224658] pci 0002:20:00.0:   bridge window [io  0x0000-0x0fff]
[    6.225192] pci 0002:20:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    6.225794] pci 0002:20:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    6.226502] pci 0002:20:00.0: supports D1 D2
[    6.226877] pci 0002:20:00.0: PME# supported from D0 D1 D3hot
[    6.228393] pci 0002:20:00.0: Adding to iommu group 20
[    6.233231] pci 0002:20:00.0: Primary bus is hard wired to 0
[    6.233733] pci 0002:20:00.0: bridge configuration invalid ([bus 01-ff]), reconfiguring
[    6.234602] pci 0002:21:00.0: [10ec:8125] type 00 class 0x020000 PCIe Endpoint
[    6.235388] pci 0002:21:00.0: BAR 0 [io  0x300000-0x3000ff]
[    6.235896] pci 0002:21:00.0: BAR 2 [mem 0xf2200000-0xf220ffff 64bit]
[    6.236469] pci 0002:21:00.0: BAR 4 [mem 0xf2210000-0xf2213fff 64bit]
[    6.237377] pci 0002:21:00.0: supports D1 D2
[    6.237753] pci 0002:21:00.0: PME# supported from D0 D1 D2 D3hot D3cold
[    6.238843] pci 0002:21:00.0: Adding to iommu group 20
[    6.245835] pci 0002:21:00.0: ASPM: default states L0s L1
[    6.246392] pci_bus 0002:21: busn_res: [bus 21-2f] end is updated to 21
[    6.246984] pci 0002:20:00.0: bridge window [mem 0xf2200000-0xf22fffff]: assigned
[    6.247642] pci 0002:20:00.0: ROM [mem 0xf2300000-0xf230ffff pref]: assigned
[    6.248259] pci 0002:20:00.0: bridge window [io  0x300000-0x300fff]: assigned
[    6.248886] pci 0002:21:00.0: BAR 2 [mem 0xf2200000-0xf220ffff 64bit]: assigned
[    6.249561] pci 0002:21:00.0: BAR 4 [mem 0xf2210000-0xf2213fff 64bit]: assigned
[    6.250229] pci 0002:21:00.0: BAR 0 [io  0x300000-0x3000ff]: assigned
[    6.250802] pci 0002:20:00.0: PCI bridge to [bus 21]
[    6.251238] pci 0002:20:00.0:   bridge window [io  0x300000-0x300fff]
[    6.251804] pci 0002:20:00.0:   bridge window [mem 0xf2200000-0xf22fffff]
[    6.252403] pci_bus 0002:20: resource 4 [io  0x300000-0x3fffff]
[    6.252923] pci_bus 0002:20: resource 5 [mem 0xf2200000-0xf2ffffff]
[    6.253472] pci_bus 0002:20: resource 6 [mem 0x980000000-0x9bfffffff]
[    6.254037] pci_bus 0002:21: resource 0 [io  0x300000-0x300fff]
[    6.254556] pci_bus 0002:21: resource 1 [mem 0xf2200000-0xf22fffff]
[    6.256466] pcieport 0002:20:00.0: PME: Signaling with IRQ 120
[    6.285521] avdd_0v75_s0: Bringing 750000uV into 837500-837500uV
[    6.304907] input: rk805 pwrkey as /devices/platform/feb20000.spi/spi_master/spi2/spi2.0/rk805-pwrkey.3.auto/input/input0
[    6.307366] phy phy-fd5d8000.syscon:usb2phy@8000.5: Runtime PM usage count underflow!
[    6.307884] phy phy-fd5dc000.syscon:usb2phy@c000.6: Runtime PM usage count underflow!
[    6.309340] fan53555-regulator 0-0042: FAN53555 Option[10] Rev[1] Detected!
[    6.310002] fan53555-regulator 2-0042: FAN53555 Option[10] Rev[1] Detected!
[    6.310352] ehci-platform fc800000.usb: EHCI Host Controller
[    6.310450] fan53555-regulator 0-0043: FAN53555 Option[10] Rev[1] Detected!
[    6.311057] ehci-platform fc880000.usb: EHCI Host Controller
[    6.311352] ehci-platform fc800000.usb: new USB bus registered, assigned bus number 1
[    6.311950] ehci-platform fc880000.usb: new USB bus registered, assigned bus number 2
[    6.312300] ehci-platform fc800000.usb: irq 138, io mem 0xfc800000
[    6.313041] ehci-platform fc880000.usb: irq 139, io mem 0xfc880000
[    6.322487] ehci-platform fc800000.usb: USB 2.0 started, EHCI 1.00
[    6.323131] usb usb1: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    6.323858] usb usb1: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    6.324166] cpu cpu0: EM: created perf domain
[    6.324491] usb usb1: Product: EHCI Host Controller
[    6.324495] usb usb1: Manufacturer: Linux 6.18.45-ophub ehci_hcd
[    6.325839] usb usb1: SerialNumber: fc800000.usb
[    6.326720] hub 1-0:1.0: USB hub found
[    6.327071] hub 1-0:1.0: 1 port detected
[    6.327855] cpufreq: cpufreq_policy_online: CPU4: Running at unlisted initial frequency: 1008000 kHz, changing to: 1200000 kHz
[    6.329144] cpu cpu4: EM: created perf domain
[    6.329532] clk: Disabling unused clocks
[    6.330381] PM: genpd: Disabling unused power domains
[    6.331089] ALSA device list:
[    6.331354]   No soundcards found.
[    6.335675] ehci-platform fc880000.usb: USB 2.0 started, EHCI 1.00
[    6.336358] usb usb2: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    6.337091] usb usb2: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    6.337730] usb usb2: Product: EHCI Host Controller
[    6.338148] cpufreq: cpufreq_policy_online: CPU6: Running at unlisted initial frequency: 1008000 kHz, changing to: 1200000 kHz
[    6.338162] usb usb2: Manufacturer: Linux 6.18.45-ophub ehci_hcd
[    6.338345] cpu cpu6: EM: created perf domain
[    6.339180] usb usb2: SerialNumber: fc880000.usb
[    6.339536] hub 2-0:1.0: USB hub found
[    6.340118] hub 2-0:1.0: 1 port detected
[    6.342210] Freeing unused kernel memory: 2560K
[    6.342686] Run /init as init process
[    6.741856] phy phy-fd5d8000.syscon:usb2phy@8000.5: Runtime PM usage count underflow!
[    6.742029] phy phy-fd5dc000.syscon:usb2phy@c000.6: Runtime PM usage count underflow!
[    6.747557] ohci-platform fc840000.usb: Generic Platform OHCI controller
[    6.747568] ohci-platform fc8c0000.usb: Generic Platform OHCI controller
[    6.748489] ohci-platform fc840000.usb: new USB bus registered, assigned bus number 3
[    6.749472] ohci-platform fc840000.usb: irq 142, io mem 0xfc840000
[    6.750054] ohci-platform fc8c0000.usb: new USB bus registered, assigned bus number 4
[    6.750808] ohci-platform fc8c0000.usb: irq 141, io mem 0xfc8c0000
[    6.762487] r8125 Ethernet controller driver 9.016.00-NAPI-RSS loaded
[    6.763144] r8125 0003:31:00.0: enabling device (0000 -> 0003)
[    6.768748] r8125 0003:31:00.0 (unnamed net_device) (uninitialized): Invalid ether addr 00:00:00:00:00:00
[    6.769590] r8125 0003:31:00.0 (unnamed net_device) (uninitialized): Random ether addr 82:b8:51:a8:c0:31
[    6.770796] r8125: This product is covered by one or more of the following patents: US6,570,884, US6,115,776, and US6,327,625.
[    6.771805] r8125  Copyright (C) 2025 Realtek NIC software team <nicfae@realtek.com> 
[    6.771805]  This program comes with ABSOLUTELY NO WARRANTY; for details, please see <http://www.gnu.org/licenses/>. 
[    6.771805]  This is free software, and you are welcome to redistribute it under certain conditions; see <http://www.gnu.org/licenses/>. 
[    6.774551] r8125 Ethernet controller driver 9.016.00-NAPI-RSS loaded
[    6.778761] r8125 0002:21:00.0 (unnamed net_device) (uninitialized): Invalid ether addr 00:00:00:00:00:00
[    6.779603] r8125 0002:21:00.0 (unnamed net_device) (uninitialized): Random ether addr a2:ad:04:a0:63:fb
[    6.780676] r8125: This product is covered by one or more of the following patents: US6,570,884, US6,115,776, and US6,327,625.
[    6.781675] r8125  Copyright (C) 2025 Realtek NIC software team <nicfae@realtek.com> 
[    6.781675]  This program comes with ABSOLUTELY NO WARRANTY; for details, please see <http://www.gnu.org/licenses/>. 
[    6.781675]  This is free software, and you are welcome to redistribute it under certain conditions; see <http://www.gnu.org/licenses/>. 
[    6.812647] usb usb4: New USB device found, idVendor=1d6b, idProduct=0001, bcdDevice= 6.18
[    6.813373] usb usb4: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    6.814001] usb usb4: Product: Generic Platform OHCI controller
[    6.814516] usb usb4: Manufacturer: Linux 6.18.45-ophub ohci_hcd
[    6.815037] usb usb4: SerialNumber: fc8c0000.usb
[    6.822399] hub 4-0:1.0: USB hub found
[    6.822750] hub 4-0:1.0: 1 port detected
[    6.826861] rtc-hym8563 6-0051: could not init device, -6
[    6.827654] usb usb3: New USB device found, idVendor=1d6b, idProduct=0001, bcdDevice= 6.18
[    6.828380] usb usb3: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    6.829018] usb usb3: Product: Generic Platform OHCI controller
[    6.829533] usb usb3: Manufacturer: Linux 6.18.45-ophub ohci_hcd
[    6.830056] usb usb3: SerialNumber: fc840000.usb
[    6.830728] hub 3-0:1.0: USB hub found
[    6.831073] hub 3-0:1.0: 1 port detected
[    6.832564] phy phy-fd5d0000.syscon:usb2phy@0.4: Runtime PM usage count underflow!
[    6.847342] phy phy-fed80000.phy.8: Runtime PM usage count underflow!
[    6.850842] phy phy-fd5d0000.syscon:usb2phy@0.4: Runtime PM usage count underflow!
[    6.851511] xhci-hcd xhci-hcd.4.auto: xHCI Host Controller
[    6.852150] xhci-hcd xhci-hcd.4.auto: new USB bus registered, assigned bus number 5
[    6.852930] xhci-hcd xhci-hcd.4.auto: hcc params 0x0220fe64 hci version 0x110 quirks 0x0000808002000010
[    6.853769] xhci-hcd xhci-hcd.4.auto: irq 208, io mem 0xfc000000
[    6.854361] phy phy-fed80000.phy.8: Runtime PM usage count underflow!
[    6.854928] xhci-hcd xhci-hcd.4.auto: xHCI Host Controller
[    6.855458] xhci-hcd xhci-hcd.4.auto: new USB bus registered, assigned bus number 6
[    6.856137] xhci-hcd xhci-hcd.4.auto: Host supports USB 3.0 SuperSpeed
[    6.856745] usb usb5: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    6.857466] usb usb5: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    6.858093] usb usb5: Product: xHCI Host Controller
[    6.858517] usb usb5: Manufacturer: Linux 6.18.45-ophub xhci-hcd
[    6.859046] usb usb5: SerialNumber: xhci-hcd.4.auto
[    6.859700] hub 5-0:1.0: USB hub found
[    6.860049] hub 5-0:1.0: 1 port detected
[    6.860474] usb usb6: We don't know the algorithms for LPM for this host, disabling LPM.
[    6.861202] usb usb6: New USB device found, idVendor=1d6b, idProduct=0003, bcdDevice= 6.18
[    6.861921] usb usb6: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    6.862555] usb usb6: Product: xHCI Host Controller
[    6.862979] usb usb6: Manufacturer: Linux 6.18.45-ophub xhci-hcd
[    6.863502] usb usb6: SerialNumber: xhci-hcd.4.auto
[    6.864145] hub 6-0:1.0: USB hub found
[    6.864494] hub 6-0:1.0: 1 port detected
[    6.865784] phy phy-fd5d4000.syscon:usb2phy@4000.7: Runtime PM usage count underflow!
[    6.880447] phy phy-fed90000.phy.10: Runtime PM usage count underflow!
[    6.890457] phy phy-fd5d4000.syscon:usb2phy@4000.7: Runtime PM usage count underflow!
[    6.891590] xhci-hcd xhci-hcd.5.auto: xHCI Host Controller
[    6.895016] xhci-hcd xhci-hcd.5.auto: new USB bus registered, assigned bus number 7
[    6.895771] xhci-hcd xhci-hcd.5.auto: hcc params 0x0220fe64 hci version 0x110 quirks 0x0000808002000010
[    6.896603] xhci-hcd xhci-hcd.5.auto: irq 209, io mem 0xfc400000
[    6.897189] phy phy-fed90000.phy.10: Runtime PM usage count underflow!
[    6.897758] xhci-hcd xhci-hcd.5.auto: xHCI Host Controller
[    6.898597] xhci-hcd xhci-hcd.5.auto: new USB bus registered, assigned bus number 8
[    6.899469] xhci-hcd xhci-hcd.5.auto: Host supports USB 3.0 SuperSpeed
[    6.900075] usb usb7: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    6.900794] usb usb7: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    6.901422] usb usb7: Product: xHCI Host Controller
[    6.901846] usb usb7: Manufacturer: Linux 6.18.45-ophub xhci-hcd
[    6.902371] usb usb7: SerialNumber: xhci-hcd.5.auto
[    6.903900] hub 7-0:1.0: USB hub found
[    6.907202] hub 7-0:1.0: 1 port detected
[    6.908102] usb usb8: We don't know the algorithms for LPM for this host, disabling LPM.
[    6.908829] usb usb8: New USB device found, idVendor=1d6b, idProduct=0003, bcdDevice= 6.18
[    6.909575] usb usb8: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    6.910204] usb usb8: Product: xHCI Host Controller
[    6.910627] usb usb8: Manufacturer: Linux 6.18.45-ophub xhci-hcd
[    6.911149] usb usb8: SerialNumber: xhci-hcd.5.auto
[    6.911853] hub 8-0:1.0: USB hub found
[    6.912189] hub 8-0:1.0: 1 port detected
[    6.913803] rockchip-drm display-subsystem: bound fdd90000.vop (ops rk3066_hdmi_bridge_clear_hdmi_infoframe.part.0.isra.0 [rockchipdrm])
[    6.915429] dwhdmiqp-rockchip fde80000.hdmi: registered DesignWare HDMI QP I2C bus driver
[    6.916305] rockchip-drm display-subsystem: bound fde80000.hdmi (ops rk3066_hdmi_bridge_clear_hdmi_infoframe.part.0.isra.0 [rockchipdrm])
[    6.917749] [drm] Initialized rockchip 1.0.0 for display-subsystem on minor 0
[    6.918507] rockchip-drm display-subsystem: [drm] Cannot find any crtc or sizes
[    6.919286] rockchip-drm display-subsystem: [drm] Cannot find any crtc or sizes
[    8.169758] BTRFS: device label ROOTFS devid 1 transid 21 /dev/sda2 (8:2) scanned by mount (242)
[    8.171306] BTRFS info (device sda2): first mount of filesystem 28718bf5-ff8b-4c36-bcac-98aa684c89e0
[    8.172130] BTRFS info (device sda2): using crc32c (crc32c-lib) checksum algorithm
[    8.181188] BTRFS info (device sda2): enabling ssd optimizations
[    8.181723] BTRFS info (device sda2): turning on async discard
[    8.182235] BTRFS info (device sda2): enabling free space tree
[    8.182753] BTRFS info (device sda2): use zstd compression, level 6
[    8.389397] init: Console is alive
[    8.389768] init: - watchdog -
[   10.243102] kmodloader: loading kernel modules from /etc/modules-boot.d/*
[   10.259432] JFS: nTxBlock = 8192, nTxLock = 65536
[   10.267684] VMware vmxnet3 virtual NIC driver - version 1.9.0.0-k-NAPI
[   10.288864] e1000e: Intel(R) PRO/1000 Network Driver
[   10.289319] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
[   10.291300] kmodloader: done loading kernel modules from /etc/modules-boot.d/*
[   10.295634] init: - preinit -
[   10.511044] dw-apb-uart feb50000.serial: forbid DMA for kernel console
Press the [f] key and hit [enter] to enter failsafe mode
Press the [1], [2], [3] or [4] key and hit [enter] to select the debug level
[   14.561808] Scanning for Btrfs filesystems
[   14.606149] registered: /dev/sda2
[   14.613976] mount_root: mounting /dev/root with options 
[   14.654212] mount_root: loading kmods from internal overlay
[   14.789012] kmodloader: loading kernel modules from //etc/modules-boot.d/*
[   14.791956] kmodloader: done loading kernel modules from //etc/modules-boot.d/*
[   14.830831] block: attempting to load /tmp/overlay/upper/etc/config/fstab
[   14.831918] block: unable to load configuration (fstab: Entry not found)
[   14.832551] block: attempting to load /tmp/overlay/etc/config/fstab
[   14.833131] block: unable to load configuration (fstab: Entry not found)
[   14.833730] block: attempting to load /etc/config/fstab
[   14.834360] block: extroot: not configured
[   14.834756] block: attempting to load /etc/config/fstab
[   14.835293] block: extroot: not configured
[   14.841113] urandom-seed: Seed file not found (/etc/urandom.seed)
[   14.986073] procd: - early -
[   14.986435] procd: - watchdog -
[   15.515169] procd: - watchdog -
[   15.515626] procd: - ubus -
[   15.570076] procd: - init -
Please press Enter to activate this console.
[   15.728545] urngd: v1.0.2 started.
[   15.824608] kmodloader: loading kernel modules from /etc/modules.d/*
[   15.828056] MACsec IEEE 802.1AE
[   15.839951] netfs: FS-Cache loaded
[   15.842834] Key type dns_resolver registered
[   15.856940] Key type cifs.spnego registered
[   15.857316] Key type cifs.idmap registered
[   15.885168] RPC: Registered named UNIX socket transport module.
[   15.885698] RPC: Registered udp transport module.
[   15.886108] RPC: Registered tcp transport module.
[   15.886517] RPC: Registered tcp-with-tls transport module.
[   15.886995] RPC: Registered tcp NFSv4.1 backchannel transport module.
[   15.895359] tun: Universal TUN/TAP device driver, 1.6
[   15.906997] ipip: IPv4 and MPLS over IPv4 tunneling driver
[   16.139471] NFS: Registering the id_resolver key type
[   16.139928] Key type id_resolver registered
[   16.140294] Key type id_legacy registered
[   16.205524] yt921x stmmac-1:1d: Motorcomm YT9215S ethernet switch, chipid: 0x90020002, chipmode: 0x2 0x0
[   16.344551] yt921x stmmac-1:1d: port 1: LED0 0x00000670 -> 0x00020070, LED1 0xf0000040 -> 0x00002670
[   16.348095] yt921x stmmac-1:1d: port 2: LED0 0x00000670 -> 0x00020070, LED1 0xf0000040 -> 0x00002670
[   16.351732] yt921x stmmac-1:1d: port 3: LED0 0x00000670 -> 0x00020070, LED1 0xf0000040 -> 0x00002670
[   16.355320] yt921x stmmac-1:1d: port 4: LED0 0x00000670 -> 0x00020070, LED1 0xf0000040 -> 0x00002670
[   16.367779] yt921x stmmac-1:1d: configuring for fixed/rgmii-txid link mode
[   16.380719] yt921x stmmac-1:1d: Link is Up - 1Gbps/Full - flow control rx/tx
[   16.461221] yt921x stmmac-1:1d lan1 (uninitialized): PHY [stmmac-1:1d:01] driver [Generic PHY] (irq=POLL)
[   16.577708] yt921x stmmac-1:1d lan2 (uninitialized): PHY [stmmac-1:1d:02] driver [Generic PHY] (irq=POLL)
[   16.692333] yt921x stmmac-1:1d lan3 (uninitialized): PHY [stmmac-1:1d:03] driver [Generic PHY] (irq=POLL)
[   16.807268] yt921x stmmac-1:1d lan4 (uninitialized): PHY [stmmac-1:1d:04] driver [Generic PHY] (irq=POLL)
[   16.902518] DSA: tree 0 setup
[   16.909012] yt921x stmmac-0:1d: Motorcomm YT9215S ethernet switch, chipid: 0x90020002, chipmode: 0x2 0x0
[   17.045617] yt921x stmmac-0:1d: port 1: LED0 0x00000670 -> 0x00020070, LED1 0xf0000040 -> 0x00002670
[   17.049201] yt921x stmmac-0:1d: port 2: LED0 0x00000670 -> 0x00020070, LED1 0xf0000040 -> 0x00002670
[   17.052790] yt921x stmmac-0:1d: port 3: LED0 0x00000670 -> 0x00020070, LED1 0xf0000040 -> 0x00002670
[   17.056282] yt921x stmmac-0:1d: port 4: LED0 0x00000670 -> 0x00020070, LED1 0xf0000040 -> 0x00002670
[   17.068738] yt921x stmmac-0:1d: configuring for fixed/rgmii-txid link mode
[   17.076884] yt921x stmmac-0:1d: Link is Up - 1Gbps/Full - flow control rx/tx
[   17.162275] yt921x stmmac-0:1d lan5 (uninitialized): PHY [stmmac-0:1d:01] driver [Generic PHY] (irq=POLL)
[   17.276462] yt921x stmmac-0:1d lan6 (uninitialized): PHY [stmmac-0:1d:02] driver [Generic PHY] (irq=POLL)
[   17.388960] yt921x stmmac-0:1d lan7 (uninitialized): PHY [stmmac-0:1d:03] driver [Generic PHY] (irq=POLL)
[   17.502519] yt921x stmmac-0:1d lan8 (uninitialized): PHY [stmmac-0:1d:04] driver [Generic PHY] (irq=POLL)
[   17.596523] DSA: tree 1 setup
[   17.612370] GACT probability on
[   17.615114] Mirror/redirect action on
[   17.633400] u32 classifier
[   17.633649]     Performance counters on
[   17.633984]     input device check on
[   17.634304]     Actions configured
[   17.651428] ntfs3: Enabled Linux POSIX ACLs support
[   17.651862] ntfs3: Read-only LZX/Xpress compression included
[   17.658727] Bridge firewalling registered
[   17.663572] usbcore: registered new interface driver ipheth
[   17.666712] usbcore: registered new interface driver kaweth
[   17.693242] pegasus: Pegasus/Pegasus II USB Ethernet driver
[   17.693772] usbcore: registered new interface driver pegasus
[   17.697050] NET: Registered PF_QIPCRTR protocol family
[   17.699362] usbcore: registered new device driver r8152-cfgselector
[   17.699929] usbcore: registered new interface driver r8152
[   17.702101] usbcore: registered new interface driver rtl8150
[   17.706408] usbcore: registered new interface driver ums-alauda
[   17.707496] usbcore: registered new interface driver ums-cypress
[   17.708550] usbcore: registered new interface driver ums-datafab
[   17.709599] usbcore: registered new interface driver ums-freecom
[   17.710636] usbcore: registered new interface driver ums-isd200
[   17.711632] usbcore: registered new interface driver ums-jumpshot
[   17.712674] usbcore: registered new interface driver ums-karma
[   17.713715] usbcore: registered new interface driver ums-sddr09
[   17.714748] usbcore: registered new interface driver ums-sddr55
[   17.715825] usbcore: registered new interface driver ums-usbat
[   17.719405] usbcore: registered new device driver usbip-host
[   17.720648] usbcore: registered new interface driver usblp
[   17.723328] vhci_hcd vhci_hcd.0: USB/IP Virtual Host Controller
[   17.723929] vhci_hcd vhci_hcd.0: new USB bus registered, assigned bus number 9
[   17.724565] vhci_hcd: created sysfs vhci_hcd.0
[   17.724984] usb usb9: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[   17.725709] usb usb9: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[   17.726338] usb usb9: Product: USB/IP Virtual Host Controller
[   17.726837] usb usb9: Manufacturer: Linux 6.18.45-ophub vhci_hcd
[   17.727360] usb usb9: SerialNumber: vhci_hcd.0
[   17.727864] hub 9-0:1.0: USB hub found
[   17.728197] hub 9-0:1.0: 8 ports detected
[   17.728739] vhci_hcd vhci_hcd.0: USB/IP Virtual Host Controller
[   17.729350] vhci_hcd vhci_hcd.0: new USB bus registered, assigned bus number 10
[   17.729998] usb usb10: We don't know the algorithms for LPM for this host, disabling LPM.
[   17.730724] usb usb10: New USB device found, idVendor=1d6b, idProduct=0003, bcdDevice= 6.18
[   17.731450] usb usb10: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[   17.732086] usb usb10: Product: USB/IP Virtual Host Controller
[   17.732596] usb usb10: Manufacturer: Linux 6.18.45-ophub vhci_hcd
[   17.733125] usb usb10: SerialNumber: vhci_hcd.0
[   17.733811] hub 10-0:1.0: USB hub found
[   17.734157] hub 10-0:1.0: 8 ports detected
[   17.736054] wireguard: WireGuard 1.0.0 loaded. See www.wireguard.com for information.
[   17.736737] wireguard: Copyright (C) 2015-2019 Jason A. Donenfeld <Jason@zx2c4.com>. All Rights Reserved.
[   17.754091] xt_time: kernel timezone is -0000
[   17.755384] usbcore: registered new interface driver asix
[   17.756594] usbcore: registered new interface driver ax88179_178a
[   17.762910] Bluetooth: Core ver 2.22
[   17.763230] Bluetooth: Starting self testing
[   17.767644] Bluetooth: ECDH test passed in 3947 usecs
[   17.769434] Bluetooth: SMP test passed in 1306 usecs
[   17.769869] Bluetooth: Finished self testing
[   17.770269] NET: Registered PF_BLUETOOTH protocol family
[   17.770731] Bluetooth: HCI device and connection manager initialized
[   17.771287] Bluetooth: HCI socket layer initialized
[   17.771712] Bluetooth: L2CAP socket layer initialized
[   17.772153] Bluetooth: SCO socket layer initialized
[   17.773925] usbcore: registered new interface driver cdc_eem
[   17.775220] usbcore: registered new interface driver cdc_ether
[   17.776635] usbcore: registered new interface driver cdc_ncm
[   17.777692] usbcore: registered new interface driver cdc_subset
[   17.785748] cfg80211: Loading compiled-in X.509 certificates for regulatory database
[   17.791043] Loaded X.509 cert 'sforshee: 00b28ddf47aef9cea7'
[   17.791741] Loaded X.509 cert 'wens: 61c038651aabdcf94bd0ac7ff06c7248db18c600'
[   17.794411] usbcore: registered new interface driver dm9601
[   17.795870] usbcore: registered new interface driver hso
[   17.796898] usbcore: registered new interface driver huawei_cdc_ncm
[   17.798540] usbcore: registered new interface driver kalmia
[   17.807617] usbcore: registered new interface driver MOSCHIP usb-ethernet driver
[   17.815567] usbcore: registered new interface driver mt7601u
[   17.820631] usbcore: registered new interface driver mt7663u
[   17.826385] usbcore: registered new interface driver mt76x2u
[   17.836050] usbcore: registered new interface driver option
[   17.836556] usbserial: USB Serial support registered for GSM modem (1-port)
[   17.837949] usbcore: registered new interface driver plusb
[   17.839432] PPP generic driver version 2.4.2
[   17.840624] NET: Registered PF_PPPOX protocol family
[   17.842063] usbcore: registered new interface driver qmi_wwan
[   17.843367] usbcore: registered new interface driver rndis_host
[   17.845754] usbcore: registered new interface driver RSI-USB WLAN
[   17.851629] usbcore: registered new interface driver rtl8xxxu
[   17.858302] usbcore: registered new interface driver sierra_net
[   17.859726] usbcore: registered new interface driver smsc75xx
[   17.861080] usbcore: registered new interface driver smsc95xx
[   17.863426] usbcore: registered new interface driver sr9700
[   17.872405] usbcore: registered new interface driver ath10k_usb
[   17.880678] usbcore: registered new interface driver ath6kl_usb
[   17.887606] usbcore: registered new interface driver brcmfmac
[   17.890975] usbcore: registered new interface driver carl9170
[   17.892253] usbcore: registered new interface driver cdc_mbim
[   17.895992] usbcore: registered new interface driver mt76x0u
[   17.903628] usbcore: registered new interface driver mt7925u
[   17.906984] usbcore: registered new interface driver rt2500usb
[   17.912530] usbcore: registered new interface driver rt2800usb
[   17.918810] usbcore: registered new interface driver rtl8192cu
[   17.930515] usbcore: registered new interface driver ath9k_htc
[   17.935941] kmodloader: done loading kernel modules from /etc/modules.d/*
[   18.408604] EXT4-fs (sda1): mounted filesystem 5bb17e6c-27d5-448f-835e-ca9d97ff9f63 r/w with ordered data mode. Quota mode: none.
[   18.411704] EXT4-fs (nvme0n1p1): recovery complete
[   18.412168] EXT4-fs (nvme0n1p1): mounted filesystem 39e92927-5dc7-4d40-a8dd-7b407a475fcb r/w with ordered data mode. Quota mode: none.
[   18.413236] ext4 filesystem being mounted at /mnt/nvme0n1p1 supports timestamps until 2038-01-19 (0x7fffffff)
[   18.414541] EXT4-fs (nvme0n1p2): mounting ext2 file system using the ext4 subsystem
[   18.416045] EXT4-fs (nvme0n1p2): warning: mounting unchecked fs, running e2fsck is recommended
[   18.417176] EXT4-fs (nvme0n1p2): mounted filesystem 7a3f0000-0000-446a-8000-702f00006273 r/w without journal. Quota mode: none.
[   18.422628] EXT4-fs (nvme0n1p3): recovery complete
[   18.423132] EXT4-fs (nvme0n1p3): mounted filesystem 1376e037-7a12-4c4d-8190-c2cfced43a69 r/w with writeback data mode. Quota mode: none.
[   20.066803] rk_gmac-dwmac fe1c0000.ethernet eth0: Register MEM_TYPE_PAGE_POOL RxQ-0
[   20.067930] rk_gmac-dwmac fe1c0000.ethernet eth0: Register MEM_TYPE_PAGE_POOL RxQ-1
[   20.069173] dwmac4: Master AXI performs any burst length
[   20.069651] rk_gmac-dwmac fe1c0000.ethernet eth0: No Safety Features support found
[   20.071140] rk_gmac-dwmac fe1c0000.ethernet eth0: IEEE 1588-2008 Advanced Timestamp supported
[   20.072118] rk_gmac-dwmac fe1c0000.ethernet eth0: registered PTP clock
[   20.072704] rk_gmac-dwmac fe1c0000.ethernet eth0: configuring for fixed/rgmii-rxid link mode
[   20.073463] rk_gmac-dwmac fe1c0000.ethernet eth0: Link is Up - 1Gbps/Full - flow control rx/tx
[   20.077070] yt921x stmmac-1:1d lan1: configuring for phy/internal link mode
[   20.129711] br-lan: port 1(lan1) entered blocking state
[   20.130181] br-lan: port 1(lan1) entered disabled state
[   20.130814] yt921x stmmac-1:1d lan1: entered allmulticast mode
[   20.131333] rk_gmac-dwmac fe1c0000.ethernet eth0: entered allmulticast mode
[   20.151405] yt921x stmmac-1:1d lan1: entered promiscuous mode
[   20.151918] rk_gmac-dwmac fe1c0000.ethernet eth0: entered promiscuous mode
[   20.185535] yt921x stmmac-1:1d lan2: configuring for phy/internal link mode
[   20.191101] br-lan: port 2(lan2) entered blocking state
[   20.191568] br-lan: port 2(lan2) entered disabled state
[   20.192037] yt921x stmmac-1:1d lan2: entered allmulticast mode
[   20.233088] yt921x stmmac-1:1d lan2: entered promiscuous mode
[   20.252954] yt921x stmmac-1:1d lan3: configuring for phy/internal link mode
[   20.264860] br-lan: port 3(lan3) entered blocking state
[   20.265328] br-lan: port 3(lan3) entered disabled state
[   20.265809] yt921x stmmac-1:1d lan3: entered allmulticast mode
[   20.320513] yt921x stmmac-1:1d lan3: entered promiscuous mode
[   20.334981] yt921x stmmac-1:1d lan4: configuring for phy/internal link mode
[   20.391526] br-lan: port 4(lan4) entered blocking state
[   20.391997] br-lan: port 4(lan4) entered disabled state
[   20.392498] yt921x stmmac-1:1d lan4: entered allmulticast mode
[   20.401552] yt921x stmmac-1:1d lan4: entered promiscuous mode
[   20.415864] rk_gmac-dwmac fe1b0000.ethernet eth1: Register MEM_TYPE_PAGE_POOL RxQ-0
[   20.417060] rk_gmac-dwmac fe1b0000.ethernet eth1: Register MEM_TYPE_PAGE_POOL RxQ-1
[   20.425795] dwmac4: Master AXI performs any burst length
[   20.426279] rk_gmac-dwmac fe1b0000.ethernet eth1: No Safety Features support found
[   20.427203] rk_gmac-dwmac fe1b0000.ethernet eth1: IEEE 1588-2008 Advanced Timestamp supported
[   20.428072] rk_gmac-dwmac fe1b0000.ethernet eth1: registered PTP clock
[   20.428646] rk_gmac-dwmac fe1b0000.ethernet eth1: configuring for fixed/rgmii-rxid link mode
[   20.430002] rk_gmac-dwmac fe1b0000.ethernet eth1: Link is Up - 1Gbps/Full - flow control rx/tx
[   20.433015] yt921x stmmac-0:1d lan5: configuring for phy/internal link mode
[   20.489488] br-lan: port 5(lan5) entered blocking state
[   20.489959] br-lan: port 5(lan5) entered disabled state
[   20.490448] yt921x stmmac-0:1d lan5: entered allmulticast mode
[   20.490963] rk_gmac-dwmac fe1b0000.ethernet eth1: entered allmulticast mode
[   20.511730] yt921x stmmac-0:1d lan5: entered promiscuous mode
[   20.512244] rk_gmac-dwmac fe1b0000.ethernet eth1: entered promiscuous mode
[   20.519019] yt921x stmmac-0:1d lan6: configuring for phy/internal link mode
[   20.578653] br-lan: port 6(lan6) entered blocking state
[   20.579134] br-lan: port 6(lan6) entered disabled state
[   20.579620] yt921x stmmac-0:1d lan6: entered allmulticast mode
[   20.587178] yt921x stmmac-0:1d lan6: entered promiscuous mode
[   20.597721] yt921x stmmac-0:1d lan7: configuring for phy/internal link mode
[   20.653393] br-lan: port 7(lan7) entered blocking state
[   20.653864] br-lan: port 7(lan7) entered disabled state
[   20.654351] yt921x stmmac-0:1d lan7: entered allmulticast mode
[   20.662473] yt921x stmmac-0:1d lan7: entered promiscuous mode
[   20.669120] yt921x stmmac-0:1d lan8: configuring for phy/internal link mode
[   20.728710] br-lan: port 8(lan8) entered blocking state
[   20.729195] br-lan: port 8(lan8) entered disabled state
[   20.729676] yt921x stmmac-0:1d lan8: entered allmulticast mode
[   20.738447] yt921x stmmac-0:1d lan8: entered promiscuous mode
[   20.753423] eth2: 0xffff800083b10000, 82:b8:51:a8:c0:31, IRQ 69
[   20.781907] eth3: 0xffff800083bd0000, a2:ad:04:a0:63:fb, IRQ 111

     ____                 _       __     __        __    ___    ____
    / __ \____  ___  ____| |     / /____/ /_      / /   /   |  / __ )
   / / / / __ \/ _ \/ __ \ | /| / / ___/ __/     / /   / /| | / __  |
  / /_/ / /_/ /  __/ / / / |/ |/ / /  / /_      / /___/ ___ |/ /_/ /
  \____/ .___/\___/_/ /_/|__/|__/_/   \__/     /_____/_/  |_/_____/
      /_/ H E L L O - W O R L D   @   W I R E L E S S - F R E E D O M
───────────────────────────────────────────────────────────────────────
 Install OpenWrt: System → Amlogic Service → Install OpenWrt
 Update  OpenWrt: System → Amlogic Service → Online  Update
 Board: bdy-g98 | OpenWrt Kernel: 6.18.45-ophub
 Builder Name: ophub | Production Date: 2026-08-24
───────────────────────────────────────────────────────────────────────
 Device Model: BDY G98
 Architecture: AArch64 : Cortex-A55 x 4 & Cortex-A76 x 4
 Load Average: 0.76 0.33 0.12	Uptime: 1m 19s
 Ambient Temp: 40.7 °C      	CPU Freq: 1008 Mhz & 1200 Mhz & 1200 Mhz
 Memory Usage: 2% of 15941M	Swap Usage: 0% of 0M   	
 Boot Storage: 38% of 343M 	ROOTFS: 27% of 1.3G 	
 Data Storage: 1% of 117G 	IP Addr: 192.168.1.1 192.168.33.44
───────────────────────────────────────────────────────────────────────
root@OpenWrt:~# 
root@OpenWrt:~# 
root@OpenWrt:~# 
root@OpenWrt:~# 
root@OpenWrt:~# 

```


```shell
root@OpenWrt:~# ip a
1: lo: <LOOPBACK,UP,LOWER_UP> mtu 65536 qdisc noqueue state UNKNOWN group default qlen 1000
    link/loopback 00:00:00:00:00:00 brd 00:00:00:00:00:00
    inet 127.0.0.1/8 scope host lo
       valid_lft forever preferred_lft forever
    inet6 ::1/128 scope host proto kernel_lo 
       valid_lft forever preferred_lft forever
2: eth0: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1508 qdisc mq state UP group default qlen 1000
    link/ether be:1d:4f:5a:c4:50 brd ff:ff:ff:ff:ff:ff
    altname end1
    altname enxbe1d4f5ac450
    inet6 fe80::bc1d:4fff:fe5a:c450/64 scope link proto kernel_ll 
       valid_lft forever preferred_lft forever
3: eth1: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1508 qdisc mq state UP group default qlen 1000
    link/ether ba:1d:4f:5a:c4:50 brd ff:ff:ff:ff:ff:ff
    altname end0
    altname enxba1d4f5ac450
    inet6 fe80::b81d:4fff:fe5a:c450/64 scope link proto kernel_ll 
       valid_lft forever preferred_lft forever
4: sit0@NONE: <NOARP> mtu 1480 qdisc noop state DOWN group default qlen 1000
    link/sit 0.0.0.0 brd 0.0.0.0
5: ip6tnl0@NONE: <NOARP> mtu 1452 qdisc noop state DOWN group default qlen 1000
    link/tunnel6 :: brd :: permaddr 62bf:7086:5e10::
6: eth2: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc mq state DOWN group default qlen 1000
    link/ether 82:b8:51:a8:c0:31 brd ff:ff:ff:ff:ff:ff
    altname enP3p49s0
7: eth3: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc mq state UP group default qlen 1000
    link/ether a2:ad:04:a0:63:fb brd ff:ff:ff:ff:ff:ff
    altname enP2p33s0
    inet 192.168.33.44/24 brd 192.168.33.255 scope global eth3
       valid_lft forever preferred_lft forever
    inet6 fe80::a0ad:4ff:fea0:63fb/64 scope link proto kernel_ll 
       valid_lft forever preferred_lft forever
8: tunl0@NONE: <NOARP> mtu 1480 qdisc noop state DOWN group default qlen 1000
    link/ipip 0.0.0.0 brd 0.0.0.0
9: dummy0: <BROADCAST,NOARP> mtu 1500 qdisc noop state DOWN group default qlen 1000
    link/ether 6e:c7:1c:36:bb:de brd ff:ff:ff:ff:ff:ff
10: lan1@eth0: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue master br-lan state LOWERLAYERDOWN group default qlen 1000
    link/ether 82:b8:51:a8:c0:31 brd ff:ff:ff:ff:ff:ff permaddr be:1d:4f:5a:c4:50
11: lan2@eth0: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue master br-lan state LOWERLAYERDOWN group default qlen 1000
    link/ether 82:b8:51:a8:c0:31 brd ff:ff:ff:ff:ff:ff permaddr be:1d:4f:5a:c4:50
12: lan3@eth0: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue master br-lan state LOWERLAYERDOWN group default qlen 1000
    link/ether 82:b8:51:a8:c0:31 brd ff:ff:ff:ff:ff:ff permaddr be:1d:4f:5a:c4:50
13: lan4@eth0: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue master br-lan state LOWERLAYERDOWN group default qlen 1000
    link/ether 82:b8:51:a8:c0:31 brd ff:ff:ff:ff:ff:ff permaddr be:1d:4f:5a:c4:50
14: lan5@eth1: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue master br-lan state LOWERLAYERDOWN group default qlen 1000
    link/ether 82:b8:51:a8:c0:31 brd ff:ff:ff:ff:ff:ff permaddr ba:1d:4f:5a:c4:50
15: lan6@eth1: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue master br-lan state LOWERLAYERDOWN group default qlen 1000
    link/ether 82:b8:51:a8:c0:31 brd ff:ff:ff:ff:ff:ff permaddr ba:1d:4f:5a:c4:50
16: lan7@eth1: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue master br-lan state LOWERLAYERDOWN group default qlen 1000
    link/ether 82:b8:51:a8:c0:31 brd ff:ff:ff:ff:ff:ff permaddr ba:1d:4f:5a:c4:50
17: lan8@eth1: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue master br-lan state LOWERLAYERDOWN group default qlen 1000
    link/ether 82:b8:51:a8:c0:31 brd ff:ff:ff:ff:ff:ff permaddr ba:1d:4f:5a:c4:50
18: br-lan: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue state DOWN group default qlen 1000
    link/ether 82:b8:51:a8:c0:31 brd ff:ff:ff:ff:ff:ff
    inet 192.168.1.1/24 brd 192.168.1.255 scope global br-lan
       valid_lft forever preferred_lft forever
    inet6 fd98:8095:ed2::1/60 scope global tentative noprefixroute 
       valid_lft forever preferred_lft forever
root@OpenWrt:~# 
root@OpenWrt:~# lsblk
NAME        MAJ:MIN RM   SIZE RO TYPE MOUNTPOINTS
sda           8:0    0 119.2G  0 disk 
├─sda1        8:1    0   383M  0 part /boot
├─sda2        8:2    0   1.2G  0 part /
├─sda3        8:3    0  1023M  0 part /mnt/sda3
└─sda4        8:4    0 116.6G  0 part /mnt/sda4
nvme0n1     259:0    0 119.2G  0 disk 
├─nvme0n1p1 259:1    0     4M  0 part /mnt/nvme0n1p1
├─nvme0n1p2 259:2    0   512M  0 part /mnt/nvme0n1p2
└─nvme0n1p3 259:3    0 118.7G  0 part /mnt/nvme0n1p3
root@OpenWrt:~# blkid
/dev/nvme0n1p3: LABEL="armbi_root" UUID="1376e037-7a12-4c4d-8190-c2cfced43a69" BLOCK_SIZE="4096" TYPE="ext4" PARTLABEL="rootfs" PARTUUID="614e0000-0000-4b53-8000-1d28000054a9"
/dev/nvme0n1p1: UUID="39e92927-5dc7-4d40-a8dd-7b407a475fcb" BLOCK_SIZE="1024" TYPE="ext4" PARTLABEL="uboot" PARTUUID="5c7c0000-0000-4075-8000-3a2100002319"
/dev/nvme0n1p2: LABEL="kdevboot" UUID="7a3f0000-0000-446a-8000-702f00006273" BLOCK_SIZE="4096" TYPE="ext2" PARTLABEL="boot" PARTUUID="7a3f0000-0000-446a-8000-702f00006273"
/dev/sda2: LABEL="ROOTFS" UUID="28718bf5-ff8b-4c36-bcac-98aa684c89e0" UUID_SUB="dc360513-be6b-4ff8-8825-e628d4d41a87" BLOCK_SIZE="4096" TYPE="btrfs" PARTLABEL="primary" PARTUUID="e350033b-afaf-43b8-9395-d8e571cea159"
/dev/sda1: LABEL="BOOT" UUID="5bb17e6c-27d5-448f-835e-ca9d97ff9f63" BLOCK_SIZE="4096" TYPE="ext4" PARTLABEL="primary" PARTUUID="912db58a-a3f0-4ce7-9ed3-eade72fa920c"
/dev/sda4: LABEL="USB_SHARED" UUID="9c1b4787-a5cd-4b58-b0aa-ee1cd6a201e8" UUID_SUB="a252ca23-deb8-4ff6-bd5b-3153798ffde1" BLOCK_SIZE="4096" TYPE="btrfs" PARTLABEL="primary" PARTUUID="ae22f387-db35-4b8e-8203-99e29d8748f4"
/dev/sda3: LABEL="USB_ROOTFS2" UUID="b92d3e57-6b95-4d78-a274-eddf40137e61" UUID_SUB="cbfd7045-e380-47f4-a725-96b2dba837d7" BLOCK_SIZE="4096" TYPE="btrfs" PARTLABEL="primary" PARTUUID="bf5d54c0-7897-4f69-aa23-edc67f9f346c"
root@OpenWrt:~# 

```



















