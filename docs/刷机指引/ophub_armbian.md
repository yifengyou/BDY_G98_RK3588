# armbian

## ophub armbian

### 下载地址

* https://github.com/ophub/amlogic-s9xxx-armbian/releases/download/Armbian_trixie_arm64_server_2026.08/Armbian_26.08.0_rockchip_bdy-g98_trixie_6.18.45_server_2026.08.21.img.gz
* https://github.com/ophub/amlogic-s9xxx-armbian/releases/download/Armbian_trixie_arm64_server_2026.08/Armbian_26.08.0_rockchip_bdy-g98_trixie_6.18.45_server_2026.08.24.img.gz
* https://github.com/ophub/amlogic-s9xxx-armbian/releases/download/Armbian_trixie_arm64_server_2026.08/Armbian_26.08.0_rockchip_bdy-g98_trixie_6.18.48_server_2026.08.30.img.gz
* https://github.com/ophub/amlogic-s9xxx-armbian/releases/download/Armbian_resolute_arm64_server_2026.08/Armbian_26.08.0_rockchip_bdy-g98_resolute_6.18.45_server_2026.08.21.img.gz
* https://github.com/ophub/amlogic-s9xxx-armbian/releases/download/Armbian_resolute_arm64_server_2026.08/Armbian_26.08.0_rockchip_bdy-g98_resolute_6.18.45_server_2026.08.24.img.gz
* https://github.com/ophub/amlogic-s9xxx-armbian/releases/download/Armbian_resolute_arm64_server_2026.08/Armbian_26.08.0_rockchip_bdy-g98_resolute_6.18.48_server_2026.08.30.img.gz
* https://github.com/ophub/amlogic-s9xxx-armbian/releases/download/Armbian_noble_arm64_server_2026.08/Armbian_26.08.0_rockchip_bdy-g98_noble_6.18.45_server_2026.08.21.img.gz
* https://github.com/ophub/amlogic-s9xxx-armbian/releases/download/Armbian_noble_arm64_server_2026.08/Armbian_26.08.0_rockchip_bdy-g98_noble_6.18.45_server_2026.08.24.img.gz
* https://github.com/ophub/amlogic-s9xxx-armbian/releases/download/Armbian_noble_arm64_server_2026.08/Armbian_26.08.0_rockchip_bdy-g98_noble_6.18.48_server_2026.08.30.img.gz
* https://github.com/ophub/amlogic-s9xxx-armbian/releases/download/Armbian_bookworm_arm64_server_2026.08/Armbian_26.08.0_rockchip_bdy-g98_bookworm_6.18.45_server_2026.08.21.img.gz
* https://github.com/ophub/amlogic-s9xxx-armbian/releases/download/Armbian_bookworm_arm64_server_2026.08/Armbian_26.08.0_rockchip_bdy-g98_bookworm_6.18.45_server_2026.08.24.img.gz
* https://github.com/ophub/amlogic-s9xxx-armbian/releases/download/Armbian_bookworm_arm64_server_2026.08/Armbian_26.08.0_rockchip_bdy-g98_bookworm_6.18.48_server_2026.08.30.img.gz
* https://github.com/ophub/amlogic-s9xxx-armbian/releases/download/Armbian_trixie_arm64_server_2026.07/Armbian_26.08.0_rockchip_bdy-g98_trixie_6.18.39_server_2026.07.24.img.gz
* https://github.com/ophub/amlogic-s9xxx-armbian/releases/download/Armbian_resolute_arm64_server_2026.07/Armbian_26.08.0_rockchip_bdy-g98_resolute_6.18.39_server_2026.07.23.img.gz
* https://github.com/ophub/amlogic-s9xxx-armbian/releases/download/Armbian_resolute_arm64_server_2026.07/Armbian_26.08.0_rockchip_bdy-g98_resolute_6.18.39_server_2026.07.24.img.gz
* https://github.com/ophub/amlogic-s9xxx-armbian/releases/download/Armbian_noble_arm64_server_2026.07/Armbian_26.08.0_rockchip_bdy-g98_noble_6.18.39_server_2026.07.23.img.gz
* https://github.com/ophub/amlogic-s9xxx-armbian/releases/download/Armbian_noble_arm64_server_2026.07/Armbian_26.08.0_rockchip_bdy-g98_noble_6.18.39_server_2026.07.24.img.gz
* https://github.com/ophub/amlogic-s9xxx-armbian/releases/download/Armbian_bookworm_arm64_server_2026.07/Armbian_26.08.0_rockchip_bdy-g98_bookworm_6.18.39_server_2026.07.23.img.gz
* https://github.com/ophub/amlogic-s9xxx-armbian/releases/download/Armbian_bookworm_arm64_server_2026.07/Armbian_26.08.0_rockchip_bdy-g98_bookworm_6.18.39_server_2026.07.24.img.gz


### Armbian_26.08.0_rockchip_bdy-g98_noble_6.18.48_server_2026.08.30.img.gz


#### 引导日志

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
Try scsi 0:2 /extlinux/extlinux.conf
Try scsi 0:2 /extlinux.conf
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
3406 bytes read in 12 ms (276.4 KiB/s)
## Executing script at 00500000
Ignoring attempt to modify 'load_addr'
Boot script loaded from scsi 0
411 bytes read in 21 ms (18.6 KiB/s)
17966308 bytes read in 354 ms (48.4 MiB/s)
43153920 bytes read in 755 ms (54.5 MiB/s)
215252 bytes read in 530 ms (396.5 KiB/s)
** File not found /dtb/rockchip/overlay/rk3588-fixup.scr **
Fdt Ramdisk skip relocation
No misc partition
## Loading init Ramdisk from Legacy Image at 0a200000 ...
   Image Name:   uInitrd
   Image Type:   AArch64 Linux RAMDisk Image (uncompressed)
   Data Size:    17966244 Bytes = 17.1 MiB
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
Total: 6833.432/6908.846 ms

Starting kernel ...

[    0.000000] Booting Linux on physical CPU 0x0000000000 [0x412fd050]
[    0.000000] Linux version 6.18.48-ophub (root@070022ec193d) (aarch64-none-linux-gnu-gcc (Arm GNU Toolchain 15.3.Rel1 (Build arm-15.149)) 15.3.1 20260627, GNU ld (Arm GNU Toolchain 15.3.Rel1 (Build arm-15.149)) 2.45.1.20260126) #1 SMP PREEMPT_DYNAMIC Sat Aug 29 08:47:56 UTC 2026
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
[    0.000000] Kernel command line: root=UUID=21019133-09b4-4c17-a8d7-2050ca195cc1 rootwait rootfstype=ext4 rootflags=rw,errors=remount-ro bootsplash.bootfile=bootsplash.armbian earlycon console=ttyS2,1500000 console=ttyFIQ0 console=tty1 consoleblank=0 loglevel=7 ubootpart=b175691c-c9fe-45e5-b456-6ac6be956aa8 usb-storage.quirks=0x2537:0x1066:u,0x2537:0x1068:u rw rootwait net.ifnames=0 max_loop=128 cgroup_enable=cpuset cgroup_memory=1 cgroup_enable=memory swapaccount=1 androidboot.fwver=ddr-v1.21-cb12b99cc23,spl-v1.14,bl31-v1.54,bl32-v1.20,uboot-gc09af4f87-08/29/2026
[    0.000000] Unknown kernel command line parameters "ubootpart=b175691c-c9fe-45e5-b456-6ac6be956aa8 cgroup_enable=memory cgroup_memory=1", will be passed to user space.
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
[    0.002942] Console: colour dummy device 80x25
[    0.003363] printk: legacy console [tty1] enabled
[    0.003805] printk: legacy bootconsole [uart0] disabled
ISr ig/cy i  b
              ISr ig/c  in b
                            ISr ig/c  inwb
                                          ISaUtiISaUt rro
                                                         ISaUtiISaUt rro
                                                                        ISaUii
                                                                              SaUi roo
                                                                                      ISaUii
                                                                                             aUi roo
                                                                                                    [    0.000000] Booting Linux on physical CPU 0x0000000000 [0x412fd050]
[    0.000000] Linux version 6.18.48-ophub (root@070022ec193d) (aarch64-none-linux-gnu-gcc (Arm GNU Toolchain 15.3.Rel1 (Build arm-15.149)) 15.3.1 20260627, GNU ld (Arm GNU Toolchain 15.3.Rel1 (Build arm-15.149)) 2.45.1.20260126) #1 SMP PREEMPT_DYNAMIC Sat Aug 29 08:47:56 UTC 2026
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
[    0.000000] Kernel command line: root=UUID=21019133-09b4-4c17-a8d7-2050ca195cc1 rootwait rootfstype=ext4 rootflags=rw,errors=remount-ro bootsplash.bootfile=bootsplash.armbian earlycon console=ttyS2,1500000 console=ttyFIQ0 console=tty1 consoleblank=0 loglevel=7 ubootpart=b175691c-c9fe-45e5-b456-6ac6be956aa8 usb-storage.quirks=0x2537:0x1066:u,0x2537:0x1068:u rw rootwait net.ifnames=0 max_loop=128 cgroup_enable=cpuset cgroup_memory=1 cgroup_enable=memory swapaccount=1 androidboot.fwver=ddr-v1.21-cb12b99cc23,spl-v1.14,bl31-v1.54,bl32-v1.20,uboot-gc09af4f87-08/29/2026
[    0.000000] Unknown kernel command line parameters "ubootpart=b175691c-c9fe-45e5-b456-6ac6be956aa8 cgroup_enable=memory cgroup_memory=1", will be passed to user space.
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
[    0.002942] Console: colour dummy device 80x25
[    0.003363] printk: legacy console [tty1] enabled
[    0.003805] printk: legacy bootconsole [uart0] disabled
[    0.004330] Calibrating delay loop (skipped), value calculated using timer frequency.. 48.00 BogoMIPS (lpj=80000)
[    0.004352] pid_max: default: 32768 minimum: 301
[    0.004513] LSM: initializing lsm=capability,selinux
[    0.004682] SELinux:  Initializing.
[    0.005162] Mount-cache hash table entries: 32768 (order: 6, 262144 bytes, linear)
[    0.005209] Mountpoint-cache hash table entries: 32768 (order: 6, 262144 bytes, linear)
[    0.007599] rcu: Hierarchical SRCU implementation.
[    0.007615] rcu: 	Max phase no-delay instances is 1000.
[    0.009118] EFI services will not be available.
[    0.009396] smp: Bringing up secondary CPUs ...
[    0.009995] Detected VIPT I-cache on CPU1
[    0.010203] GICv3: CPU1: found redistributor 100 region 0:0x00000000fe6a0000
[    0.010216] GICv3: CPU1: using allocated LPI pending table @0x00000001004b0000
[    0.010256] CPU1: Booted secondary processor 0x0000000100 [0x412fd050]
[    0.010873] Detected VIPT I-cache on CPU2
[    0.011073] GICv3: CPU2: found redistributor 200 region 0:0x00000000fe6c0000
[    0.011084] GICv3: CPU2: using allocated LPI pending table @0x00000001004c0000
[    0.011119] CPU2: Booted secondary processor 0x0000000200 [0x412fd050]
[    0.011703] Detected VIPT I-cache on CPU3
[    0.011901] GICv3: CPU3: found redistributor 300 region 0:0x00000000fe6e0000
[    0.011912] GICv3: CPU3: using allocated LPI pending table @0x00000001004d0000
[    0.011945] CPU3: Booted secondary processor 0x0000000300 [0x412fd050]
[    0.012550] CPU features: detected: Spectre-v4
[    0.012556] CPU features: detected: Spectre-BHB
[    0.012561] CPU features: detected: SSBS not fully self-synchronizing
[    0.012563] Detected PIPT I-cache on CPU4
[    0.012668] GICv3: CPU4: found redistributor 400 region 0:0x00000000fe700000
[    0.012675] GICv3: CPU4: using allocated LPI pending table @0x00000001004e0000
[    0.012699] CPU4: Booted secondary processor 0x0000000400 [0x414fd0b0]
[    0.013285] Detected PIPT I-cache on CPU5
[    0.013395] GICv3: CPU5: found redistributor 500 region 0:0x00000000fe720000
[    0.013402] GICv3: CPU5: using allocated LPI pending table @0x00000001004f0000
[    0.013427] CPU5: Booted secondary processor 0x0000000500 [0x414fd0b0]
[    0.013994] Detected PIPT I-cache on CPU6
[    0.014105] GICv3: CPU6: found redistributor 600 region 0:0x00000000fe740000
[    0.014113] GICv3: CPU6: using allocated LPI pending table @0x0000000100500000
[    0.014137] CPU6: Booted secondary processor 0x0000000600 [0x414fd0b0]
[    0.014852] Detected PIPT I-cache on CPU7
[    0.014964] GICv3: CPU7: found redistributor 700 region 0:0x00000000fe760000
[    0.014972] GICv3: CPU7: using allocated LPI pending table @0x0000000100510000
[    0.014997] CPU7: Booted secondary processor 0x0000000700 [0x414fd0b0]
[    0.015050] smp: Brought up 1 node, 8 CPUs
[    0.015310] SMP: Total of 8 processors activated.
[    0.015321] CPU: All CPU(s) started at EL2
[    0.015332] CPU features: detected: 32-bit EL0 Support
[    0.015344] CPU features: detected: Data cache clean to the PoU not required for I/D coherence
[    0.015361] CPU features: detected: Common not Private translations
[    0.015373] CPU features: detected: CRC32 instructions
[    0.015385] CPU features: detected: Data cache clean to Point of Persistence
[    0.015402] CPU features: detected: RCpc load-acquire (LDAPR)
[    0.015415] CPU features: detected: LSE atomic instructions
[    0.015427] CPU features: detected: Privileged Access Never
[    0.015439] CPU features: detected: PMUv3
[    0.015449] CPU features: detected: RAS Extension Support
[    0.015465] CPU features: detected: Speculative Store Bypassing Safe (SSBS)
[    0.015529] alternatives: applying system-wide alternatives
[    0.018969] CPU features: detected: Hardware dirty bit management on CPU4-7
[    0.019291] Memory: 15770608K/16752640K available (20800K kernel code, 4190K rwdata, 14444K rodata, 2560K init, 619K bss, 448568K reserved, 524288K cma-reserved)
[    0.022744] devtmpfs: initialized
[    0.034703] posixtimers hash table entries: 4096 (order: 4, 65536 bytes, linear)
[    0.034749] futex hash table entries: 2048 (131072 bytes on 1 NUMA nodes, total 128 KiB, linear).
[    0.036118] 22064 pages in range for non-PLT usage
[    0.036121] 513584 pages in range for PLT usage
[    0.036233] prandom: seed boundary self test passed
[    0.037106] prandom: 100 self tests passed
[    0.037125] pinctrl core: initialized pinctrl subsystem
[    0.037386] DMI not present or invalid.
[    0.038770] NET: Registered PF_NETLINK/PF_ROUTE protocol family
[    0.039419] DMA: preallocated 2048 KiB GFP_KERNEL pool for atomic allocations
[    0.039522] DMA: preallocated 2048 KiB GFP_KERNEL|GFP_DMA pool for atomic allocations
[    0.039619] DMA: preallocated 2048 KiB GFP_KERNEL|GFP_DMA32 pool for atomic allocations
[    0.039642] audit: initializing netlink subsys (disabled)
[    0.039765] audit: type=2000 audit(0.036:1): state=initialized audit_enabled=0 res=1
[    0.041535] thermal_sys: Registered thermal governor 'fair_share'
[    0.041539] thermal_sys: Registered thermal governor 'bang_bang'
[    0.041547] thermal_sys: Registered thermal governor 'step_wise'
[    0.041552] thermal_sys: Registered thermal governor 'user_space'
[    0.041557] thermal_sys: Registered thermal governor 'power_allocator'
[    0.041586] cpuidle: using governor ladder
[    0.041688] hw-breakpoint: found 6 breakpoint and 4 watchpoint registers.
[    0.041782] ASID allocator initialised with 65536 entries
[    0.041842] Serial: AMBA PL011 UART driver
[    0.052630] /vop@fdd90000: Fixed dependency cycle(s) with /hdmi@fde80000
[    0.052666] /hdmi@fde80000: Fixed dependency cycle(s) with /vop@fdd90000
[    0.055109] /pcie@fe180000: Fixed dependency cycle(s) with /pcie@fe180000/legacy-interrupt-controller
[    0.063752] rockchip-gpio fd8a0000.gpio: probed /pinctrl/gpio@fd8a0000
[    0.064016] rockchip-gpio fec20000.gpio: probed /pinctrl/gpio@fec20000
[    0.064257] rockchip-gpio fec30000.gpio: probed /pinctrl/gpio@fec30000
[    0.064492] rockchip-gpio fec40000.gpio: probed /pinctrl/gpio@fec40000
[    0.064786] rockchip-gpio fec50000.gpio: probed /pinctrl/gpio@fec50000
[    0.066196] /pcie@fe150000: Fixed dependency cycle(s) with /pcie@fe150000/legacy-interrupt-controller
[    0.066526] /pcie@fe160000: Fixed dependency cycle(s) with /pcie@fe160000/legacy-interrupt-controller
[    0.066874] /pcie@fe170000: Fixed dependency cycle(s) with /pcie@fe170000/legacy-interrupt-controller
[    0.070906] /hdmi@fde80000: Fixed dependency cycle(s) with /hdmi0-con
[    0.070939] /hdmi0-con: Fixed dependency cycle(s) with /hdmi@fde80000
[    0.072004] HugeTLB: registered 1.00 GiB page size, pre-allocated 0 pages
[    0.072013] HugeTLB: 0 KiB vmemmap can be freed for a 1.00 GiB page
[    0.072019] HugeTLB: registered 32.0 MiB page size, pre-allocated 0 pages
[    0.072025] HugeTLB: 0 KiB vmemmap can be freed for a 32.0 MiB page
[    0.072030] HugeTLB: registered 2.00 MiB page size, pre-allocated 0 pages
[    0.072036] HugeTLB: 0 KiB vmemmap can be freed for a 2.00 MiB page
[    0.072041] HugeTLB: registered 64.0 KiB page size, pre-allocated 0 pages
[    0.072046] HugeTLB: 0 KiB vmemmap can be freed for a 64.0 KiB page
[    0.129108] raid6: neonx8   gen()  5133 MB/s
[    0.185838] raid6: neonx4   gen()  5138 MB/s
[    0.242567] raid6: neonx2   gen()  4273 MB/s
[    0.299297] raid6: neonx1   gen()  3378 MB/s
[    0.356031] raid6: int64x8  gen()  1952 MB/s
[    0.412754] raid6: int64x4  gen()  2372 MB/s
[    0.469486] raid6: int64x2  gen()  1962 MB/s
[    0.526208] raid6: int64x1  gen()  1646 MB/s
[    0.526213] raid6: using algorithm neonx4 gen() 5138 MB/s
[    0.582934] raid6: .... xor() 4016 MB/s, rmw enabled
[    0.582940] raid6: using neon recovery algorithm
[    0.583030] ACPI: Interpreter disabled.
[    0.583712] iommu: Default domain type: Translated
[    0.583719] iommu: DMA domain TLB invalidation policy: strict mode
[    0.584108] SCSI subsystem initialized
[    0.584277] usbcore: registered new interface driver usbfs
[    0.584295] usbcore: registered new interface driver hub
[    0.584310] usbcore: registered new device driver usb
[    0.584558] mc: Linux media interface: v0.10
[    0.584579] videodev: Linux video capture interface: v2.00
[    0.584611] pps_core: LinuxPPS API ver. 1 registered
[    0.584616] pps_core: Software ver. 5.3.6 - Copyright 2005-2007 Rodolfo Giometti <giometti@linux.it>
[    0.584626] PTP clock support registered
[    0.584645] EDAC MC: Ver: 3.0.0
[    0.584803] scmi_core: SCMI protocol bus registered
[    0.584980] Advanced Linux Sound Architecture Driver Initialized.
[    0.585428] vgaarb: loaded
[    0.585606] clocksource: Switched to clocksource arch_sys_counter
[    0.585790] VFS: Disk quotas dquot_6.6.0
[    0.585804] VFS: Dquot-cache hash table entries: 512 (order 0, 4096 bytes)
[    0.585972] pnp: PnP ACPI: disabled
[    0.589790] NET: Registered PF_INET protocol family
[    0.589980] IP idents hash table entries: 262144 (order: 9, 2097152 bytes, linear)
[    0.633040] tcp_listen_portaddr_hash hash table entries: 8192 (order: 5, 131072 bytes, linear)
[    0.633158] Table-perturb hash table entries: 65536 (order: 6, 262144 bytes, linear)
[    0.633187] TCP established hash table entries: 131072 (order: 8, 1048576 bytes, linear)
[    0.634012] TCP bind hash table entries: 65536 (order: 9, 2097152 bytes, linear)
[    0.635608] TCP: Hash tables configured (established 131072 bind 65536)
[    0.635743] MPTCP token hash table entries: 16384 (order: 7, 393216 bytes, linear)
[    0.635858] UDP hash table entries: 8192 (order: 7, 524288 bytes, linear)
[    0.636362] UDP-Lite hash table entries: 8192 (order: 7, 524288 bytes, linear)
[    0.636923] NET: Registered PF_UNIX/PF_LOCAL protocol family
[    0.636946] NET: Registered PF_XDP protocol family
[    0.636958] PCI: CLS 0 bytes, default 64
[    0.637019] ARM FF-A: FFA_VERSION returned not supported
[    0.637046] Trying to unpack rootfs image as initramfs...
[    0.644123] kvm [1]: nv: 568 coarse grained trap handlers
[    0.644347] kvm [1]: IPA Size Limit: 40 bits
[    0.644363] kvm [1]: GICv3: no GICV resource entry
[    0.644368] kvm [1]: disabling GICv2 emulation
[    0.644393] kvm [1]: GIC system register CPU interface enabled
[    0.644408] kvm [1]: vgic interrupt IRQ9
[    0.644435] kvm [1]: VHE mode initialized successfully
[    0.730579] Initialise system trusted keyrings
[    0.730707] workingset: timestamp_bits=46 max_order=22 bucket_order=0
[    0.731031] squashfs: version 4.0 (2009/01/31) Phillip Lougher
[    0.731168] fuse: init (API version 7.45)
[    0.731457] SGI XFS with ACLs, security attributes, quota, no debug enabled
[    0.732695] cryptd: max_cpu_qlen set to 1000
[    0.765405] NET: Registered PF_ALG protocol family
[    0.765447] xor: measuring software checksum speed
[    0.765917]    8regs           :  7061 MB/sec
[    0.766383]    32regs          :  7137 MB/sec
[    0.766757]    arm64_neon      :  8885 MB/sec
[    0.766762] xor: using function: arm64_neon (8885 MB/sec)
[    0.766770] Key type asymmetric registered
[    0.766775] Asymmetric key parser 'x509' registered
[    0.766812] Block layer SCSI generic (bsg) driver version 0.4 loaded (major 240)
[    0.766909] io scheduler mq-deadline registered
[    0.766916] io scheduler kyber registered
[    0.766941] io scheduler bfq registered
[    4.495583] Freeing initrd memory: 17540K
[    4.499039] ledtrig-cpu: registered to indicate activity on CPUs
[    4.504734] dma-pl330 fea10000.dma-controller: Loaded driver for PL330 DMAC-241330
[    4.504746] dma-pl330 fea10000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    4.505422] dma-pl330 fea30000.dma-controller: Loaded driver for PL330 DMAC-241330
[    4.505432] dma-pl330 fea30000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    4.506128] dma-pl330 fed10000.dma-controller: Loaded driver for PL330 DMAC-241330
[    4.506137] dma-pl330 fed10000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    4.509157] Serial: 8250/16550 driver, 5 ports, IRQ sharing disabled
[    4.510212] printk: legacy console [ttyS2] disabled
[    4.510352] feb50000.serial: ttyS2 at MMIO 0xfeb50000 (irq = 31, base_baud = 1500000) is a 16550A
[    4.510401] printk: legacy console [ttyS2] enabled
[    4.662433] Serial: AMBA driver
[    4.663204] misc dump reg init
[    4.663833] arm-smmu-v3 fc900000.iommu: ias 48-bit, oas 48-bit (features 0x001c1e8f)
[    4.665466] arm-smmu-v3 fc900000.iommu: allocated 65536 entries for cmdq
[    4.666287] arm-smmu-v3 fc900000.iommu: allocated 32768 entries for evtq
[    4.667147] arm-smmu-v3 fc900000.iommu: msi_domain absent - falling back to wired irqs
[    4.668767] rockchip-pm-domain fd8d8000.power-management:power-controller: supply domain not found, using dummy regulator
[    4.670147] platform fdab0000.npu: Adding to iommu group 0
[    4.671512] platform fdac0000.npu: Adding to iommu group 1
[    4.672899] platform fdad0000.npu: Adding to iommu group 2
[    4.674205] platform fdb50000.video-codec: Adding to iommu group 3
[    4.675004] platform fdb50400.vdpu: Adding to iommu group 3
[    4.676088] platform fdb60000.rga: Adding to iommu group 4
[    4.677332] platform fdb70000.rga: Adding to iommu group 5
[    4.678473] platform fdba0000.video-codec: Adding to iommu group 6
[    4.679267] platform fdba0000.jpege-core: Adding to iommu group 6
[    4.680270] platform fdba4000.video-codec: Adding to iommu group 7
[    4.681049] platform fdba4000.jpege-core: Adding to iommu group 7
[    4.682047] platform fdba8000.video-codec: Adding to iommu group 8
[    4.682835] platform fdba8000.jpege-core: Adding to iommu group 8
[    4.683834] platform fdbac000.video-codec: Adding to iommu group 9
[    4.684605] platform fdbac000.jpege-core: Adding to iommu group 9
[    4.685342] rockchip-pm-domain fd8d8000.power-management:power-controller: supply domain not found, using dummy regulator
[    4.686719] platform fdc38000.video-codec: Adding to iommu group 10
[    4.687512] platform fdc38100.rkvdec-core: Adding to iommu group 10
[    4.688690] platform fdc40000.video-codec: Adding to iommu group 11
[    4.689911] platform fdd90000.vop: Adding to iommu group 12
[    4.691192] platform fdb90000.jpegd: Adding to iommu group 13
[    4.692406] platform fdbd0000.rkvenc-core: Adding to iommu group 14
[    4.693721] platform fdbe0000.rkvenc-core: Adding to iommu group 15
[    4.695046] platform fdc48100.rkvdec-core: Adding to iommu group 16
[    4.700734] brd: module loaded
[    4.725920] loop: module loaded
[    4.726270] zloop: Module loaded
[    4.727782] ahci-dwc fe210000.sata: supply ahci not found, using dummy regulator
[    4.728483] ahci-dwc fe210000.sata: supply phy not found, using dummy regulator
[    4.729400] platform fe210000.sata:sata-port@0: supply target not found, using dummy regulator
[    4.730252] phy phy-fee00000.phy.0: Runtime PM usage count underflow!
[    4.730818] ahci-dwc fe210000.sata: PMPn is limited up to 5 ports
[    4.731391] ahci-dwc fe210000.sata: masking port_map 0x1 -> 0x1
[    4.731919] ahci-dwc fe210000.sata: SSS flag set, parallel bus scan disabled
[    4.732551] ahci-dwc fe210000.sata: AHCI vers 0001.0300, 32 command slots, 6 Gbps, platform mode
[    4.733322] ahci-dwc fe210000.sata: 1/1 ports implemented (port mask 0x1)
[    4.733916] ahci-dwc fe210000.sata: flags: ncq sntf stag pm led clo only pmp fbs pio slum part ccc apst 
[    4.735658] scsi host0: ahci-dwc
[    4.736038] ata1: SATA max UDMA/133 mmio [mem 0xfe210000-0xfe210fff] port 0x100 irq 53 lpm-pol 0
[    4.738236] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/regulators/dcdc-reg7
[    4.739120] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs3-null-pins
[    4.739923] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs2-null-pins
[    4.740724] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs1-null-pins
[    4.744064] rk_gmac-dwmac fe1c0000.ethernet: IRQ sfty not found
[    4.744675] rk_gmac-dwmac fe1c0000.ethernet: supply phy not found, using dummy regulator
[    4.745428] rk_gmac-dwmac fe1c0000.ethernet: clock input or output? (output).
[    4.746062] rk_gmac-dwmac fe1c0000.ethernet: TX delay(0x42).
[    4.746560] rk_gmac-dwmac fe1c0000.ethernet: Can not read property: rx_delay.
[    4.747183] rk_gmac-dwmac fe1c0000.ethernet: set rx_delay to 0x10
[    4.747721] rk_gmac-dwmac fe1c0000.ethernet: integrated PHY? (no).
[    4.753274] rk_gmac-dwmac fe1c0000.ethernet: init for RGMII_RXID
[    4.753880] rk_gmac-dwmac fe1c0000.ethernet: User ID: 0x30, Synopsys ID: 0x51
[    4.754507] rk_gmac-dwmac fe1c0000.ethernet: 	DWMAC4/5
[    4.754959] rk_gmac-dwmac fe1c0000.ethernet: DMA HW capability register supported
[    4.755619] rk_gmac-dwmac fe1c0000.ethernet: Active PHY interface: RGMII (1)
[    4.756235] rk_gmac-dwmac fe1c0000.ethernet: RX Checksum Offload Engine supported
[    4.756889] rk_gmac-dwmac fe1c0000.ethernet: TX Checksum insertion supported
[    4.757505] rk_gmac-dwmac fe1c0000.ethernet: Wake-Up On Lan supported
[    4.758068] rk_gmac-dwmac fe1c0000.ethernet: Enable RX Mitigation via HW Watchdog Timer
[    4.758768] rk_gmac-dwmac fe1c0000.ethernet: Enabled L3L4 Flow TC (entries=2)
[    4.759410] rk_gmac-dwmac fe1c0000.ethernet: Enabled RFS Flow TC (entries=10)
[    4.760033] rk_gmac-dwmac fe1c0000.ethernet: TSO supported
[    4.760514] rk_gmac-dwmac fe1c0000.ethernet: TSO feature enabled
[    4.761039] rk_gmac-dwmac fe1c0000.ethernet: SPH feature enabled
[    4.761564] rk_gmac-dwmac fe1c0000.ethernet: Using 32/32 bits DMA host/device width
[    4.896423] rk_gmac-dwmac fe1b0000.ethernet: IRQ sfty not found
[    4.897113] rk_gmac-dwmac fe1b0000.ethernet: supply phy not found, using dummy regulator
[    4.897885] rk_gmac-dwmac fe1b0000.ethernet: clock input or output? (output).
[    4.898511] rk_gmac-dwmac fe1b0000.ethernet: TX delay(0x44).
[    4.899019] rk_gmac-dwmac fe1b0000.ethernet: Can not read property: rx_delay.
[    4.899643] rk_gmac-dwmac fe1b0000.ethernet: set rx_delay to 0x10
[    4.900179] rk_gmac-dwmac fe1b0000.ethernet: integrated PHY? (no).
[    4.905731] rk_gmac-dwmac fe1b0000.ethernet: init for RGMII_RXID
[    4.906329] rk_gmac-dwmac fe1b0000.ethernet: User ID: 0x30, Synopsys ID: 0x51
[    4.906956] rk_gmac-dwmac fe1b0000.ethernet: 	DWMAC4/5
[    4.907407] rk_gmac-dwmac fe1b0000.ethernet: DMA HW capability register supported
[    4.908061] rk_gmac-dwmac fe1b0000.ethernet: Active PHY interface: RGMII (1)
[    4.908677] rk_gmac-dwmac fe1b0000.ethernet: RX Checksum Offload Engine supported
[    4.909340] rk_gmac-dwmac fe1b0000.ethernet: TX Checksum insertion supported
[    4.909956] rk_gmac-dwmac fe1b0000.ethernet: Wake-Up On Lan supported
[    4.910520] rk_gmac-dwmac fe1b0000.ethernet: Enable RX Mitigation via HW Watchdog Timer
[    4.911220] rk_gmac-dwmac fe1b0000.ethernet: Enabled L3L4 Flow TC (entries=2)
[    4.911844] rk_gmac-dwmac fe1b0000.ethernet: Enabled RFS Flow TC (entries=10)
[    4.912471] rk_gmac-dwmac fe1b0000.ethernet: TSO supported
[    4.912952] rk_gmac-dwmac fe1b0000.ethernet: TSO feature enabled
[    4.913477] rk_gmac-dwmac fe1b0000.ethernet: SPH feature enabled
[    4.914003] rk_gmac-dwmac fe1b0000.ethernet: Using 32/32 bits DMA host/device width
[    5.048122] usbcore: registered new interface driver cdc_wdm
[    5.048684] usbcore: registered new interface driver uas
[    5.049173] usbcore: registered new interface driver usb-storage
[    5.049736] usbcore: registered new interface driver usbserial_generic
[    5.050314] usbserial: USB Serial support registered for generic
[    5.050850] usbcore: registered new interface driver ch341
[    5.051337] usbserial: USB Serial support registered for ch341-uart
[    5.051894] usbcore: registered new interface driver cp210x
[    5.052394] usbserial: USB Serial support registered for cp210x
[    5.052924] usbcore: registered new interface driver ftdi_sio
[    5.053433] usbserial: USB Serial support registered for FTDI USB Serial Device
[    5.054081] usbcore: registered new interface driver pl2303
[    5.054576] usbserial: USB Serial support registered for pl2303
[    5.055100] usbcore: registered new device driver onboard-usb-dev
[    5.057084] i2c_dev: i2c /dev entries driver
[    5.066990] mmc2: CQHCI version 5.10
[    5.067070] arm-scmi arm-scmi.0.auto: Using scmi_smc_transport
[    5.067836] arm-scmi arm-scmi.0.auto: SCMI max-rx-timeout: 30ms / max-msg-size: 104bytes / max-msg: 20
[    5.068707] scmi_protocol scmi_dev.1: Enabled polling mode TX channel - prot_id:16
[    5.069477] arm-scmi arm-scmi.0.auto: SCMI Notifications - Core Enabled.
[    5.070090] arm-scmi arm-scmi.0.auto: SCMI Protocol v2.0 'rockchip:' Firmware version 0x0
[    5.070826] arm-scmi arm-scmi.0.auto: Enabling SCMI Quirk [quirk_clock_rates_triplet_out_of_spec]
[    5.072614] SMCCC: SOC_ID: ARCH_SOC_ID not implemented, skipping ....
[    5.073866] hid: raw HID events driver (C) Jiri Kosina
[    5.074360] usbcore: registered new interface driver usbhid
[    5.074849] usbhid: USB HID core driver
[    5.077991] hw perfevents: enabled with armv8_cortex_a55 PMU driver, 7 (0,8000003f) counters available
[    5.079974] hw perfevents: enabled with armv8_cortex_a76 PMU driver, 7 (0,8000003f) counters available
[    5.083483] NET: Registered PF_LLC protocol family
[    5.084836] Initializing XFRM netlink socket
[    5.085250] NET: Registered PF_INET6 protocol family
[    5.086569] Segment Routing with IPv6
[    5.086897] RPL Segment Routing with IPv6
[    5.087261] In-situ OAM (IOAM) with IPv6
[    5.087658] sit: IPv6, IPv4 and MPLS over IPv4 tunneling driver
[    5.088580] NET: Registered PF_PACKET protocol family
[    5.089041] NET: Registered PF_KEY protocol family
[    5.089477] bridge: filtering via arp/ip/ip6tables is no longer available by default. Update your scripts to load br_netfilter if you need this.
[    5.096673] registered taskstats version 1
[    5.097331] Loading compiled-in X.509 certificates
[    5.098337] mmc2: SDHCI controller on fe2e0000.mmc [fe2e0000.mmc] using ADMA
[    5.103493] zswap: loaded using pool zstd
[    5.103950] Key type .fscrypt registered
[    5.104297] Key type fscrypt-provisioning registered
[    5.105740] Btrfs loaded, zoned=yes, fsverity=no
[    5.120329] mmc2: Failed to initialize a non-removable card
[    5.141402] phy phy-fee20000.phy.1: Runtime PM usage count underflow!
[    5.142538] rockchip-dw-pcie a40c00000.pcie: host bridge /pcie@fe180000 ranges:
[    5.143211] rockchip-dw-pcie a40c00000.pcie:       IO 0x00f3100000..0x00f31fffff -> 0x00f3100000
[    5.144005] rockchip-dw-pcie a40c00000.pcie:      MEM 0x00f3200000..0x00f3ffffff -> 0x00f3200000
[    5.144792] rockchip-dw-pcie a40c00000.pcie:      MEM 0x09c0000000..0x09ffffffff -> 0x09c0000000
[    5.145746] rockchip-dw-pcie a40c00000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    5.202402] ata1: SATA link up 6.0 Gbps (SStatus 133 SControl 300)
[    5.204766] ata1.00: ATA-9: ADATA SP920SS, 1.08, max UDMA/133
[    5.205288] ata1.00: 250069679 sectors, multi 0: LBA48 NCQ (depth 32)
[    5.206786] ata1.00: Features: HIPM DIPM
[    5.209484] ata1.00: configured for UDMA/133
[    5.210104] scsi 0:0:0:0: Direct-Access     ATA      ADATA SP920SS    1.08 PQ: 0 ANSI: 5
[    5.211351] sd 0:0:0:0: [sda] 250069679 512-byte logical blocks: (128 GB/119 GiB)
[    5.212053] sd 0:0:0:0: [sda] Write Protect is off
[    5.212560] sd 0:0:0:0: [sda] Write cache: enabled, read cache: enabled, doesn't support DPO or FUA
[    5.213450] sd 0:0:0:0: [sda] Preferred minimum I/O size 512 bytes
[    5.269051] GPT:Primary header thinks Alt. header is not at the end of the disk.
[    5.269715] GPT:7225343 != 250069678
[    5.270038] GPT:Alternate GPT header not at the end of the disk.
[    5.270572] GPT:7225343 != 250069678
[    5.270894] GPT: Use GNU Parted to correct GPT errors.
[    5.271367]  sda: sda1 sda2
[    5.272132] sd 0:0:0:0: [sda] Attached SCSI disk
[    5.349007] rockchip-dw-pcie a40c00000.pcie: PCIe Gen.2 x1 link up
[    5.349941] rockchip-dw-pcie a40c00000.pcie: PCI host bridge to bus 0003:30
[    5.350575] pci_bus 0003:30: root bus resource [bus 30-3f]
[    5.351071] pci_bus 0003:30: root bus resource [io  0x0000-0xfffff] (bus address [0xf3100000-0xf31fffff])
[    5.351921] pci_bus 0003:30: root bus resource [mem 0xf3200000-0xf3ffffff]
[    5.352550] pci_bus 0003:30: root bus resource [mem 0x9c0000000-0x9ffffffff]
[    5.353340] pci 0003:30:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    5.354010] pci 0003:30:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    5.354564] pci 0003:30:00.0: PCI bridge to [bus 01-ff]
[    5.355037] pci 0003:30:00.0:   bridge window [io  0x0000-0x0fff]
[    5.355583] pci 0003:30:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    5.356202] pci 0003:30:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    5.356937] pci 0003:30:00.0: supports D1 D2
[    5.357323] pci 0003:30:00.0: PME# supported from D0 D1 D3hot
[    5.361036] pci 0003:30:00.0: Adding to iommu group 17
[    5.369109] pci 0003:30:00.0: Primary bus is hard wired to 0
[    5.369621] pci 0003:30:00.0: bridge configuration invalid ([bus 01-ff]), reconfiguring
[    5.370589] pci 0003:31:00.0: [10ec:8125] type 00 class 0x020000 PCIe Endpoint
[    5.371390] pci 0003:31:00.0: BAR 0: initial BAR value 0x00000000 invalid
[    5.371996] pci 0003:31:00.0: BAR 0 [io  size 0x0100]
[    5.372474] pci 0003:31:00.0: BAR 2 [mem 0x00000000-0x0000ffff 64bit]
[    5.373060] pci 0003:31:00.0: BAR 4 [mem 0x00000000-0x00003fff 64bit]
[    5.373664] pci 0003:31:00.0: Max Payload Size set to 256 (was 128, max 256)
[    5.374641] pci 0003:31:00.0: supports D1 D2
[    5.375027] pci 0003:31:00.0: PME# supported from D0 D1 D2 D3hot D3cold
[    5.376648] pci 0003:31:00.0: Adding to iommu group 17
[    5.382468] pci 0003:31:00.0: ASPM: default states L0s L1
[    5.383047] pci_bus 0003:31: busn_res: [bus 31-3f] end is updated to 31
[    5.383657] pci 0003:30:00.0: bridge window [mem 0xf3200000-0xf32fffff]: assigned
[    5.384327] pci 0003:30:00.0: ROM [mem 0xf3300000-0xf330ffff pref]: assigned
[    5.384958] pci 0003:30:00.0: bridge window [io  0x1000-0x1fff]: assigned
[    5.385567] pci 0003:31:00.0: BAR 2 [mem 0xf3200000-0xf320ffff 64bit]: assigned
[    5.386261] pci 0003:31:00.0: BAR 4 [mem 0xf3210000-0xf3213fff 64bit]: assigned
[    5.386945] pci 0003:31:00.0: BAR 0 [io  0x1000-0x10ff]: assigned
[    5.387500] pci 0003:30:00.0: PCI bridge to [bus 31]
[    5.387948] pci 0003:30:00.0:   bridge window [io  0x1000-0x1fff]
[    5.388494] pci 0003:30:00.0:   bridge window [mem 0xf3200000-0xf32fffff]
[    5.389113] pci_bus 0003:30: resource 4 [io  0x0000-0xfffff]
[    5.389622] pci_bus 0003:30: resource 5 [mem 0xf3200000-0xf3ffffff]
[    5.390182] pci_bus 0003:30: resource 6 [mem 0x9c0000000-0x9ffffffff]
[    5.390758] pci_bus 0003:31: resource 0 [io  0x1000-0x1fff]
[    5.391257] pci_bus 0003:31: resource 1 [mem 0xf3200000-0xf32fffff]
[    5.394594] pcieport 0003:30:00.0: PME: Signaling with IRQ 78
[    5.396334] phy phy-fee80000.phy.3: Runtime PM usage count underflow!
[    5.396950] rockchip-dw-pcie a40000000.pcie: host bridge /pcie@fe150000 ranges:
[    5.397620] rockchip-dw-pcie a40000000.pcie:       IO 0x00f0100000..0x00f01fffff -> 0x00f0100000
[    5.398412] rockchip-dw-pcie a40000000.pcie:      MEM 0x00f0200000..0x00f0ffffff -> 0x00f0200000
[    5.399213] rockchip-dw-pcie a40000000.pcie:      MEM 0x0900000000..0x093fffffff -> 0x0900000000
[    5.407878] rockchip-dw-pcie a40000000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    5.705743] rockchip-dw-pcie a40000000.pcie: PCIe Gen.2 x2 link up
[    5.706400] rockchip-dw-pcie a40000000.pcie: PCI host bridge to bus 0000:00
[    5.707027] pci_bus 0000:00: root bus resource [bus 00-0f]
[    5.707523] pci_bus 0000:00: root bus resource [io  0x100000-0x1fffff] (bus address [0xf0100000-0xf01fffff])
[    5.708394] pci_bus 0000:00: root bus resource [mem 0xf0200000-0xf0ffffff]
[    5.709020] pci_bus 0000:00: root bus resource [mem 0x900000000-0x93fffffff]
[    5.709671] pci 0000:00:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    5.710338] pci 0000:00:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    5.710891] pci 0000:00:00.0: PCI bridge to [bus 01-ff]
[    5.711364] pci 0000:00:00.0:   bridge window [io  0x0000-0x0fff]
[    5.711910] pci 0000:00:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    5.712529] pci 0000:00:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    5.713263] pci 0000:00:00.0: supports D1 D2
[    5.713648] pci 0000:00:00.0: PME# supported from D0 D1 D3hot
[    5.715012] pci 0000:00:00.0: Adding to iommu group 18
[    5.722968] pci_bus 0000:01: busn_res: can not insert [bus 01-ff] under [bus 00-0f] (conflicts with (null) [bus 00-0f])
[    5.724010] pci 0000:01:00.0: [9000:1003] type 00 class 0x058000 PCIe Endpoint
[    5.724813] pci 0000:01:00.0: BAR 0 [mem 0x00000000-0x000fffff 64bit]
[    5.725393] pci 0000:01:00.0: BAR 2 [mem 0x00000000-0x000fffff]
[    5.725940] pci 0000:01:00.0: BAR 3 [mem 0x00000000-0x0000ffff]
[    5.726476] pci 0000:01:00.0: BAR 4 [mem 0x00000000-0x00000fff]
[    5.727011] pci 0000:01:00.0: BAR 5 [mem 0x00000000-0x0000ffff]
[    5.727546] pci 0000:01:00.0: ROM [mem 0x00000000-0x007fffff pref]
[    5.728120] pci 0000:01:00.0: Max Payload Size set to 256 (was 128, max 512)
[    5.728930] pci 0000:01:00.0: supports D1
[    5.729301] pci 0000:01:00.0: PME# supported from D0 D1 D3hot
[    5.729885] pci 0000:01:00.0: 8.000 Gb/s available PCIe bandwidth, limited by 5.0 GT/s PCIe x2 link at 0000:00:00.0 (capable of 16.000 Gb/s with 5.0 GT/s PCIe x4 link)
[    5.732010] pci 0000:01:00.0: Adding to iommu group 18
[    5.732843] pci 0000:00:00.0: bridge window [mem 0x00100000-0x003fffff] to [bus 01-ff] add_size 800000 add_align 800000
[    5.733815] pci 0000:00:00.0: bridge window [mem size 0x00b00000]: can't assign; no space
[    5.734544] pci 0000:00:00.0: bridge window [mem size 0x00b00000]: failed to assign
[    5.735227] pci 0000:00:00.0: ROM [mem 0xf0200000-0xf020ffff pref]: assigned
[    5.735869] pci 0000:00:00.0: ROM [mem 0xf0200000-0xf020ffff pref]: releasing
[    5.736509] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: assigned
[    5.737179] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: failed to expand by 0x800000
[    5.737998] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: failed to add optional 800000
[    5.738831] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: can't assign; no space
[    5.739530] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: failed to assign
[    5.740178] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: assigned
[    5.740861] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: assigned
[    5.741477] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: assigned
[    5.742092] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: assigned
[    5.742714] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: assigned
[    5.743331] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: releasing
[    5.743992] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: releasing
[    5.744604] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: releasing
[    5.745217] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: releasing
[    5.745835] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: releasing
[    5.746452] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: assigned
[    5.747135] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: assigned
[    5.747750] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: assigned
[    5.748365] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: assigned
[    5.748987] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: assigned
[    5.749603] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: can't assign; no space
[    5.750293] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: failed to assign
[    5.750939] pci 0000:00:00.0: PCI bridge to [bus 01-ff]
[    5.751409] pci 0000:00:00.0:   bridge window [mem 0xf0200000-0xf04fffff]
[    5.752018] pci_bus 0000:00: Some PCI device resources are unassigned, try booting with pci=realloc
[    5.752828] pci_bus 0000:00: resource 4 [io  0x100000-0x1fffff]
[    5.753359] pci_bus 0000:00: resource 5 [mem 0xf0200000-0xf0ffffff]
[    5.753919] pci_bus 0000:00: resource 6 [mem 0x900000000-0x93fffffff]
[    5.754496] pci_bus 0000:01: resource 1 [mem 0xf0200000-0xf04fffff]
[    5.757723] pcieport 0000:00:00.0: PME: Signaling with IRQ 89
[    5.759193] phy phy-fee80000.phy.3: Runtime PM usage count underflow!
[    5.759810] rockchip-dw-pcie a40400000.pcie: host bridge /pcie@fe160000 ranges:
[    5.760479] rockchip-dw-pcie a40400000.pcie:       IO 0x00f1100000..0x00f11fffff -> 0x00f1100000
[    5.761271] rockchip-dw-pcie a40400000.pcie:      MEM 0x00f1200000..0x00f1ffffff -> 0x00f1200000
[    5.762057] rockchip-dw-pcie a40400000.pcie:      MEM 0x0940000000..0x097fffffff -> 0x0940000000
[    5.770766] rockchip-dw-pcie a40400000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    6.072427] rockchip-dw-pcie a40400000.pcie: PCIe Gen.3 x2 link up
[    6.073035] rockchip-dw-pcie a40400000.pcie: PCI host bridge to bus 0001:10
[    6.073648] pci_bus 0001:10: root bus resource [bus 10-1f]
[    6.074132] pci_bus 0001:10: root bus resource [io  0x200000-0x2fffff] (bus address [0xf1100000-0xf11fffff])
[    6.074991] pci_bus 0001:10: root bus resource [mem 0xf1200000-0xf1ffffff]
[    6.075592] pci_bus 0001:10: root bus resource [mem 0x940000000-0x97fffffff]
[    6.076227] pci 0001:10:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    6.076877] pci 0001:10:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    6.077419] pci 0001:10:00.0: PCI bridge to [bus 01-ff]
[    6.077880] pci 0001:10:00.0:   bridge window [io  0x0000-0x0fff]
[    6.078414] pci 0001:10:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    6.079014] pci 0001:10:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    6.079717] pci 0001:10:00.0: supports D1 D2
[    6.080093] pci 0001:10:00.0: PME# supported from D0 D1 D3hot
[    6.081081] pci 0001:10:00.0: Adding to iommu group 19
[    6.085687] pci 0001:10:00.0: Primary bus is hard wired to 0
[    6.086187] pci 0001:10:00.0: bridge configuration invalid ([bus 01-ff]), reconfiguring
[    6.086982] pci 0001:11:00.0: [1e4b:1202] type 00 class 0x010802 PCIe Endpoint
[    6.087732] pci 0001:11:00.0: BAR 0 [mem 0x00000000-0x00003fff 64bit]
[    6.088329] pci 0001:11:00.0: Max Payload Size set to 256 (was 128, max 512)
[    6.089213] pci 0001:11:00.0: PME# supported from D0 D3hot D3cold
[    6.089871] pci 0001:11:00.0: 15.752 Gb/s available PCIe bandwidth, limited by 8.0 GT/s PCIe x2 link at 0001:10:00.0 (capable of 31.504 Gb/s with 8.0 GT/s PCIe x4 link)
[    6.091486] pci 0001:11:00.0: Adding to iommu group 19
[    6.098957] pci 0001:11:00.0: ASPM: default states L1
[    6.099446] pci_bus 0001:11: busn_res: [bus 11-1f] end is updated to 11
[    6.100035] pci 0001:10:00.0: bridge window [mem 0xf1200000-0xf12fffff]: assigned
[    6.100693] pci 0001:10:00.0: ROM [mem 0xf1300000-0xf130ffff pref]: assigned
[    6.101313] pci 0001:11:00.0: BAR 0 [mem 0xf1200000-0xf1203fff 64bit]: assigned
[    6.101995] pci 0001:10:00.0: PCI bridge to [bus 11]
[    6.102437] pci 0001:10:00.0:   bridge window [mem 0xf1200000-0xf12fffff]
[    6.103034] pci_bus 0001:10: resource 4 [io  0x200000-0x2fffff]
[    6.103554] pci_bus 0001:10: resource 5 [mem 0xf1200000-0xf1ffffff]
[    6.104103] pci_bus 0001:10: resource 6 [mem 0x940000000-0x97fffffff]
[    6.104667] pci_bus 0001:11: resource 1 [mem 0xf1200000-0xf12fffff]
[    6.106532] pcieport 0001:10:00.0: PME: Signaling with IRQ 100
[    6.107719] phy phy-fee10000.phy.2: Runtime PM usage count underflow!
[    6.107793] nvme nvme0: pci function 0001:11:00.0
[    6.108303] rockchip-dw-pcie a40800000.pcie: host bridge /pcie@fe170000 ranges:
[    6.108730] nvme 0001:11:00.0: enabling device (0000 -> 0002)
[    6.109358] rockchip-dw-pcie a40800000.pcie:       IO 0x00f2100000..0x00f21fffff -> 0x00f2100000
[    6.110621] rockchip-dw-pcie a40800000.pcie:      MEM 0x00f2200000..0x00f2ffffff -> 0x00f2200000
[    6.111392] rockchip-dw-pcie a40800000.pcie:      MEM 0x0980000000..0x09bfffffff -> 0x0980000000
[    6.112250] rockchip-dw-pcie a40800000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    6.115702] hwmon hwmon7: temp1_input not attached to any thermal zone
[    6.116329] hwmon hwmon7: temp2_input not attached to any thermal zone
[    6.116945] hwmon hwmon7: temp3_input not attached to any thermal zone
[    6.117853] nvme nvme0: allocated 8 MiB host memory buffer (1 segment).
[    6.123344] nvme nvme0: 8/0/0 default/read/poll queues
[    6.125688] nvme nvme0: Ignoring bogus Namespace Identifiers
[    6.129886]  nvme0n1: p1 p2 p3
[    6.219119] rockchip-dw-pcie a40800000.pcie: PCIe Gen.2 x1 link up
[    6.219737] rockchip-dw-pcie a40800000.pcie: PCI host bridge to bus 0002:20
[    6.220351] pci_bus 0002:20: root bus resource [bus 20-2f]
[    6.220835] pci_bus 0002:20: root bus resource [io  0x300000-0x3fffff] (bus address [0xf2100000-0xf21fffff])
[    6.221694] pci_bus 0002:20: root bus resource [mem 0xf2200000-0xf2ffffff]
[    6.222309] pci_bus 0002:20: root bus resource [mem 0x980000000-0x9bfffffff]
[    6.222989] pci 0002:20:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    6.223639] pci 0002:20:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    6.224182] pci 0002:20:00.0: PCI bridge to [bus 01-ff]
[    6.224643] pci 0002:20:00.0:   bridge window [io  0x0000-0x0fff]
[    6.225178] pci 0002:20:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    6.225780] pci 0002:20:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    6.226488] pci 0002:20:00.0: supports D1 D2
[    6.226864] pci 0002:20:00.0: PME# supported from D0 D1 D3hot
[    6.228054] pci 0002:20:00.0: Adding to iommu group 20
[    6.232869] pci 0002:20:00.0: Primary bus is hard wired to 0
[    6.233370] pci 0002:20:00.0: bridge configuration invalid ([bus 01-ff]), reconfiguring
[    6.234238] pci 0002:21:00.0: [10ec:8125] type 00 class 0x020000 PCIe Endpoint
[    6.235025] pci 0002:21:00.0: BAR 0 [io  0x300000-0x3000ff]
[    6.235527] pci 0002:21:00.0: BAR 2 [mem 0xf2200000-0xf220ffff 64bit]
[    6.236105] pci 0002:21:00.0: BAR 4 [mem 0xf2210000-0xf2213fff 64bit]
[    6.237016] pci 0002:21:00.0: supports D1 D2
[    6.237391] pci 0002:21:00.0: PME# supported from D0 D1 D2 D3hot D3cold
[    6.238481] pci 0002:21:00.0: Adding to iommu group 20
[    6.242495] pci 0002:21:00.0: ASPM: default states L0s L1
[    6.243049] pci_bus 0002:21: busn_res: [bus 21-2f] end is updated to 21
[    6.243640] pci 0002:20:00.0: bridge window [mem 0xf2200000-0xf22fffff]: assigned
[    6.244298] pci 0002:20:00.0: ROM [mem 0xf2300000-0xf230ffff pref]: assigned
[    6.244916] pci 0002:20:00.0: bridge window [io  0x300000-0x300fff]: assigned
[    6.245544] pci 0002:21:00.0: BAR 2 [mem 0xf2200000-0xf220ffff 64bit]: assigned
[    6.246217] pci 0002:21:00.0: BAR 4 [mem 0xf2210000-0xf2213fff 64bit]: assigned
[    6.246885] pci 0002:21:00.0: BAR 0 [io  0x300000-0x3000ff]: assigned
[    6.247458] pci 0002:20:00.0: PCI bridge to [bus 21]
[    6.247895] pci 0002:20:00.0:   bridge window [io  0x300000-0x300fff]
[    6.248460] pci 0002:20:00.0:   bridge window [mem 0xf2200000-0xf22fffff]
[    6.249060] pci_bus 0002:20: resource 4 [io  0x300000-0x3fffff]
[    6.249579] pci_bus 0002:20: resource 5 [mem 0xf2200000-0xf2ffffff]
[    6.250128] pci_bus 0002:20: resource 6 [mem 0x980000000-0x9bfffffff]
[    6.250692] pci_bus 0002:21: resource 0 [io  0x300000-0x300fff]
[    6.251211] pci_bus 0002:21: resource 1 [mem 0xf2200000-0xf22fffff]
[    6.253138] pcieport 0002:20:00.0: PME: Signaling with IRQ 120
[    6.282649] avdd_0v75_s0: Bringing 750000uV into 837500-837500uV
[    6.295939] input: rk805 pwrkey as /devices/platform/feb20000.spi/spi_master/spi2/spi2.0/rk805-pwrkey.3.auto/input/input0
[    6.299293] phy phy-fd5d8000.syscon:usb2phy@8000.5: Runtime PM usage count underflow!
[    6.300109] phy phy-fd5dc000.syscon:usb2phy@c000.6: Runtime PM usage count underflow!
[    6.301026] fan53555-regulator 0-0042: FAN53555 Option[10] Rev[1] Detected!
[    6.301096] fan53555-regulator 2-0042: FAN53555 Option[10] Rev[1] Detected!
[    6.301470] fan53555-regulator 0-0043: FAN53555 Option[10] Rev[1] Detected!
[    6.302280] ehci-platform fc800000.usb: EHCI Host Controller
[    6.302488] ehci-platform fc800000.usb: new USB bus registered, assigned bus number 1
[    6.303052] ehci-platform fc880000.usb: EHCI Host Controller
[    6.303453] ehci-platform fc800000.usb: irq 138, io mem 0xfc800000
[    6.304314] ehci-platform fc880000.usb: new USB bus registered, assigned bus number 2
[    6.305933] ehci-platform fc880000.usb: irq 139, io mem 0xfc880000
[    6.312409] ehci-platform fc800000.usb: USB 2.0 started, EHCI 1.00
[    6.313044] usb usb1: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    6.313772] usb usb1: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    6.314058] cpu cpu0: EM: created perf domain
[    6.314405] usb usb1: Product: EHCI Host Controller
[    6.314408] usb usb1: Manufacturer: Linux 6.18.48-ophub ehci_hcd
[    6.315752] usb usb1: SerialNumber: fc800000.usb
[    6.316617] hub 1-0:1.0: USB hub found
[    6.316968] hub 1-0:1.0: 1 port detected
[    6.317437] cpufreq: cpufreq_policy_online: CPU4: Running at unlisted initial frequency: 1008000 kHz, changing to: 1200000 kHz
[    6.318655] cpu cpu4: EM: created perf domain
[    6.321869] cpufreq: cpufreq_policy_online: CPU6: Running at unlisted initial frequency: 1008000 kHz, changing to: 1200000 kHz
[    6.322365] ehci-platform fc880000.usb: USB 2.0 started, EHCI 1.00
[    6.322998] cpu cpu6: EM: created perf domain
[    6.323718] usb usb2: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    6.323811] usb usb2: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    6.324522] clk: Disabling unused clocks
[    6.325026] PM: genpd: Disabling unused power domains
[    6.325167] usb usb2: Product: EHCI Host Controller
[    6.325171] usb usb2: Manufacturer: Linux 6.18.48-ophub ehci_hcd
[    6.325799] ALSA device list:
[    6.325968] usb usb2: SerialNumber: fc880000.usb
[    6.326393]   No soundcards found.
[    6.327320] hub 2-0:1.0: USB hub found
[    6.328224] hub 2-0:1.0: 1 port detected
[    6.329205] Freeing unused kernel memory: 2560K
[    6.329678] Run /init as init process
[    6.727509] phy phy-fd5d8000.syscon:usb2phy@8000.5: Runtime PM usage count underflow!
[    6.727532] phy phy-fd5dc000.syscon:usb2phy@c000.6: Runtime PM usage count underflow!
[    6.732286] ohci-platform fc840000.usb: Generic Platform OHCI controller
[    6.733090] ohci-platform fc840000.usb: new USB bus registered, assigned bus number 3
[    6.734406] ohci-platform fc840000.usb: irq 141, io mem 0xfc840000
[    6.735063] ohci-platform fc8c0000.usb: Generic Platform OHCI controller
[    6.736007] ohci-platform fc8c0000.usb: new USB bus registered, assigned bus number 4
[    6.736785] ohci-platform fc8c0000.usb: irq 142, io mem 0xfc8c0000
[    6.742227] r8125 Ethernet controller driver 9.016.00-NAPI-RSS loaded
[    6.742905] r8125 0003:31:00.0: enabling device (0000 -> 0003)
[    6.747517] r8125 0003:31:00.0 (unnamed net_device) (uninitialized): Invalid ether addr 00:00:00:00:00:00
[    6.748356] r8125 0003:31:00.0 (unnamed net_device) (uninitialized): Random ether addr 5a:33:a0:f1:59:ad
[    6.750800] r8125: This product is covered by one or more of the following patents: US6,570,884, US6,115,776, and US6,327,625.
[    6.751811] r8125  Copyright (C) 2025 Realtek NIC software team <nicfae@realtek.com> 
[    6.751811]  This program comes with ABSOLUTELY NO WARRANTY; for details, please see <http://www.gnu.org/licenses/>. 
[    6.751811]  This is free software, and you are welcome to redistribute it under certain conditions; see <http://www.gnu.org/licenses/>. 
[    6.754599] r8125 Ethernet controller driver 9.016.00-NAPI-RSS loaded
[    6.793057] usb usb4: New USB device found, idVendor=1d6b, idProduct=0001, bcdDevice= 6.18
[    6.793785] usb usb4: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    6.794413] usb usb4: Product: Generic Platform OHCI controller
[    6.794929] usb usb4: Manufacturer: Linux 6.18.48-ophub ohci_hcd
[    6.795452] usb usb4: SerialNumber: fc8c0000.usb
[    6.795990] hub 4-0:1.0: USB hub found
[    6.796325] hub 4-0:1.0: 1 port detected
[    6.797198] usb usb3: New USB device found, idVendor=1d6b, idProduct=0001, bcdDevice= 6.18
[    6.797936] usb usb3: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    6.798574] usb usb3: Product: Generic Platform OHCI controller
[    6.799112] usb usb3: Manufacturer: Linux 6.18.48-ophub ohci_hcd
[    6.799644] usb usb3: SerialNumber: fc840000.usb
[    6.800535] hub 3-0:1.0: USB hub found
[    6.800893] hub 3-0:1.0: 1 port detected
[    6.835473] rtc-hym8563 6-0051: could not init device, -6
[    7.107549] r8125 0002:21:00.0 (unnamed net_device) (uninitialized): Invalid ether addr 00:00:00:00:00:00
[    7.108392] r8125 0002:21:00.0 (unnamed net_device) (uninitialized): Random ether addr f6:6b:6e:0c:b9:8b
[    7.109605] r8125: This product is covered by one or more of the following patents: US6,570,884, US6,115,776, and US6,327,625.
[    7.110610] r8125  Copyright (C) 2025 Realtek NIC software team <nicfae@realtek.com> 
[    7.110610]  This program comes with ABSOLUTELY NO WARRANTY; for details, please see <http://www.gnu.org/licenses/>. 
[    7.110610]  This is free software, and you are welcome to redistribute it under certain conditions; see <http://www.gnu.org/licenses/>. 
[    7.112780] rockchip-drm display-subsystem: bound fdd90000.vop (ops rk3066_hdmi_bridge_clear_hdmi_infoframe.part.0.isra.0 [rockchipdrm])
[    7.114988] dwhdmiqp-rockchip fde80000.hdmi: registered DesignWare HDMI QP I2C bus driver
[    7.115943] rockchip-drm display-subsystem: bound fde80000.hdmi (ops rk3066_hdmi_bridge_clear_hdmi_infoframe.part.0.isra.0 [rockchipdrm])
[    7.117327] [drm] Initialized rockchip 1.0.0 for display-subsystem on minor 0
[    7.117981] rockchip-drm display-subsystem: [drm] Cannot find any crtc or sizes
[    7.118645] rockchip-drm display-subsystem: [drm] Cannot find any crtc or sizes
[    7.122580] phy phy-fd5d0000.syscon:usb2phy@0.4: Runtime PM usage count underflow!
[    7.137500] phy phy-fed80000.phy.9: Runtime PM usage count underflow!
[    7.145954] phy phy-fd5d0000.syscon:usb2phy@0.4: Runtime PM usage count underflow!
[    7.147045] xhci-hcd xhci-hcd.5.auto: xHCI Host Controller
[    7.147714] xhci-hcd xhci-hcd.5.auto: new USB bus registered, assigned bus number 5
[    7.148646] xhci-hcd xhci-hcd.5.auto: hcc params 0x0220fe64 hci version 0x110 quirks 0x0000808002000010
[    7.149803] xhci-hcd xhci-hcd.5.auto: irq 211, io mem 0xfc000000
[    7.150413] phy phy-fed80000.phy.9: Runtime PM usage count underflow!
[    7.150976] xhci-hcd xhci-hcd.5.auto: xHCI Host Controller
[    7.152125] xhci-hcd xhci-hcd.5.auto: new USB bus registered, assigned bus number 6
[    7.152818] xhci-hcd xhci-hcd.5.auto: Host supports USB 3.0 SuperSpeed
[    7.153454] usb usb5: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    7.154180] usb usb5: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    7.154811] usb usb5: Product: xHCI Host Controller
[    7.155238] usb usb5: Manufacturer: Linux 6.18.48-ophub xhci-hcd
[    7.155769] usb usb5: SerialNumber: xhci-hcd.5.auto
[    7.156511] hub 5-0:1.0: USB hub found
[    7.156861] hub 5-0:1.0: 1 port detected
[    7.157329] usb usb6: We don't know the algorithms for LPM for this host, disabling LPM.
[    7.158071] usb usb6: New USB device found, idVendor=1d6b, idProduct=0003, bcdDevice= 6.18
[    7.158794] usb usb6: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    7.159435] usb usb6: Product: xHCI Host Controller
[    7.159862] usb usb6: Manufacturer: Linux 6.18.48-ophub xhci-hcd
[    7.160386] usb usb6: SerialNumber: xhci-hcd.5.auto
[    7.161885] hub 6-0:1.0: USB hub found
[    7.162227] hub 6-0:1.0: 1 port detected
[    7.163121] phy phy-fd5d4000.syscon:usb2phy@4000.7: Runtime PM usage count underflow!
[    7.177208] phy phy-fed90000.phy.11: Runtime PM usage count underflow!
[    7.182600] phy phy-fd5d4000.syscon:usb2phy@4000.7: Runtime PM usage count underflow!
[    7.183781] xhci-hcd xhci-hcd.6.auto: xHCI Host Controller
[    7.184438] xhci-hcd xhci-hcd.6.auto: new USB bus registered, assigned bus number 7
[    7.185190] xhci-hcd xhci-hcd.6.auto: hcc params 0x0220fe64 hci version 0x110 quirks 0x0000808002000010
[    7.186037] xhci-hcd xhci-hcd.6.auto: irq 212, io mem 0xfc400000
[    7.186642] phy phy-fed90000.phy.11: Runtime PM usage count underflow!
[    7.187213] xhci-hcd xhci-hcd.6.auto: xHCI Host Controller
[    7.187826] xhci-hcd xhci-hcd.6.auto: new USB bus registered, assigned bus number 8
[    7.188498] xhci-hcd xhci-hcd.6.auto: Host supports USB 3.0 SuperSpeed
[    7.189121] usb usb7: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    7.189845] usb usb7: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    7.190476] usb usb7: Product: xHCI Host Controller
[    7.190903] usb usb7: Manufacturer: Linux 6.18.48-ophub xhci-hcd
[    7.191430] usb usb7: SerialNumber: xhci-hcd.6.auto
[    7.192033] hub 7-0:1.0: USB hub found
[    7.192389] hub 7-0:1.0: 1 port detected
[    7.192854] usb usb8: We don't know the algorithms for LPM for this host, disabling LPM.
[    7.193587] usb usb8: New USB device found, idVendor=1d6b, idProduct=0003, bcdDevice= 6.18
[    7.194310] usb usb8: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    7.194941] usb usb8: Product: xHCI Host Controller
[    7.195368] usb usb8: Manufacturer: Linux 6.18.48-ophub xhci-hcd
[    7.195904] usb usb8: SerialNumber: xhci-hcd.6.auto
[    7.197321] hub 8-0:1.0: USB hub found
[    7.197664] hub 8-0:1.0: 1 port detected
[    8.416659] EXT4-fs (sda2): mounted filesystem 21019133-09b4-4c17-a8d7-2050ca195cc1 r/w with ordered data mode. Quota mode: none.
[    8.642604] systemd[1]: System time before build time, advancing clock.
[    8.694704] systemd[1]: systemd 255.4-1ubuntu8.17 running in system mode (+PAM +AUDIT +SELINUX +APPARMOR +IMA +SMACK +SECCOMP +GCRYPT -GNUTLS +OPENSSL +ACL +BLKID +CURL +ELFUTILS +FIDO2 +IDN2 -IDN +IPTC +KMOD +LIBCRYPTSETUP +LIBFDISK +PCRE2 -PWQUALITY +P11KIT +QRENCODE +TPM2 +BZIP2 +LZ4 +XZ +ZLIB +ZSTD -BPF_FRAMEWORK -XKBCOMMON +UTMP +SYSVINIT default-hierarchy=unified)
[    8.697581] systemd[1]: Detected architecture arm64.
[    8.699651] systemd[1]: Hostname set to <armbian>.
[    8.703452] systemd[1]: Initializing machine ID from random generator.
[    8.756352] dw-apb-uart feb50000.serial: forbid DMA for kernel console
[    8.928104] systemd[1]: Queued start job for default target graphical.target.
[    8.950596] systemd[1]: Created slice system-modprobe.slice - Slice /system/modprobe.
[    8.952047] systemd[1]: Created slice system-serial\x2dgetty.slice - Slice /system/serial-getty.
[    8.953491] systemd[1]: Created slice system-systemd\x2dfsck.slice - Slice /system/systemd-fsck.
[    8.954709] systemd[1]: Created slice user.slice - User and Session Slice.
[    8.955493] systemd[1]: Started systemd-ask-password-wall.path - Forward Password Requests to Wall Directory Watch.
[    8.956775] systemd[1]: Set up automount proc-sys-fs-binfmt_misc.automount - Arbitrary Executable File Formats File System Automount Point.
[    8.957988] systemd[1]: Expecting device dev-disk-by\x2duuid-f0d6b933\x2d61a4\x2d4c7d\x2dab59\x2dc158fa7d6980.device - /dev/disk/by-uuid/f0d6b933-61a4-4c7d-ab59-c158fa7d6980...
[    8.959422] systemd[1]: Expecting device dev-ttyAML0.device - /dev/ttyAML0...
[    8.960089] systemd[1]: Expecting device dev-ttyS2.device - /dev/ttyS2...
[    8.960749] systemd[1]: Reached target integritysetup.target - Local Integrity Protected Volumes.
[    8.961627] systemd[1]: Reached target slices.target - Slice Units.
[    8.962227] systemd[1]: Reached target swap.target - Swaps.
[    8.962777] systemd[1]: Reached target time-set.target - System Time Set.
[    8.963446] systemd[1]: Reached target veritysetup.target - Local Verity Protected Volumes.
[    8.972633] systemd[1]: Listening on rpcbind.socket - RPCbind Server Activation Socket.
[    8.973694] systemd[1]: Listening on syslog.socket - Syslog Socket.
[    8.974490] systemd[1]: Listening on systemd-fsckd.socket - fsck to fsckd communication Socket.
[    8.975415] systemd[1]: Listening on systemd-initctl.socket - initctl Compatibility Named Pipe.
[    8.976409] systemd[1]: Listening on systemd-journald-dev-log.socket - Journal Socket (/dev/log).
[    8.977468] systemd[1]: Listening on systemd-journald.socket - Journal Socket.
[    8.978216] systemd[1]: systemd-pcrextend.socket - TPM2 PCR Extension (Varlink) was skipped because of an unmet condition check (ConditionSecurity=measured-uki).
[    8.979746] systemd[1]: Listening on systemd-udevd-control.socket - udev Control Socket.
[    8.980689] systemd[1]: Listening on systemd-udevd-kernel.socket - udev Kernel Socket.
[    8.983373] systemd[1]: Mounting dev-hugepages.mount - Huge Pages File System...
[    8.985545] systemd[1]: Mounting dev-mqueue.mount - POSIX Message Queue File System...
[    8.987713] systemd[1]: Mounting sys-kernel-debug.mount - Kernel Debug File System...
[    8.989857] systemd[1]: Mounting sys-kernel-tracing.mount - Kernel Trace File System...
[    8.990757] systemd[1]: auth-rpcgss-module.service - Kernel Module supporting RPCSEC_GSS was skipped because of an unmet condition check (ConditionPathExists=/etc/krb5.keytab).
[    8.993668] systemd[1]: Starting fake-hwclock-load.service - Restore the current clock...
[    8.995785] systemd[1]: Starting keyboard-setup.service - Set the console keyboard layout...
[    8.998117] systemd[1]: Starting kmod-static-nodes.service - Create List of Static Device Nodes...
[    8.998416] (-hwclock)[298]: fake-hwclock-load.service: Referenced but unset environment variable evaluates to an empty string: FORCE
[    9.001742] systemd[1]: Starting modprobe@configfs.service - Load Kernel Module configfs...
[    9.004196] systemd[1]: Starting modprobe@dm_mod.service - Load Kernel Module dm_mod...
[    9.006433] systemd[1]: Starting modprobe@drm.service - Load Kernel Module drm...
[    9.008396] systemd[1]: Starting modprobe@efi_pstore.service - Load Kernel Module efi_pstore...
[    9.010608] systemd[1]: Starting modprobe@fuse.service - Load Kernel Module fuse...
[    9.012673] systemd[1]: Starting modprobe@loop.service - Load Kernel Module loop...
[    9.014173] systemd[1]: systemd-fsck-root.service - File System Check on Root Device was skipped because of an unmet condition check (ConditionPathIsReadWrite=!/).
[    9.014710] device-mapper: ioctl: 4.50.0-ioctl (2025-04-28) initialised: dm-devel@lists.linux.dev
[    9.020793] systemd[1]: Starting systemd-modules-load.service - Load Kernel Modules...
[    9.021578] systemd[1]: systemd-pcrmachine.service - TPM2 PCR Machine ID Measurement was skipped because of an unmet condition check (ConditionSecurity=measured-uki).
[    9.024205] systemd[1]: Starting systemd-remount-fs.service - Remount Root and Kernel File Systems...
[    9.025135] systemd[1]: systemd-tpm2-setup-early.service - TPM2 SRK Setup (Early) was skipped because of an unmet condition check (ConditionSecurity=measured-uki).
[    9.027621] systemd[1]: Starting systemd-udev-trigger.service - Coldplug All udev Devices...
[    9.030135] systemd[1]: Mounted dev-hugepages.mount - Huge Pages File System.
[    9.030982] systemd[1]: Mounted dev-mqueue.mount - POSIX Message Queue File System.
[    9.031850] systemd[1]: Mounted sys-kernel-debug.mount - Kernel Debug File System.
[    9.032684] systemd[1]: Mounted sys-kernel-tracing.mount - Kernel Trace File System.
[    9.033720] systemd[1]: fake-hwclock-load.service: Deactivated successfully.
[    9.034531] systemd[1]: Finished fake-hwclock-load.service - Restore the current clock.
[    9.035628] systemd[1]: Finished kmod-static-nodes.service - Create List of Static Device Nodes.
[    9.036717] systemd[1]: modprobe@configfs.service: Deactivated successfully.
[    9.037477] systemd[1]: Finished modprobe@configfs.service - Load Kernel Module configfs.
[    9.038498] systemd[1]: modprobe@dm_mod.service: Deactivated successfully.
[    9.039286] systemd[1]: Finished modprobe@dm_mod.service - Load Kernel Module dm_mod.
[    9.040287] systemd[1]: modprobe@drm.service: Deactivated successfully.
[    9.041012] systemd[1]: Finished modprobe@drm.service - Load Kernel Module drm.
[    9.041957] systemd[1]: modprobe@efi_pstore.service: Deactivated successfully.
[    9.042742] systemd[1]: Finished modprobe@efi_pstore.service - Load Kernel Module efi_pstore.
[    9.043800] systemd[1]: modprobe@fuse.service: Deactivated successfully.
[    9.044553] systemd[1]: Finished modprobe@fuse.service - Load Kernel Module fuse.
[    9.045483] systemd[1]: modprobe@loop.service: Deactivated successfully.
[    9.046202] systemd[1]: Finished modprobe@loop.service - Load Kernel Module loop.
[    9.047117] systemd[1]: Finished systemd-modules-load.service - Load Kernel Modules.
[    9.049109] systemd[1]: Mounting sys-fs-fuse-connections.mount - FUSE Control File System...
[    9.050790] systemd[1]: Mounting sys-kernel-config.mount - Kernel Configuration File System...
[    9.051633] systemd[1]: systemd-repart.service - Repartition Root Disk was skipped because no trigger condition checks were met.
[    9.053721] systemd[1]: Starting systemd-sysctl.service - Apply Kernel Variables...
[    9.055345] systemd[1]: Starting systemd-tmpfiles-setup-dev-early.service - Create Static Device Nodes in /dev gracefully...
[    9.064484] systemd[1]: Mounted sys-fs-fuse-connections.mount - FUSE Control File System.
[    9.065356] systemd[1]: Mounted sys-kernel-config.mount - Kernel Configuration File System.
[    9.066273] EXT4-fs (sda2): re-mounted 21019133-09b4-4c17-a8d7-2050ca195cc1.
[    9.068995] systemd[1]: Finished systemd-remount-fs.service - Remount Root and Kernel File Systems.
[    9.070137] systemd[1]: Finished keyboard-setup.service - Set the console keyboard layout.
[    9.071516] systemd[1]: systemd-hwdb-update.service - Rebuild Hardware Database was skipped because no trigger condition checks were met.
[    9.072888] systemd[1]: systemd-pstore.service - Platform Persistent Storage Archival was skipped because of an unmet condition check (ConditionDirectoryNotEmpty=/sys/fs/pstore).
[    9.075467] systemd[1]: Starting systemd-random-seed.service - Load/Save OS Random Seed...
[    9.076275] systemd[1]: systemd-tpm2-setup.service - TPM2 SRK Setup was skipped because of an unmet condition check (ConditionSecurity=measured-uki).
[    9.077719] systemd[1]: Finished systemd-tmpfiles-setup-dev-early.service - Create Static Device Nodes in /dev gracefully.
[    9.079946] systemd[1]: Starting systemd-sysusers.service - Create System Users...
[    9.091375] systemd[1]: Finished systemd-sysctl.service - Apply Kernel Variables.
[    9.107136] systemd[1]: Finished systemd-random-seed.service - Load/Save OS Random Seed.
[    9.108048] systemd[1]: first-boot-complete.target - First Boot Complete was skipped because of an unmet condition check (ConditionFirstBoot=yes).
[    9.110662] systemd[1]: Finished systemd-sysusers.service - Create System Users.
[    9.112939] systemd[1]: Starting systemd-tmpfiles-setup-dev.service - Create Static Device Nodes in /dev...
[    9.142818] systemd[1]: Finished systemd-tmpfiles-setup-dev.service - Create Static Device Nodes in /dev.
[    9.143859] systemd[1]: Reached target local-fs-pre.target - Preparation for Local File Systems.
[    9.146264] systemd[1]: Mounting tmp.mount - /tmp...
[    9.148299] systemd[1]: Starting systemd-udevd.service - Rule-based Manager for Device Events and Files...
[    9.161647] systemd[1]: Mounted tmp.mount - /tmp.
[    9.223683] systemd[1]: Started systemd-udevd.service - Rule-based Manager for Device Events and Files.
[    9.225940] systemd[1]: Finished systemd-udev-trigger.service - Coldplug All udev Devices.
[    9.226935] systemd[1]: plymouth-start.service - Show Plymouth Boot Screen was skipped because of an unmet condition check (ConditionKernelCommandLine=splash).
[    9.228287] systemd[1]: Started systemd-ask-password-console.path - Dispatch Password Requests to Console Directory Watch.
[    9.230157] systemd[1]: systemd-ask-password-plymouth.path - Forward Password Requests to Plymouth Directory Watch was skipped because of an unmet condition check (ConditionPathExists=/run/plymouth/pid).
[    9.231767] systemd[1]: Reached target cryptsetup.target - Local Encrypted Volumes.
[    9.232529] systemd[1]: Reached target paths.target - Path Units.
[    9.259128] sd 0:0:0:0: Attached scsi generic sg0 type 0
[    9.292640] systemd[1]: Found device dev-ttyS2.device - /dev/ttyS2.
[    9.380680] rockchip-rga fdb80000.rga: HW Version: 0x03.02
[    9.381923] [drm] Initialized rocket 0.0.0 for rknn on minor 0
[    9.382888] rocket fdab0000.npu: Rockchip NPU core 0 version: 1179210309
[    9.385386] rocket fdac0000.npu: Rockchip NPU core 1 version: 1179210309
[    9.386201] rockchip-rga fdb80000.rga: Registered rockchip-rga as /dev/video0
[    9.387815] rocket fdad0000.npu: Rockchip NPU core 2 version: 1179210309
[    9.389622] rockchip-pm-domain fd8d8000.power-management:power-controller: supply domain not found, using dummy regulator
[    9.392382] panthor fb000000.gpu: [drm] clock rate = 198000000
[    9.442714] rkvdec fdc40000.video-codec: missing multi-core support, ignoring this instance
[    9.447317] panthor fb000000.gpu: EM: created perf domain
[    9.478598] panthor fb000000.gpu: [drm] Mali-G610 id 0xa867 major 0x0 minor 0x0 status 0x5
[    9.479362] panthor fb000000.gpu: [drm] Features: L2:0x7120306 Tiler:0x809 Mem:0x301 MMU:0x2830 AS:0xff
[    9.480192] panthor fb000000.gpu: [drm] shader_present=0x50005 l2_present=0x1 tiler_present=0x1
[    9.504552] panthor fb000000.gpu: [drm] Firmware protected mode entry is not supported, ignoring
[    9.505370] panthor fb000000.gpu: [drm] Firmware git sha: 95a25d71030715381f33105394285e1dcc860a65 
[    9.506320] panthor fb000000.gpu: [drm] CSF FW using interface v1.5.0, Features 0x0 Instrumentation features 0x71
[    9.507507] panthor fb000000.gpu: [drm] Using Transparent Hugepage
[    9.516143] hantro-vpu fdb50000.video-codec: registered rockchip,rk3568-vpu-dec as /dev/video2
[    9.524334] hantro-vpu fdba0000.video-codec: registered rockchip,rk3588-vepu121-enc as /dev/video3
[    9.527791] hantro-vpu fdba4000.video-codec: missing multi-core support, ignoring this instance
[    9.531715] [drm] Initialized panthor 1.8.0 for fb000000.gpu on minor 1
[    9.531970] hantro-vpu fdba8000.video-codec: missing multi-core support, ignoring this instance
[    9.533800] hantro-vpu fdbac000.video-codec: missing multi-core support, ignoring this instance
[    9.535590] systemd[1]: Found device dev-disk-by\x2duuid-f0d6b933\x2d61a4\x2d4c7d\x2dab59\x2dc158fa7d6980.device - ADATA_SP920SS BOOT.
[    9.537715] yt921x stmmac-1:1d: Motorcomm YT9215S ethernet switch, chipid: 0x90020002, chipmode: 0x2 0x0
[    9.559452] systemd[1]: Starting systemd-fsck@dev-disk-by\x2duuid-f0d6b933\x2d61a4\x2d4c7d\x2dab59\x2dc158fa7d6980.service - File System Check on /dev/disk/by-uuid/f0d6b933-61a4-4c7d-ab59-c158fa7d6980...
[    9.565209] systemd[1]: Started systemd-fsckd.service - File System Check Daemon to report status.
[    9.600454] systemd[1]: Finished systemd-fsck@dev-disk-by\x2duuid-f0d6b933\x2d61a4\x2d4c7d\x2dab59\x2dc158fa7d6980.service - File System Check on /dev/disk/by-uuid/f0d6b933-61a4-4c7d-ab59-c158fa7d6980.
[    9.607199] systemd[1]: boot.mount: Directory /boot to mount over is not empty, mounting anyway.
[    9.630559] systemd[1]: Mounting boot.mount - /boot...
[    9.641275] EXT4-fs (sda1): mounted filesystem f0d6b933-61a4-4c7d-ab59-c158fa7d6980 r/w with ordered data mode. Quota mode: none.
[    9.646629] systemd[1]: Mounted boot.mount - /boot.
[    9.647534] systemd[1]: Reached target local-fs.target - Local File Systems.
[    9.651230] systemd[1]: Listening on systemd-sysext.socket - System Extension Image Management (Varlink).
[    9.654709] systemd[1]: Starting armbian-zram-config.service - Armbian ZRAM config...
[    9.659624] systemd[1]: Starting console-setup.service - Set console font and keymap...
[    9.664878] systemd[1]: Starting ldconfig.service - Rebuild Dynamic Linker Cache...
[    9.669868] systemd[1]: Starting plymouth-read-write.service - Tell Plymouth To Write Out Runtime Data...
[    9.679359] systemd[1]: Starting systemd-binfmt.service - Set Up Additional Binary Formats...
[    9.680202] systemd[1]: systemd-machine-id-commit.service - Commit a transient machine-id on disk was skipped because of an unmet condition check (ConditionPathIsMountPoint=/etc/machine-id).
[    9.689758] systemd[1]: proc-sys-fs-binfmt_misc.automount: Got automount request for /proc/sys/fs/binfmt_misc, triggered by 499 (systemd-binfmt)
[    9.692958] systemd[1]: Finished plymouth-read-write.service - Tell Plymouth To Write Out Runtime Data.
[    9.707959] yt921x stmmac-1:1d: port 1: LED0 0x00000670 -> 0x00020070, LED1 0xf0000040 -> 0x00002670
[    9.714085] yt921x stmmac-1:1d: port 2: LED0 0x00000670 -> 0x00020070, LED1 0xf0000040 -> 0x00002670
[    9.719306] yt921x stmmac-1:1d: port 3: LED0 0x00000670 -> 0x00020070, LED1 0xf0000040 -> 0x00002670
[    9.732478] yt921x stmmac-1:1d: port 4: LED0 0x00000670 -> 0x00020070, LED1 0xf0000040 -> 0x00002670
[    9.746619] yt921x stmmac-1:1d: configuring for fixed/rgmii-txid link mode
[    9.753421] yt921x stmmac-1:1d: Link is Up - 1Gbps/Full - flow control rx/tx
[    9.757521] zram: Added device: zram0
[    9.757950] zram: Added device: zram1
[    9.758368] zram: Added device: zram2
[    9.793557] zram0: detected capacity change from 0 to 16324176
[    9.807201] Adding 8162084k swap on /dev/zram0.  Priority:5 extents:1 across:8162084k SS
[    9.828025] zram1: detected capacity change from 0 to 102400
[    9.845501] systemd[1]: Finished armbian-zram-config.service - Armbian ZRAM config.
[    9.858661] yt921x stmmac-1:1d lan1 (uninitialized): PHY [stmmac-1:1d:01] driver [Generic PHY] (irq=POLL)
[    9.872654] systemd[1]: Starting armbian-ramlog.service - Armbian memory supported logging...
[    9.933588] EXT4-fs (zram1): mounted filesystem 152f33c9-9388-415d-8445-1a2e924f8b20 r/w without journal. Quota mode: none.
[    9.976106] systemd[1]: Starting fake-hwclock-load.service - Restore the current clock...
[    9.976368] (-hwclock)[667]: fake-hwclock-load.service: Referenced but unset environment variable evaluates to an empty string: FORCE
[    9.980574] systemd[1]: Starting modprobe@dm_mod.service - Load Kernel Module dm_mod...
[    9.983813] systemd[1]: Starting modprobe@efi_pstore.service - Load Kernel Module efi_pstore...
[    9.987451] systemd[1]: Starting modprobe@loop.service - Load Kernel Module loop...
[    9.988372] systemd[1]: plymouth-start.service - Show Plymouth Boot Screen was skipped because of an unmet condition check (ConditionKernelCommandLine=splash).
[    9.989753] systemd[1]: systemd-ask-password-plymouth.path - Forward Password Requests to Plymouth Directory Watch was skipped because of an unmet condition check (ConditionPathExists=/run/plymouth/pid).
[    9.989833] yt921x stmmac-1:1d lan2 (uninitialized): PHY [stmmac-1:1d:02] driver [Generic PHY] (irq=POLL)
[    9.991611] systemd[1]: systemd-hwdb-update.service - Rebuild Hardware Database was skipped because no trigger condition checks were met.
[    9.993420] systemd[1]: systemd-machine-id-commit.service - Commit a transient machine-id on disk was skipped because of an unmet condition check (ConditionPathIsMountPoint=/etc/machine-id).
[    9.994945] systemd[1]: systemd-pcrmachine.service - TPM2 PCR Machine ID Measurement was skipped because of an unmet condition check (ConditionSecurity=measured-uki).
[    9.996373] systemd[1]: systemd-tpm2-setup-early.service - TPM2 SRK Setup (Early) was skipped because of an unmet condition check (ConditionSecurity=measured-uki).
[    9.997703] systemd[1]: systemd-tpm2-setup.service - TPM2 SRK Setup was skipped because of an unmet condition check (ConditionSecurity=measured-uki).
[   10.000043] systemd[1]: Finished ldconfig.service - Rebuild Dynamic Linker Cache.
[   10.001652] systemd[1]: fake-hwclock-load.service: Deactivated successfully.
[   10.002698] systemd[1]: Finished fake-hwclock-load.service - Restore the current clock.
[   10.004403] systemd[1]: modprobe@dm_mod.service: Deactivated successfully.
[   10.005388] systemd[1]: Finished modprobe@dm_mod.service - Load Kernel Module dm_mod.
[   10.006898] systemd[1]: modprobe@efi_pstore.service: Deactivated successfully.
[   10.007896] systemd[1]: Finished modprobe@efi_pstore.service - Load Kernel Module efi_pstore.
[   10.009445] systemd[1]: modprobe@loop.service: Deactivated successfully.
[   10.010407] systemd[1]: Finished modprobe@loop.service - Load Kernel Module loop.
[   10.011704] systemd[1]: systemd-pstore.service - Platform Persistent Storage Archival was skipped because of an unmet condition check (ConditionDirectoryNotEmpty=/sys/fs/pstore).
[   10.013188] systemd[1]: systemd-repart.service - Repartition Root Disk was skipped because no trigger condition checks were met.
[   10.066217] systemd[1]: Mounting proc-sys-fs-binfmt_misc.mount - Arbitrary Executable File Formats File System...
[   10.080359] systemd[1]: Mounted proc-sys-fs-binfmt_misc.mount - Arbitrary Executable File Formats File System.
[   10.083760] systemd[1]: Finished systemd-binfmt.service - Set Up Additional Binary Formats.
[   10.095153] yt921x stmmac-1:1d lan3 (uninitialized): PHY [stmmac-1:1d:03] driver [Generic PHY] (irq=POLL)
[   10.161605] systemd[1]: Finished armbian-ramlog.service - Armbian memory supported logging.
[   10.192909] systemd[1]: Starting systemd-journald.service - Journal Service...
[   10.195335] yt921x stmmac-1:1d lan4 (uninitialized): PHY [stmmac-1:1d:04] driver [Generic PHY] (irq=POLL)
[   10.222617] systemd-journald[702]: Collecting audit messages is disabled.
[   10.285313] DSA: tree 0 setup
[   10.292000] systemd[1]: Started systemd-journald.service - Journal Service.
[   10.294949] yt921x stmmac-0:1d: Motorcomm YT9215S ethernet switch, chipid: 0x90020002, chipmode: 0x2 0x0
[   10.335167] systemd-journald[702]: Received client request to flush runtime journal.
[   10.430049] yt921x stmmac-0:1d: port 1: LED0 0x00000670 -> 0x00020070, LED1 0xf0000040 -> 0x00002670
[   10.433446] yt921x stmmac-0:1d: port 2: LED0 0x00000670 -> 0x00020070, LED1 0xf0000040 -> 0x00002670
[   10.436789] yt921x stmmac-0:1d: port 3: LED0 0x00000670 -> 0x00020070, LED1 0xf0000040 -> 0x00002670
[   10.440131] yt921x stmmac-0:1d: port 4: LED0 0x00000670 -> 0x00020070, LED1 0xf0000040 -> 0x00002670
[   10.441825] RPC: Registered named UNIX socket transport module.
[   10.442366] RPC: Registered udp transport module.
[   10.442783] RPC: Registered tcp transport module.
[   10.443199] RPC: Registered tcp-with-tls transport module.
[   10.443683] RPC: Registered tcp NFSv4.1 backchannel transport module.
[   10.451890] yt921x stmmac-0:1d: configuring for fixed/rgmii-txid link mode
[   10.460580] yt921x stmmac-0:1d: Link is Up - 1Gbps/Full - flow control rx/tx
[   10.546166] yt921x stmmac-0:1d lan5 (uninitialized): PHY [stmmac-0:1d:01] driver [Generic PHY] (irq=POLL)
[   10.652779] yt921x stmmac-0:1d lan6 (uninitialized): PHY [stmmac-0:1d:02] driver [Generic PHY] (irq=POLL)
[   10.760013] yt921x stmmac-0:1d lan7 (uninitialized): PHY [stmmac-0:1d:03] driver [Generic PHY] (irq=POLL)
[   10.869188] yt921x stmmac-0:1d lan8 (uninitialized): PHY [stmmac-0:1d:04] driver [Generic PHY] (irq=POLL)
[   10.963286] DSA: tree 1 setup
[   11.036364] NOTICE: Automounting of tracing to debugfs is deprecated and will be removed in 2030
[   11.936408] rk_gmac-dwmac fe1c0000.ethernet eth0: Register MEM_TYPE_PAGE_POOL RxQ-0
[   11.937591] rk_gmac-dwmac fe1c0000.ethernet eth0: Register MEM_TYPE_PAGE_POOL RxQ-1
[   11.945714] dwmac4: Master AXI performs any burst length
[   11.946201] rk_gmac-dwmac fe1c0000.ethernet eth0: No Safety Features support found
[   11.947158] rk_gmac-dwmac fe1c0000.ethernet eth0: IEEE 1588-2008 Advanced Timestamp supported
[   11.948180] rk_gmac-dwmac fe1c0000.ethernet eth0: registered PTP clock
[   11.948760] rk_gmac-dwmac fe1c0000.ethernet eth0: configuring for fixed/rgmii-rxid link mode
[   11.950282] rk_gmac-dwmac fe1c0000.ethernet eth0: Link is Up - 1Gbps/Full - flow control rx/tx
[   11.957470] rk_gmac-dwmac fe1b0000.ethernet eth1: Register MEM_TYPE_PAGE_POOL RxQ-0
[   11.959150] rk_gmac-dwmac fe1b0000.ethernet eth1: Register MEM_TYPE_PAGE_POOL RxQ-1
[   11.960925] dwmac4: Master AXI performs any burst length
[   11.961412] rk_gmac-dwmac fe1b0000.ethernet eth1: No Safety Features support found
[   11.962600] rk_gmac-dwmac fe1b0000.ethernet eth1: IEEE 1588-2008 Advanced Timestamp supported
[   11.963599] rk_gmac-dwmac fe1b0000.ethernet eth1: registered PTP clock
[   11.964177] rk_gmac-dwmac fe1b0000.ethernet eth1: configuring for fixed/rgmii-rxid link mode
[   11.968978] rk_gmac-dwmac fe1b0000.ethernet eth1: Link is Up - 1Gbps/Full - flow control rx/tx
[   11.975663] eth2: 0xffff800083a50000, a2:6c:73:49:c4:f1, IRQ 69
[   11.995999] eth3: 0xffff800083b10000, 3e:9c:13:70:48:a6, IRQ 111
[   12.536942] yt921x stmmac-1:1d lan1: configuring for phy/internal link mode
[   12.550657] yt921x stmmac-1:1d lan2: configuring for phy/internal link mode
[   12.578081] yt921x stmmac-1:1d lan3: configuring for phy/internal link mode
[   12.611124] yt921x stmmac-1:1d lan4: configuring for phy/internal link mode
[   12.639029] yt921x stmmac-0:1d lan5: configuring for phy/internal link mode
[   12.655547] yt921x stmmac-0:1d lan6: configuring for phy/internal link mode
[   12.686777] yt921x stmmac-0:1d lan7: configuring for phy/internal link mode
[   12.719344] yt921x stmmac-0:1d lan8: configuring for phy/internal link mode

armbian login: root (automatic login)


    _             _    _                             __  __ _    _      _ 
   /_\  _ _ _ __ | |__(_)__ _ _ _ ___ _  _ _ _  ___ / _|/ _(_)__(_)__ _| |
  / _ \| '_| '  \| '_ \ / _` | ' \___| || | ' \/ _ \  _|  _| / _| / _` | |
 /_/ \_\_| |_|_|_|_.__/_\__,_|_||_|   \_,_|_||_\___/_| |_| |_\__|_\__,_|_|
                                                                          
 v26.08.0 for bdy-g98 running Armbian Linux 6.18.48-ophub

 Packages:     Ubuntu stable (noble)

 Performance:  

 Load:         11%           	 Uptime:         1m	
 Memory usage: 2% of 15.57G 	
 CPU temp:     43°C           	 Usage of /:   58% of 2.9G   	
 storage /:    28% of 463M   	

Waiting for system to finish booting ...
Created symlink /etc/systemd/system/network-online.target.wants/NetworkManager-wait-online.service → /usr/lib/systemd/system/NetworkManager-wait-online.service.
Waiting for network startup to complete...
Job for NetworkManager-wait-online.service failed because the control process exited with error code.
See "systemctl status NetworkManager-wait-online.service" and "journalctl -xeu NetworkManager-wait-online.service" for details.
Welcome to Armbian OS! 

Documentation: https://docs.armbian.com/ | Community support: https://community.armbian.com/

IP address: 192.168.33.46 

Create root password: *****
Repeat root password: *****

Warning: Weak password, it is too short!

Support status: community support (looking for a dedicated maintainer)

Choose default system command shell:

1) bash
2) zsh
1

Shell: BASH

Creating a new user account. Press <Ctrl-C> to abort

Please provide a username (eg. your first name): ^C
Disabling user account creation procedure

root@armbian:~# ls
root@armbian:~# ip a
1: lo: <LOOPBACK,UP,LOWER_UP> mtu 65536 qdisc noqueue state UNKNOWN group default qlen 1000
    link/loopback 00:00:00:00:00:00 brd 00:00:00:00:00:00
    inet 127.0.0.1/8 scope host lo
       valid_lft forever preferred_lft forever
2: eth0: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1508 qdisc mq state UP group default qlen 1000
    link/ether 4a:16:18:4e:4f:e6 brd ff:ff:ff:ff:ff:ff
    altname end1
    altname enx4a16184e4fe6
3: eth1: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1508 qdisc mq state UP group default qlen 1000
    link/ether 46:16:18:4e:4f:e6 brd ff:ff:ff:ff:ff:ff
    altname end0
    altname enx4616184e4fe6
4: sit0@NONE: <NOARP> mtu 1480 qdisc noop state DOWN group default qlen 1000
    link/sit 0.0.0.0 brd 0.0.0.0
5: ip6tnl0@NONE: <NOARP> mtu 1452 qdisc noop state DOWN group default qlen 1000
    link/tunnel6 :: brd :: permaddr bebe:b03e:39dc::
6: eth2: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc mq state UP group default qlen 1000
    link/ether 02:a3:55:ef:59:25 brd ff:ff:ff:ff:ff:ff permaddr 5a:33:a0:f1:59:ad
    altname enP3p49s0
    inet 192.168.33.46/24 brd 192.168.33.255 scope global dynamic noprefixroute eth2
       valid_lft 6861sec preferred_lft 6861sec
    inet6 fe80::4e18:c768:7a99:1dc3/64 scope link noprefixroute 
       valid_lft forever preferred_lft forever
7: eth3: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc mq state DOWN group default qlen 1000
    link/ether 02:97:2c:57:95:20 brd ff:ff:ff:ff:ff:ff permaddr f6:6b:6e:0c:b9:8b
    altname enP2p33s0
8: lan1@eth0: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue state LOWERLAYERDOWN group default qlen 1000
    link/ether 4a:16:18:4e:4f:e6 brd ff:ff:ff:ff:ff:ff
9: lan2@eth0: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue state LOWERLAYERDOWN group default qlen 1000
    link/ether 4a:16:18:4e:4f:e6 brd ff:ff:ff:ff:ff:ff
10: lan3@eth0: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue state LOWERLAYERDOWN group default qlen 1000
    link/ether 4a:16:18:4e:4f:e6 brd ff:ff:ff:ff:ff:ff
11: lan4@eth0: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue state LOWERLAYERDOWN group default qlen 1000
    link/ether 4a:16:18:4e:4f:e6 brd ff:ff:ff:ff:ff:ff
12: lan5@eth1: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue state LOWERLAYERDOWN group default qlen 1000
    link/ether 46:16:18:4e:4f:e6 brd ff:ff:ff:ff:ff:ff
13: lan6@eth1: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue state LOWERLAYERDOWN group default qlen 1000
    link/ether 46:16:18:4e:4f:e6 brd ff:ff:ff:ff:ff:ff
14: lan7@eth1: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue state LOWERLAYERDOWN group default qlen 1000
    link/ether 46:16:18:4e:4f:e6 brd ff:ff:ff:ff:ff:ff
15: lan8@eth1: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue state LOWERLAYERDOWN group default qlen 1000
    link/ether 46:16:18:4e:4f:e6 brd ff:ff:ff:ff:ff:ff
root@armbian:~# uname -a
Linux armbian 6.18.48-ophub #1 SMP PREEMPT_DYNAMIC Sat Aug 29 08:47:56 UTC 2026 aarch64 aarch64 aarch64 GNU/Linux
root@armbian:~# lsblk
NAME        MAJ:MIN RM   SIZE RO TYPE MOUNTPOINTS
sda           8:0    0 119.2G  0 disk 
├─sda1        8:1    0   511M  0 part /boot
└─sda2        8:2    0 118.7G  0 part /var/log.hdd
                                      /
zram0       253:0    0   7.8G  0 disk [SWAP]
zram1       253:1    0    50M  0 disk /var/log
zram2       253:2    0     0B  0 disk 
nvme0n1     259:0    0 119.2G  0 disk 
├─nvme0n1p1 259:1    0     4M  0 part 
├─nvme0n1p2 259:2    0   512M  0 part 
└─nvme0n1p3 259:3    0 118.7G  0 part 
root@armbian:~# ip a
1: lo: <LOOPBACK,UP,LOWER_UP> mtu 65536 qdisc noqueue state UNKNOWN group default qlen 1000
    link/loopback 00:00:00:00:00:00 brd 00:00:00:00:00:00
    inet 127.0.0.1/8 scope host lo
       valid_lft forever preferred_lft forever
2: eth0: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1508 qdisc mq state UP group default qlen 1000
    link/ether 4a:16:18:4e:4f:e6 brd ff:ff:ff:ff:ff:ff
    altname end1
    altname enx4a16184e4fe6
3: eth1: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1508 qdisc mq state UP group default qlen 1000
    link/ether 46:16:18:4e:4f:e6 brd ff:ff:ff:ff:ff:ff
    altname end0
    altname enx4616184e4fe6
4: sit0@NONE: <NOARP> mtu 1480 qdisc noop state DOWN group default qlen 1000
    link/sit 0.0.0.0 brd 0.0.0.0
5: ip6tnl0@NONE: <NOARP> mtu 1452 qdisc noop state DOWN group default qlen 1000
    link/tunnel6 :: brd :: permaddr bebe:b03e:39dc::
6: eth2: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc mq state UP group default qlen 1000
    link/ether 02:a3:55:ef:59:25 brd ff:ff:ff:ff:ff:ff permaddr 5a:33:a0:f1:59:ad
    altname enP3p49s0
    inet 192.168.33.46/24 brd 192.168.33.255 scope global dynamic noprefixroute eth2
       valid_lft 5833sec preferred_lft 5833sec
    inet6 fe80::4e18:c768:7a99:1dc3/64 scope link noprefixroute 
       valid_lft forever preferred_lft forever
7: eth3: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc mq state DOWN group default qlen 1000
    link/ether 02:97:2c:57:95:20 brd ff:ff:ff:ff:ff:ff permaddr f6:6b:6e:0c:b9:8b
    altname enP2p33s0
8: lan1@eth0: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue state LOWERLAYERDOWN group default qlen 1000
    link/ether 4a:16:18:4e:4f:e6 brd ff:ff:ff:ff:ff:ff
9: lan2@eth0: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue state LOWERLAYERDOWN group default qlen 1000
    link/ether 4a:16:18:4e:4f:e6 brd ff:ff:ff:ff:ff:ff
10: lan3@eth0: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue state LOWERLAYERDOWN group default qlen 1000
    link/ether 4a:16:18:4e:4f:e6 brd ff:ff:ff:ff:ff:ff
11: lan4@eth0: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue state LOWERLAYERDOWN group default qlen 1000
    link/ether 4a:16:18:4e:4f:e6 brd ff:ff:ff:ff:ff:ff
12: lan5@eth1: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue state LOWERLAYERDOWN group default qlen 1000
    link/ether 46:16:18:4e:4f:e6 brd ff:ff:ff:ff:ff:ff
13: lan6@eth1: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue state LOWERLAYERDOWN group default qlen 1000
    link/ether 46:16:18:4e:4f:e6 brd ff:ff:ff:ff:ff:ff
14: lan7@eth1: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue state LOWERLAYERDOWN group default qlen 1000
    link/ether 46:16:18:4e:4f:e6 brd ff:ff:ff:ff:ff:ff
15: lan8@eth1: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue state LOWERLAYERDOWN group default qlen 1000
    link/ether 46:16:18:4e:4f:e6 brd ff:ff:ff:ff:ff:ff
root@armbian:~# uname -a
Linux armbian 6.18.48-ophub #1 SMP PREEMPT_DYNAMIC Sat Aug 29 08:47:56 UTC 2026 aarch64 aarch64 aarch64 GNU/Linux
root@armbian:~# lsblk
NAME        MAJ:MIN RM   SIZE RO TYPE MOUNTPOINTS
sda           8:0    0 119.2G  0 disk 
├─sda1        8:1    0   511M  0 part /boot
└─sda2        8:2    0 118.7G  0 part /var/log.hdd
                                      /
zram0       253:0    0   7.8G  0 disk [SWAP]
zram1       253:1    0    50M  0 disk /var/log
zram2       253:2    0     0B  0 disk 
nvme0n1     259:0    0 119.2G  0 disk 
├─nvme0n1p1 259:1    0     4M  0 part 
├─nvme0n1p2 259:2    0   512M  0 part 
└─nvme0n1p3 259:3    0 118.7G  0 part 
root@armbian:~# sync
root@armbian:~# 
root@armbian:~# 

```



## QA


### 系统重启问题

```shell
[    9.882527] systemd[1]: systemd-pstore.service - Platform Persistent Storage Archival was skipped because of an unmet condition check (ConditionDirectoryNotEmpty=/sys/fs/pstore).
[    9.883939] systemd[1]: systemd-repart.service - Repartition Root Disk was skipped because no trigger condition checks were met.
[    9.901788] systemd-journald[701]: Collecting audit messages is disabled.
[    9.950912] yt921x stmmac-1:1d lan3 (uninitialized): PHY [stmmac-1:1d:03] driver [Generic PHY] (irq=POLL)
[    9.957096] systemd[1]: Started systemd-journald.service - Journal Service.
[   10.015191] systemd-journald[701]: Received client request to flush runtime journal.
[   10.056254] yt921x stmmac-1:1d lan4 (uninitialized): PHY [stmmac-1:1d:04] driver [Generic PHY] (irq=POLL)
[   10.109064] RPC: Registered named UNIX socket transport module.
[   10.109611] RPC: Registered udp transport module.
[   10.109617] RPC: Registered tcp transport module.
[   10.109619] RPC: Registered tcp-with-tls transport module.
[   10.109622] RPC: Registered tcp NFSv4.1 backchannel transport module.
[   10.142878] DSA: tree 0 setup
[   10.150677] yt921x stmmac-0:1d: Motorcomm YT9215S ethernet switch, chipid: 0x90020002, chipmode: 0x2 0x0
[   10.241063] sysrq: Emergency Sync
[   10.241543] sysrq: Emergency Remount R/O
[   10.261658] EXT4-fs (zram1): re-mounted 4639bea9-0cd6-4ff0-8f5b-cafd72bfd6a6 ro.
[   10.289288] yt921x stmmac-0:1d: port 1: LED0 0x00000670 -> 0x00020070, LED1 0xf0000040 -> 0x00002670
[   10.292618] yt921x stmmac-0:1d: port 2: LED0 0x00000670 -> 0x00020070, LED1 0xf0000040 -> 0x00002670
[   10.296054] yt921x stmmac-0:1d: port 3: LED0 0x00000670 -> 0x00020070, LED1 0xf0000040 -> 0x00002670
[   10.299676] yt921x stmmac-0:1d: port 4: LED0 0x00000670 -> 0x00020070, LED1 0xf0000040 -> 0x00002670
[   10.312378] yt921x stmmac-0:1d: configuring for fixed/rgmii-txid link mode
[   10.316435] EXT4-fs (sda1): re-mounted 8b3affbd-4df3-4001-a407-2aeb125cf490 ro.
[   10.323595] yt921x stmmac-0:1d: Link is Up - 1Gbps/Full - flow control rx/tx
[   10.358245] EXT4-fs (sda2): re-mounted 45163c2b-8ab5-4556-a229-b7768f1481ed ro.
[   10.362689] Emergency Sync complete
[   10.363033] Emergency Remount complete
[   10.403757] yt921x stmmac-0:1d lan5 (uninitialized): PHY [stmmac-0:1d:01] driver [Generic PHY] (irq=POLL)
[   10.520703] yt921x stmmac-0:1d lan6 (uninitialized): PHY [stmmac-0:1d:02] driver [Generic PHY] (irq=POLL)
[   10.636600] yt921x stmmac-0:1d lan7 (uninitialized): PHY [stmmac-0:1d:03] driver [Generic PHY] (irq=POLL)
[   10.752418] yt921x stmmac-0:1d lan8 (uninitialized): PHY [stmmac-0:1d:04] driver [Generic PHY] (irq=POLL)
[   10.848790] DSA: tree 1 setup
[   13.244154] sysrq: Resetting
```





### armbian分区扩容问题

```shell
    # 1. 先备份当前分区表
    sfdisk -d /dev/sda > /root/sda-backup.dump
    
    # 2. 修复 GPT 备份头并将 sda2 扩展到最大
    # 注意：这会将 sda2 的结束扇区设为磁盘末尾
    echo ", +" | sfdisk --no-reread -N 2 /dev/sda
    
    # 3. 通知内核更新分区表
    partprobe /dev/sda
    
    # 4. 如果是 ext4 文件系统，扩展文件系统
    resize2fs /dev/sda2
    # 如果是 xfs，则使用: xfs_growfs /dev/sda2

```



