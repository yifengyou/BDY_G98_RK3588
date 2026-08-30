# fnos

## ophub fnos

### 下载地址

* https://ghpxy.hwinzniej.top/https://github.com/ophub/fnnas/releases/download/fnnas_rockchip_1253/fnnas_rockchip_bdy-g98_k6.18.18_2026.07.23.img.gz
* https://ghpxy.hwinzniej.top/https://github.com/ophub/fnnas/releases/download/fnnas_rockchip_1253/fnnas_rockchip_bdy-g98_k6.18.18_2026.07.26.img.gz
* https://ghpxy.hwinzniej.top/https://github.com/ophub/fnnas/releases/download/fnnas_rockchip_1253/fnnas_rockchip_bdy-g98_k6.18.18_2026.08.18.img.gz
* https://ghpxy.hwinzniej.top/https://github.com/ophub/fnnas/releases/download/fnnas_rockchip_1253/fnnas_rockchip_bdy-g98_k6.18.18_2026.08.19.img.gz
* https://ghpxy.hwinzniej.top/https://github.com/ophub/fnnas/releases/download/fnnas_rockchip_1253/fnnas_rockchip_bdy-g98_k6.18.18_2026.08.20.img.gz

### fnnas_rockchip_bdy-g98_k6.18.18_2026.07.23.img.gz

### fnnas_rockchip_bdy-g98_k6.18.18_2026.07.26.img.gz

### fnnas_rockchip_bdy-g98_k6.18.18_2026.08.18.img.gz

### fnnas_rockchip_bdy-g98_k6.18.18_2026.08.19.img.gz

### fnnas_rockchip_bdy-g98_k6.18.18_2026.08.20.img.gz

测试描述：
1. 能正常引导，自动获取ip正常
2. 其他待测试

#### 引导日志

```shell
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
3406 bytes read in 24 ms (137.7 KiB/s)
## Executing script at 00500000
Ignoring attempt to modify 'load_addr'
Boot script loaded from scsi 0
407 bytes read in 13 ms (30.3 KiB/s)
19195614 bytes read in 377 ms (48.6 MiB/s)
32926208 bytes read in 597 ms (52.6 MiB/s)
215113 bytes read in 692 ms (302.7 KiB/s)
** File not found /dtb/rockchip/overlay/rk3588-fixup.scr **
Fdt Ramdisk skip relocation
No misc partition
## Loading init Ramdisk from Legacy Image at 0a200000 ...
   Image Name:   uInitrd
   Image Type:   AArch64 Linux RAMDisk Image (uncompressed)
   Data Size:    19195550 Bytes = 18.3 MiB
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
Total: 5779.531/5854.897 ms

Starting kernel ...

[    0.000000] Booting Linux on physical CPU 0x0000000000 [0x412fd050]
[    0.000000] Linux version 6.18.18-trim (devops@fnnas.com) (aarch64-linux-gnu-gcc (Debian 12.2.0-14) 12.2.0, GNU ld (GNU Binutils for Debian) 2.40) #491 SMP PREEMPT Fri Apr 17 03:28:48 UTC 2026
[    0.000000] KASLR disabled due to lack of seed
[    0.000000] random: crng init done
[    0.000000] Machine model: BDY G98
[    0.000000] earlycon: uart0 at MMIO32 0x00000000feb50000 (options '1500000n8')
[    0.000000] printk: legacy bootconsole [uart0] enabled
[    0.000000] efi: UEFI not found.
[    0.000000] OF: reserved mem: 0x000000000010f000..0x000000000010f0ff (0 KiB) nomap non-reusable shmem@10f000
[    0.000000] OF: reserved mem: 0x0000000000118000..0x00000000001effff (864 KiB) map non-reusable ramoops@118000
[    0.000000] NUMA: Faking a node at [mem 0x0000000000200000-0x00000004ffffffff]
[    0.000000] NODE_DATA(0) allocated [mem 0x4fdef37c0-0x4fdef5f7f]
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
[    0.000000] cma: Reserved 128 MiB at 0x00000000e8000000
[    0.000000] psci: probing for conduit method from DT.
[    0.000000] psci: PSCIv1.1 detected in firmware.
[    0.000000] psci: Using standard PSCI v0.2 function IDs
[    0.000000] psci: Trusted OS migration not required
[    0.000000] psci: SMC Calling Convention v1.2
[    0.000000] percpu: Embedded 34 pages/cpu s99992 r8192 d31080 u139264
[    0.000000] Detected VIPT I-cache on CPU0
[    0.000000] CPU features: detected: GICv3 CPU interface
[    0.000000] CPU features: detected: Virtualization Host Extensions
[    0.000000] CPU features: detected: Qualcomm erratum 1009, or ARM erratum 1286807, 2441009
[    0.000000] CPU features: detected: ARM errata 1165522, 1319367, or 1530923
[    0.000000] alternatives: applying boot alternatives
[    0.000000] Kernel command line: root=UUID=78701106-e625-4020-b2b8-fcbbb690d5e3 rootwait rootfstype=btrfs rootflags=compress=zstd:1 bootsplash.bootfile=bootsplash.armbian earlycon console=ttyS2,1500000 console=ttyFIQ0 console=tty1 consoleblank=0 loglevel=7 ubootpart=b62ae0e3-490e-4cd7-8b0d-a69dc829dcd0 usb-storage.quirks=0x2537:0x1066:u,0x2537:0x1068:u rw rootwait net.ifnames=0 max_loop=128 cgroup_enable=cpuset cgroup_memory=1 cgroup_enable=memory swapaccount=1 androidboot.fwver=ddr-v1.21-cb12b99cc23,spl-v1.14,bl31-v1.54,bl32-v1.20,uboot-gc09af4f87-08/29/2026
[    0.000000] Unknown kernel command line parameters "ubootpart=b62ae0e3-490e-4cd7-8b0d-a69dc829dcd0 cgroup_enable=memory cgroup_memory=1", will be passed to user space.
[    0.000000] printk: log buffer data + meta data: 262144 + 917504 = 1179648 bytes
[    0.000000] Dentry cache hash table entries: 2097152 (order: 12, 16777216 bytes, linear)
[    0.000000] Inode-cache hash table entries: 1048576 (order: 11, 8388608 bytes, linear)
[    0.000000] software IO TLB: area num 8.
[    0.000000] software IO TLB: mapped [mem 0x00000000e4000000-0x00000000e8000000] (64MB)
[    0.000000] Fallback order for Node 0: 0 
[    0.000000] Built 1 zonelists, mobility grouping on.  Total pages: 4188160
[    0.000000] Policy zone: Normal
[    0.000000] mem auto-init: stack:all(zero), heap alloc:on, heap free:off
[    0.000000] SLUB: HWalign=64, Order=0-3, MinObjects=0, CPUs=8, Nodes=1
[    0.000000] rcu: Preemptible hierarchical RCU implementation.
[    0.000000] rcu: 	RCU event tracing is enabled.
[    0.000000] rcu: 	RCU restricting CPUs from NR_CPUS=256 to nr_cpu_ids=8.
[    0.000000] 	Trampoline variant of Tasks RCU enabled.
[    0.000000] 	Tracing variant of Tasks RCU enabled.
[    0.000000] rcu: RCU calculated value of scheduler-enlistment delay is 25 jiffies.
[    0.000000] rcu: Adjusting geometry for rcu_fanout_leaf=16, nr_cpu_ids=8
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
[    0.000000] ITS@0x00000000fe640000: allocated 8192 Devices @100450000 (indirect, esz 8, psz 64K, shr 0)
[    0.000000] ITS@0x00000000fe640000: allocated 32768 Interrupt Collections @100460000 (flat, esz 2, psz 64K, shr 0)
[    0.000000] ITS: using cache flushing for cmd queue
[    0.000000] ITS [mem 0xfe660000-0xfe67ffff]
[    0.000000] GIC: enabling workaround for ITS: Rockchip erratum RK3588001
[    0.000000] GIC: enabling workaround for ITS: non-coherent attribute
[    0.000000] ITS@0x00000000fe660000: allocated 8192 Devices @100480000 (indirect, esz 8, psz 64K, shr 0)
[    0.000000] ITS@0x00000000fe660000: allocated 32768 Interrupt Collections @100490000 (flat, esz 2, psz 64K, shr 0)
[    0.000000] ITS: using cache flushing for cmd queue
[    0.000000] GICv3: using LPI property table @0x00000001004a0000
[    0.000000] GIC: using cache flushing for LPI property table
[    0.000000] GICv3: CPU0: using allocated LPI pending table @0x00000001004b0000
[    0.000000] GICv3: GIC: PPI partition interrupt-partition-0[0] { /cpus/cpu@0[0] /cpus/cpu@100[1] /cpus/cpu@200[2] /cpus/cpu@300[3] }
[    0.000000] GICv3: GIC: PPI partition interrupt-partition-1[1] { /cpus/cpu@400[4] /cpus/cpu@500[5] /cpus/cpu@600[6] /cpus/cpu@700[7] }
[    0.000000] rcu: srcu_init: Setting srcu_struct sizes based on contention.
[    0.000000] arch_timer: cp15 timer running at 24.00MHz (phys).
[    0.000000] clocksource: arch_sys_counter: mask: 0xffffffffffffff max_cycles: 0x588fe9dc0, max_idle_ns: 440795202592 ns
[    0.000000] sched_clock: 56 bits at 24MHz, resolution 41ns, wraps every 4398046511097ns
[    0.001825] Console: colour dummy device 80x25
[    0.002237] printk: legacy console [tty1] enabled
[    0.002698] printk: legacy bootconsole [uart0] disabled
ISr1ig/c  in b
              ISr ig/c  in b
                            ISr3igTc sinwb
                                          ISa tiISr ttmrt
                                                         ISa tiISr ttmrt
                                                                        ISaUtiISr ttmrt
                                                                                       ISa tiISa t rro
                                                                                                      [    0.000000] Booting Linux on physical CPU 0x0000000000 [0x412fd050]
[    0.000000] Linux version 6.18.18-trim (devops@fnnas.com) (aarch64-linux-gnu-gcc (Debian 12.2.0-14) 12.2.0, GNU ld (GNU Binutils for Debian) 2.40) #491 SMP PREEMPT Fri Apr 17 03:28:48 UTC 2026
[    0.000000] KASLR disabled due to lack of seed
[    0.000000] random: crng init done
[    0.000000] Machine model: BDY G98
[    0.000000] earlycon: uart0 at MMIO32 0x00000000feb50000 (options '1500000n8')
[    0.000000] printk: legacy bootconsole [uart0] enabled
[    0.000000] efi: UEFI not found.
[    0.000000] OF: reserved mem: 0x000000000010f000..0x000000000010f0ff (0 KiB) nomap non-reusable shmem@10f000
[    0.000000] OF: reserved mem: 0x0000000000118000..0x00000000001effff (864 KiB) map non-reusable ramoops@118000
[    0.000000] NUMA: Faking a node at [mem 0x0000000000200000-0x00000004ffffffff]
[    0.000000] NODE_DATA(0) allocated [mem 0x4fdef37c0-0x4fdef5f7f]
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
[    0.000000] cma: Reserved 128 MiB at 0x00000000e8000000
[    0.000000] psci: probing for conduit method from DT.
[    0.000000] psci: PSCIv1.1 detected in firmware.
[    0.000000] psci: Using standard PSCI v0.2 function IDs
[    0.000000] psci: Trusted OS migration not required
[    0.000000] psci: SMC Calling Convention v1.2
[    0.000000] percpu: Embedded 34 pages/cpu s99992 r8192 d31080 u139264
[    0.000000] Detected VIPT I-cache on CPU0
[    0.000000] CPU features: detected: GICv3 CPU interface
[    0.000000] CPU features: detected: Virtualization Host Extensions
[    0.000000] CPU features: detected: Qualcomm erratum 1009, or ARM erratum 1286807, 2441009
[    0.000000] CPU features: detected: ARM errata 1165522, 1319367, or 1530923
[    0.000000] alternatives: applying boot alternatives
[    0.000000] Kernel command line: root=UUID=78701106-e625-4020-b2b8-fcbbb690d5e3 rootwait rootfstype=btrfs rootflags=compress=zstd:1 bootsplash.bootfile=bootsplash.armbian earlycon console=ttyS2,1500000 console=ttyFIQ0 console=tty1 consoleblank=0 loglevel=7 ubootpart=b62ae0e3-490e-4cd7-8b0d-a69dc829dcd0 usb-storage.quirks=0x2537:0x1066:u,0x2537:0x1068:u rw rootwait net.ifnames=0 max_loop=128 cgroup_enable=cpuset cgroup_memory=1 cgroup_enable=memory swapaccount=1 androidboot.fwver=ddr-v1.21-cb12b99cc23,spl-v1.14,bl31-v1.54,bl32-v1.20,uboot-gc09af4f87-08/29/2026
[    0.000000] Unknown kernel command line parameters "ubootpart=b62ae0e3-490e-4cd7-8b0d-a69dc829dcd0 cgroup_enable=memory cgroup_memory=1", will be passed to user space.
[    0.000000] printk: log buffer data + meta data: 262144 + 917504 = 1179648 bytes
[    0.000000] Dentry cache hash table entries: 2097152 (order: 12, 16777216 bytes, linear)
[    0.000000] Inode-cache hash table entries: 1048576 (order: 11, 8388608 bytes, linear)
[    0.000000] software IO TLB: area num 8.
[    0.000000] software IO TLB: mapped [mem 0x00000000e4000000-0x00000000e8000000] (64MB)
[    0.000000] Fallback order for Node 0: 0 
[    0.000000] Built 1 zonelists, mobility grouping on.  Total pages: 4188160
[    0.000000] Policy zone: Normal
[    0.000000] mem auto-init: stack:all(zero), heap alloc:on, heap free:off
[    0.000000] SLUB: HWalign=64, Order=0-3, MinObjects=0, CPUs=8, Nodes=1
[    0.000000] rcu: Preemptible hierarchical RCU implementation.
[    0.000000] rcu: 	RCU event tracing is enabled.
[    0.000000] rcu: 	RCU restricting CPUs from NR_CPUS=256 to nr_cpu_ids=8.
[    0.000000] 	Trampoline variant of Tasks RCU enabled.
[    0.000000] 	Tracing variant of Tasks RCU enabled.
[    0.000000] rcu: RCU calculated value of scheduler-enlistment delay is 25 jiffies.
[    0.000000] rcu: Adjusting geometry for rcu_fanout_leaf=16, nr_cpu_ids=8
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
[    0.000000] ITS@0x00000000fe640000: allocated 8192 Devices @100450000 (indirect, esz 8, psz 64K, shr 0)
[    0.000000] ITS@0x00000000fe640000: allocated 32768 Interrupt Collections @100460000 (flat, esz 2, psz 64K, shr 0)
[    0.000000] ITS: using cache flushing for cmd queue
[    0.000000] ITS [mem 0xfe660000-0xfe67ffff]
[    0.000000] GIC: enabling workaround for ITS: Rockchip erratum RK3588001
[    0.000000] GIC: enabling workaround for ITS: non-coherent attribute
[    0.000000] ITS@0x00000000fe660000: allocated 8192 Devices @100480000 (indirect, esz 8, psz 64K, shr 0)
[    0.000000] ITS@0x00000000fe660000: allocated 32768 Interrupt Collections @100490000 (flat, esz 2, psz 64K, shr 0)
[    0.000000] ITS: using cache flushing for cmd queue
[    0.000000] GICv3: using LPI property table @0x00000001004a0000
[    0.000000] GIC: using cache flushing for LPI property table
[    0.000000] GICv3: CPU0: using allocated LPI pending table @0x00000001004b0000
[    0.000000] GICv3: GIC: PPI partition interrupt-partition-0[0] { /cpus/cpu@0[0] /cpus/cpu@100[1] /cpus/cpu@200[2] /cpus/cpu@300[3] }
[    0.000000] GICv3: GIC: PPI partition interrupt-partition-1[1] { /cpus/cpu@400[4] /cpus/cpu@500[5] /cpus/cpu@600[6] /cpus/cpu@700[7] }
[    0.000000] rcu: srcu_init: Setting srcu_struct sizes based on contention.
[    0.000000] arch_timer: cp15 timer running at 24.00MHz (phys).
[    0.000000] clocksource: arch_sys_counter: mask: 0xffffffffffffff max_cycles: 0x588fe9dc0, max_idle_ns: 440795202592 ns
[    0.000000] sched_clock: 56 bits at 24MHz, resolution 41ns, wraps every 4398046511097ns
[    0.001825] Console: colour dummy device 80x25
[    0.002237] printk: legacy console [tty1] enabled
[    0.002698] printk: legacy bootconsole [uart0] disabled
[    0.003277] Calibrating delay loop (skipped), value calculated using timer frequency.. 48.00 BogoMIPS (lpj=96000)
[    0.003302] pid_max: default: 32768 minimum: 301
[    0.003408] LSM: initializing lsm=capability,yama,apparmor
[    0.003474] Yama: becoming mindful.
[    0.003700] AppArmor: AppArmor initialized
[    0.003798] Mount-cache hash table entries: 32768 (order: 6, 262144 bytes, linear)
[    0.003844] Mountpoint-cache hash table entries: 32768 (order: 6, 262144 bytes, linear)
[    0.006228] rcu: Hierarchical SRCU implementation.
[    0.006244] rcu: 	Max phase no-delay instances is 1000.
[    0.006468] Timer migration: 1 hierarchy levels; 8 children per group; 1 crossnode level
[    0.007277] EFI services will not be available.
[    0.007578] smp: Bringing up secondary CPUs ...
[    0.008228] Detected VIPT I-cache on CPU1
[    0.008428] GICv3: CPU1: found redistributor 100 region 0:0x00000000fe6a0000
[    0.008442] GICv3: CPU1: using allocated LPI pending table @0x00000001004c0000
[    0.008484] CPU1: Booted secondary processor 0x0000000100 [0x412fd050]
[    0.009189] Detected VIPT I-cache on CPU2
[    0.009380] GICv3: CPU2: found redistributor 200 region 0:0x00000000fe6c0000
[    0.009392] GICv3: CPU2: using allocated LPI pending table @0x00000001004d0000
[    0.009428] CPU2: Booted secondary processor 0x0000000200 [0x412fd050]
[    0.010095] Detected VIPT I-cache on CPU3
[    0.010285] GICv3: CPU3: found redistributor 300 region 0:0x00000000fe6e0000
[    0.010297] GICv3: CPU3: using allocated LPI pending table @0x00000001004e0000
[    0.010331] CPU3: Booted secondary processor 0x0000000300 [0x412fd050]
[    0.011052] CPU features: detected: Spectre-v4
[    0.011057] CPU features: detected: Spectre-BHB
[    0.011062] CPU features: detected: SSBS not fully self-synchronizing
[    0.011065] Detected PIPT I-cache on CPU4
[    0.011172] GICv3: CPU4: found redistributor 400 region 0:0x00000000fe700000
[    0.011180] GICv3: CPU4: using allocated LPI pending table @0x00000001004f0000
[    0.011204] CPU4: Booted secondary processor 0x0000000400 [0x414fd0b0]
[    0.011842] Detected PIPT I-cache on CPU5
[    0.011955] GICv3: CPU5: found redistributor 500 region 0:0x00000000fe720000
[    0.011963] GICv3: CPU5: using allocated LPI pending table @0x0000000100500000
[    0.011988] CPU5: Booted secondary processor 0x0000000500 [0x414fd0b0]
[    0.012623] Detected PIPT I-cache on CPU6
[    0.012738] GICv3: CPU6: found redistributor 600 region 0:0x00000000fe740000
[    0.012746] GICv3: CPU6: using allocated LPI pending table @0x0000000100510000
[    0.012770] CPU6: Booted secondary processor 0x0000000600 [0x414fd0b0]
[    0.013567] Detected PIPT I-cache on CPU7
[    0.013681] GICv3: CPU7: found redistributor 700 region 0:0x00000000fe760000
[    0.013690] GICv3: CPU7: using allocated LPI pending table @0x0000000100520000
[    0.013714] CPU7: Booted secondary processor 0x0000000700 [0x414fd0b0]
[    0.013793] smp: Brought up 1 node, 8 CPUs
[    0.014057] SMP: Total of 8 processors activated.
[    0.014069] CPU: All CPU(s) started at EL2
[    0.014081] CPU features: detected: 32-bit EL0 Support
[    0.014093] CPU features: detected: Data cache clean to the PoU not required for I/D coherence
[    0.014109] CPU features: detected: Common not Private translations
[    0.014122] CPU features: detected: CRC32 instructions
[    0.014137] CPU features: detected: RCpc load-acquire (LDAPR)
[    0.014150] CPU features: detected: LSE atomic instructions
[    0.014162] CPU features: detected: Privileged Access Never
[    0.014173] CPU features: detected: PMUv3
[    0.014184] CPU features: detected: RAS Extension Support
[    0.014200] CPU features: detected: Speculative Store Bypassing Safe (SSBS)
[    0.014272] alternatives: applying system-wide alternatives
[    0.017598] CPU features: detected: Hardware dirty bit management on CPU4-7
[    0.018015] Memory: 16172388K/16752640K available (17792K kernel code, 2970K rwdata, 5636K rodata, 5568K init, 714K bss, 439976K reserved, 131072K cma-reserved)
[    0.021388] [trim-mounts-hash]'/'[(____ptrval____)]'s top mountpoint dentry: /
[    0.021412] [trim-mounts-hash]dentry '/' type: 0
[    0.021447] devtmpfs: initialized
[    0.033827] clocksource: jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 7645041785100000 ns
[    0.033853] posixtimers hash table entries: 4096 (order: 4, 65536 bytes, linear)
[    0.033894] futex hash table entries: 2048 (131072 bytes on 1 NUMA nodes, total 128 KiB, linear).
[    0.034468] 24528 pages in range for non-PLT usage
[    0.034471] 516048 pages in range for PLT usage
[    0.034607] pinctrl core: initialized pinctrl subsystem
[    0.034865] DMI not present or invalid.
[    0.036690] NET: Registered PF_NETLINK/PF_ROUTE protocol family
[    0.037446] DMA: preallocated 2048 KiB GFP_KERNEL pool for atomic allocations
[    0.037750] DMA: preallocated 2048 KiB GFP_KERNEL|GFP_DMA pool for atomic allocations
[    0.038024] DMA: preallocated 2048 KiB GFP_KERNEL|GFP_DMA32 pool for atomic allocations
[    0.038054] audit: initializing netlink subsys (disabled)
[    0.038154] audit: type=2000 audit(0.036:1): state=initialized audit_enabled=0 res=1
[    0.039818] thermal_sys: Registered thermal governor 'step_wise'
[    0.039849] cpuidle: using governor menu
[    0.040022] hw-breakpoint: found 6 breakpoint and 4 watchpoint registers.
[    0.040140] ASID allocator initialised with 65536 entries
[    0.040232] Serial: AMBA PL011 UART driver
[    0.051496] /vop@fdd90000: Fixed dependency cycle(s) with /hdmi@fde80000
[    0.051536] /hdmi@fde80000: Fixed dependency cycle(s) with /vop@fdd90000
[    0.054194] /pcie@fe180000: Fixed dependency cycle(s) with /pcie@fe180000/legacy-interrupt-controller
[    0.064689] gpio gpiochip0: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.065029] rockchip-gpio fd8a0000.gpio: probed /pinctrl/gpio@fd8a0000
[    0.065182] gpio gpiochip1: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.065322] rockchip-gpio fec20000.gpio: probed /pinctrl/gpio@fec20000
[    0.065454] gpio gpiochip2: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.065577] rockchip-gpio fec30000.gpio: probed /pinctrl/gpio@fec30000
[    0.065719] gpio gpiochip3: Static allocaec40000
[    0.066046] gpio gpiochip4: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.066169] rockchip-gpio fec50000.gpio: probed /pinctrl/gpio@fec50000
[    0.067600] /pcie@fe150000: Fixed dependency cycle(s) with /pcie@fe150000/legacy-interrupt-controller
[    0.067950] /pcie@fe160000: Fixed dependency cycle(s) with /pcie@fe160000/legacy-interrupt-controller
[    0.068348] /pcie@fe170000: Fixed dependency cycle(s) with /pcie@fe170000/legacy-interrupt-controller
[    0.072778] /hdmi@fde80000: Fixed dependency cycle(s) with /hdmi0-con
[    0.072809] /hdmi0-con: Fixed dependency cycle(s) with /hdmi@fde80000
[    0.073525] HugeTLB: registered 1.00 GiB page size, pre-allocated 0 pages
[    0.073534] HugeTLB: 0 KiB vmemmap can be freed for a 1.00 GiB page
[    0.073542] HugeTLB: registered 32.0 MiB page size, pre-allocated 0 pages
[    0.073547] HugeTLB: 0 KiB vmemmap can be freed for a 32.0 MiB page
[    0.073553] HugeTLB: registered 2.00 MiB page size, pre-allocated 0 pages
[    0.073559] HugeTLB: 0 KiB vmemmap can be freed for a 2.00 MiB page
[    0.073565] HugeTLB: registered 64.0 KiB page size, pre-allocated 0 pages
[    0.073570] HugeTLB: 0 KiB vmemmap can be freed for a 64.0 KiB page
[    0.141768] raid6: neonx8   gen()  5132 MB/s
[    0.209853] raid6: neonx4   gen()  5089 MB/s
[    0.277939] raid6: neonx2   gen()  4299 MB/s
[    0.345996] raid6: neonx1   gen()  3414 MB/s
[    0.414068] raid6: int64x8  gen()  2268 MB/s
[    0.482140] raid6: int64x4  gen()  2386 MB/s
[    0.550215] raid6: int64x2  gen()  1985 MB/s
[    0.618281] raid6: int64x1  gen()  1637 MB/s
[    0.618285] raid6: using algorithm neonx8 gen() 5132 MB/s
[    0.686344] raid6: .... xor() 3879 MB/s, rmw enabled
[    0.686350] raid6: using neon recovery algorithm
[    0.686900] iommu: Default domain type: Translated
[    0.686908] iommu: DMA domain TLB invalidation policy: strict mode
[    0.687335] SCSI subsystem initialized
[    0.687526] usbcore: registered new interface driver usbfs
[    0.687545] usbcore: registered new interface driver hub
[    0.687560] usbcore: registered new device driver usb
[    0.687787] pps_core: LinuxPPS API ver. 1 registered
[    0.687794] pps_core: Software ver. 5.3.6 - Copyright 2005-2007 Rodolfo Giometti <giometti@linux.it>
[    0.687809] PTP clock support registered
[    0.687826] EDAC MC: Ver: 3.0.0
[    0.687974] scmi_core: SCMI protocol bus registered
[    0.688505] NetLabel: Initializing
[    0.688512] NetLabel:  domain hash size = 128
[    0.688517] NetLabel:  protocols = UNLABELED CIPSOv4 CALIPSO
[    0.688549] NetLabel:  unlabeled traffic allowed by default
[    0.688643] vgaarb: loaded
[    0.688979] clocksource: Switched to clocksource arch_sys_counter
[    0.689168] VFS: Disk quotas dquot_6.6.0
[    0.689186] VFS: Dquot-cache hash table entries: 512 (order 0, 4096 bytes)
[    0.689501] AppArmor: AppArmor Filesystem Enabled
[    0.693892] NET: Registered PF_INET protocol family
[    0.694112] IP idents hash table entries: 262144 (order: 9, 2097152 bytes, linear)
[    0.701080] tcp_listen_portaddr_hash hash table entries: 8192 (order: 5, 131072 bytes, linear)
[    0.701236] Table-perturb hash table entries: 65536 (order: 6, 262144 bytes, linear)
[    0.701323] TCP established hash table entries: 131072 (order: 8, 1048576 bytes, linear)
[    0.702285] TCP bind hash table entries: 65536 (order: 9, 2097152 bytes, linear)
[    0.703873] TCP: Hash tables configured (established 131072 bind 65536)
[    0.703953] UDP hash table entries: 8192 (order: 7, 524288 bytes, linear)
[    0.704496] UDP-Lite hash table entries: 8192 (order: 7, 524288 bytes, linear)
[    0.705072] NET: Registered PF_UNIX/PF_LOCAL protocol family
[    0.705095] NET: Registered PF_XDP protocol family
[    0.705106] PCI: CLS 0 bytes, default 64
[    0.705302] Trying to unpack rootfs image as initramfs...
[    0.710580] kvm [1]: nv: 568 coarse grained trap handlers
[    0.710794] kvm [1]: IPA Size Limit: 40 bits
[    0.710817] kvm [1]: GICv3: no GICV resource entry
[    0.710824] kvm [1]: disabling GICv2 emulation
[    0.710848] kvm [1]: GIC system register CPU interface enabled
[    0.710868] kvm [1]: vgic interrupt IRQ18
[    0.710894] kvm [1]: VHE mode initialized successfully
[    0.711805] Initialise system trusted keyrings
[    0.711830] Key type blacklist registered
[    0.711951] workingset: timestamp_bits=44 max_order=22 bucket_order=0
[    0.712240] squashfs: version 4.0 (2009/01/31) Phillip Lougher
[    0.712450] fuse: init (API version 7.45)
[    0.713169] trim_trashbin_init
[    0.713178] trim-trashbin driver major=244,minor=0
[    0.713385] integrity: Platform Keyring initialized
[    0.713553] cryptd: max_cpu_qlen set to 1000
[    0.749255] xor: measuring software checksum speed
[    0.749782]    8regs           :  6305 MB/sec
[    0.750314]    32regs          :  6238 MB/sec
[    0.750695]    arm64_neon      :  8740 MB/sec
[    0.750700] xor: using function: arm64_neon (8740 MB/sec)
[    0.750709] Key type asymmetric registered
[    0.750715] Asymmetric key parser 'x509' registered
[    0.750758] Block layer SCSI generic (bsg) driver version 0.4 loaded (major 243)
[    0.750886] io scheduler mq-deadline registered
[    0.750897] io scheduler kyber registered
[    0.750925] io scheduler bfq registered
[    1.117983] Freeing initrd memory: 18740K
[    1.121113] ledtrig-cpu: registered to indicate activity on CPUs
[    1.123572] dma-pl330 fea10000.dma-controller: Loaded driver for PL330 DMAC-241330
[    1.123585] dma-pl330 fea10000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    1.124281] dma-pl330 fea30000.dma-controller: Loaded driver for PL330 DMAC-241330
[    1.124291] dma-pl330 fea30000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    1.125120] dma-pl330 fed10000.dma-controller: Loaded driver for PL330 DMAC-241330
[    1.125130] dma-pl330 fed10000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    1.126557] Serial: 8250/16550 driver, 12 ports, IRQ sharing disabled
[    1.128487] printk: legacy console [ttyS2] disabled
[    1.128631] feb50000.serial: ttyS2 at MMIO 0xfeb50000 (irq = 41, base_baud = 1500000) is a 16550A
[    1.128673] printk: legacy console [ttyS2] enabled
[    1.283804] Serial: AMBA driver
[    1.284477] arm-smmu-v3 fc900000.iommu: ias 48-bit, oas 48-bit (features 0x001c1eaf)
[    1.285764] arm-smmu-v3 fc900000.iommu: allocated 65536 entries for cmdq
[    1.286648] arm-smmu-v3 fc900000.iommu: allocated 32768 entries for evtq
[    1.287666] arm-smmu-v3 fc900000.iommu: msi_domain absent - falling back to wired irqs
[    1.289405] rockchip-pm-domain fd8d8000.power-management:power-controller: supply domain not found, using dummy regulator
[    1.290781] platform fdab0000.npu: Adding to iommu group 0
[    1.292286] platform fdac0000.npu: Adding to iommu group 1
[    1.293804] platform fdad0000.npu: Adding to iommu group 2
[    1.295205] platform fdb50000.video-codec: Adding to iommu group 3
[    1.296042] platform fdb50400.vdpu: Adding to iommu group 3
[    1.297172] platform fdb60000.rga: Adding to iommu group 4
[    1.298504] platform fdb70000.rga: Adding to iommu group 5
[    1.299781] platform fdba0000.video-codec: Adding to iommu group 6
[    1.300608] platform fdba0000.jpege-core: Adding to iommu group 6
[    1.301680] platform fdba4000.video-codec: Adding to iommu group 7
[    1.302502] platform fdba4000.jpege-core: Adding to iommu group 7
[    1.303553] platform fdba8000.video-codec: Adding to iommu group 8
[    1.304368] platform fdba8000.jpege-core: Adding to iommu group 8
[    1.305450] platform fdbac000.video-codec: Adding to iommu group 9
[    1.306268] platform fdbac000.jpege-core: Adding to iommu group 9
[    1.307395] platform fdc38000.video-codec: Adding to iommu group 10
[    1.308231] platform fdc38100.rkvdec-core: Adding to iommu group 10
[    1.309493] platform fdc40000.video-codec: Adding to iommu group 11
[    1.310523] rk_iommu fdca0000.iommu: av1d iommu enabled
[    1.311466] platform fdc70000.av1d: Adding to iommu group 12
[    1.312291] platform fdd90000.vop: Adding to iommu group 13
[    1.313942] platform fdb90000.jpegd: Adding to iommu group 14
[    1.315243] platform fdbd0000.rkvenc-core: Adding to iommu group 15
[    1.316662] platform fdbe0000.rkvenc-core: Adding to iommu group 16
[    1.318116] platform fdc48100.rkvdec-core: Adding to iommu group 17
[    1.358051] loop: module loaded
[    1.358373] er_netlink: netlink socket created (protocol 31)
[    1.358874] Initialized event reporting module
[    1.359467] system_heap: orders[0] = 6
[    1.359799] system_heap: orders[1] = 4
[    1.360128] system_heap: orders[2] = 0
[    1.361085] Key type psk registered
[    1.362148] ahci-dwc fe210000.sata: supply ahci not found, using dummy regulator
[    1.362847] ahci-dwc fe210000.sata: supply phy not found, using dummy regulator
[    1.363656] platform fe210000.sata:sata-port@0: supply target not found, using dummy regulator
[    1.364501] ahci-dwc fe210000.sata: PMPn is limited up to 5 ports
[    1.365092] ahci-dwc fe210000.sata: masking port_map 0x1 -> 0x1
[    1.365621] ahci-dwc fe210000.sata: SSS flag set, parallel bus scan disabled
[    1.366245] ahci-dwc fe210000.sata: AHCI vers 0001.0300, 32 command slots, 6 Gbps, platform mode
[    1.367015] ahci-dwc fe210000.sata: 1/1 ports implemented (port mask 0x1)
[    1.367609] ahci-dwc fe210000.sata: flags: ncq sntf stag pm led clo only pmp fbs pio slum part ccc apst 
[    1.368849] scsi host0: ahci-dwc
[    1.369231] ata1: SATA max UDMA/133 mmio [mem 0xfe210000-0xfe210fff] port 0x100 irq 64 lpm-pol 0
[    1.371095] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/regulators/dcdc-reg7
[    1.371967] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs3-null-pins
[    1.372768] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs2-null-pins
[    1.373583] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs1-null-pins
[    1.375504] thunder_xcv, ver 1.0
[    1.375806] thunder_bgx, ver 1.0
[    1.376105] nicpf, ver 1.0
[    1.378494] usbcore: registered new interface driver usb-storage
[    1.380276] mousedev: PS/2 mouse device common for all mice
[    1.380931] i2c_dev: i2c /dev entries driver
[    1.385701] sdhci: Secure Digital Host Controller Interface driver
[    1.386248] sdhci: Copyright(c) Pierre Ossman
[    1.386643] Synopsys Designware Multimedia Card Interface Driver
[    1.387721] sdhci-pltfm: SDHCI platform and OF driver helper
[    1.389563] mmc2: CQHCI version 5.10
[    1.389758] arm-scmi arm-scmi.0.auto: Using scmi_smc_transport
[    1.390406] arm-scmi arm-scmi.0.auto: SCMI max-rx-timeout: 30ms / max-msg-size: 104bytes / max-msg: 20
[    1.391287] scmi_protocol scmi_dev.1: Enabled polling mode TX channel - prot_id:16
[    1.392029] arm-scmi arm-scmi.0.auto: SCMI Notifications - Core Enabled.
[    1.392642] arm-scmi arm-scmi.0.auto: SCMI Protocol v2.0 'rockchip:' Firmware version 0x0
[    1.393395] arm-scmi arm-scmi.0.auto: Enabling SCMI Quirk [quirk_clock_rates_triplet_out_of_spec]
[    1.394989] SMCCC: SOC_ID: ARCH_SOC_ID not implemented, skipping ....
[    1.395771] hid: raw HID events driver (C) Jiri Kosina
[    1.396270] usbcore: registered new interface driver usbhid
[    1.396760] usbhid: USB HID core driver
[    1.399406] hw perfevents: enabled with armv8_cortex_a55 PMU driver, 7 (0,8000003f) counters available
[    1.401095] hw perfevents: enabled with armv8_cortex_a76 PMU driver, 7 (0,8000003f) counters available
[    1.403309] NET: Registered PF_INET6 protocol family
[    1.404642] Segment Routing with IPv6
[    1.405002] In-situ OAM (IOAM) with IPv6
[    1.405385] NET: Registered PF_PACKET protocol family
[    1.405845] bridge: filtering via arp/ip/ip6tables is no longer available by default. Update your scripts to load br_netfilter if you need this.
[    1.407249] 8021q: 802.1Q VLAN Support v1.8
[    1.407652] Key type dns_resolver registered
[    1.412006] registered taskstats version 1
[    1.412452] Loading compiled-in X.509 certificates
[    1.418000] zswap: loaded using pool zstd
[    1.418573] Demotion targets for Node 0: null
[    1.419031] Key type .fscrypt registered
[    1.419378] Key type fscrypt-provisioning registered
[    1.420421] Btrfs loaded, zoned=yes, fsverity=yes
[    1.420878] Key type encrypted registered
[    1.421060] mmc2: SDHCI controller on fe2e0000.mmc [fe2e0000.mmc] using ADMA
[    1.421302] AppArmor: AppArmor sha256 policy hashing enabled
[    1.432230] mmc2: Failed to initialize a non-removable card
[    1.453261] rockchip-dw-pcie a40c00000.pcie: host bridge /pcie@fe180000 ranges:
[    1.454443] rockchip-dw-pcie a40c00000.pcie:       IO 0x00f3100000..0x00f31fffff -> 0x00f3100000
[    1.455236] rockchip-dw-pcie a40c00000.pcie:      MEM 0x00f3200000..0x00f3ffffff -> 0x00f3200000
[    1.456023] rockchip-dw-pcie a40c00000.pcie:      MEM 0x09c0000000..0x09ffffffff -> 0x09c0000000
[    1.456970] rockchip-dw-pcie a40c00000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    1.657119] rockchip-dw-pcie a40c00000.pcie: PCIe Gen.2 x1 link up
[    1.658017] rockchip-dw-pcie a40c00000.pcie: PCI host bridge to bus 0003:30
[    1.658647] pci_bus 0003:30: root bus resource [bus 30-3f]
[    1.659144] pci_bus 0003:30: root bus resource [io  0x0000-0xfffff] (bus address [0xf3100000-0xf31fffff])
[    1.659994] pci_bus 0003:30: root bus resource [mem 0xf3200000-0xf3ffffff]
[    1.660609] pci_bus 0003:30: root bus resource [mem 0x9c0000000-0x9ffffffff]
[    1.661394] pci 0003:30:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    1.662064] pci 0003:30:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    1.662620] pci 0003:30:00.0: PCI bridge to [bus 01-ff]
[    1.663093] pci 0003:30:00.0:   bridge window [io  0x0000-0x0fff]
[    1.663640] pci 0003:30:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    1.664250] pci 0003:30:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    1.665049] pci 0003:30:00.0: supports D1 D2
[    1.665438] pci 0003:30:00.0: PME# supported from D0 D1 D3hot
[    1.666506] pci 0003:30:00.0: Adding to iommu group 18
[    1.675946] pci 0003:30:00.0: Primary bus is hard wired to 0
[    1.676458] pci 0003:30:00.0: bridge configuration invalid ([bus 01-ff]), reconfiguring
[    1.677415] pci 0003:31:00.0: [10ec:8125] type 00 class 0x020000 PCIe Endpoint
[    1.678217] pci 0003:31:00.0: BAR 0: initial BAR value 0x00000000 invalid
[    1.678823] pci 0003:31:00.0: BAR 0 [io  size 0x0100]
[    1.679292] pci 0003:31:00.0: BAR 2 [mem 0x00000000-0x0000ffff 64bit]
[    1.679877] pci 0003:31:00.0: BAR 4 [mem 0x00000000-0x00003fff 64bit]
[    1.680823] pci 0003:31:00.0: supports D1 D2
[    1.681228] pci 0003:31:00.0: PME# supported from D0 D1 D2 D3hot D3cold
[    1.682467] pci 0003:31:00.0: Adding to iommu group 18
[    1.689099] pci 0003:31:00.0: ASPM: default states L0s L1
[    1.689626] pci_bus 0003:31: busn_res: [bus 31-3f] end is updated to 31
[    1.690240] pci 0003:30:00.0: bridge window [mem 0xf3200000-0xf32fffff]: assigned
[    1.690913] pci 0003:30:00.0: ROM [mem 0xf3300000-0xf330ffff pref]: assigned
[    1.691545] pci 0003:30:00.0: bridge window [io  0x1000-0x1fff]: assigned
[    1.692156] pci 0003:31:00.0: BAR 2 [mem 0xf3200000-0xf320ffff 64bit]: assigned
[    1.692842] pci 0003:31:00.0: BAR 4 [mem 0xf3210000-0xf3213fff 64bit]: assigned
[    1.693541] pci 0003:31:00.0: BAR 0 [io  0x1000-0x10ff]: assigned
[    1.694099] pci 0003:30:00.0: PCI bridge to [bus 31]
[    1.694548] pci 0003:30:00.0:   bridge window [io  0x1000-0x1fff]
[    1.695096] pci 0003:30:00.0:   bridge window [mem 0xf3200000-0xf32fffff]
[    1.695705] pci_bus 0003:30: resource 4 [io  0x0000-0xfffff]
[    1.696214] pci_bus 0003:30: resource 5 [mem 0xf3200000-0xf3ffffff]
[    1.696774] pci_bus 0003:30: resource 6 [mem 0x9c0000000-0x9ffffffff]
[    1.697361] pci_bus 0003:31: resource 0 [io  0x1000-0x1fff]
[    1.697863] pci_bus 0003:31: resource 1 [mem 0xf3200000-0xf32fffff]
[    1.701273] pcieport 0003:30:00.0: PME: Signaling with IRQ 86
[    1.702304] pcieport 0003:30:00.0: AER: enabled with IRQ 87
[    1.704073] rockchip-dw-pcie a40800000.pcie: host bridge /pcie@fe170000 ranges:
[    1.704748] rockchip-dw-pcie a40800000.pcie:       IO 0x00f2100000..0x00f21fffff -> 0x00f2100000
[    1.705581] rockchip-dw-pcie a40800000.pcie:      MEM 0x00f2200000..0x00f2ffffff -> 0x00f2200000
[    1.706371] rockchip-dw-pcie a40800000.pcie:      MEM 0x0980000000..0x09bfffffff -> 0x0980000000
[    1.707300] rockchip-dw-pcie a40800000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    1.837127] ata1: SATA link up 6.0 Gbps (SStatus 133 SControl 300)
[    1.839431] ata1.00: ATA-9: ADATA SP920SS, 1.08, max UDMA/133
[    1.839955] ata1.00: 250069679 sectors, multi 0: LBA48 NCQ (depth 32)
[    1.841398] ata1.00: Features: HIPM DIPM
[    1.843981] ata1.00: configured for UDMA/133
[    1.844599] scsi 0:0:0:0: Direct-Access     ATA      ADATA SP920SS    1.08 PQ: 0 ANSI: 5
[    1.845943] sd 0:0:0:0: [sda] 250069679 512-byte logical blocks: (128 GB/119 GiB)
[    1.846649] sd 0:0:0:0: [sda] Write Protect is off
[    1.847150] sd 0:0:0:0: [sda] Write cache: enabled, read cache: enabled, doesn't support DPO or FUA
[    1.848056] sd 0:0:0:0: [sda] Preferred minimum I/O size 512 bytes
[    1.880374] GPT:Primary header thinks Alt. header is not at the end of the disk.
[    1.881053] GPT:13664255 != 250069678
[    1.881385] GPT:Alternate GPT header not at the end of the disk.
[    1.881919] GPT:13664255 != 250069678
[    1.882249] GPT: Use GNU Parted to correct GPT errors.
[    1.882721]  sda: sda1 sda2
[    1.883400] sd 0:0:0:0: [sda] Attached SCSI disk
[    1.905182] rockchip-dw-pcie a40800000.pcie: PCIe Gen.2 x1 link up
[    1.905842] rockchip-dw-pcie a40800000.pcie: PCI host bridge to bus 0002:20
[    1.906469] pci_bus 0002:20: root bus resource [bus 20-2f]
[    1.906965] pci_bus 0002:20: root bus resource [io  0x100000-0x1fffff] (bus address [0xf2100000-0xf21fffff])
[    1.907838] pci_bus 0002:20: root bus resource [mem 0xf2200000-0xf2ffffff]
[    1.908453] pci_bus 0002:20: root bus resource [mem 0x980000000-0x9bfffffff]
[    1.909184] pci 0002:20:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    1.909854] pci 0002:20:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    1.910409] pci 0002:20:00.0: PCI bridge to [bus 01-ff]
[    1.910883] pci 0002:20:00.0:   bridge window [io  0x0000-0x0fff]
[    1.911429] pci 0002:20:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    1.912039] pci 0002:20:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    1.912768] pci 0002:20:00.0: supports D1 D2
[    1.913168] pci 0002:20:00.0: PME# supported from D0 D1 D3hot
[    1.914173] pci 0002:20:00.0: Adding to iommu group 19
[    1.923597] pci 0002:20:00.0: Primary bus is hard wired to 0
[    1.924110] pci 0002:20:00.0: bridge configuration invalid ([bus 01-ff]), reconfiguring
[    1.925063] pci 0002:21:00.0: [10ec:8125] type 00 class 0x020000 PCIe Endpoint
[    1.925865] pci 0002:21:00.0: BAR 0 [io  0x0000-0x00ff]
[    1.926349] pci 0002:21:00.0: BAR 2 [mem 0x00000000-0x0000ffff 64bit]
[    1.926934] pci 0002:21:00.0: BAR 4 [mem 0x00000000-0x00003fff 64bit]
[    1.927879] pci 0002:21:00.0: supports D1 D2
[    1.928265] pci 0002:21:00.0: PME# supported from D0 D1 D2 D3hot D3cold
[    1.929549] pci 0002:21:00.0: Adding to iommu group 19
[    1.937037] pci 0002:21:00.0: ASPM: default states L0s L1
[    1.937563] pci_bus 0002:21: busn_res: [bus 21-2f] end is updated to 21
[    1.938176] pci 0002:20:00.0: bridge window [mem 0xf2200000-0xf22fffff]: assigned
[    1.938847] pci 0002:20:00.0: ROM [mem 0xf2300000-0xf230ffff pref]: assigned
[    1.939478] pci 0002:20:00.0: bridge window [io  0x100000-0x100fff]: assigned
[    1.940119] pci 0002:21:00.0: BAR 2 [mem 0xf2200000-0xf220ffff 64bit]: assigned
[    1.940804] pci 0002:21:00.0: BAR 4 [mem 0xf2210000-0xf2213fff 64bit]: assigned
[    1.941508] pci 0002:21:00.0: BAR 0 [io  0x100000-0x1000ff]: assigned
[    1.942098] pci 0002:20:00.0: PCI bridge to [bus 21]
[    1.942546] pci 0002:20:00.0:   bridge window [io  0x100000-0x100fff]
[    1.943124] pci 0002:20:00.0:   bridge window [mem 0xf2200000-0xf22fffff]
[    1.943734] pci_bus 0002:20: resource 4 [io  0x100000-0x1fffff]
[    1.944264] pci_bus 0002:20: resource 5 [mem 0xf2200000-0xf2ffffff]
[    1.944825] pci_bus 0002:20: resource 6 [mem 0x980000000-0x9bfffffff]
[    1.945411] pci_bus 0002:21: resource 0 [io  0x100000-0x100fff]
[    1.945943] pci_bus 0002:21: resource 1 [mem 0xf2200000-0xf22fffff]
[    1.949281] pcieport 0002:20:00.0: PME: Signaling with IRQ 98
[    1.950295] pcieport 0002:20:00.0: AER: enabled with IRQ 99
[    1.964499] avdd_0v75_s0: Bringing 750000uV into 837500-837500uV
[    1.971617] input: rk805 pwrkey as /devices/platform/feb20000.spi/spi_master/spi2/spi2.0/rk805-pwrkey.3.auto/input/input0
[    1.976601] fan53555-regulator 2-0042: FAN53555 Option[10] Rev[1] Detected!
[    1.976611] fan53555-regulator 0-0042: FAN53555 Option[10] Rev[1] Detected!
[    1.976841] clk: Disabling unused clocks
[    1.977072] fan53555-regulator 0-0043: FAN53555 Option[10] Rev[1] Detected!
[    1.977243] ehci-platform fc800000.usb: EHCI Host Controller
[    1.977259] ohci-platform fc840000.usb: Generic Platform OHCI controller
[    1.977265] ehci-platform fc880000.usb: EHCI Host Controller
[    1.977299] ehci-platform fc880000.usb: new USB bus registered, assigned bus number 1
[    1.977299] ehci-platform fc800000.usb: new USB bus registered, assigned bus number 2
[    1.977341] ohci-platform fc8c0000.usb: Generic Platform OHCI controller
[    1.977368] ohci-platform fc8c0000.usb: new USB bus registered, assigned bus number 3
[    1.977393] PM: genpd: Disabling unused power domains
[    1.977413] ehci-platform fc800000.usb: irq 117, io mem 0xfc800000
[    1.977480] ohci-platform fc8c0000.usb: irq 120, io mem 0xfc8c0000
[    1.977890] ohci-platform fc840000.usb: new USB bus registered, assigned bus number 4
[    1.978005] ehci-platform fc880000.usb: irq 118, io mem 0xfc880000
[    1.978293] ohci-platform fc840000.usb: irq 119, io mem 0xfc840000
[    1.989003] ehci-platform fc800000.usb: USB 2.0 started, EHCI 1.00
[    1.989741] usb usb2: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    1.990482] usb usb2: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    1.991128] usb usb2: Product: EHCI Host Controller
[    1.991567] usb usb2: Manufacturer: Linux 6.18.18-trim ehci_hcd
[    1.992096] usb usb2: SerialNumber: fc800000.usb
[    1.992988] hub 2-0:1.0: USB hub found
[    1.993359] hub 2-0:1.0: 1 port detected
[    2.001176] ehci-platform fc880000.usb: USB 2.0 started, EHCI 1.00
[    2.001914] usb usb1: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    2.002656] usb usb1: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    2.003301] usb usb1: Product: EHCI Host Controller
[    2.003740] usb usb1: Manufacturer: Linux 6.18.18-trim ehci_hcd
[    2.004268] usb usb1: SerialNumber: fc880000.usb
[    2.005180] hub 1-0:1.0: USB hub found
[    2.005550] hub 1-0:1.0: 1 port detected
[    2.037261] usb usb3: New USB device found, idVendor=1d6b, idProduct=0001, bcdDevice= 6.18
[    2.037993] usb usb3: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    2.038627] usb usb3: Product: Generic Platform OHCI controller
[    2.039147] usb usb3: Manufacturer: Linux 6.18.18-trim ohci_hcd
[    2.039666] usb usb3: SerialNumber: fc8c0000.usb
[    2.040441] hub 3-0:1.0: USB hub found
[    2.040788] hub 3-0:1.0: 1 port detected
[    2.045207] usb usb4: New USB device found, idVendor=1d6b, idProduct=0001, bcdDevice= 6.18
[    2.045938] usb usb4: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    2.046571] usb usb4: Product: Generic Platform OHCI controller
[    2.047091] usb usb4: Manufacturer: Linux 6.18.18-trim ohci_hcd
[    2.047609] usb usb4: SerialNumber: fc840000.usb
[    2.048374] hub 4-0:1.0: USB hub found
[    2.048722] hub 4-0:1.0: 1 port detected
[    2.050742] Freeing unused kernel memory: 5568K
[    2.051239] Run /init as init process
[    2.066510] [trim-mounts-hash]'sys'[00000000d4194243]'s top mountpoint dentry: sys
[    2.067207] [trim-mounts-hash]dentry 'sys' type: 0
[    2.070084] [trim-mounts-hash]'proc'[00000000c6f3f96a]'s top mountpoint dentry: proc
[    2.070789] [trim-mounts-hash]dentry 'proc' type: 0
[    2.076414] [trim-mounts-hash]'dev'[00000000377c250b]'s top mountpoint dentry: dev
[    2.077120] [trim-mounts-hash]dentry 'dev' type: 0
[    2.091488] [trim-mounts-hash]'pts'[000000009f9c6b1e]'s top mountpoint dentry: dev
[    2.092175] [trim-mounts-hash]dentry 'dev' type: 0
[    2.101210] [trim-mounts-hash]'run'[0000000024a41be6]'s top mountpoint dentry: run
[    2.101898] [trim-mounts-hash]dentry 'run' type: 0
[    2.404300] r8169 0003:31:00.0: enabling device (0000 -> 0003)
[    2.538674] r8169 0003:31:00.0 eth0: RTL8125B, 42:ce:ea:2c:24:70, XID 641, IRQ 122
[    2.539352] r8169 0003:31:00.0 eth0: jumbo features [frames: 16362 bytes, tx checksumming: ko]
[    2.542566] r8169 0002:21:00.0: enabling device (0000 -> 0003)
[    2.572141] rtc-hym8563 6-0051: could not init device, -6
[    2.572842] rockchip-dw-pcie a40000000.pcie: host bridge /pcie@fe150000 ranges:
[    2.573520] rockchip-dw-pcie a40000000.pcie:       IO 0x00f0100000..0x00f01fffff -> 0x00f0100000
[    2.574305] rockchip-dw-pcie a40000000.pcie:      MEM 0x00f0200000..0x00f0ffffff -> 0x00f0200000
[    2.575088] rockchip-dw-pcie a40000000.pcie:      MEM 0x0900000000..0x093fffffff -> 0x0900000000
[    2.583808] rockchip-dw-pcie a40000000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    2.602453] rk_gmac-dwmac fe1c0000.ethernet: IRQ sfty not found
[    2.603143] rk_gmac-dwmac fe1c0000.ethernet: supply phy not found, using dummy regulator
[    2.610343] rk_gmac-dwmac fe1c0000.ethernet: clock input or output? (output).
[    2.610982] rk_gmac-dwmac fe1c0000.ethernet: TX delay(0x42).
[    2.611481] rk_gmac-dwmac fe1c0000.ethernet: Can not read property: rx_delay.
[    2.612105] rk_gmac-dwmac fe1c0000.ethernet: set rx_delay to 0x10
[    2.612654] rk_gmac-dwmac fe1c0000.ethernet: integrated PHY? (no).
[    2.618249] rk_gmac-dwmac fe1c0000.ethernet: init for RGMII_RXID
[    2.618905] rk_gmac-dwmac fe1c0000.ethernet: User ID: 0x30, Synopsys ID: 0x51
[    2.619535] rk_gmac-dwmac fe1c0000.ethernet: 	DWMAC4/5
[    2.619987] rk_gmac-dwmac fe1c0000.ethernet: DMA HW capability register supported
[    2.620645] rk_gmac-dwmac fe1c0000.ethernet: RX Checksum Offload Engine supported
[    2.621306] rk_gmac-dwmac fe1c0000.ethernet: TX Checksum insertion supported
[    2.621376] r8169 0002:21:00.0 eth1: RTL8125B, 2e:d4:f1:47:e1:97, XID 641, IRQ 123
[    2.621924] rk_gmac-dwmac fe1c0000.ethernet: Wake-Up On Lan supported
[    2.621989] rk_gmac-dwmac fe1c0000.ethernet: TSO supported
[    2.622596] r8169 0002:21:00.0 eth1: jumbo features [frames: 16362 bytes, tx checksumming: ko]
[    2.624390] rk_gmac-dwmac fe1c0000.ethernet: Enable RX Mitigation via HW Watchdog Timer
[    2.625095] rk_gmac-dwmac fe1c0000.ethernet: Enabled L3L4 Flow TC (entries=2)
[    2.625720] rk_gmac-dwmac fe1c0000.ethernet: Enabled RFS Flow TC (entries=10)
[    2.626344] rk_gmac-dwmac fe1c0000.ethernet: TSO feature enabled
[    2.626870] rk_gmac-dwmac fe1c0000.ethernet: SPH feature enabled
[    2.627396] rk_gmac-dwmac fe1c0000.ethernet: Using 32/32 bits DMA host/device width
[    2.656707] rockchip-drm display-subsystem: bound fdd90000.vop (ops vop2_component_ops [rockchipdrm])
[    2.658113] dwhdmiqp-rockchip fde80000.hdmi: registered DesignWare HDMI QP I2C bus driver
[    2.658936] rockchip-drm display-subsystem: bound fde80000.hdmi (ops dw_hdmi_qp_rockchip_ops [rockchipdrm])
[    2.660141] [drm] Initialized rockchip 1.0.0 for display-subsystem on minor 0
[    2.660811] rockchip-drm display-subsystem: [drm] Cannot find any crtc or sizes
[    2.661940] rockchip-drm display-subsystem: [drm] Cannot find any crtc or sizes
[    2.778431] rk_gmac-dwmac fe1b0000.ethernet: IRQ sfty not found
[    2.779152] rk_gmac-dwmac fe1b0000.ethernet: supply phy not found, using dummy regulator
[    2.779938] rk_gmac-dwmac fe1b0000.ethernet: clock input or output? (output).
[    2.780565] rk_gmac-dwmac fe1b0000.ethernet: TX delay(0x44).
[    2.781083] rk_gmac-dwmac fe1b0000.ethernet: Can not read property: rx_delay.
[    2.781708] rk_gmac-dwmac fe1b0000.ethernet: set rx_delay to 0x10
[    2.782246] rk_gmac-dwmac fe1b0000.ethernet: integrated PHY? (no).
[    2.787801] rk_gmac-dwmac fe1b0000.ethernet: init for RGMII_RXID
[    2.788583] rk_gmac-dwmac fe1b0000.ethernet: User ID: 0x30, Synopsys ID: 0x51
[    2.789232] rk_gmac-dwmac fe1b0000.ethernet: 	DWMAC4/5
[    2.789685] rk_gmac-dwmac fe1b0000.ethernet: DMA HW capability register supported
[    2.790340] rk_gmac-dwmac fe1b0000.ethernet: RX Checksum Offload Engine supported
[    2.790995] rk_gmac-dwmac fe1b0000.ethernet: TX Checksum insertion supported
[    2.791611] rk_gmac-dwmac fe1b0000.ethernet: Wake-Up On Lan supported
[    2.792205] rk_gmac-dwmac fe1b0000.ethernet: TSO supported
[    2.792687] rk_gmac-dwmac fe1b0000.ethernet: Enable RX Mitigation via HW Watchdog Timer
[    2.793394] rk_gmac-dwmac fe1b0000.ethernet: Enabled L3L4 Flow TC (entries=2)
[    2.794018] rk_gmac-dwmac fe1b0000.ethernet: Enabled RFS Flow TC (entries=10)
[    2.794642] rk_gmac-dwmac fe1b0000.ethernet: TSO feature enabled
[    2.795167] rk_gmac-dwmac fe1b0000.ethernet: SPH feature enabled
[    2.795693] rk_gmac-dwmac fe1b0000.ethernet: Using 32/32 bits DMA host/device width
[    2.885123] rockchip-dw-pcie a40000000.pcie: PCIe Gen.2 x2 link up
[    2.885812] rockchip-dw-pcie a40000000.pcie: PCI host bridge to bus 0000:00
[    2.886442] pci_bus 0000:00: root bus resource [bus 00-0f]
[    2.886939] pci_bus 0000:00: root bus resource [io  0x200000-0x2fffff] (bus address [0xf0100000-0xf01fffff])
[    2.887812] pci_bus 0000:00: root bus resource [mem 0xf0200000-0xf0ffffff]
[    2.888427] pci_bus 0000:00: root bus resource [mem 0x900000000-0x93fffffff]
[    2.889151] pci 0000:00:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    2.889821] pci 0000:00:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    2.890376] pci 0000:00:00.0: PCI bridge to [bus 01-ff]
[    2.890849] pci 0000:00:00.0:   bridge window [io  0x0000-0x0fff]
[    2.891395] pci 0000:00:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    2.892005] pci 0000:00:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    2.892740] pci 0000:00:00.0: supports D1 D2
[    2.893140] pci 0000:00:00.0: PME# supported from D0 D1 D3hot
[    2.894620] pci 0000:00:00.0: Adding to iommu group 20
[    2.904163] pci_bus 0000:01: busn_res: can not insert [bus 01-ff] under [bus 00-0f] (conflicts with (null) [bus 00-0f])
[    2.905231] pci 0000:01:00.0: [9000:1003] type 00 class 0x058000 PCIe Endpoint
[    2.906038] pci 0000:01:00.0: BAR 0 [mem 0x00000000-0x000fffff 64bit]
[    2.906621] pci 0000:01:00.0: BAR 2 [mem 0x00000000-0x000fffff]
[    2.907156] pci 0000:01:00.0: BAR 3 [mem 0x00000000-0x0000ffff]
[    2.907691] pci 0000:01:00.0: BAR 4 [mem 0x00000000-0x00000fff]
[    2.908225] pci 0000:01:00.0: BAR 5 [mem 0x00000000-0x0000ffff]
[    2.908760] pci 0000:01:00.0: ROM [mem 0x00000000-0x007fffff pref]
[    2.909525] pci 0000:01:00.0: supports D1
[    2.909890] pci 0000:01:00.0: PME# supported from D0 D1 D3hot
[    2.910520] pci 0000:01:00.0: 8.000 Gb/s available PCIe bandwidth, limited by 5.0 GT/s PCIe x2 link at 0000:00:00.0 (capable of 16.000 Gb/s with 5.0 GT/s PCIe x4 link)
[    2.912286] pci 0000:01:00.0: Adding to iommu group 20
[    2.912862] pci 0000:00:00.0: bridge window [mem 0x00100000-0x003fffff] to [bus 01-ff] add_size 800000 add_align 800000
[    2.913855] pci 0000:00:00.0: bridge window [mem size 0x00b00000]: can't assign; no space
[    2.914588] pci 0000:00:00.0: bridge window [mem size 0x00b00000]: failed to assign
[    2.915273] pci 0000:00:00.0: ROM [mem 0xf0200000-0xf020ffff pref]: assigned
[    2.915906] pci 0000:00:00.0: ROM [mem 0xf0200000-0xf020ffff pref]: releasing
[    2.916545] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: assigned
[    2.917224] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: failed to expand by 0x800000
[    2.918046] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: failed to add optional 800000
[    2.918884] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: can't assign; no space
[    2.919577] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: failed to assign
[    2.920224] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: assigned
[    2.920909] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: assigned
[    2.921538] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: assigned
[    2.922155] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: assigned
[    2.922771] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: assigned
[    2.923388] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: releasing
[    2.924049] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: releasing
[    2.924662] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: releasing
[    2.925285] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: releasing
[    2.925900] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: releasing
[    2.926518] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: assigned
[    2.927202] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: assigned
[    2.927819] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: assigned
[    2.928435] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: assigned
[    2.929060] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: assigned
[    2.929678] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: can't assign; no space
[    2.930370] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: failed to assign
[    2.931018] pci 0000:00:00.0: PCI bridge to [bus 01-ff]
[    2.931490] pci 0000:00:00.0:   bridge window [mem 0xf0200000-0xf04fffff]
[    2.932100] pci_bus 0000:00: Some PCI device resources are unassigned, try booting with pci=realloc
[    2.932904] pci_bus 0000:00: resource 4 [io  0x200000-0x2fffff]
[    2.933445] pci_bus 0000:00: resource 5 [mem 0xf0200000-0xf0ffffff]
[    2.934011] pci_bus 0000:00: resource 6 [mem 0x900000000-0x93fffffff]
[    2.934019] pci_bus 0000:01: resource 1 [mem 0xf0200000-0xf04fffff]
[    2.937252] pcieport 0000:00:00.0: PME: Signaling with IRQ 141
[    2.938233] pcieport 0000:00:00.0: AER: enabled with IRQ 142
[    2.940151] rockchip-dw-pcie a40400000.pcie: host bridge /pcie@fe160000 ranges:
[    2.940828] rockchip-dw-pcie a40400000.pcie:       IO 0x00f1100000..0x00f11fffff -> 0x00f1100000
[    2.941642] rockchip-dw-pcie a40400000.pcie:      MEM 0x00f1200000..0x00f1ffffff -> 0x00f1200000
[    2.942432] rockchip-dw-pcie a40400000.pcie:      MEM 0x0940000000..0x097fffffff -> 0x0940000000
[    2.951157] rockchip-dw-pcie a40400000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    2.992660] async_tx: api initialized (async)
[    3.056092] dw-apb-uart feb50000.serial: forbid DMA for kernel console







































































done.
Begin: Mounting root file system ... Begin: Running /scripts/local-top ... done.
Begin: Running /scripts/local-premount ... Scanning for Btrfs filesystems
registered: /dev/sda2
done.
Warning: fsck not present, so skipping root file system
[    3.160092] BTRFS: device label ROOTFS devid 1 transid 11 /dev/sda2 (8:2) scanned by mount (243)
[    3.161762] BTRFS info (device sda2): first mount of filesystem 78701106-e625-4020-b2b8-fcbbb690d5e3
[    3.162612] BTRFS info (device sda2): using crc32c (crc32c-lib) checksum algorithm
[    3.173355] BTRFS info (device sda2): enabling ssd optimizations
[    3.173889] BTRFS info (device sda2): turning on async discard
[    3.174401] BTRFS info (device sda2): enabling free space tree
[    3.174912] BTRFS info (device sda2): use zstd compression, level 1
[    3.176280] [trim-mounts-hash]'root'[00000000f0a3190a]'s top mountpoint dentry: root
[    3.176960] [trim-mounts-hash]dentry 'root' type: 0
done.
Begin: Running /scripts/local-bottom ... done.
Begin: Running /scripts/init-bottom ... done.
[    3.261081] rockchip-dw-pcie a40400000.pcie: PCIe Gen.3 x2 link up
[    3.261810] rockchip-dw-pcie a40400000.pcie: PCI host bridge to bus 0001:10
[    3.262439] pci_bus 0001:10: root bus resource [bus 10-1f]
[    3.262937] pci_bus 0001:10: root bus resource [io  0x300000-0x3fffff] (bus address [0xf1100000-0xf11fffff])
[    3.263811] pci_bus 0001:10: root bus resource [mem 0xf1200000-0xf1ffffff]
[    3.264425] pci_bus 0001:10: root bus resource [mem 0x940000000-0x97fffffff]
[    3.265124] pci 0001:10:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    3.265793] pci 0001:10:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    3.266348] pci 0001:10:00.0: PCI bridge to [bus 01-ff]
[    3.266822] pci 0001:10:00.0:   bridge window [io  0x0000-0x0fff]
[    3.267369] pci 0001:10:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    3.267978] pci 0001:10:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    3.268709] pci 0001:10:00.0: supports D1 D2
[    3.269141] pci 0001:10:00.0: PME# supported from D0 D1 D3hot
[    3.270426] pci 0001:10:00.0: Adding to iommu group 21
[    3.282025] pci 0001:10:00.0: Primary bus is hard wired to 0
[    3.282542] pci 0001:10:00.0: bridge configuration invalid ([bus 01-ff]), reconfiguring
[    3.283418] pci 0001:11:00.0: [1e4b:1202] type 00 class 0x010802 PCIe Endpoint
[    3.284191] pci 0001:11:00.0: BAR 0 [mem 0x00000000-0x00003fff 64bit]
[    3.285102] pci 0001:11:00.0: PME# supported from D0 D3hot D3cold
[    3.285867] pci 0001:11:00.0: 15.752 Gb/s available PCIe bandwidth, limited by 8.0 GT/s PCIe x2 link at 0001:10:00.0 (capable of 31.504 Gb/s with 8.0 GT/s PCIe x4 link)
[    3.287654] pci 0001:11:00.0: Adding to iommu group 21
[    3.297012] pci 0001:11:00.0: ASPM: default states L1
[    3.297501] pci_bus 0001:11: busn_res: [bus 11-1f] end is updated to 11
[    3.298119] pci 0001:10:00.0: bridge window [mem 0xf1200000-0xf12fffff]: assigned
[    3.298818] pci 0001:10:00.0: ROM [mem 0xf1300000-0xf130ffff pref]: assigned
[    3.299487] pci 0001:11:00.0: BAR 0 [mem 0xf1200000-0xf1203fff 64bit]: assigned
[    3.300169] pci 0001:10:00.0: PCI bridge to [bus 11]
[    3.300642] pci 0001:10:00.0:   bridge window [mem 0xf1200000-0xf12fffff]
[    3.301298] pci_bus 0001:10: resource 4 [io  0x300000-0x3fffff]
[    3.301850] pci_bus 0001:10: resource 5 [mem 0xf1200000-0xf1ffffff]
[    3.302434] pci_bus 0001:10: resource 6 [mem 0x940000000-0x97fffffff]
[    3.303030] pci_bus 0001:11: resource 1 [mem 0xf1200000-0xf12fffff]
[    3.306985] pcieport 0001:10:00.0: PME: Signaling with IRQ 153
[    3.307933] pcieport 0001:10:00.0: AER: enabled with IRQ 154
[    3.309455] nvme nvme0: pci function 0001:11:00.0
[    3.309900] nvme 0001:11:00.0: enabling device (0000 -> 0002)
[    3.316864] hwmon hwmon7: temp1_input not attached to any thermal zone
[    3.317626] hwmon hwmon7: temp2_input not attached to any thermal zone
[    3.318312] hwmon hwmon7: temp3_input not attached to any thermal zone
[    3.320363] nvme nvme0: allocated 8 MiB host memory buffer (1 segment).
[    3.324911] nvme nvme0: 8/0/0 default/read/poll queues
[    3.326862] xhci-hcd xhci-hcd.5.auto: xHCI Host Controller
[    3.327386] xhci-hcd xhci-hcd.5.auto: new USB bus registered, assigned bus number 5
[    3.327836] nvme nvme0: Ignoring bogus Namespace Identifiers
[    3.328200] xhci-hcd xhci-hcd.5.auto: hcc params 0x0220fe64 hci version 0x110 quirks 0x0000808002000010
[    3.329570] xhci-hcd xhci-hcd.5.auto: irq 164, io mem 0xfc000000
[    3.330382] xhci-hcd xhci-hcd.5.auto: xHCI Host Controller
[    3.330981] xhci-hcd xhci-hcd.5.auto: new USB bus registered, assigned bus number 6
[    3.331852] xhci-hcd xhci-hcd.5.auto: Host supports USB 3.0 SuperSpeed
[    3.332704] usb usb5: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    3.333503] usb usb5: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    3.334173] usb usb5: Product: xHCI Host Controller
[    3.334614] usb usb5: Manufacturer: Linux 6.18.18-trim xhci-hcd
[    3.335159] usb usb5: SerialNumber: xhci-hcd.5.auto
[    3.336110] hub 5-0:1.0: USB hub found
[    3.336484] hub 5-0:1.0: 1 port detected
[    3.336706]  nvme0n1: p1 p2 p3
[    3.337289] usb usb6: We don't know the algorithms for LPM for this host, disabling LPM.
[    3.338150] usb usb6: New USB device found, idVendor=1d6b, idProduct=0003, bcdDevice= 6.18
[    3.338914] usb usb6: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    3.339581] usb usb6: Product: xHCI Host Controller
[    3.340021] usb usb6: Manufacturer: Linux 6.18.18-trim xhci-hcd
[    3.340584] usb usb6: SerialNumber: xhci-hcd.5.auto
[    3.341506] hub 6-0:1.0: USB hub found
[    3.341906] hub 6-0:1.0: 1 port detected
[    3.359923] xhci-hcd xhci-hcd.6.auto: xHCI Host Controller
[    3.360464] xhci-hcd xhci-hcd.6.auto: new USB bus registered, assigned bus number 7
[    3.361321] xhci-hcd xhci-hcd.6.auto: hcc params 0x0220fe64 hci version 0x110 quirks 0x0000808002000010
[    3.362250] xhci-hcd xhci-hcd.6.auto: irq 165, io mem 0xfc400000
[    3.362949] xhci-hcd xhci-hcd.6.auto: xHCI Host Controller
[    3.363455] xhci-hcd xhci-hcd.6.auto: new USB bus registered, assigned bus number 8
[    3.364171] xhci-hcd xhci-hcd.6.auto: Host supports USB 3.0 SuperSpeed
[    3.364916] usb usb7: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    3.365781] usb usb7: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    3.366454] usb usb7: Product: xHCI Host Controller
[    3.366917] usb usb7: Manufacturer: Linux 6.18.18-trim xhci-hcd
[    3.367470] usb usb7: SerialNumber: xhci-hcd.6.auto
[    3.368409] hub 7-0:1.0: USB hub found
[    3.368805] hub 7-0:1.0: 1 port detected
[    3.369538] usb usb8: We don't know the algorithms for LPM for this host, disabling LPM.
[    3.370399] usb usb8: New USB device found, idVendor=1d6b, idProduct=0003, bcdDevice= 6.18
[    3.371161] usb usb8: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    3.371857] usb usb8: Product: xHCI Host Controller
[    3.372299] usb usb8: Manufacturer: Linux 6.18.18-trim xhci-hcd
[    3.372829] usb usb8: SerialNumber: xhci-hcd.6.auto
[    3.373828] hub 8-0:1.0: USB hub found
[    3.374230] hub 8-0:1.0: 1 port detected
[    3.430834] [trim-mounts-hash]'security'[000000007b4618fb]'s top mountpoint dentry: sys
[    3.431547] [trim-mounts-hash]dentry 'sys' type: 0
[    3.432186] [trim-mounts-hash]'/'[00000000347d3dd3]'s top mountpoint dentry: proc
[    3.432844] [trim-mounts-hash]dentry 'proc' type: 0
[    3.435389] systemd[1]: System time before build time, advancing clock.
[    3.453445] systemd[1]: Inserted module 'autofs4'
[    3.454894] [trim-mounts-hash]'shm'[0000000038d41290]'s top mountpoint dentry: dev
[    3.455564] [trim-mounts-hash]dentry 'dev' type: 0
[    3.456072] [trim-mounts-hash]'lock'[000000009ec3383f]'s top mountpoint dentry: run
[    3.456744] [trim-mounts-hash]dentry 'run' type: 0
[    3.485269] [trim-mounts-hash]'cgroup'[00000000ebe39f7b]'s top mountpoint dentry: sys
[    3.485962] [trim-mounts-hash]dentry 'sys' type: 0
[    3.486541] [trim-mounts-hash]'pstore'[00000000b0de1ee2]'s top mountpoint dentry: sys
[    3.487228] [trim-mounts-hash]dentry 'sys' type: 0
[    3.501666] [trim-mounts-hash]'bpf'[00000000b5b0449d]'s top mountpoint dentry: sys
[    3.502342] [trim-mounts-hash]dentry 'sys' type: 0
[    3.504515] systemd[1]: systemd 252.39-1~deb12u1 running in system mode (+PAM +AUDIT +SELINUX +APPARMOR +IMA +SMACK +SECCOMP +GCRYPT -GNUTLS +OPENSSL +ACL +BLKID +CURL +ELFUTILS +FIDO2 +IDN2 -IDN +IPTC +KMOD +LIBCRYPTSETUP +LIBFDISK +PCRE2 -PWQUALITY +P11KIT +QRENCODE +TPM2 +BZIP2 +LZ4 +XZ +ZLIB +ZSTD -BPF_FRAMEWORK -XKBCOMMON +UTMP +SYSVINIT default-hierarchy=unified)
[    3.507392] systemd[1]: Detected architecture arm64.

Welcome to Debian GNU/Linux 12 (bookworm)!

[    3.509930] systemd[1]: Hostname set to <fnnas>.
[    3.684951] systemd[1]: Configuration file /etc/systemd/system/webdav.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.686611] systemd[1]: Configuration file /etc/systemd/system/usersrv.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.688195] systemd[1]: Configuration file /etc/systemd/system/upnp.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.689758] systemd[1]: Configuration file /etc/systemd/system/trim_upload.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.691363] systemd[1]: Configuration file /etc/systemd/system/trim_trashbind.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.693005] systemd[1]: Configuration file /etc/systemd/system/trim_tfa.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.694645] systemd[1]: Configuration file /etc/systemd/system/trim_sharelink.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.696471] systemd[1]: Configuration file /etc/systemd/system/trim_sac.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.698156] systemd[1]: Configuration file /etc/systemd/system/trim_raid_check.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.699849] systemd[1]: Configuration file /etc/systemd/system/trim_nginx.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.701553] systemd[1]: Configuration file /etc/systemd/system/trim_main.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.703180] systemd[1]: Configuration file /etc/systemd/system/trim_license.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.704879] systemd[1]: Configuration file /etc/systemd/system/trim_init.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.706480] systemd[1]: Configuration file /etc/systemd/system/trim_http_cgi.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.708100] systemd[1]: Configuration file /etc/systemd/system/trim_file_monitor.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.709774] systemd[1]: Configuration file /etc/systemd/system/trim_diskpowerd.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.711410] systemd[1]: Configuration file /etc/systemd/system/trim_connect.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.713191] systemd[1]: Configuration file /etc/systemd/system/trim_app_center.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.721282] systemd[1]: Configuration file /etc/systemd/system/system_startup.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.722917] systemd[1]: Configuration file /etc/systemd/system/system_shutdown.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.743227] systemd[1]: Configuration file /etc/systemd/system/sysrestore.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.744911] systemd[1]: Configuration file /etc/systemd/system/sysinfo_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.747469] systemd[1]: Configuration file /etc/systemd/system/smbftpd.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.749943] systemd[1]: Configuration file /etc/systemd/system/show_startup_info.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.751596] systemd[1]: Configuration file /etc/systemd/system/share_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.753250] systemd[1]: Configuration file /etc/systemd/system/security_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.755962] systemd[1]: Configuration file /etc/systemd/system/rpc_broker.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.757575] systemd[1]: Configuration file /etc/systemd/system/resmon_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.768304] systemd[1]: Configuration file /etc/systemd/system/network_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.769994] systemd[1]: Configuration file /etc/systemd/system/multiple-downloads.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.771804] systemd[1]: Configuration file /etc/systemd/system/minidlna.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.773565] systemd[1]: Configuration file /etc/systemd/system/mediasrv.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.783567] systemd[1]: Configuration file /etc/systemd/system/imagesrv.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.791053] systemd[1]: Configuration file /etc/systemd/system/finder_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.792691] systemd[1]: Configuration file /etc/systemd/system/filestor_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.794484] systemd[1]: Configuration file /etc/systemd/system/eventlogger_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.796568] systemd[1]: Configuration file /etc/systemd/system/dsmgr.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.798438] systemd[1]: Configuration file /etc/systemd/system/dockermgr.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.800033] systemd[1]: Configuration file /etc/systemd/system/docker.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.801801] systemd[1]: Configuration file /etc/systemd/system/dlcenter.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.805086] systemd[1]: Configuration file /etc/systemd/system/cloud_storage_dav.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.806837] systemd[1]: Configuration file /etc/systemd/system/backup_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.808536] systemd[1]: Configuration file /etc/systemd/system/avahi.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.811375] systemd[1]: Configuration file /etc/systemd/system/auto_thumbnailer.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.813079] systemd[1]: Configuration file /etc/systemd/system/ai_manager.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.814744] systemd[1]: Configuration file /etc/systemd/system/accountsrv.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.872297] systemd[1]: Queued start job for default target graphical.target.
[    3.907416] systemd[1]: Created slice machine.slice - Virtual Machine and Container Slice.
[  OK  ] Created slice machine.slic…rtual Machine and Container Slice.
[    3.909825] systemd[1]: Created slice system-getty.slice - Slice /system/getty.
[  OK  ] Created slice system-getty.slice - Slice /system/getty.
[    3.911470] systemd[1]: Created slice system-modprobe.slice - Slice /system/modprobe.
[  OK  ] Created slice system-modpr…lice - Slice /system/modprobe.
[    3.913224] systemd[1]: Created slice system-postgresql.slice - Slice /system/postgresql.
[  OK  ] Created slice system-postg…ce - Slice /system/postgresql.
[    3.914915] systemd[1]: Created slice system-serial\x2dgetty.slice - Slice /system/serial-getty.
[  OK  ] Created slice system-seria… - Slice /system/serial-getty.
[    3.916697] systemd[1]: Created slice system-systemd\x2dfsck.slice - Slice /system/systemd-fsck.
[  OK  ] Created slice system-syste… -[    3.918214] systemd[1]: Created slice user.slice - User and Session Slice.
 Slice /system/systemd-fsck.
[    3.919001] systemd[1]: Started systemd-ask-password-wall.path - Forward Password Requests to Wall Directory Watch.
[  OK  ] Created slice user.slice - User[    3.920331] [trim-mounts-hash]'binfmt_misc'[000000000aea602d]'s top mountpoint dentry: proc
[    3.921250] [trim-mounts-hash]dentry 'proc' type: 0
 and Session Slice.
[  OK  ] Started syst[    3.921728] systemd[1]: Set up automount proc-sys-fs-binfmt_misc.automount - Arbitrary Executable File Formats File System Automount Point.
emd-ask-passwo… Requests to Wall Directory Watch.
[    3.923371] systemd[1]: Expecting device dev-disk-by\x2duuid-6fa253c0\x2df060\x2d43bd\x2d8d00\x2d454d31288a8e.device - /dev/disk/by-uuid/6fa253c0-f060-43bd-8d00-454d31288a8e...
[  OK  ] Set up automount proc-sys-…rmats [    3.925179] systemd[1]: Expecting device dev-ttyAMA0.device - /dev/ttyAMA0...
File System Automount Point.
[    3.926527] systemd[1]: Expecting device dev-ttyS2.device - /dev/ttyS2...
         Expecting device dev-disk-…3c0-f060-43bd-8d0[    3.927356] systemd[1]: Reached target integritysetup.target - Local Integrity Protected Volumes.
0-454d31288a8e...
         Expecting device dev-ttyAMA0.device - /d[    3.928745] systemd[1]: Reached target nss-lookup.target - Host and Network Name Lookups.
ev/ttyAMA0...
         Expecting device dev-ttyS2.de[    3.930290] systemd[1]: Reached target slices.target - Slice Units.
vice - /dev/ttyS2...
[  OK  ] Reached target  systemd[1]: Reached target swap.target - Swaps.
[0;1;39mintegrityse…Local Integrity Protected Volumes.
[    3.932081] systemd[1]: Reached target veritysetup.target - Local Verity Protected Volumes.
;32m  OK  ] Reached target nss-lookup.…m - Host a[    3.933276] systemd[1]: Reached target virt-guest-shutdown.target - Libvirt guests shutdown.
nd Network Name Lookups.
[  OK  ] Reached target  systemd[1]: Listening on dm-event.socket - Device-mapper event daemon FIFOs.
[0;1;39mslices.target - Slice Units.
[  OK  ] [    3.935924] systemd[1]: Listening on lvm2-lvmpolld.socket - LVM2 poll daemon socket.
Reached target swap.target - Swaps.
[  OK  ] Reached target veritysetup… - Local Verity Protected Volumes.
[  OK  ] Reached target virt-guest-…get - Libvirt guests shutdown.
[  OK  ] Listening on dm-event.sock… Device-mapper event daemon FIFOs.
[  OK  ] Listening on lvm2-lvmpolld…ket - LVM2 poll daemon socket.
[    3.947970] systemd[1]: Listening on rpcbind.socket - RPCbind Server Activation Socket.
[  OK  ] Listening on rpcbind.socke… RPCbind Server Activation Socket.
[    3.949714] systemd[1]: Listening on syslog.socket - Syslog Socket.
[  OK  ] Listening on syslog.socket - Syslog Socket.
[    3.951025] systemd[1]: Listening on systemd-fsckd.socket - fsck to fsckd communication Socket.
[    3.952073] systemd[1]: Listening on systemd-initctl.socket - initctl Compatibility Named Pipe.
[  OK  ] Listening on systemd-fsckd…sck to fsckd communication Socket.
[  OK  ] Listening on systemd-initc… initctl Compatibility Named Pipe.
[    3.953996] systemd[1]: Listening on systemd-journald-audit.socket - Journal Audit Socket.
[  OK  ] Listening on systemd-journ…socket[    3.955375] systemd[1]: Listening on systemd-journald-dev-log.socket - Journal Socket (/dev/log).
 - Journal Audit Socket.
[  OK  ] Listening on systemd-journ…t [    3.956920] systemd[1]: Listening on systemd-journald.socket - Journal Socket.
- Journal Socket (/dev/log).
[  OK  ] Listening on systemd-journald.socket - Journal Socket.
[    3.959143] systemd[1]: Listening on systemd-udevd-control.socket - udev Control Socket.
[  OK  ] Listening on systemd-udevd….socke[    3.960074] systemd[1]: Listening on systemd-udevd-kernel.socket - udev Kernel Socket.
t - udev Control Socket.
[  OK  ] Listening on systemd-udevd…l.socket - udev Kernel Socket.
[    3.963094] systemd[1]: Mounting dev-hugepages.mount - Huge Pages File System...
         Mounting dev-hugepages.mount - Huge Pages File System...
[    3.965528] systemd[1]: Mounting dev-mqueue.mount - POSIX Message Queue File System...
         Mounting dev-mqueue.mountproc-fs-nfsd.moun…- NFSD configuration filesystem...
[    3.971486] [trim-mounts-hash]'mqueue'[00000000e934af0f]'s top mountpoint dentry: dev
[    3.971538] systemd[1]: Mounting sys-kernel-debug.mount - Kernel Debug File System...
[    3.972196] [trim-mounts-hash]dentry 'dev' type: 0
         Mounting sys-kernel-debug.… - Kernel Debug File System...
[    3.975034] systemd[1]: Mounting sys-kernel-tracing.mount - Kernel Trace File System...
[    3.975455] [trim-mounts-hash]'debug'[000000009495ec75]'s top mountpoint dentry: sys
[    3.976427] [trim-mounts-hash]dentry 'sys' type: 0
         Mounting sys-kernel-tracin… - Kernel Tra[    3.977200] systemd[1]: auth-rpcgss-module.service - Kernel Module supporting RPCSEC_GSS was skipped because of an unmet condition check (ConditionPathExists=/etc/krb5.keytab).
ce File System...
[    3.979167] systemd[1]: Finished blk-availability.service - Availability of block devices.
[  OK  ] Finished blk-availability.…m - Availability of block devices.
[    3.980741] [trim-mounts-hash]'tracing'[0000000028194f2f]'s top mountpoint dentry: sys
[    3.981556] [trim-mounts-hash]dentry 'sys' type: 0
[    3.983503] systemd[1]: Starting keyboard-setup.service - Set the console keyboard layout...
         Starting keyboard-setup.se…Set the console keyboard layout...
[    3.986668] systemd[1]: Starting kmod-static-nodes.service - Create List of Static Device Nodes...
         Starting kmod-static-nodes…ate List of Static Device Nodes...
[    3.989650] systemd[1]: Starting lvm2-monitor.service - Monitoring of LVM2 mirrors, snapshots etc. using dmeventd or progress polling...
         Starting lvm2-monitor.serv…ng dmeventd or progress polling...
[    3.993039] systemd[1]: Starting modprobe@configfs.service - Load Kernel Module configfs...
         Starting modprobe@configfs…m - Load Kernel Module configfs...
[    3.995798] systemd[1]: Starting modprobe@dm_mod.service - Load Kernel Module dm_mod...
         Starting modprobe@dm_mod.s…[0m - Load Kernel Module dm_mod...
[    3.998547] systemd[1]: Starting modprobe@drm.service - Load Kernel Module drm...
         Starting modprobe@drm.service - Load Kernel Module drm...
[    4.001212] systemd[1]: Starting modprobe@efi_pstore.service - Load Kernel Module efi_pstore...
         Starting modprobe@efi_psto…- Load Kernel Module efi_pstore...
[    4.004152] systemd[1]: Starting modprobe@fuse.service - Load Kernel Module fuse...
         Starting modprobe@fuse.ser…e - Load Kernel Module fuse...
[    4.006951] systemd[1]: Starting modprobe@loop.service - Load Kernel Module loop...
         Starting modprobe@loop.ser…e - Load Kern[    4.008517] systemd[1]: systemd-fsck-root.service - File System Check on Root Device was skipped because of an unmet condition check (ConditionPathIsReadWrite=!/).
el Module loop...
[    4.013459] systemd[1]: Starting systemd-journald.service - Journal Service...
         Starting systemd-journald.service - Journa[    4.014644] RPC: Registered named UNIX socket transport module.
l Service...
[    4.015287] RPC: Registered udp transport module.
[    4.015817] RPC: Registered tcp transport module.
[    4.016232] RPC: Registered tcp-with-tls transport module.
[    4.016715] RPC: Registered tcp NFSv4.1 backchannel transport module.
[    4.021194] device-mapper: uevent: version 1.0.3
[    4.021939] device-mapper: ioctl: 4.50.0-ioctl (2025-04-28) initialised: dm-devel@lists.linux.dev
[    4.073353] systemd[1]: Starting systemd-modules-load.service - Load Kernel Modules...
         Starting systemd-modules-l…rvice - Load Kernel Modules...
[    4.076681] systemd[1]: Starting systemd-remount-fs.service - Remount Root and Kernel File Systems...
[    4.077143] [trim-mounts-hash]'nfsd'[0000000086dd2899]'s top mountpoint dentry: proc
[    4.078181] [trim-mounts-hash]dentry 'proc' type: 0
         Starting systemd-remount-f…nt Root and Kernel File Systems...
[    4.080958] systemd[1]: Starting systemd-udev-trigger.service - Coldplug All udev Devices...
         Starting systemd-udev-trig…[0m - Coldplug All udev Devices...
[    4.085315] systemd[1]: Mounted dev-hugepages.mount - Huge Pages File System.
[  OK  ] Mounted dev-hugepages.mount - H[    4.086465] systemd[1]: Mounted dev-mqueue.mount - POSIX Message Queue File System.
uge Pages File System.
[  OK  ] Mounted dev-mqueue.mountOSI[    4.087648] systemd[1]: Mounted proc-fs-nfsd.mount - NFSD configuration filesystem.
X Message Queue File System.
[  OK  ] Mounted proc-fs-nfsd.mount…m - NF[    4.088995] systemd[1]: Mounted sys-kernel-debug.mount - Kernel Debug File System.
SD configuration filesystem.
[    4.091065] systemd[1]: Mounted sys-kernel-tracing.mount - Kernel Trace File System.
[    4.092475] systemd[1]: Finished kmod-static-nodes.service - Create List of Static Device Nodes.
[  OK  ] Mounted sys-kernel-debug.m…nt - Kernel Debug File System.
[  OK  ] Mounted sys-kernel-tracing…nt - Kernel Trace File System.
[    4.094359] systemd[1]: modprobe@configfs.service: Deactivated successfully.
[  OK  ] Finished kmod-static-nodes…reate [    4.095690] systemd[1]: Finished modprobe@configfs.service - Load Kernel Module configfs.
List of Static Device Nodes.
[  OK  ] Finished modprobe@configfs…[0m - [    4.097132] systemd[1]: modprobe@dm_mod.service: Deactivated successfully.
Load Kernel Module configfs.
[    4.098198] systemd[1]: Finished modprobe@dm_mod.service - Load Kernel Module dm_mod.
[  OK  ] Finished modprobe@dm_mod.s…e [    4.099395] systemd[1]: modprobe@drm.service: Deactivated successfully.
- Load Kernel Module dm_mod.
[    4.100288] systemd[1]: Finished modprobe@drm.service - Load Kernel Module drm.
[  OK  ] Finished modprobe@drm.service -[    4.101444] systemd[1]: modprobe@efi_pstore.service: Deactivated successfully.
 Load Kernel Module drm.
[    4.102384] systemd[1]: Finished modprobe@efi_pstore.service - Load Kernel Module efi_pstore.
[  OK  ] Finished modprobe@efi_psto…m - Lo[    4.103620] systemd[1]: modprobe@fuse.service: Deactivated successfully.
ad Kernel Module efi_pstore.
[    4.104520] systemd[1]: Finished modprobe@fuse.service - Load Kernel Module fuse.
[  OK  ] Finished modprobe@fuse.service [    4.105693] systemd[1]: modprobe@loop.service: Deactivated successfully.
- Load Kernel Module fuse.
[    4.106787] systemd[1]: Finished modprobe@loop.service - Load Kernel Module loop.
[  OK  ] Finished modprobe@loop.service - Load Kernel Module loop.
[    4.109796] systemd[1]: Mounting sys-fs-fuse-connections.mount - FUSE Control File System...
         Mounting sys-fs-fuse-conne… - FUSE Control File System...
[    4.112362] systemd[1]: Mounting sys-kernel-config.mount - Kernel Configuration File System...
         Mounting sys-kernel-config…ernel Configurati[    4.113591] systemd[1]: systemd-repart.service - Repartition Root Disk was skipped because no trigger condition checks were met.
on File System...
[    4.115301] [trim-mounts-hash]'config'[00000000c9d6a57e]'s top mountpoint dentry: sys
[    4.115997] [trim-mounts-hash]dentry 'sys' type: 0
[    4.116062] [trim-mounts-hash]'connections'[00000000d2fa03cf]'s top mountpoint dentry: sys
[    4.117236] [trim-mounts-hash]dentry 'sys' type: 0
[    4.117844] systemd[1]: Mounted sys-kernel-config.mount - Kernel Configuration File System.
[  OK  ] Mounted sys-kernel-config.… Kerne[    4.119060] systemd[1]: Mounted sys-fs-fuse-connections.mount - FUSE Control File System.
l Configuration File System.
[  OK  ] Mounted sys-fs-fuse-connec…nt - FUSE Control File System.
[    4.137321] zram: Added device: zram0
[    4.154181] rockchip_pvtm: loading out-of-tree module taints kernel.
[    4.183182] systemd[1]: Started systemd-journald.service - Journal Service.
[  OK  ] Started systemd-journald.service - Journal Service.
[  OK  ] Finished lvm2-monitor.serv…sing dmeventd or progress polling.
[    4.199805] rga3 fdb60000.rga: probe successfully, irq = 49, hw_version:3.0.76831
[    4.201088] rga3 fdb70000.rga: probe successfully, irq = 50, hw_version:3.0.76831
[    4.202535] rga_iommu: IOMMU binding successfully, default mapping core[0x1]
[    4.203546] rga: Module initialized. v1.3.4
[    4.212563] mpp_service mpp-srv: 
[    4.212867] mpp_service mpp-srv: probe start
[    4.215532] mpp_vdpu2 fdb50400.vdpu: probe device
[    4.216286] mpp_vdpu2 fdb50400.vdpu: reset_group->rw_sem_on=0
[    4.216797] mpp_vdpu2 fdb50400.vdpu: reset_group->rw_sem_on=0
[    4.217352] mpp_vdpu2 fdb50400.vdpu: probing finish
[    4.218176] mpp_vepu2 jpege-ccu: probing start
[    4.218572] mpp_vepu2 jpege-ccu: probing finish
[    4.219115] mpp_vepu2 fdba0000.jpege-core: probing start
[    4.219856] mpp_vepu2 fdba0000.jpege-core: attach ccu success
[    4.220388] mpp_vepu2 fdba0000.jpege-core: probing finish
[    4.221154] mpp_vepu2 fdba4000.jpege-core: probing start
[    4.221906] mpp_vepu2 fdba4000.jpege-core: attach ccu success
[    4.222440] mpp_vepu2 fdba4000.jpege-core: probing finish
[    4.223172] mpp_vepu2 fdba8000.jpege-core: probing start
[    4.223821] mpp_vepu2 fdba8000.jpege-core: attach ccu success
[    4.224343] mpp_vepu2 fdba8000.jpege-core: probing finish
[    4.225066] mpp_vepu2 fdbac000.jpege-core: probing start
[    4.225703] mpp_vepu2 fdbac000.jpege-core: attach ccu success
[    4.226225] mpp_vepu2 fdbac000.jpege-core: probing finish
[    4.227177] mpp_jpgdec fdb90000.jpegd: probe device
[    4.227786] mpp_jpgdec fdb90000.jpegd: probing finish
[    4.228740] mpp_rkvdec2 fdc30000.rkvdec-ccu: rkvdec-ccu, probing start
[    4.229427] mpp_rkvdec2 fdc30000.rkvdec-ccu: ccu-mode: 1
[    4.229896] mpp_rkvdec2 fdc30000.rkvdec-ccu: probing finish
[    4.230665] mpp_rkvdec2 fdc38100.rkvdec-core: rkvdec-core, probing start
[    4.231427] mpp_rkvdec2 fdc38100.rkvdec-core: shared_niu_a is not found!
[    4.232016] rkvdec2_init:1199: No niu aclk reset resource define
[    4.232544] mpp_rkvdec2 fdc38100.rkvdec-core: shared_niu_h is not found!
[    4.233174] rkvdec2_init:1202: No niu hclk reset resource define
[    4.233728] mpp_rkvdec2 fdc38100.rkvdec-core: no regulator, devfreq is disabled
[    4.234507] mpp_rkvdec2 fdc38100.rkvdec-core: core_mask=00010001
[    4.235036] mpp_rkvdec2 fdc38100.rkvdec-core: attach ccu as core 0
[    4.235846] mpp_rkvdec2 fdc38100.rkvdec-core: sram_start 0x00000000ff001000
[    4.236458] mpp_rkvdec2 fdc38100.rkvdec-core: rcb_iova 0x00000000fff00000
[    4.237066] mpp_rkvdec2 fdc38100.rkvdec-core: sram_size 491520
[    4.237579] mpp_rkvdec2 fdc38100.rkvdec-core: rcb_size 1048576
[    4.238092] mpp_rkvdec2 fdc38100.rkvdec-core: min_width 512
[    4.238582] mpp_rkvdec2 fdc38100.rkvdec-core: rcb_info_count 20
[    4.239101] mpp_rkvdec2 fdc38100.rkvdec-core: [136, 24576]
[    4.239584] mpp_rkvdec2 fdc38100.rkvdec-core: [137, 49152]
[    4.240066] mpp_rkvdec2 fdc38100.rkvdec-core: [141, 90112]
[    4.240546] mpp_rkvdec2 fdc38100.rkvdec-core: [140, 49152]
[    4.241036] mpp_rkvdec2 fdc38100.rkvdec-core: [139, 180224]
[    4.241525] mpp_rkvdec2 fdc38100.rkvdec-core: [133, 49152]
[    4.242007] mpp_rkvdec2 fdc38100.rkvdec-core: [134, 8192]
[    4.242481] mpp_rkvdec2 fdc38100.rkvdec-core: [135, 4352]
[    4.242956] mpp_rkvdec2 fdc38100.rkvdec-core: [138, 13056]
[    4.243437] mpp_rkvdec2 fdc38100.rkvdec-core: [142, 291584]
[    4.243960] mpp_rkvdec2 fdc38100.rkvdec-core: probing finish
[    4.244653] mpp_rkvdec2 fdc48100.rkvdec-core: rkvdec-core, probing start
[    4.245443] mpp_rkvdec2 fdc48100.rkvdec-core: shared_niu_a is not found!
[    4.246033] rkvdec2_init:1199: No niu aclk reset resource define
[    4.246562] mpp_rkvdec2 fdc48100.rkvdec-core: shared_niu_h is not found!
[    4.247148] rkvdec2_init:1202: No niu hclk reset resource define
[    4.247698] mpp_rkvdec2 fdc48100.rkvdec-core: no regulator, devfreq is disabled
[    4.248371] mpp_rkvdec2 fdc48100.rkvdec-core: core_mask=00020002
[    4.248912] mpp_rkvdec2 fdc48100.rkvdec-core: attach ccu as core 1
[    4.250137] mpp_rkvdec2 fdc48100.rkvdec-core: sram_start 0x00000000ff079000
[    4.250750] mpp_rkvdec2 fdc48100.rkvdec-core: rcb_iova 0x00000000ffe00000
[    4.251344] mpp_rkvdec2 fdc48100.rkvdec-core: sram_size 487424
[    4.251856] mpp_rkvdec2 fdc48100.rkvdec-core: rcb_size 1048576
[    4.252369] mpp_rkvdec2 fdc48100.rkvdec-core: min_width 512
[    4.252860] mpp_rkvdec2 fdc48100.rkvdec-core: rcb_info_count 20
[    4.253390] mpp_rkvdec2 fdc48100.rkvdec-core: [136, 24576]
[    4.253872] mpp_rkvdec2 fdc48100.rkvdec-core: [137, 49152]
[    4.254355] mpp_rkvdec2 fdc48100.rkvdec-core: [141, 90112]
[    4.254837] mpp_rkvdec2 fdc48100.rkvdec-core: [140, 49152]
[    4.255318] mpp_rkvdec2 fdc48100.rkvdec-core: [139, 180224]
[    4.255808] mpp_rkvdec2 fdc48100.rkvdec-core: [133, 49152]
[    4.256289] mpp_rkvdec2 fdc48100.rkvdec-core: [134, 8192]
[    4.256762] mpp_rkvdec2 fdc48100.rkvdec-core: [135, 4352]
[    4.257273] mpp_rkvdec2 fdc48100.rkvdec-core: [138, 13056]
[    4.257755] mpp_rkvdec2 fdc48100.rkvdec-core: [142, 291584]
[    4.258277] mpp_rkvdec2 fdc48100.rkvdec-core: probing finish
[    4.259221] mpp_rkvenc2 rkvenc-ccu: probing start
[    4.259637] mpp_rkvenc2 rkvenc-ccu: probing finish
[    4.260273] mpp_rkvenc2 fdbd0000.rkvenc-core: probing start
[    4.261613] mpp_rkvenc2 fdbd0000.rkvenc-core: bin=0
[    4.262268] mpp_rkvenc2 fdbd0000.rkvenc-core: leakage=10
[    4.262740] mpp_rkvenc2 fdbd0000.rkvenc-core: leakage-volt-sel=0
[    4.264073] mpp_rkvenc2 fdbd0000.rkvenc-core: avs=0
[    4.264584] mpp_rkvenc2 fdbd0000.rkvenc-core: attach ccu as core 0
[    4.265176] mpp_rkvenc2 fdbd0000.rkvenc-core: probing finish
[    4.265858] mpp_rkvenc2 fdbe0000.rkvenc-core: probing start
[    4.266749] mpp_rkvenc2 fdbe0000.rkvenc-core: bin=0
[    4.267365] mpp_rkvenc2 fdbe0000.rkvenc-core: leakage=10
[    4.267835] mpp_rkvenc2 fdbe0000.rkvenc-core: leakage-volt-sel=0
[    4.269130] mpp_rkvenc2 fdbe0000.rkvenc-core: avs=0
[    4.269604] mpp_rkvenc2 fdbe0000.rkvenc-core: attach ccu as core 1
[    4.270172] mpp_rkvenc2 fdbe0000.rkvenc-core: probing finish
[    4.271024] mpp_av1dec fdc70000.av1d: probing start
[    4.271682] mpp_av1dec fdc70000.av1d: probing finish
[    4.272305] mpp_service mpp-srv: probe success
[  OK  ] Finished systemd-remount-f…ount Root and Kernel File Systems.
         Starting systemd-journal-f…h Journal to Persistent Storage...
         Starting systemd-random-se…ice - Load/Save Random Seed...
         Starting systemd-sysusers.…rvice - Create System Users...
[    4.317580] [trim-mounts-hash]'/'[00000000bcf32eeb]'s top mountpoint dentry: dev
[    4.318258] [trim-mounts-hash]dentry 'dev' type: 0
[    4.324884] zfs: module license 'CDDL' taints kernel.
[    4.325360] Disabling lock debugging due to kernel taint
[    4.325903] zfs: module license taints kernel.
[  OK  ] Finished keyboard-setup.se…- Set the console keyboard layout.
[    4.351426] systemd-journald[320]: Received client request to flush runtime journal.
[  OK  ] Finished systemd-journal-f…ush Journal to Persistent Storage.
[  OK  ] Finished systemd-random-se…rvice - Load/Save Random Seed.
[  OK  ] Finished systemd-sysusers.service - Create System Users.
         Starting systemd-tmpfiles-…ate Static Device Nodes in /dev...
[    4.399494] [trim-mounts-hash]'/'[00000000bcf32eeb]'s top mountpoint dentry: dev
[    4.400172] [trim-mounts-hash]dentry 'dev' type: 0
[  OK  ] Finished systemd-tmpfiles-…reate Static Device Nodes in /dev.
[  OK  ] Finished systemd-udev-trig…e - Coldplug All udev Devices.
[  OK  ] Reached target local-fs-pr…reparation for Local File Systems.
[    4.539821] ZFS: Loaded module v2.4.1-1, ZFS pool version 5000, ZFS filesystem version 5
         Starting ifupdown-pre.serv…ynchronize boot up for ifupdown...
         Starting systemd-udevd.ser…ger for Device Events and Files...
[  OK  ] Finished systemd-modules-l…service - Load Kernel Modules.
[  OK  ] Finished ifupdown-pre.serv… synchronize boot up for ifupdown.
         Starting systemd-sysctl.se…ce - Apply Kernel Variables...
[    4.567389] [trim-mounts-hash]'/'[00000000bcf32eeb]'s top mountpoint dentry: dev
[    4.568066] [trim-mounts-hash]dentry 'dev' type: 0
[  OK  ] Finished systemd-sysctl.service - Apply Kernel Variables.
[  OK  ] Started systemd-udevd.serv…nager for Device Events and Files.
         Starting plymouth-start.se…[0m - Show Plymouth Boot Screen...
[  OK  ] Started plymouth-start.ser…e - Show Plymouth Boot Screen.
[  OK  ] Started systemd-ask-passwo…uests to Plymouth Directory Watch.
[  OK  ] Reached target cryptsetup.…get - Local Encrypted Volumes.
[    4.881282] sd 0:0:0:0: Attached scsi generic sg0 type 0
[  OK  ] Found device dev-ttyS2.device - /dev/ttyS2.
[  OK  ] Found device dev-disk-by\x…e.device - ADATA_SP920SS BOOT.
         Mounting tmp.mount - /tmp...
[  OK  ] Reached target machines.target - Containers.
[    5.150797] [trim-mounts-hash]'tmp'[000000003b185c38]'s top mountpoint dentry: tmp
[    5.151475] [trim-mounts-hash]dentry 'tmp' type: 0
         Starting systemd-fsck@dev-…3c0-f060-43bd-8d00-454d31288a8e...
[  OK  ] Mounted tmp.mount - /tmp.
[  OK  ] Started systemd-fsckd.serv…tem Check Daemon to report status.
[    5.191535] cpufreq: cpufreq_policy_online: CPU4: Running at unlisted initial frequency: 1008000 kHz, changing to: 1200000 kHz
[    5.199036] pstore: Using crash dump compression: deflate
[    5.199553] pstore: Registered ramoops as persistent store backend
[    5.200099] ramoops: using 0xd8000@0x118000, ecc: 0
[  OK  ] Finished systemd-fsck@dev-…253c0-f060-43bd-8d00-454d31288a8e.
         Mounting boot.mount - /boot...
[    5.271145] cpufreq: cpufreq_policy_online: CPU6: Running at unlisted initial frequency: 1008000 kHz, changing to: 1200000 kHz
[    5.298765] EXT4-fs (sda1): mounted filesystem 6fa253c0-f060-43bd-8d00-454d31288a8e r/w with ordered data mode. Quota mode: none.
[    5.299864] [trim-mounts-hash]'boot'[00000000e360b6ff]'s top mountpoint dentry: boot
[    5.300540] [trim-mounts-hash]dentry 'boot' type: 0
[  OK  ] Mounted boot.mount - /boot.
[  OK  ] Reached target local-fs.target - Local File Systems.
         Starting apparmor.service - Load AppArmor profiles...
         Starting console-setup.ser…m - Set console font and keymap...
         Starting dpdk.service - DPDK runtime environment...
         Starting led-set.service - LED Setting Service...
         Starting plymouth-read-wri…mouth To Write Out Runtime Data...
         Starting pwm-fancontrol.se…e - PWM Fan Setting Service...
         Starting set_gpio-init.ser…m - GPIO Initialization Service...
         Starting systemd-binfmt.se…et Up Additional Binary Formats...
         Starting systemd-tmpfiles-…te System Files a[    5.332275] [trim-mounts-hash]'/'[00000000bcf32eeb]'s top mountpoint dentry: dev
nd Directories...
[    5.333217] [trim-mounts-hash]dentry 'dev' type: 0
[  OK  ] Finished console-setup.ser…[0m - Set console font and keymap.
[FAILED] Failed to start led-set.service - LED Setting Service.
See 'systemctl status led-set.service' for details.
[  OK  ] Finished plymouth-read-wri…lymouth To Write Out Runtime Data.
[  OK  ] Finished pwm-fancontrol.se…ice - PWM Fan Setting Service.
[FAILED] Failed to start set_gpio-i…[0m - GPIO Initialization Service.
See 'systemctl status set_gpio-init.service' for details.
[  OK  ] Finished systemd-tmpfiles-…eate System Files and Directories.
         Mounting proc-sys-fs-binfm…utable File Formats File System...
         Mounting run-rpc_pipefs.mount - RPC Pipe File System...
         Starting rpcbind.service - RPC bind portmap service...
[    5.430260] [trim-mounts-hash]'rpc_pipefs'[000000004b4fed9c]'s top mountpoint dentry: run
[    5.430982] [trim-mounts-hash]dentry 'run' type: 0
         Starting systemd-timesyncd… - Network Time Synchronization...
[    5.476325] audit: type=1400 audit(1750949922.036:2): apparmor="STATUS" operation="profile_load" profile="unconfined" name="/usr/bin/man" pid=696 comm="apparmor_parser"
[    5.480995] audit: type=1400 audit(1750949922.036:3): apparmor="STATUS" operation="profile_load" profile="unconfined" name="man_filter" pid=696 comm="apparmor_parser"
[    5.482294] audit: type=1400 audit(1750949922.040:4): apparmor="STATUS" operation="profile_load" profile="unconfined" name="man_groff" pid=696 comm="apparmor_parser"
[    5.524991] [trim-mounts-hash]'/'[0000000026219c71]'s top mountpoint dentry: proc
[    5.525656] [trim-mounts-hash]dentry 'proc' type: 0
         Starting systemd-update-ut…rd System Boot/Shutdown in UTMP...
[  OK  ] Started rpcbind.service - RPC bind portmap service.
[  OK  ] Finished dpdk.service - DPDK runtime environment.
[  OK  ] Mounted proc-sys-fs-binfmt…ecutable File Formats File System.
[  OK  ] Mounted run-rpc_pipefs.mount - RPC Pipe File System.
[  OK  ] Finished systemd-binfmt.se… Set Up Additional Binary Formats.
[  OK  ] Reached target rpc_pipefs.target.
[  OK  ] Reached target rpcbind.target - RPC Port Mapper.
         Starting nfs-blkmap.servic…NFS block layout mapping daemon...
         Starting nfs-idmapd.servic…- NFSv4 ID-name mapping service...
[    5.564787] [trim-mounts-hash]'dev'[0000000015799c9e]'s top mountpoint dentry: tmp
[    5.565468] [trim-mounts-hash]dentry 'tmp' type: 0
         Starting nfsdcld.serviceFSv4 Client Tracking Daemon...
[  OK  ] Reached target nfs-client.target - NFS client services.
[  OK  ] Reached target remote-fs-p…eparation for Remote File Systems.
[  OK  ] Reached target remote-fs.target - Remote File Systems.
[  OK  ] Started nfs-blkmap.service… pNFS block layout mapping daemon.
[  OK  ] Started nfs-idmapd.service…m - NFSv4 ID-name mapping service.
[    5.577965] audit: type=1400 audit(1750949922.140:5): apparmor="STATUS" operation="profile_load" profile="unconfined" name="virt-aa-helper" pid=697 comm="apparmor_parser"
[  OK  ] Finished systemd-update-ut…cord System Boot/Shutdown in UTMP.
[    5.581918] audit: type=1400 audit(1750949922.144:6): apparmor="STATUS" operation="profile_load" profile="unconfined" name="nvidia_modprobe" pid=694 comm="apparmor_parser"
[    5.583357] audit: type=1400 audit(1750949922.144:7): apparmor="STATUS" operation="profile_load" profile="unconfined" name="nvidia_modprobe//kmod" pid=694 comm="apparmor_parser"
[  OK  ] Started nfsdcld.service - NFSv4 Client Tracking Daemon.
[    5.628810] audit: type=1400 audit(1750949922.188:8): apparmor="STATUS" operation="profile_load" profile="unconfined" name="lsb_release" pid=693 comm="apparmor_parser"
[    5.674143] audit: type=1400 audit(1750949922.236:9): apparmor="STATUS" operation="profile_load" profile="unconfined" name="libvirtd" pid=698 comm="apparmor_parser"
[    5.675681] audit: type=1400 audit(1750949922.236:10): apparmor="STATUS" operation="profile_load" profile="unconfined" name="libvirtd//qemu_bridge_helper" pid=698 comm="apparmor_parser"
[    5.777743] audit: type=1400 audit(1750949922.340:11): apparmor="STATUS" operation="profile_load" profile="unconfined" name="/usr/lib/NetworkManager/nm-dhcp-client.action" pid=695 comm="apparmor_parser"
[  OK  ] Finished apparmor.service - Load AppArmor profiles.
[    5.893996] [trim-mounts-hash]'proc'[00000000857eda49]'s top mountpoint dentry: run
[    5.894674] [trim-mounts-hash]dentry 'run' type: 0
[  OK  ] Reached target sound.target - Sound Card.
[  OK  ] Started systemd-timesyncd.…0m - Network Time Synchronization.
[  OK  ] Reached target sysinit.target - System Initialization.
[  OK  ] Started nut-driver-enumerator.path.
[  OK  ] Started systemd-tmpfiles-c… Cleanup of Temporary Directories.
[  OK  ] Reached target paths.target - Path Units.
[  OK  ] Reached target time-set.target - System Time Set.
[  OK  ] Started apt-daily.timer - Daily apt download activities.
[  OK  ] Started apt-daily-upgrade.… apt upgrade and clean activities.
[  OK  ] Started dpkg-db-backup.tim… Daily dpkg database backup timer.
[  OK  ] Started e2scrub_all.timertadata Check for All Filesystems.
[  OK  ] Started exim4-base.timer - Daily exim4-base housekeeping.
[  OK  ] Started fstrim.timer - Discard unused blocks once a week.
[  OK  ] Started logrotate.timer - Daily rotation of log files.
[  OK  ] Started man-db.timer - Daily man-db regeneration.
[  OK  ] Started sysstat-collect.ti… accounting tool every 10 minutes.
[  OK  ] Started sysstat-summary.ti…of yesterday's process accounting.
[  OK  ] Reached target timers.target - Timer Units.
[  OK  ] Listening on avahi-daemon.…NS/DNS-SD Stack Activation Socket.
[  OK  ] Listening on dbus.socket-Bus System Message Bus Socket.
         Starting docker.socket - Docker Socket for the API...
[  OK  ] Listening on libvirtd.socket - Libvirt local socket.
[  OK  ] Listening on libvirtd-admi…socket - Libvirt admin socket.
[  OK  ] Listening on libvirtd-ro.s… - Libvirt local read-only socket.
[  OK  ] Listening on uuidd.socket - UUID daemon activation socket.
[  OK  ] Listening on virtlockd.soc…rtual machine lock manager socket.
[  OK  ] Listening on virtlockd-adm…machine lock manager admin socket.
[  OK  ] Listening on virtlogd.sock…irtual machine log manager socket.
[  OK  ] Listening on virtlogd-admi…irtual machine log manager socket.
[  OK  ] Listening on docker.socket - Docker Socket for the API.
[  OK  ] Reached target sockets.target - Socket Units.
[  OK  ] Reached target basic.target - Basic System.
         Starting avahi-daemon.serv…e - Avahi mDNS/DNS-SD Stack...
[  OK  ] Started cron.service -…kground program processing daemon.
         Starting dbus.service - D-Bus System Message Bus...
         Starting e2scrub_reap.serv…e ext4 Metadata Check Snapshots...
         Starting nut-driver-enumer…ces into systemd unit instances...
         Starting polkit.service - Authorization Manager...
         Starting resize-rootfs.ser…e - fnnas filesystem resize...
         Starting rsyslog.service - System Logging Service...
         Starting smartmontools.ser…rting Technology (SMART) Daemon...
         Starting sysstat.service - Resets System Activity Logs...
         Starting system_setmac.ser…able MAC addresses from MMC CID...
         Starting systemd-logind.se…ice - User Login Management...
         Starting systemd-machined.… Container Registration Service...
[    6.043056] [trim-mounts-hash]'proc'[00000000857eda49]'s top mountpoint dentry: run
[    6.043736] [trim-mounts-hash]dentry 'run' type: 0
[  OK  ] Started wsdd2.service …MNR Discovery/Name Service Daemon.
         Starting zramswap.service - Linux zramswap setup...
[    6.050557] [trim-mounts-hash]'dev'[00000000cb17a093]'s top mountpoint dentry: tmp
[    6.051254] [trim-mounts-hash]dentry 'tmp' type: 0
[    6.045706] fnnas-tf[894]: [ STEPS ] Welcome to the partition expansion tool.
[  OK  ] Finished system_setmac.ser…stable MAC addresses from MMC CID.
[  OK  ] Reached target network-pre…get - Preparation for Network.
         Starting ovsdb-server.serv…0m - Open vSwitch[    6.073673] zram0: detected capacity change from 0 to 16336976
 Database Unit...
[  OK  ] Started rsyslog.service - System Logging Service.
[  OK  ] Finished sysstat.service - Resets System Activity Logs.
[    6.091468] Adding 8168484k swap on /dev/zram0.  Priority:100 extents:1 across:8168484k SS
[  OK  ] Finished zramswap.service - Linux zramswap setup.
[  OK  ] Started dbus.service - D-Bus System Message Bus.
         Starting NetworkManager.service - Network Manager...
         Starting wpa_supplicant.service - WPA supplicant...
[  OK  ] Finished e2scrub_reap.serv…ine ext4 Metadata Check Snapshots.
[  OK  ] Started systemd-machined.s…nd Container Registration Service.
[  OK  ] Started avahi-daemon.service - Avahi mDNS/DNS-SD Stack.
[  OK  ] Started systemd-logind.service - User Login Management.
[  OK  ] Started polkit.service - Authorization Manager.
         Starting ModemManager.service - Modem Manager...
[    6.112618] fnnas-tf[894]: [ INFO ] Target Disk: [ sda ], Root Partition: [ 2 ], PT Type: [ gpt ]
[    6.218389] nvme nvme0: using unchecked data buffer
[  OK  ] Stopped wsdd2.service …MNR Discovery/Name Service Daemon.
[  OK  ] Started wsdd2.service …MNR Discovery/Name Service Daemon.
[    6.246377] [trim-mounts-hash]'dev'[00000000a13ddb3d]'s top mountpoint dentry: tmp
[    6.247171] [trim-mounts-hash]dentry 'tmp' type: 0
[  OK  ] Started smartmontools.serv…porting Technology (SMART) Daemon.
[  OK  ] Started wpa_supplicant.service - WPA supplicant.
[  OK  ] Finished nut-driver-enumer…vices into systemd unit instances.
[  OK  ] Reached target nut-driver.…wer device drivers on this system.
[  OK  ] Started ModemManager.service - Modem Manager.
[  OK  ] Stopped wsdd2.service …MNR Discovery/Name Service Daemon.
[  OK  ] Started wsdd2.service …MNR Di[    6.441973] [trim-mounts-hash]'dev'[000000006eec0954]'s top mountpoint dentry: tmp
scovery/Name Service Daemon.
[    6.443120] [trim-mounts-hash]dentry 'tmp' type: 0
[FAILED] Failed to start wsdd2.serv…MNR Discovery/Name Service Daemon.
See 'systemctl status wsdd2.service' for details.
[  OK  ] Started NetworkManager.service - Network Manager.
         Starting NetworkManager-wa…m - Network Manager Wait Online...
         Starting systemd-hostnamed.service - Hostname Service...
[    6.519741] [trim-mounts-hash]'dev'[000000006a6baf40]'s top mountpoint dentry: tmp
[    6.520428] [trim-mounts-hash]dentry 'tmp' type: 0
[    6.532246] [trim-mounts-hash]'proc'[00000000857eda49]'s top mountpoint dentry: run
[    6.532937] [trim-mounts-hash]dentry 'run' type: 0
[  OK  ] Started systemd-hostnamed.service - Hostname Service.
[  OK  ] Listening on systemd-rfkil…l Switch Status /dev/rfkill Watch.
         Starting NetworkManager-di…nager Script Dispatcher Service...
[  OK  ] Started ovsdb-server.servi… - Open vSwitch Database Unit.
         Starting ovs-vswitchd.serv… - Open vSwitch Forwarding Unit...
[  OK  ] Started NetworkManager-dis…Manager Script Dispatcher Service.
[    6.689006] Realtek Internal NBASE-T PHY r8169-3-3100:00: attached PHY driver (mii_bus:phy_addr=r8169-3-3100:00, irq=MAC)
[    6.782623] openvswitch: Open vSwitch switching datapath
[    6.881436] r8169 0003:31:00.0 eth0: Link is Down
[    6.913134] Realtek Internal NBASE-T PHY r8169-2-2100:00: attached PHY driver (mii_bus:phy_addr=r8169-2-2100:00, irq=MAC)
[    7.097445] r8169 0002:21:00.0 eth1: Link is Down
[    7.111559] rk_gmac-dwmac fe1c0000.ethernet eth2: Register MEM_TYPE_PAGE_POOL RxQ-0
[    7.114766] rk_gmac-dwmac fe1c0000.ethernet eth2: Register MEM_TYPE_PAGE_POOL RxQ-1
[  OK  ] Started ovs-vswitchd.servi…0m - Open vSwitch Forwarding Unit.
         Starting networking.service - Raise network interfaces...
         Starting openvswitch-switch.service - Open vSwitch...
[  OK  ] Finished openvswitch-switch.service - Open vSwitch.
[    8.121066] rk_gmac-dwmac fe1c0000.ethernet eth2: Failed to reset the dma
[    8.121671] rk_gmac-dwmac fe1c0000.ethernet eth2: stmmac_hw_setup: DMA engine initialization failed
[    8.122463] rk_gmac-dwmac fe1c0000.ethernet eth2: __stmmac_open: Hw setup failed
[    8.137776] rk_gmac-dwmac fe1b0000.ethernet eth3: Register MEM_TYPE_PAGE_POOL RxQ-0
[    8.139658] rk_gmac-dwmac fe1b0000.ethernet eth3: Register MEM_TYPE_PAGE_POOL RxQ-1
[    9.145286] rk_gmac-dwmac fe1b0000.ethernet eth3: Failed to reset the dma
[    9.145894] rk_gmac-dwmac fe1b0000.ethernet eth3: stmmac_hw_setup: DMA engine initialization failed
[    9.146686] rk_gmac-dwmac fe1b0000.ethernet eth3: __stmmac_open: Hw setup failed
[  OK  ] Finished networking.service - Raise network interfaces.
[  OK  ] Reached target network.target - Network.
         Starting containerd.servic… - containerd container runtime...
         Starting libvirt-guests.se…d/Resume Running libvirt Guests...
         Starting libvirtd.service - Virtualization daemon...
[  OK  ] Started nut-server.service… power devices information server.
[  OK  ] Started nut-monitor.servic…e monitor and shutdown controller.
[  OK  ] Reached target nut.targetient (if enabled) on this system.
         Starting postgresql@15-mai…0m - PostgreSQL Cluster 15-main...
         Starting smbd.service - Samba SMB/CIFS daemon (smbd)...
         Starting ssh.service - OpenBSD Secure Shell server...
         Starting systemd-user-sess…vice - Permit User Sessions...
[  OK  ] Finished libvirt-guests.se…end/Resume Running libvirt Guests.
[  OK  ] Finished systemd-user-sess…ervice - Permit User Sessions.
[  OK  ] Started ssh.service - OpenBSD Secure Shell server.
[    9.395288] fnnas-tf[894]: [ INFO ] Expanding root partition...
[    9.411029] fnnas-tf[894]: [ INFO ] Current partition: 5GiB, Disk: 119GiB
[    9.411172] fnnas-tf[894]: [ INFO ] GPT partition table detected.
[    9.555020] fnnas-tf[894]: [ INFO ] Strategy: Limit partition 2 to 16GiB...
[    9.827831] fnnas-tf[1227]: Warning: Partition /dev/sda2 is being used. Are you sure you want to continue?
Yes/No? Yes                                                               
[  OK  ] Started libvirtd.service - Virtualization daemon.
[   10.033589] fnnas-tf[1227]: Information: You may need to update /etc/fstab.
[  OK  ] Started smbd.service - Samba SMB/CIFS daemon (smbd).
[   10.238031] r8169 0002:21:00.0: invalid VPD tag 0x00 (size 0) at offset 0; assume missing optional EEPROM
[   10.248095] r8169 0003:31:00.0: invalid VPD tag 0x00 (size 0) at offset 0; assume missing optional EEPROM
[  OK  ] Started containerd.service…0m - containerd container runtime.
[   11.687316] r8169 0002:21:00.0 eth1: Link is Up - 1Gbps/Full - flow control rx/tx
[  OK  ] Started postgresql@15-main… - PostgreSQL Cluster 15-main.
         Starting postgresql.service - PostgreSQL RDBMS...
[  OK  ] Finished postgresql.service - PostgreSQL RDBMS.
                                                                          
[   13.230648] fnnas-tf[894]: [ INFO ] Expanding filesystem...
[   13.287441] BTRFS info (device sda2): resize device /dev/sda2 (devid 1) from 6441402368 to 16626221056
[   13.283932] fnnas-tf[1361]: Resize device id 1 (/dev/sda2) from 6.00GiB to max
[   13.284965] fnnas-tf[894]: [ SUCCESS ] Partition expanded successfully.
[   13.672332] fnnas-tf[894]: [ INFO ] Service resize-rootfs.service disabled
[  OK  ] Finished resize-rootfs.service - fnnas filesystem resize.
[  OK  ] Finished NetworkManager-wa…[0m - Network Manager Wait Online.
[  OK  ] Reached target network-online.target - Network is Online.
         Starting exim4.service… LSB: exim Mail Transport Agent...
         Starting nfs-mountd.service - NFS Mount Daemon...
         Starting nmbd.service - Samba NMB Daemon...
         Starting ovs-record-hostna… - Open vSwitch Record Hostname...
         Starting rc-local.service - /etc/rc.local Compatibility...
         Starting rpc-statd.service…us monitor for NFSv2/3 locking....
         Starting samba-ad-dc.service - Samba AD Daemon...
[  OK  ] Started nfs-mountd.service - NFS Mount Daemon.
[  OK  ] Started rc-local.service - /etc/rc.local Compatibility.
[  OK  ] Started rpc-statd.servicetus monitor for NFSv2/3 locking..
         Starting nfs-server.service - NFS server and services...
         Starting plymouth-quit-wai… until boot process finishes up...
         Starting plymouth-quit.ser… Terminate Plymouth Boot Screen...
         Starting show_startup_info… trim show startup info service...
         Starting trim_init.service - trim init service...
[  OK  ] Finished show_startup_info… - trim show startup info service.


███████╗███╗   ██╗ ██████╗ ███████╗
██╔════╝████╗  ██║██╔═══██╗██╔════╝
█████╗  ██╔██╗ ██║██║   ██║███████╗
██╔══╝  ██║╚██╗██║██║   ██║╚════██║
██║     ██║ ╚████║╚██████╔╝███████║
╚═╝     ╚═╝  ╚═══╝ ╚═════╝ ╚══════╝

OS version:         fnOS v1.1.31
Hostname:           fnnas
IPv4 for eth1:      192.168.33.38

fnOS Web UI can be directly accessed at: http://192.168.33.38:5666

For more information, help or support, go here:
https://www.fnnas.com

fnnas login: 

```


boot.scr开头，分隔字段采用`0xff ff ff ff`

```shell
root@fnos:/boot# hexdump -C boot.scr |more
00000000  27 05 19 56 28 d3 a2 fb  63 4f 65 96 00 00 0d 0e  |'..V(...cOe.....|
00000010  00 00 00 00 00 00 00 00  b3 d6 ce 96 05 02 06 00  |................|
00000020  66 6c 61 74 6d 61 78 20  6c 6f 61 64 20 73 63 72  |flatmax load scr|
00000030  69 70 74 00 00 00 00 00  00 00 00 00 00 00 00 00  |ipt.............|
00000040  00 00 0d 06 ff ff ff ff  23 20 44 4f 20 4e 4f 54  |........# DO NOT|
00000050  20 45 44 49 54 20 54 48  49 53 20 46 49 4c 45 0a  | EDIT THIS FILE.|
00000060  23 0a 23 20 50 6c 65 61  73 65 20 65 64 69 74 20  |#.# Please edit |
00000070  2f 62 6f 6f 74 2f 61 72  6d 62 69 61 6e 45 6e 76  |/boot/armbianEnv|
00000080  2e 74 78 74 20 74 6f 20  73 65 74 20 73 75 70 70  |.txt to set supp|
00000090  6f 72 74 65 64 20 70 61  72 61 6d 65 74 65 72 73  |orted parameters|
000000a0  0a 23 0a 0a 73 65 74 65  6e 76 20 6c 6f 61 64 5f  |.#..setenv load_|
000000b0  61 64 64 72 20 22 30 78  39 30 30 30 30 30 30 22  |addr "0x9000000"|
000000c0  0a 73 65 74 65 6e 76 20  6f 76 65 72 6c 61 79 5f  |.setenv overlay_|
000000d0  65 72 72 6f 72 20 22 66  61 6c 73 65 22 0a 23 20  |error "false".# |
```


load_addr固定地址0x9000000

```shell
root@fnos:/boot# more boot.cmd
# DO NOT EDIT THIS FILE
#
# Please edit /boot/armbianEnv.txt to set supported parameters
#

setenv load_addr "0x9000000"
setenv overlay_error "false"
# default values
setenv rootdev "/dev/mmcblk0p1"
setenv verbosity "1"
setenv console "both"
setenv bootlogo "false"
setenv rootfstype "ext4"
setenv rootflags "rw,errors=remount-ro"
setenv docker_optimizations "on"
setenv earlycon "off"
```




---

## QA


### boot.scr引导报错问题

错误日志：

```shell
Try nvme 0:1 /boot.scr
Found boot.scr on nvme 0:1
3406 bytes read in 2 ms (1.6 MiB/s)
## Executing script at 00500000
Unknown command '󥞭 try 'help'
boot.scr returned, trying next...
Try nvme 0:1 /boot/boot.scr
Try nvme 0:2 /boot.scr
Try nvme 0:2 /boot/boot.scr

Device 1: unknown device
NVMe: no nvme bootable media
SCSI: scsi scan
scanning bus for devices...
SATA link 0 timeout.
```

关键信息：`Unknown command '󥞭 try 'help'`


已知问题，因为boot.scr格式变化

 ```shell
    [root@hailun /data/g98]# hexdump -C boot-files/boot.scr | head -n 10
    00000000  27 05 19 56 28 c6 22 12  6a 2f 9d 1e 00 00 12 7c  |'..V(.".j/.....||
    00000010  00 00 00 00 00 00 00 00  c5 5f 2f 70 05 02 06 00  |........._/p....|
    00000020  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
    *
    00000040  00 00 12 74 00 00 00 00  23 20 44 4f 20 4e 4f 54  |...t....# DO NOT|
    00000050  20 45 44 49 54 20 54 48  49 53 20 46 49 4c 45 0a  | EDIT THIS FILE.|
    00000060  23 0a 23 20 50 6c 65 61  73 65 20 65 64 69 74 20  |#.# Please edit |
    00000070  2f 62 6f 6f 74 2f 66 6e  45 6e 76 2e 74 78 74 20  |/boot/fnEnv.txt |
    00000080  74 6f 20 73 65 74 20 73  75 70 70 6f 72 74 65 64  |to set supported|
    00000090  20 70 61 72 61 6d 65 74  65 72 73 0a 23 0a 0a 73  | parameters.#..s|

    偏移 0x40:  00 00 12 74   → len = 0x1274 = 4724
    偏移 0x44:  00 00 00 00   → 零终止符 ✔
    偏移 0x48:  23 20 44 4f   → "# DO NOT EDIT..."（脚本正文）

    [root@hailun /data/g98]# hexdump -C fnos/boot.scr | head -n 10
    00000000  27 05 19 56 28 d3 a2 fb  63 4f 65 96 00 00 0d 0e  |'..V(...cOe.....|
    00000010  00 00 00 00 00 00 00 00  b3 d6 ce 96 05 02 06 00  |................|
    00000020  66 6c 61 74 6d 61 78 20  6c 6f 61 64 20 73 63 72  |flatmax load scr|
    00000030  69 70 74 00 00 00 00 00  00 00 00 00 00 00 00 00  |ipt.............|
    00000040  00 00 0d 06 ff ff ff ff  23 20 44 4f 20 4e 4f 54  |........# DO NOT|
    00000050  20 45 44 49 54 20 54 48  49 53 20 46 49 4c 45 0a  | EDIT THIS FILE.|
    00000060  23 0a 23 20 50 6c 65 61  73 65 20 65 64 69 74 20  |#.# Please edit |
    00000070  2f 62 6f 6f 74 2f 61 72  6d 62 69 61 6e 45 6e 76  |/boot/xxxxxxxEnv|
    00000080  2e 74 78 74 20 74 6f 20  73 65 74 20 73 75 70 70  |.txt to set supp|
    00000090  6f 72 74 65 64 20 70 61  72 61 6d 65 74 65 72 73  |orted parameters|
    
    偏移 0x40:  00 00 0d 06   → len = 0x0D06 = 3334
    偏移 0x44:  FF FF FF FF   → 0xFFFFFFFF ≠ 0 ！！
    偏移 0x48:  23 20 44 4f   → "# DO NOT EDIT..."（脚本正文）
```

boot.scr 的数据段多了一个 0xFFFFFFFF 字段。这通常由以下原因产生：

1. mkimage 版本 / 调用方式不同：可能使用了 -d file1:file2 多文件模式，但第二个文件不存在或为空，导致写入了 0xFFFFFFFF 占位。
2. 厂商定制 U-Boot：某些 SoC（如 Amlogic、Allwinner）的 ROM/BROM 对 boot.scr 有私有解析逻辑，只取第一个长度字段后直接跳到固定偏移
执行，不依赖零终止符。该文件可能是为那种 bootloader 生成的。
3. 打包脚本 bug。

解决措施：

修改uboot

```c
diff --git a/cmd/source.c b/cmd/source.c
index 1a00af93e4..2c0a3a490f 100644
--- a/cmd/source.c
+++ b/cmd/source.c
@@ -89,7 +89,9 @@ source (ulong addr, const char *fit_uname)
                 * past the zero-terminated sequence of image lengths to get
                 * to the actual image data
                 */
-               while (*data++ != 0);
+               while (*data != 0 && *data != 0xFFFFFFFF)
+                       data++;
+               data++;
                break;
 #endif
```








