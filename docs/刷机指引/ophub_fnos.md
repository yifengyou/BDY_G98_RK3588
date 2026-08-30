# fnos

## ophub fnos

### 下载地址

* https://github.com/ophub/fnnas/releases/download/fnnas_rockchip_1253/fnnas_rockchip_bdy-g98_k6.18.18_2026.07.23.img.gz
* https://github.com/ophub/fnnas/releases/download/fnnas_rockchip_1253/fnnas_rockchip_bdy-g98_k6.18.18_2026.07.26.img.gz
* https://github.com/ophub/fnnas/releases/download/fnnas_rockchip_1253/fnnas_rockchip_bdy-g98_k6.18.18_2026.08.18.img.gz
* https://github.com/ophub/fnnas/releases/download/fnnas_rockchip_1253/fnnas_rockchip_bdy-g98_k6.18.18_2026.08.19.img.gz
* https://github.com/ophub/fnnas/releases/download/fnnas_rockchip_1253/fnnas_rockchip_bdy-g98_k6.18.18_2026.08.20.img.gz

### fnnas_rockchip_bdy-g98_k6.18.18_2026.07.23.img.gz


测试描述：
1. 能正常引导，网络不支持。非常不建议用这个固件，早期适配，bug多。
2. 其他待测试

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
3406 bytes read in 25 ms (132.8 KiB/s)
## Executing script at 00500000
Ignoring attempt to modify 'load_addr'
Boot script loaded from scsi 0
415 bytes read in 13 ms (30.3 KiB/s)
19195644 bytes read in 376 ms (48.7 MiB/s)
32926208 bytes read in 596 ms (52.7 MiB/s)
187034 bytes read in 99 ms (1.8 MiB/s)
311 bytes read in 232 ms (1000 Bytes/s)
Applying kernel provided DT overlay rk3588-uart7-m2.dtbo
** File not found /dtb/rockchip/overlay/rk3588-fixup.scr **
Fdt Ramdisk skip relocation
No misc partition
## Loading init Ramdisk from Legacy Image at 0a200000 ...
   Image Name:   uInitrd
   Image Type:   AArch64 Linux RAMDisk Image (uncompressed)
   Data Size:    19195580 Bytes = 18.3 MiB
   Load Address: 00000000
   Entry Point:  00000000
   Verifying Checksum ... OK
## Flattened Device Tree blob at 0x08300000
   Booting using the fdt blob at 0x08300000
   reserving fdt memory region: addr=8300000 size=94000
   Using Device Tree in place at 0000000008300000, end 0000000008396fff
can't get otp device, ret=-19
can't found rockchip,drm-logo, use rockchip,fb-logo
WARNING: could not set reg FDT_ERR_BADOFFSET.
failed to reserve fb-loader-logo memory
## reserved-memory:
  shmem@10f000: addr=10f000 size=100
Adding bank: 0x00200000 - 0x08400000 (size: 0x08200000)
Adding bank: 0x09400000 - 0xf0000000 (size: 0xe6c00000)
Adding bank: 0x100000000 - 0x3fc000000 (size: 0x2fc000000)
Adding bank: 0x3fc500000 - 0x3fff00000 (size: 0x03a00000)
Adding bank: 0x4f0000000 - 0x500000000 (size: 0x10000000)
Total: 7992.657/8067.920 ms

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
[    0.000000] NUMA: Faking a node at [mem 0x0000000000200000-0x00000004ffffffff]
[    0.000000] NODE_DATA(0) allocated [mem 0x4fdf123c0-0x4fdf14b7f]
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
[    0.000000] Kernel command line: root=UUID=4f1f422d-02c3-491b-8a19-39e0c4db532a rootwait rootfstype=btrfs rootflags=compress=zstd:1 bootsplash.bootfile=bootsplash.armbian earlycon console=ttyS2,1500000 console=ttyFIQ0 console=tty1 consoleblank=0 loglevel=7 ubootpart=a7a3606e-21bc-4ad9-a1a9-b683294fd955 usb-storage.quirks=0x2537:0x1066:u,0x2537:0x1068:u rw rootwait net.ifnames=0 max_loop=128 cgroup_enable=cpuset cgroup_memory=1 cgroup_enable=memory swapaccount=1 androidboot.fwver=ddr-v1.21-cb12b99cc23,spl-v1.14,bl31-v1.54,bl32-v1.20,uboot-gc09af4f87-08/29/2026
[    0.000000] Unknown kernel command line parameters "ubootpart=a7a3606e-21bc-4ad9-a1a9-b683294fd955 cgroup_enable=memory cgroup_memory=1", will be passed to user space.
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
[    0.001705] Console: colour dummy device 80x25
[    0.002114] printk: legacy console [tty1] enabled
[    0.002573] printk: legacy bootconsole [uart0] disabled
ISr1ig/cy in b
              ISr ig/c  in b
                            ISr ig/c  in b
                                          ISa tn/ey4hold
                                                        ISr in/cy h l 
                                                                      ISr in/c  i   
                                                                                    ISr inTc  i   
                                                                                                  [    0.000000] Booting Linux on physical CPU 0x0000000000 [0x412fd050]
[    0.000000] Linux version 6.18.18-trim (devops@fnnas.com) (aarch64-linux-gnu-gcc (Debian 12.2.0-14) 12.2.0, GNU ld (GNU Binutils for Debian) 2.40) #491 SMP PREEMPT Fri Apr 17 03:28:48 UTC 2026
[    0.000000] KASLR disabled due to lack of seed
[    0.000000] random: crng init done
[    0.000000] Machine model: BDY G98
[    0.000000] earlycon: uart0 at MMIO32 0x00000000feb50000 (options '1500000n8')
[    0.000000] printk: legacy bootconsole [uart0] enabled
[    0.000000] efi: UEFI not found.
[    0.000000] OF: reserved mem: 0x000000000010f000..0x000000000010f0ff (0 KiB) nomap non-reusable shmem@10f000
[    0.000000] NUMA: Faking a node at [mem 0x0000000000200000-0x00000004ffffffff]
[    0.000000] NODE_DATA(0) allocated [mem 0x4fdf123c0-0x4fdf14b7f]
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
[    0.000000] Kernel command line: root=UUID=4f1f422d-02c3-491b-8a19-39e0c4db532a rootwait rootfstype=btrfs rootflags=compress=zstd:1 bootsplash.bootfile=bootsplash.armbian earlycon console=ttyS2,1500000 console=ttyFIQ0 console=tty1 consoleblank=0 loglevel=7 ubootpart=a7a3606e-21bc-4ad9-a1a9-b683294fd955 usb-storage.quirks=0x2537:0x1066:u,0x2537:0x1068:u rw rootwait net.ifnames=0 max_loop=128 cgroup_enable=cpuset cgroup_memory=1 cgroup_enable=memory swapaccount=1 androidboot.fwver=ddr-v1.21-cb12b99cc23,spl-v1.14,bl31-v1.54,bl32-v1.20,uboot-gc09af4f87-08/29/2026
[    0.000000] Unknown kernel command line parameters "ubootpart=a7a3606e-21bc-4ad9-a1a9-b683294fd955 cgroup_enable=memory cgroup_memory=1", will be passed to user space.
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
[    0.001705] Console: colour dummy device 80x25
[    0.002114] printk: legacy console [tty1] enabled
[    0.002573] printk: legacy bootconsole [uart0] disabled
[    0.003148] Calibrating delay loop (skipped), value calculated using timer frequency.. 48.00 BogoMIPS (lpj=96000)
[    0.003173] pid_max: default: 32768 minimum: 301
[    0.003281] LSM: initializing lsm=capability,yama,apparmor
[    0.003347] Yama: becoming mindful.
[    0.003573] AppArmor: AppArmor initialized
[    0.003671] Mount-cache hash table entries: 32768 (order: 6, 262144 bytes, linear)
[    0.003718] Mountpoint-cache hash table entries: 32768 (order: 6, 262144 bytes, linear)
[    0.006135] rcu: Hierarchical SRCU implementation.
[    0.006151] rcu: 	Max phase no-delay instances is 1000.
[    0.006372] Timer migration: 1 hierarchy levels; 8 children per group; 1 crossnode level
[    0.007177] EFI services will not be available.
[    0.007476] smp: Bringing up secondary CPUs ...
[    0.008126] Detected VIPT I-cache on CPU1
[    0.008335] GICv3: CPU1: found redistributor 100 region 0:0x00000000fe6a0000
[    0.008349] GICv3: CPU1: using allocated LPI pending table @0x00000001004c0000
[    0.008391] CPU1: Booted secondary processor 0x0000000100 [0x412fd050]
[    0.009083] Detected VIPT I-cache on CPU2
[    0.009283] GICv3: CPU2: found redistributor 200 region 0:0x00000000fe6c0000
[    0.009295] GICv3: CPU2: using allocated LPI pending table @0x00000001004d0000
[    0.009332] CPU2: Booted secondary processor 0x0000000200 [0x412fd050]
[    0.010006] Detected VIPT I-cache on CPU3
[    0.010204] GICv3: CPU3: found redistributor 300 region 0:0x00000000fe6e0000
[    0.010215] GICv3: CPU3: using allocated LPI pending table @0x00000001004e0000
[    0.010250] CPU3: Booted secondary processor 0x0000000300 [0x412fd050]
[    0.010962] CPU features: detected: Spectre-v4
[    0.010966] CPU features: detected: Spectre-BHB
[    0.010971] CPU features: detected: SSBS not fully self-synchronizing
[    0.010973] Detected PIPT I-cache on CPU4
[    0.011059] GICv3: CPU4: found redistributor 400 region 0:0x00000000fe700000
[    0.011066] GICv3: CPU4: using allocated LPI pending table @0x00000001004f0000
[    0.011087] CPU4: Booted secondary processor 0x0000000400 [0x414fd0b0]
[    0.011714] Detected PIPT I-cache on CPU5
[    0.011807] GICv3: CPU5: found redistributor 500 region 0:0x00000000fe720000
[    0.011814] GICv3: CPU5: using allocated LPI pending table @0x0000000100500000
[    0.011836] CPU5: Booted secondary processor 0x0000000500 [0x414fd0b0]
[    0.012454] Detected PIPT I-cache on CPU6
[    0.012546] GICv3: CPU6: found redistributor 600 region 0:0x00000000fe740000
[    0.012553] GICv3: CPU6: using allocated LPI pending table @0x0000000100510000
[    0.012574] CPU6: Booted secondary processor 0x0000000600 [0x414fd0b0]
[    0.013359] Detected PIPT I-cache on CPU7
[    0.013451] GICv3: CPU7: found redistributor 700 region 0:0x00000000fe760000
[    0.013458] GICv3: CPU7: using allocated LPI pending table @0x0000000100520000
[    0.013479] CPU7: Booted secondary processor 0x0000000700 [0x414fd0b0]
[    0.013550] smp: Brought up 1 node, 8 CPUs
[    0.013814] SMP: Total of 8 processors activated.
[    0.013825] CPU: All CPU(s) started at EL2
[    0.013837] CPU features: detected: 32-bit EL0 Support
[    0.013849] CPU features: detected: Data cache clean to the PoU not required for I/D coherence
[    0.013865] CPU features: detected: Common not Private translations
[    0.013878] CPU features: detected: CRC32 instructions
[    0.013894] CPU features: detected: RCpc load-acquire (LDAPR)
[    0.013906] CPU features: detected: LSE atomic instructions
[    0.013918] CPU features: detected: Privileged Access Never
[    0.013930] CPU features: detected: PMUv3
[    0.013940] CPU features: detected: RAS Extension Support
[    0.013956] CPU features: detected: Speculative Store Bypassing Safe (SSBS)
[    0.014027] alternatives: applying system-wide alternatives
[    0.017350] CPU features: detected: Hardware dirty bit management on CPU4-7
[    0.017763] Memory: 16172540K/16752640K available (17792K kernel code, 2970K rwdata, 5636K rodata, 5568K init, 714K bss, 439824K reserved, 131072K cma-reserved)
[    0.021144] [trim-mounts-hash]'/'[(____ptrval____)]'s top mountpoint dentry: /
[    0.021169] [trim-mounts-hash]dentry '/' type: 0
[    0.021204] devtmpfs: initialized
[    0.030091] clocksource: jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 7645041785100000 ns
[    0.030113] posixtimers hash table entries: 4096 (order: 4, 65536 bytes, linear)
[    0.030148] futex hash table entries: 2048 (131072 bytes on 1 NUMA nodes, total 128 KiB, linear).
[    0.030633] 24528 pages in range for non-PLT usage
[    0.030635] 516048 pages in range for PLT usage
[    0.030753] pinctrl core: initialized pinctrl subsystem
[    0.030966] DMI not present or invalid.
[    0.032463] NET: Registered PF_NETLINK/PF_ROUTE protocol family
[    0.033074] DMA: preallocated 2048 KiB GFP_KERNEL pool for atomic allocations
[    0.033316] DMA: preallocated 2048 KiB GFP_KERNEL|GFP_DMA pool for atomic allocations
[    0.033550] DMA: preallocated 2048 KiB GFP_KERNEL|GFP_DMA32 pool for atomic allocations
[    0.033570] audit: initializing netlink subsys (disabled)
[    0.033666] audit: type=2000 audit(0.032:1): state=initialized audit_enabled=0 res=1
[    0.034877] thermal_sys: Registered thermal governor 'step_wise'
[    0.034907] cpuidle: using governor menu
[    0.035047] hw-breakpoint: found 6 breakpoint and 4 watchpoint registers.
[    0.035150] ASID allocator initialised with 65536 entries
[    0.035217] Serial: AMBA PL011 UART driver
[    0.043594] /vop@fdd90000: Fixed dependency cycle(s) with /hdmi@fde80000
[    0.043622] /hdmi@fde80000: Fixed dependency cycle(s) with /vop@fdd90000
[    0.045737] /pcie@fe180000: Fixed dependency cycle(s) with /pcie@fe180000/legacy-interrupt-controller
[    0.054132] gpio gpiochip0: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.054452] rockchip-gpio fd8a0000.gpio: probed /pinctrl/gpio@fd8a0000
[    0.054569] gpio gpiochip1: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.054685] rockchip-gpio fec20000.gpio: probed /pinctrl/gpio@fec20000
[    0.054790] gpio gpiochip2: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.054897] rockchip-gpio fec30000.gpio: probed /pinctrl/gpio@fec30000
[    0.055002] gpio gpiochip3: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.055108] rockchip-gpio fec40000.gpio: probed /pinctrl/gpio@fec40000
[    0.055257] gpio gpiochip4: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.055365] rockchip-gpio fec50000.gpio: probed /pinctrl/gpio@fec50000
[    0.056443] /pcie@fe150000: Fixed dependency cycle(s) with /pcie@fe150000/legacy-interrupt-controller
[    0.056732] /pcie@fe160000: Fixed dependency cycle(s) with /pcie@fe160000/legacy-interrupt-controller
[    0.057025] /pcie@fe170000: Fixed dependency cycle(s) with /pcie@fe170000/legacy-interrupt-controller
[    0.058481] /hdmi@fde80000: Fixed dependency cycle(s) with /hdmi0-con
[    0.058507] /hdmi0-con: Fixed dependency cycle(s) with /hdmi@fde80000
[    0.059053] HugeTLB: registered 1.00 GiB page size, pre-allocated 0 pages
[    0.059060] HugeTLB: 0 KiB vmemmap can be freed for a 1.00 GiB page
[    0.059066] HugeTLB: registered 32.0 MiB page size, pre-allocated 0 pages
[    0.059070] HugeTLB: 0 KiB vmemmap can be freed for a 32.0 MiB page
[    0.059075] HugeTLB: registered 2.00 MiB page size, pre-allocated 0 pages
[    0.059079] HugeTLB: 0 KiB vmemmap can be freed for a 2.00 MiB page
[    0.059084] HugeTLB: registered 64.0 KiB page size, pre-allocated 0 pages
[    0.059089] HugeTLB: 0 KiB vmemmap can be freed for a 64.0 KiB page
[    0.125486] raid6: neonx8   gen()  6448 MB/s
[    0.193569] raid6: neonx4   gen()  6398 MB/s
[    0.261644] raid6: neonx2   gen()  5402 MB/s
[    0.329718] raid6: neonx1   gen()  4283 MB/s
[    0.397790] raid6: int64x8  gen()  2850 MB/s
[    0.465862] raid6: int64x4  gen()  2992 MB/s
[    0.533930] raid6: int64x2  gen()  2498 MB/s
[    0.602001] raid6: int64x1  gen()  2055 MB/s
[    0.602005] raid6: using algorithm neonx8 gen() 6448 MB/s
[    0.670068] raid6: .... xor() 4866 MB/s, rmw enabled
[    0.670072] raid6: using neon recovery algorithm
[    0.670421] iommu: Default domain type: Translated
[    0.670427] iommu: DMA domain TLB invalidation policy: strict mode
[    0.670847] SCSI subsystem initialized
[    0.671015] usbcore: registered new interface driver usbfs
[    0.671031] usbcore: registered new interface driver hub
[    0.671043] usbcore: registered new device driver usb
[    0.671207] pps_core: LinuxPPS API ver. 1 registered
[    0.671213] pps_core: Software ver. 5.3.6 - Copyright 2005-2007 Rodolfo Giometti <giometti@linux.it>
[    0.671222] PTP clock support registered
[    0.671236] EDAC MC: Ver: 3.0.0
[    0.671366] scmi_core: SCMI protocol bus registered
[    0.671811] NetLabel: Initializing
[    0.671817] NetLabel:  domain hash size = 128
[    0.671820] NetLabel:  protocols = UNLABELED CIPSOv4 CALIPSO
[    0.671848] NetLabel:  unlabeled traffic allowed by default
[    0.671930] vgaarb: loaded
[    0.672216] clocksource: Switched to clocksource arch_sys_counter
[    0.672372] VFS: Disk quotas dquot_6.6.0
[    0.672387] VFS: Dquot-cache hash table entries: 512 (order 0, 4096 bytes)
[    0.672667] AppArmor: AppArmor Filesystem Enabled
[    0.676559] NET: Registered PF_INET protocol family
[    0.676730] IP idents hash table entries: 262144 (order: 9, 2097152 bytes, linear)
[    0.682327] tcp_listen_portaddr_hash hash table entries: 8192 (order: 5, 131072 bytes, linear)
[    0.682455] Table-perturb hash table entries: 65536 (order: 6, 262144 bytes, linear)
[    0.682528] TCP established hash table entries: 131072 (order: 8, 1048576 bytes, linear)
[    0.683302] TCP bind hash table entries: 65536 (order: 9, 2097152 bytes, linear)
[    0.684577] TCP: Hash tables configured (established 131072 bind 65536)
[    0.684648] UDP hash table entries: 8192 (order: 7, 524288 bytes, linear)
[    0.685085] UDP-Lite hash table entries: 8192 (order: 7, 524288 bytes, linear)
[    0.685540] NET: Registered PF_UNIX/PF_LOCAL protocol family
[    0.685560] NET: Registered PF_XDP protocol family
[    0.685570] PCI: CLS 0 bytes, default 64
[    0.685759] Trying to unpack rootfs image as initramfs...
[    0.693514] kvm [1]: nv: 568 coarse grained trap handlers
[    0.693690] kvm [1]: IPA Size Limit: 40 bits
[    0.693710] kvm [1]: GICv3: no GICV resource entry
[    0.693715] kvm [1]: disabling GICv2 emulation
[    0.693735] kvm [1]: GIC system register CPU interface enabled
[    0.693752] kvm [1]: vgic interrupt IRQ18
[    0.693774] kvm [1]: VHE mode initialized successfully
[    0.694544] Initialise system trusted keyrings
[    0.694567] Key type blacklist registered
[    0.694688] workingset: timestamp_bits=44 max_order=22 bucket_order=0
[    0.694961] squashfs: version 4.0 (2009/01/31) Phillip Lougher
[    0.695160] fuse: init (API version 7.45)
[    0.695781] trim_trashbin_init
[    0.695788] trim-trashbin driver major=244,minor=0
[    0.695966] integrity: Platform Keyring initialized
[    0.696114] cryptd: max_cpu_qlen set to 1000
[    0.724759] xor: measuring software checksum speed
[    0.725178]    8regs           :  7938 MB/sec
[    0.725601]    32regs          :  7860 MB/sec
[    0.725904]    arm64_neon      : 10995 MB/sec
[    0.725908] xor: using function: arm64_neon (10995 MB/sec)
[    0.725916] Key type asymmetric registered
[    0.725921] Asymmetric key parser 'x509' registered
[    0.725957] Block layer SCSI generic (bsg) driver version 0.4 loaded (major 243)
[    0.726074] io scheduler mq-deadline registered
[    0.726079] io scheduler kyber registered
[    0.726097] io scheduler bfq registered
[    0.731542] ledtrig-cpu: registered to indicate activity on CPUs
[    0.733319] dma-pl330 fea10000.dma-controller: Loaded driver for PL330 DMAC-241330
[    0.733331] dma-pl330 fea10000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    0.733886] dma-pl330 fea30000.dma-controller: Loaded driver for PL330 DMAC-241330
[    0.733895] dma-pl330 fea30000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    0.734454] dma-pl330 fed10000.dma-controller: Loaded driver for PL330 DMAC-241330
[    0.734463] dma-pl330 fed10000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    0.735448] Serial: 8250/16550 driver, 12 ports, IRQ sharing disabled
[    0.737263] printk: legacy console [ttyS2] disabled
[    0.737400] feb50000.serial: ttyS2 at MMIO 0xfeb50000 (irq = 39, base_baud = 1500000) is a 16550A
[    0.737438] printk: legacy console [ttyS2] enabled
[    0.891232] feba0000.serial: ttyS7 at MMIO 0xfeba0000 (irq = 40, base_baud = 1500000) is a 16550A
[    0.892509] Serial: AMBA driver
[    0.893099] arm-smmu-v3 fc900000.iommu: ias 48-bit, oas 48-bit (features 0x001c1eaf)
[    0.894267] arm-smmu-v3 fc900000.iommu: allocated 65536 entries for cmdq
[    0.895171] arm-smmu-v3 fc900000.iommu: allocated 32768 entries for evtq
[    0.896177] arm-smmu-v3 fc900000.iommu: msi_domain absent - falling back to wired irqs
[    0.897608] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    0.898465] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    0.899313] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    0.900489] platform fdb50000.video-codec: Adding to iommu group 0
[    0.901576] platform fdba0000.video-codec: Adding to iommu group 1
[    0.902599] platform fdba4000.video-codec: Adding to iommu group 2
[    0.903597] platform fdba8000.video-codec: Adding to iommu group 3
[    0.904794] platform fdbac000.video-codec: Adding to iommu group 4
[    0.905984] platform fdc38000.video-codec: Adding to iommu group 5
[    0.907283] platform fdc40000.video-codec: Adding to iommu group 6
[    0.908417] platform fdd90000.vop: Adding to iommu group 7
[    0.944374] loop: module loaded
[    0.944696] er_netlink: netlink socket created (protocol 31)
[    0.945195] Initialized event reporting module
[    0.945754] system_heap: orders[0] = 6
[    0.946084] system_heap: orders[1] = 4
[    0.946412] system_heap: orders[2] = 0
[    0.947285] Key type psk registered
[    0.948363] ahci-dwc fe210000.sata: supply ahci not found, using dummy regulator
[    0.949058] ahci-dwc fe210000.sata: supply phy not found, using dummy regulator
[    0.949848] platform fe210000.sata:sata-port@0: supply target not found, using dummy regulator
[    0.950685] ahci-dwc fe210000.sata: PMPn is limited up to 5 ports
[    0.951261] ahci-dwc fe210000.sata: masking port_map 0x1 -> 0x1
[    0.951787] ahci-dwc fe210000.sata: SSS flag set, parallel bus scan disabled
[    0.952418] ahci-dwc fe210000.sata: AHCI vers 0001.0300, 32 command slots, 6 Gbps, platform mode
[    0.953188] ahci-dwc fe210000.sata: 1/1 ports implemented (port mask 0x1)
[    0.953781] ahci-dwc fe210000.sata: flags: ncq sntf stag pm led clo only pmp fbs pio slum part ccc apst 
[    0.955153] scsi host0: ahci-dwc
[    0.955514] ata1: SATA max UDMA/133 mmio [mem 0xfe210000-0xfe210fff] port 0x100 irq 52 lpm-pol 0
[    0.957324] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/regulators/dcdc-reg7
[    0.958193] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs3-null-pins
[    0.958992] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs2-null-pins
[    0.959791] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs1-null-pins
[    0.961484] thunder_xcv, ver 1.0
[    0.961782] thunder_bgx, ver 1.0
[    0.962076] nicpf, ver 1.0
[    0.963612] rockchip-usb2phy fd5d8000.syscon:usb2phy@8000: Requested PHY is disabled
[    0.963915] usbcore: registered new interface driver usb-storage
[    0.964305] ehci-platform fc800000.usb: EHCI Host Controller
[    0.964309] rockchip-usb2phy fd5dc000.syscon:usb2phy@c000: Requested PHY is disabled
[    0.964319] ehci-platform fc880000.usb: EHCI Host Controller
[    0.964321] rockchip-usb2phy fd5d8000.syscon:usb2phy@8000: Requested PHY is disabled
[    0.964330] ohci-platform fc840000.usb: Generic Platform OHCI controller
[    0.964331] rockchip-usb2phy fd5dc000.syscon:usb2phy@c000: Requested PHY is disabled
[    0.964335] ohci-platform fc8c0000.usb: Generic Platform OHCI controller
[    0.964338] ehci-platform fc880000.usb: new USB bus registered, assigned bus number 1
[    0.964342] ohci-platform fc8c0000.usb: new USB bus registered, assigned bus number 2
[    0.964354] ohci-platform fc840000.usb: new USB bus registered, assigned bus number 3
[    0.964393] ohci-platform fc8c0000.usb: irq 57, io mem 0xfc8c0000
[    0.964444] ehci-platform fc880000.usb: irq 55, io mem 0xfc880000
[    0.964459] ohci-platform fc840000.usb: irq 56, io mem 0xfc840000
[    0.965726] mousedev: PS/2 mouse device common for all mice
[    0.965998] ehci-platform fc800000.usb: new USB bus registered, assigned bus number 4
[    0.966600] i2c_dev: i2c /dev entries driver
[    0.967211] ehci-platform fc800000.usb: irq 54, io mem 0xfc800000
[    0.968591] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to create device link (0x180) with supplier 1-0042 for /power-management@fd8d8000/power-controller/power-domain@8
[    0.976247] ehci-platform fc880000.usb: USB 2.0 started, EHCI 1.00
[    0.977027] usb usb1: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    0.977790] usb usb1: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    0.978437] usb usb1: Product: EHCI Host Controller
[    0.978896] usb usb1: Manufacturer: Linux 6.18.18-trim ehci_hcd
[    0.979431] usb usb1: SerialNumber: fc880000.usb
[    0.979785] sdhci: Secure Digital Host Controller Interface driver
[    0.980360] hub 1-0:1.0: USB hub found
[    0.980396] sdhci: Copyright(c) Pierre Ossman
[    0.980753] hub 1-0:1.0: 1 port detected
[    0.981117] Synopsys Designware Multimedia Card Interface Driver
[    0.982344] sdhci-pltfm: SDHCI platform and OF driver helper
[    0.983915] arm-scmi arm-scmi.0.auto: Using scmi_smc_transport
[    0.984040] mmc2: CQHCI version 5.10
[    0.984452] arm-scmi arm-scmi.0.auto: SCMI max-rx-timeout: 30ms / max-msg-size: 104bytes / max-msg: 20
[    0.985630] scmi_protocol scmi_dev.1: Enabled polling mode TX channel - prot_id:16
[    0.986361] arm-scmi arm-scmi.0.auto: SCMI Notifications - Core Enabled.
[    0.986969] arm-scmi arm-scmi.0.auto: SCMI Protocol v2.0 'rockchip:' Firmware version 0x0
[    0.987708] arm-scmi arm-scmi.0.auto: Enabling SCMI Quirk [quirk_clock_rates_triplet_out_of_spec]
[    0.988233] ehci-platform fc800000.usb: USB 2.0 started, EHCI 1.00
[    0.989094] usb usb4: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    0.989674] SMCCC: SOC_ID: ARCH_SOC_ID not implemented, skipping ....
[    0.989818] usb usb4: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    0.989985] hid: raw HID events driver (C) Jiri Kosina
[    0.990385] usb usb4: Product: EHCI Host Controller
[    0.990432] usbcore: registered new interface driver usbhid
[    0.991018] usb usb4: Manufacturer: Linux 6.18.18-trim ehci_hcd
[    0.991022] usbhid: USB HID core driver
[    0.991026] usb usb4: SerialNumber: fc800000.usb
[    0.993823] hw perfevents: enabled with armv8_cortex_a55 PMU driver, 7 (0,8000003f) counters available
[    0.994029] hub 4-0:1.0: USB hub found
[    0.994987] hub 4-0:1.0: 1 port detected
[    0.995455] hw perfevents: enabled with armv8_cortex_a76 PMU driver, 7 (0,8000003f) counters available
[    0.997318] NET: Registered PF_INET6 protocol family
[    0.998632] Segment Routing with IPv6
[    0.998970] In-situ OAM (IOAM) with IPv6
[    0.999343] NET: Registered PF_PACKET protocol family
[    0.999799] bridge: filtering via arp/ip/ip6tables is no longer available by default. Update your scripts to load br_netfilter if you need this.
[    1.001197] 8021q: 802.1Q VLAN Support v1.8
[    1.001597] Key type dns_resolver registered
[    1.005222] registered taskstats version 1
[    1.005665] Loading compiled-in X.509 certificates
[    1.010371] zswap: loaded using pool zstd
[    1.010893] Demotion targets for Node 0: null
[    1.011328] Key type .fscrypt registered
[    1.011673] Key type fscrypt-provisioning registered
[    1.012703] Btrfs loaded, zoned=yes, fsverity=yes
[    1.013164] Key type encrypted registered
[    1.013518] AppArmor: AppArmor sha256 policy hashing enabled
[    1.024523] usb usb3: New USB device found, idVendor=1d6b, idProduct=0001, bcdDevice= 6.18
[    1.025284] usb usb3: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    1.025930] usb usb3: Product: Generic Platform OHCI controller
[    1.026459] usb usb3: Manufacturer: Linux 6.18.18-trim ohci_hcd
[    1.026988] usb usb3: SerialNumber: fc840000.usb
[    1.028066] hub 3-0:1.0: USB hub found
[    1.028171] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    1.028475] hub 3-0:1.0: 1 port detected
[    1.029380] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    1.030022] usb usb2: New USB device found, idVendor=1d6b, idProduct=0001, bcdDevice= 6.18
[    1.030538] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    1.031164] usb usb2: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    1.032630] usb usb2: Product: Generic Platform OHCI controller
[    1.033150] usb usb2: Manufacturer: Linux 6.18.18-trim ohci_hcd
[    1.033427] fan53555-regulator 0-0042: FAN53555 Option[10] Rev[1] Detected!
[    1.033668] usb usb2: SerialNumber: fc8c0000.usb
[    1.034109] fan53555-regulator 0-0043: FAN53555 Option[10] Rev[1] Detected!
[    1.034116] hub 2-0:1.0: USB hub found
[    1.034131] hub 2-0:1.0: 1 port detected
[    1.037753] Freeing initrd memory: 18740K
[    1.040488] rockchip-dw-pcie a40c00000.pcie: host bridge /pcie@fe180000 ranges:
[    1.041147] rockchip-dw-pcie a40c00000.pcie:       IO 0x00f3100000..0x00f31fffff -> 0x00f3100000
[    1.041920] rockchip-dw-pcie a40c00000.pcie:      MEM 0x00f3200000..0x00f3ffffff -> 0x00f3200000
[    1.042689] rockchip-dw-pcie a40c00000.pcie:      MEM 0x09c0000000..0x09ffffffff -> 0x09c0000000
[    1.043580] rockchip-dw-pcie a40c00000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    1.068909] mmc2: SDHCI controller on fe2e0000.mmc [fe2e0000.mmc] using ADMA
[    1.080665] mmc2: Failed to initialize a non-removable card
[    1.244399] rockchip-dw-pcie a40c00000.pcie: PCIe Gen.2 x1 link up
[    1.245658] rockchip-dw-pcie a40c00000.pcie: PCI host bridge to bus 0003:30
[    1.246270] pci_bus 0003:30: root bus resource [bus 30-3f]
[    1.246753] pci_bus 0003:30: root bus resource [io  0x0000-0xfffff] (bus address [0xf3100000-0xf31fffff])
[    1.247588] pci_bus 0003:30: root bus resource [mem 0xf3200000-0xf3ffffff]
[    1.248190] pci_bus 0003:30: root bus resource [mem 0x9c0000000-0x9ffffffff]
[    1.248859] pci 0003:30:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    1.249508] pci 0003:30:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    1.250050] pci 0003:30:00.0: PCI bridge to [bus 01-ff]
[    1.250509] pci 0003:30:00.0:   bridge window [io  0x0000-0x0fff]
[    1.251044] pci 0003:30:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    1.251639] pci 0003:30:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    1.252347] pci 0003:30:00.0: supports D1 D2
[    1.252723] pci 0003:30:00.0: PME# supported from D0 D1 D3hot
[    1.253826] pci 0003:30:00.0: Adding to iommu group 8
[    1.258266] pci 0003:30:00.0: Primary bus is hard wired to 0
[    1.258767] pci 0003:30:00.0: bridge configuration invalid ([bus 01-ff]), reconfiguring
[    1.259569] pci 0003:31:00.0: [10ec:8125] type 00 class 0x020000 PCIe Endpoint
[    1.260350] pci 0003:31:00.0: BAR 0: initial BAR value 0x00000000 invalid
[    1.260944] pci 0003:31:00.0: BAR 0 [io  size 0x0100]
[    1.261399] pci 0003:31:00.0: BAR 2 [mem 0x00000000-0x0000ffff 64bit]
[    1.261969] pci 0003:31:00.0: BAR 4 [mem 0x00000000-0x00003fff 64bit]
[    1.262870] pci 0003:31:00.0: supports D1 D2
[    1.263246] pci 0003:31:00.0: PME# supported from D0 D1 D2 D3hot D3cold
[    1.264326] pci 0003:31:00.0: Adding to iommu group 8
[    1.272255] pci 0003:31:00.0: ASPM: default states L0s L1
[    1.272751] pci_bus 0003:31: busn_res: [bus 31-3f] end is updated to 31
[    1.273339] pci 0003:30:00.0: bridge window [mem 0xf3200000-0xf32fffff]: assigned
[    1.273995] pci 0003:30:00.0: ROM [mem 0xf3300000-0xf330ffff pref]: assigned
[    1.274613] pci 0003:30:00.0: bridge window [io  0x1000-0x1fff]: assigned
[    1.275208] pci 0003:31:00.0: BAR 2 [mem 0xf3200000-0xf320ffff 64bit]: assigned
[    1.275875] pci 0003:31:00.0: BAR 4 [mem 0xf3210000-0xf3213fff 64bit]: assigned
[    1.276547] pci 0003:31:00.0: BAR 0 [io  0x1000-0x10ff]: assigned
[    1.277089] pci 0003:30:00.0: PCI bridge to [bus 31]
[    1.277524] pci 0003:30:00.0:   bridge window [io  0x1000-0x1fff]
[    1.278058] pci 0003:30:00.0:   bridge window [mem 0xf3200000-0xf32fffff]
[    1.278653] pci_bus 0003:30: resource 4 [io  0x0000-0xfffff]
[    1.279149] pci_bus 0003:30: resource 5 [mem 0xf3200000-0xf3ffffff]
[    1.279697] pci_bus 0003:30: resource 6 [mem 0x9c0000000-0x9ffffffff]
[    1.280263] pci_bus 0003:31: resource 0 [io  0x1000-0x1fff]
[    1.280751] pci_bus 0003:31: resource 1 [mem 0xf3200000-0xf32fffff]
[    1.282500] pcieport 0003:30:00.0: PME: Signaling with IRQ 79
[    1.283314] pcieport 0003:30:00.0: AER: enabled with IRQ 80
[    1.284319] rockchip-pinctrl pinctrl: pin gpio1-12 already requested by feba0000.serial; cannot claim for a40800000.pcie
[    1.285269] rockchip-pinctrl pinctrl: error -EINVAL: pin-44 (a40800000.pcie)
[    1.285886] rockchip-pinctrl pinctrl: error -EINVAL: could not request pin 44 (gpio1-12) from group pcie2-0-rst on device rockchip-pinctrl
[    1.286969] rockchip-dw-pcie a40800000.pcie: Error applying setting, reverse things back
[    1.287887] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    1.288824] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    1.289744] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    1.298024] avdd_0v75_s0: Bringing 750000uV into 837500-837500uV
[    1.302696] input: rk805 pwrkey as /devices/platform/feb20000.spi/spi_master/spi2/spi2.0/rk805-pwrkey.3.auto/input/input0
[    1.303903] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to create device link (0x180) with supplier spi2.0 for /power-management@fd8d8000/power-controller/power-domain@12
[    1.306268] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    1.307200] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    1.308119] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    1.309264] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    1.310184] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    1.311099] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    1.312230] clk: Disabling unused clocks
[    1.313058] PM: genpd: Disabling unused power domains
[    1.424373] ata1: SATA link up 6.0 Gbps (SStatus 133 SControl 300)
[    1.426728] ata1.00: ATA-9: ADATA SP920SS, 1.08, max UDMA/133
[    1.427251] ata1.00: 250069679 sectors, multi 0: LBA48 NCQ (depth 32)
[    1.428744] ata1.00: Features: HIPM DIPM
[    1.431434] ata1.00: configured for UDMA/133
[    1.432177] scsi 0:0:0:0: Direct-Access     ATA      ADATA SP920SS    1.08 PQ: 0 ANSI: 5
[    1.433849] sd 0:0:0:0: [sda] 250069679 512-byte logical blocks: (128 GB/119 GiB)
[    1.434518] sd 0:0:0:0: [sda] Write Protect is off
[    1.434958] sd 0:0:0:0: [sda] Write cache: enabled, read cache: enabled, doesn't support DPO or FUA
[    1.435777] sd 0:0:0:0: [sda] Preferred minimum I/O size 512 bytes
[    1.473432]  sda: sda1 sda2
[    1.474116] sd 0:0:0:0: [sda] Attached SCSI disk
[    1.474678] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    1.475610] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    1.476544] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    2.048358] fan53555-regulator 1-0042: error -ETIMEDOUT: Failed to get chip ID!
[    2.049032] fan53555-regulator 1-0042: probe with driver fan53555-regulator failed with error -110
[    2.051210] Freeing unused kernel memory: 5568K
[    2.051688] Run /init as init process
[    2.067436] [trim-mounts-hash]'sys'[000000002cf61a0b]'s top mountpoint dentry: sys
[    2.068126] [trim-mounts-hash]dentry 'sys' type: 0
[    2.070992] [trim-mounts-hash]'proc'[0000000033763594]'s top mountpoint dentry: proc
[    2.071690] [trim-mounts-hash]dentry 'proc' type: 0
[    2.077218] [trim-mounts-hash]'dev'[0000000063dfbeda]'s top mountpoint dentry: dev
[    2.077900] [trim-mounts-hash]dentry 'dev' type: 0
[    2.092416] [trim-mounts-hash]'pts'[00000000ab06bfd3]'s top mountpoint dentry: dev
[    2.093102] [trim-mounts-hash]dentry 'dev' type: 0
[    2.102013] [trim-mounts-hash]'run'[00000000d72dba24]'s top mountpoint dentry: run
[    2.102697] [trim-mounts-hash]dentry 'run' type: 0
[    2.395776] r8169 0003:31:00.0: enabling device (0000 -> 0003)
[    2.409190] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    2.410166] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    2.411102] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    2.416799] r8169 0003:31:00.0: can't read MAC address, setting random one
[    2.422282] r8169 0003:31:00.0 eth0: RTL8125B, e6:53:8b:b7:c7:10, XID 641, IRQ 99
[    2.422955] r8169 0003:31:00.0 eth0: jumbo features [frames: 16362 bytes, tx checksumming: ko]
[    2.423969] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    2.424969] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    2.425920] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    2.427219] rockchip-pinctrl pinctrl: pin gpio3-5 already requested by feac0000.i2c; cannot claim for fe1c0000.ethernet
[    2.428190] rockchip-pinctrl pinctrl: error -EINVAL: pin-101 (fe1c0000.ethernet)
[    2.428886] rockchip-pinctrl pinctrl: error -EINVAL: could not request pin 101 (gpio3-5) from group gmac1-rgmii-clk on device rockchip-pinctrl
[    2.430025] rk_gmac-dwmac fe1c0000.ethernet: Error applying setting, reverse things back
[    2.430503] /phy@fed80000: Failed to get clk index: 3 ret: -2
[    2.431564] /phy@fed90000: Failed to get clk index: 3 ret: -2
[    2.431983] rockchip-dw-pcie a40000000.pcie: host bridge /pcie@fe150000 ranges:
[    2.432059] rk_gmac-dwmac fe1b0000.ethernet: IRQ sfty not found
[    2.432338] rk_gmac-dwmac fe1b0000.ethernet: supply phy not found, using dummy regulator
[    2.432729] rockchip-dw-pcie a40000000.pcie:       IO 0x00f0100000..0x00f01fffff -> 0x00f0100000
[    2.433362] rk_gmac-dwmac fe1b0000.ethernet: clock input or output? (output).
[    2.433953] rockchip-dw-pcie a40000000.pcie:      MEM 0x00f0200000..0x00f0ffffff -> 0x00f0200000
[    2.433966] rk_gmac-dwmac fe1b0000.ethernet: TX delay(0x44).
[    2.434733] rockchip-dw-pcie a40000000.pcie:      MEM 0x0900000000..0x093fffffff -> 0x0900000000
[    2.434744] rk_gmac-dwmac fe1b0000.ethernet: Can not read property: rx_delay.
[    2.438057] rk_gmac-dwmac fe1b0000.ethernet: set rx_delay to 0x10
[    2.438617] rk_gmac-dwmac fe1b0000.ethernet: integrated PHY? (no).
[    2.443034] rockchip-dw-pcie a40000000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    2.444199] rk_gmac-dwmac fe1b0000.ethernet: init for RGMII_RXID
[    2.444542] rtc-hym8563 6-0051: could not init device, -6
[    2.446895] rk_gmac-dwmac fe1b0000.ethernet: User ID: 0x30, Synopsys ID: 0x51
[    2.447529] rk_gmac-dwmac fe1b0000.ethernet: 	DWMAC4/5
[    2.447981] rk_gmac-dwmac fe1b0000.ethernet: DMA HW capability register supported
[    2.448646] rk_gmac-dwmac fe1b0000.ethernet: RX Checksum Offload Engine supported
[    2.449300] rk_gmac-dwmac fe1b0000.ethernet: TX Checksum insertion supported
[    2.449916] rk_gmac-dwmac fe1b0000.ethernet: Wake-Up On Lan supported
[    2.450510] rk_gmac-dwmac fe1b0000.ethernet: TSO supported
[    2.450991] rk_gmac-dwmac fe1b0000.ethernet: Enable RX Mitigation via HW Watchdog Timer
[    2.451690] rk_gmac-dwmac fe1b0000.ethernet: Enabled L3L4 Flow TC (entries=2)
[    2.452340] rk_gmac-dwmac fe1b0000.ethernet: Enabled RFS Flow TC (entries=10)
[    2.452964] rk_gmac-dwmac fe1b0000.ethernet: TSO feature enabled
[    2.453490] rk_gmac-dwmac fe1b0000.ethernet: SPH feature enabled
[    2.454016] rk_gmac-dwmac fe1b0000.ethernet: Using 32/32 bits DMA host/device width
[    2.577852] async_tx: api initialized (async)
[    2.640117] dw-apb-uart feb50000.serial: forbid DMA for kernel console







































































done.
Begin: Mounting root file system ... Begin: Running /scripts/local-top ... done.
Begin: Running /scripts/local-premount ... Scanning for Btrfs filesystems
registered: /dev/sda2
done.
Warning: fsck not present, so skipping root file system
[    2.743837] BTRFS: device label ROOTFS devid 1 transid 46 /dev/sda2 (8:2) scanned by mount (232)
[    2.745544] BTRFS info (device sda2): first mount of filesystem 4f1f422d-02c3-491b-8a19-39e0c4db532a
[    2.746393] BTRFS info (device sda2): using crc32c (crc32c-lib) checksum algorithm
[    2.748317] rockchip-dw-pcie a40000000.pcie: PCIe Gen.2 x2 link up
[    2.748953] rockchip-dw-pcie a40000000.pcie: PCI host bridge to bus 0000:00
[    2.749565] pci_bus 0000:00: root bus resource [bus 00-0f]
[    2.750047] pci_bus 0000:00: root bus resource [io  0x100000-0x1fffff] (bus address [0xf0100000-0xf01fffff])
[    2.750905] pci_bus 0000:00: root bus resource [mem 0xf0200000-0xf0ffffff]
[    2.751505] pci_bus 0000:00: root bus resource [mem 0x900000000-0x93fffffff]
[    2.752133] pci 0000:00:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    2.752795] pci 0000:00:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    2.753337] pci 0000:00:00.0: PCI bridge to [bus 01-ff]
[    2.753796] pci 0000:00:00.0:   bridge window [io  0x0000-0x0fff]
[    2.754330] pci 0000:00:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    2.754927] pci 0000:00:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    2.755304] BTRFS info (device sda2): enabling ssd optimizations
[    2.755633] pci 0000:00:00.0: supports D1 D2
[    2.756140] BTRFS info (device sda2): turning on async discard
[    2.756515] pci 0000:00:00.0: PME# supported from D0 D1 D3hot
[    2.757564] BTRFS info (device sda2): enabling free space tree
[    2.758088] BTRFS info (device sda2): use zstd compression, level 1
[    2.758875] pci 0000:00:00.0: Adding to iommu group 9
[    2.759424] [trim-mounts-hash]'root'[0000000024800016]'s top mountpoint dentry: root
[    2.760123] [trim-mounts-hash]dentry 'root' type: 0
done.
Begin: Running /scripts/local-bottom ... [    2.764607] pci_bus 0000:01: busn_res: can not insert [bus 01-ff] under [bus 00-0f] (conflicts with (null) [bus 00-0f])
[    2.765627] pci 0000:01:00.0: [9000:1003] type 00 class 0x058000 PCIe Endpoint
[    2.766406] pci 0000:01:00.0: BAR 0 [mem 0x00000000-0x000fffff 64bit]
[    2.766975] pci 0000:01:00.0: BAR 2 [mem 0x00000000-0x000fffff]
[    2.767497] pci 0000:01:00.0: BAR 3 [mem 0x00000000-0x0000ffff]
[    2.768020] pci 0000:01:00.0: BAR 4 [mem 0x00000000-0x00000fff]
[    2.768551] pci 0000:01:00.0: BAR 5 [mem 0x00000000-0x0000ffff]
[    2.769073] pci 0000:01:00.0: ROM [mem 0x00000000-0x007fffff pref]
[    2.769793] pci 0000:01:00.0: supports D1
[    2.770145] pci 0000:01:00.0: PME# supported from D0 D1 D3hot
[    2.770751] pci 0000:01:00.0: 8.000 Gb/s available PCIe bandwidth, limited by 5.0 GT/s PCIe x2 link at 0000:00:00.0 (capable of 16.000 Gb/s with 5.0 GT/s PCIe x4 link)
done.
Begin: Running /scripts/init-bottom ... [    2.772559] pci 0000:01:00.0: Adding to iommu group 9
[    2.773086] pci 0000:00:00.0: bridge window [mem 0x00100000-0x003fffff] to [bus 01-ff] add_size 800000 add_align 800000
[    2.774038] pci 0000:00:00.0: bridge window [mem size 0x00b00000]: can't assign; no space
[    2.774752] pci 0000:00:00.0: bridge window [mem size 0x00b00000]: failed to assign
[    2.775422] pci 0000:00:00.0: ROM [mem 0xf0200000-0xf020ffff pref]: assigned
[    2.776039] pci 0000:00:00.0: ROM [mem 0xf0200000-0xf020ffff pref]: releasing
[    2.776674] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: assigned
[    2.777329] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: failed to expand by 0x800000
[    2.778135] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: failed to add optional 800000
[    2.778950] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: can't assign; no space
[    2.779627] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: failed to assign
[    2.780263] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: assigned
[    2.780931] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: assigned
[    2.781531] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: assigned
[    2.782133] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: assigned
[    2.782734] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: assigned
[    2.783334] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: releasing
[    2.783980] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: releasing
[    2.784584] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: releasing
[    2.785729] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: releasing
[    2.786338] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: releasing
[    2.786943] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: assigned
[    2.787613] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: assigned
[    2.789819] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: assigned
[    2.790431] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: assigned
[    2.791033] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: assigned
[    2.791635] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: can't assign; no space
[    2.792322] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: failed to assign
[    2.792956] pci 0000:00:00.0: PCI bridge to [bus 01-ff]
[    2.793416] pci 0000:00:00.0:   bridge window [mem 0xf0200000-0xf04fffff]
[    2.794012] pci_bus 0000:00: Some PCI device resources are unassigned, try booting with pci=realloc
[    2.794802] pci_bus 0000:00: resource 4 [io  0x100000-0x1fffff]
[    2.795321] pci_bus 0000:00: resource 5 [mem 0xf0200000-0xf0ffffff]
[    2.795870] pci_bus 0000:00: resource 6 [mem 0x900000000-0x93fffffff]
[    2.796437] pci_bus 0000:01: resource 1 [mem 0xf0200000-0xf04fffff]
[    2.798368] pcieport 0000:00:00.0: PME: Signaling with IRQ 113
[    2.799141] pcieport 0000:00:00.0: AER: enabled with IRQ 114
[    2.800206] rockchip-dw-pcie a40400000.pcie: host bridge /pcie@fe160000 ranges:
[    2.800875] rockchip-dw-pcie a40400000.pcie:       IO 0x00f1100000..0x00f11fffff -> 0x00f1100000
[    2.801648] rockchip-dw-pcie a40400000.pcie:      MEM 0x00f1200000..0x00f1ffffff -> 0x00f1200000
[    2.802417] rockchip-dw-pcie a40400000.pcie:      MEM 0x0940000000..0x097fffffff -> 0x0940000000
[    2.811205] rockchip-dw-pcie a40400000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
done.
[    3.021136] [trim-mounts-hash]'security'[0000000072eb0105]'s top mountpoint dentry: sys
[    3.021846] [trim-mounts-hash]dentry 'sys' type: 0
[    3.022442] [trim-mounts-hash]'/'[0000000092dc8fd6]'s top mountpoint dentry: proc
[    3.023098] [trim-mounts-hash]dentry 'proc' type: 0
[    3.025328] systemd[1]: System time before build time, advancing clock.
[    3.041115] systemd[1]: Inserted module 'autofs4'
[    3.042377] [trim-mounts-hash]'shm'[000000003eaee871]'s top mountpoint dentry: dev
[    3.043044] [trim-mounts-hash]dentry 'dev' type: 0
[    3.043534] [trim-mounts-hash]'lock'[0000000037401aa7]'s top mountpoint dentry: run
[    3.044204] [trim-mounts-hash]dentry 'run' type: 0
[    3.072481] [trim-mounts-hash]'cgroup'[0000000001934137]'s top mountpoint dentry: sys
[    3.073171] [trim-mounts-hash]dentry 'sys' type: 0
[    3.073726] [trim-mounts-hash]'pstore'[00000000a978dc43]'s top mountpoint dentry: sys
[    3.074412] [trim-mounts-hash]dentry 'sys' type: 0
[    3.089157] [trim-mounts-hash]'bpf'[00000000e090209b]'s top mountpoint dentry: sys
[    3.089830] [trim-mounts-hash]dentry 'sys' type: 0
[    3.091675] systemd[1]: systemd 252.39-1~deb12u1 running in system mode (+PAM +AUDIT +SELINUX +APPARMOR +IMA +SMACK +SECCOMP +GCRYPT -GNUTLS +OPENSSL +ACL +BLKID +CURL +ELFUTILS +FIDO2 +IDN2 -IDN +IPTC +KMOD +LIBCRYPTSETUP +LIBFDISK +PCRE2 -PWQUALITY +P11KIT +QRENCODE +TPM2 +BZIP2 +LZ4 +XZ +ZLIB +ZSTD -BPF_FRAMEWORK -XKBCOMMON +UTMP +SYSVINIT default-hierarchy=unified)
[    3.094543] systemd[1]: Detected architecture arm64.

Welcome to Debian GNU/Linux 12 (bookworm)!

[    3.096931] systemd[1]: Hostname set to <fnnas>.
[    3.112307] rockchip-dw-pcie a40400000.pcie: PCIe Gen.3 x2 link up
[    3.112937] rockchip-dw-pcie a40400000.pcie: PCI host bridge to bus 0001:10
[    3.113550] pci_bus 0001:10: root bus resource [bus 10-1f]
[    3.114033] pci_bus 0001:10: root bus resource [io  0x200000-0x2fffff] (bus address [0xf1100000-0xf11fffff])
[    3.114892] pci_bus 0001:10: root bus resource [mem 0xf1200000-0xf1ffffff]
[    3.115495] pci_bus 0001:10: root bus resource [mem 0x940000000-0x97fffffff]
[    3.116125] pci 0001:10:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    3.116785] pci 0001:10:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    3.117328] pci 0001:10:00.0: PCI bridge to [bus 01-ff]
[    3.117790] pci 0001:10:00.0:   bridge window [io  0x0000-0x0fff]
[    3.118324] pci 0001:10:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    3.118920] pci 0001:10:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    3.119622] pci 0001:10:00.0: supports D1 D2
[    3.119998] pci 0001:10:00.0: PME# supported from D0 D1 D3hot
[    3.121468] pci 0001:10:00.0: Adding to iommu group 10
[    3.127745] pci 0001:10:00.0: Primary bus is hard wired to 0
[    3.128280] pci 0001:10:00.0: bridge configuration invalid ([bus 01-ff]), reconfiguring
[    3.129095] pci 0001:11:00.0: [1e4b:1202] type 00 class 0x010802 PCIe Endpoint
[    3.129843] pci 0001:11:00.0: BAR 0 [mem 0x00000000-0x00003fff 64bit]
[    3.130692] pci 0001:11:00.0: PME# supported from D0 D3hot D3cold
[    3.131427] pci 0001:11:00.0: 15.752 Gb/s available PCIe bandwidth, limited by 8.0 GT/s PCIe x2 link at 0001:10:00.0 (capable of 31.504 Gb/s with 8.0 GT/s PCIe x4 link)
[    3.134744] pci 0001:11:00.0: Adding to iommu group 10
[    3.140256] pci 0001:11:00.0: ASPM: default states L1
[    3.140732] pci_bus 0001:11: busn_res: [bus 11-1f] end is updated to 11
[    3.141326] pci 0001:10:00.0: bridge window [mem 0xf1200000-0xf12fffff]: assigned
[    3.141987] pci 0001:10:00.0: ROM [mem 0xf1300000-0xf130ffff pref]: assigned
[    3.141993] pci 0001:11:00.0: BAR 0 [mem 0xf1200000-0xf1203fff 64bit]: assigned
[    3.142018] pci 0001:10:00.0: PCI bridge to [bus 11]
[    3.143709] pci 0001:10:00.0:   bridge window [mem 0xf1200000-0xf12fffff]
[    3.145642] pci_bus 0001:10: resource 4 [io  0x200000-0x2fffff]
[    3.146173] pci_bus 0001:10: resource 5 [mem 0xf1200000-0xf1ffffff]
[    3.146723] pci_bus 0001:10: resource 6 [mem 0x940000000-0x97fffffff]
[    3.147287] pci_bus 0001:11: resource 1 [mem 0xf1200000-0xf12fffff]
[    3.149159] pcieport 0001:10:00.0: PME: Signaling with IRQ 125
[    3.149835] pcieport 0001:10:00.0: AER: enabled with IRQ 126
[    3.151082] nvme nvme0: pci function 0001:11:00.0
[    3.151246] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    3.151508] nvme 0001:11:00.0: enabling device (0000 -> 0002)
[    3.151940] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    3.154105] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    3.157450] rockchip-drm display-subsystem: bound fdd90000.vop (ops rockchip_drm_fini [rockchipdrm])
[    3.158045] hwmon hwmon7: temp1_input not attached to any thermal zone
[    3.158635] dwhdmiqp-rockchip fde80000.hdmi: registered DesignWare HDMI QP I2C bus driver
[    3.158878] hwmon hwmon7: temp2_input not attached to any thermal zone
[    3.159617] rockchip-drm display-subsystem: bound fde80000.hdmi (ops rockchip_drm_fini [rockchipdrm])
[    3.160158] hwmon hwmon7: temp3_input not attached to any thermal zone
[    3.161303] [drm] Initialized rockchip 1.0.0 for display-subsystem on minor 0
[    3.162212] rockchip-drm display-subsystem: [drm] Cannot find any crtc or sizes
[    3.162333] nvme nvme0: allocated 8 MiB host memory buffer (1 segment).
[    3.162887] rockchip-drm display-subsystem: [drm] Cannot find any crtc or sizes
[    3.164293] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    3.165283] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    3.166236] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    3.168372] nvme nvme0: 8/0/0 default/read/poll queues
[    3.170036] nvme nvme0: Ignoring bogus Namespace Identifiers
[    3.173303]  nvme0n1: p1 p2 p3
[    3.174357] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    3.175331] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    3.176284] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    3.242549] systemd[1]: Configuration file /etc/systemd/system/usersrv.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.244084] systemd[1]: Configuration file /etc/systemd/system/upnp.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.245580] systemd[1]: Configuration file /etc/systemd/system/trim_upload.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.247116] systemd[1]: Configuration file /etc/systemd/system/trim_trashbind.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.248701] systemd[1]: Configuration file /etc/systemd/system/trim_tfa.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.250262] systemd[1]: Configuration file /etc/systemd/system/trim_sharelink.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.251933] systemd[1]: Configuration file /etc/systemd/system/trim_sac.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.253557] systemd[1]: Configuration file /etc/systemd/system/trim_raid_check.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.255139] systemd[1]: Configuration file /etc/systemd/system/trim_nginx.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.256776] systemd[1]: Configuration file /etc/systemd/system/trim_main.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.258312] systemd[1]: Configuration file /etc/systemd/system/trim_license.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.259922] systemd[1]: Configuration file /etc/systemd/system/trim_init.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.261475] systemd[1]: Configuration file /etc/systemd/system/trim_http_cgi.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.263028] systemd[1]: Configuration file /etc/systemd/system/trim_file_monitor.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.264629] systemd[1]: Configuration file /etc/systemd/system/trim_diskpowerd.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.266192] systemd[1]: Configuration file /etc/systemd/system/trim_connect.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.267846] systemd[1]: Configuration file /etc/systemd/system/trim_app_center.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.274542] systemd[1]: Configuration file /etc/systemd/system/system_startup.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.276114] systemd[1]: Configuration file /etc/systemd/system/system_shutdown.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.293713] systemd[1]: Configuration file /etc/systemd/system/sysrestore.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.295269] systemd[1]: Configuration file /etc/systemd/system/sysinfo_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.297868] systemd[1]: Configuration file /etc/systemd/system/show_startup_info.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.299470] systemd[1]: Configuration file /etc/systemd/system/share_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.301059] systemd[1]: Configuration file /etc/systemd/system/security_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.303478] systemd[1]: Configuration file /etc/systemd/system/rpc_broker.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.305020] systemd[1]: Configuration file /etc/systemd/system/resmon_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.313757] systemd[1]: Configuration file /etc/systemd/system/network_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.315375] systemd[1]: Configuration file /etc/systemd/system/multiple-downloads.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.317092] systemd[1]: Configuration file /etc/systemd/system/mediasrv.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.325149] systemd[1]: Configuration file /etc/systemd/system/imagesrv.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.331344] systemd[1]: Configuration file /etc/systemd/system/finder_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.332936] systemd[1]: Configuration file /etc/systemd/system/filestor_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.334563] systemd[1]: Configuration file /etc/systemd/system/eventlogger_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.336495] systemd[1]: Configuration file /etc/systemd/system/dsmgr.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.338213] systemd[1]: Configuration file /etc/systemd/system/dockermgr.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.339733] systemd[1]: Configuration file /etc/systemd/system/docker.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.341394] systemd[1]: Configuration file /etc/systemd/system/dlcenter.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.344196] systemd[1]: Configuration file /etc/systemd/system/cloud_storage_dav.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.345889] systemd[1]: Configuration file /etc/systemd/system/backup_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.347451] systemd[1]: Configuration file /etc/systemd/system/avahi.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.349954] systemd[1]: Configuration file /etc/systemd/system/auto_thumbnailer.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.351559] systemd[1]: Configuration file /etc/systemd/system/ai_manager.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.353224] systemd[1]: Configuration file /etc/systemd/system/accountsrv.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.398223] systemd[1]: Queued start job for default target graphical.target.
[    3.422251] systemd[1]: Created slice machine.slice - Virtual Machine and Container Slice.
[  OK  ] Created slice machine.slic…rtual Machine and Container Slice.
[    3.424392] systemd[1]: Created slice system-getty.slice - Slice /system/getty.
[  OK  ] Created slice system-getty.slice - Slice /system/getty.
[    3.425867] systemd[1]: Created slice system-modprobe.slice - Slice /system/modprobe.
[  OK  ] Created slice system-modpr…lice - Slice /system/modprobe.
[    3.427498] systemd[1]: Created slice system-postgresql.slice - Slice /system/postgresql.
[  OK  ] Created slice system-postg…ce - Slice /system/postgresql.
[    3.429213] systemd[1]: Created slice system-serial\x2dgetty.slice - Slice /system/serial-getty.
[  OK  ] Created slice system-seria… - Slice /system/serial-getty.
[    3.430964] systemd[1]: Created slice system-systemd\x2dfsck.slice - Slice /system/systemd-fsck.
[  OK  ] Created slice system-syste… -[    3.432524] systemd[1]: Created slice user.slice - User and Session Slice.
 Slice /system/systemd-fsck.
[    3.433391] systemd[1]: Started systemd-ask-password-wall.path - Forward Password Requests to Wall Directory Watch.
[  OK  ] Created slice user.slice - User[    3.434753] [trim-mounts-hash]'binfmt_misc'[00000000ee0188d3]'s top mountpoint dentry: proc
[    3.435700] [trim-mounts-hash]dentry 'proc' type: 0
[    3.436160] systemd[1]: Set up automount proc-sys-fs-binfmt_misc.automount - Arbitrary Executable File Formats File System Automount Point.
 and Session Slice.
[  OK  ] Started syst[    3.437323] systemd[1]: Expecting device dev-disk-by\x2duuid-6cd1ceb9\x2d05bc\x2d41fd\x2d8e9e\x2d1d8009db2520.device - /dev/disk/by-uuid/6cd1ceb9-05bc-41fd-8e9e-1d8009db2520...
[    3.439184] systemd[1]: Expecting device dev-ttyAMA0.device - /dev/ttyAMA0...
emd-ask-passwo… Requests to Wall Directory Watch.
[ [    3.439849] systemd[1]: Expecting device dev-ttyS2.device - /dev/ttyS2...
 OK  ] Set up automount proc-sys-…rmats File Syst[    3.441107] systemd[1]: Reached target integritysetup.target - Local Integrity Protected Volumes.
em Automount Point.
         Expecting device dev-di[    3.442508] systemd[1]: Reached target nss-lookup.target - Host and Network Name Lookups.
sk-…eb9-05bc-41fd-8e9e-1d8009db2520...
         Expecting d[    3.443669] systemd[1]: Reached target slices.target - Slice Units.
evice dev-ttyAMA0.device - /dev/ttyAMA0...
     [    3.444725] systemd[1]: Reached target swap.target - Swaps.
    Expecting device dev-ttyS2.device - /dev/ttyS2.[    3.445669] systemd[1]: Reached target veritysetup.target - Local Verity Protected Volumes.
..
[  OK  ] Reached target integrityse…[    3.446974] systemd[1]: Reached target virt-guest-shutdown.target - Libvirt guests shutdown.
Local Integrity Protected Volumes.
[  OK  ] Reache[    3.448292] systemd[1]: Listening on dm-event.socket - Device-mapper event daemon FIFOs.
d target nss-lookup.…m - Host and Network Name Lookup[    3.449592] systemd[1]: Listening on lvm2-lvmpolld.socket - LVM2 poll daemon socket.
s.
[  OK  ] Reached target slices.target - Slice Units.
[  OK  ] Reached target swap.target - Swaps.
[  OK  ] Reached target veritysetup… - Local Verity Protected Volumes.
[  OK  ] Reached target virt-guest-…get - Libvirt guests shutdown.
[  OK  ] Listening on dm-event.sock… Device-mapper event daemon FIFOs.
[  OK  ] Listening on lvm2-lvmpolld…ket - LVM2 poll daemon socket.
[    3.461313] systemd[1]: Listening on rpcbind.socket - RPCbind Server Activation Socket.
[  OK  ] Listening on rpcbind.socke… RPCbi[    3.462716] systemd[1]: Listening on syslog.socket - Syslog Socket.
nd Server Activation Socket.
[    3.463565] systemd[1]: Listening on systemd-fsckd.socket - fsck to fsckd communication Socket.
[  OK  ] Listening on syslog.socket - Sy[    3.464521] systemd[1]: Listening on systemd-initctl.socket - initctl Compatibility Named Pipe.
slog Socket.
[  OK  ] Listening on systemd-fsckd…sck to fsckd communication Socket.
[  OK      3.466662] systemd[1]: Listening on systemd-journald-audit.socket - Journal Audit Socket.
0m] Listening on systemd-initc… initctl Compatibility[    3.467629] systemd[1]: Listening on systemd-journald-dev-log.socket - Journal Socket (/dev/log).
 Named Pipe.
[  OK  ] Listening on system[    3.469022] systemd[1]: Listening on systemd-journald.socket - Journal Socket.
d-journ…socket - Journal Audit Socket.
[  OK  ] Listening on systemd-journ…t - Journal Socket (/dev/log).
[  OK  ] Listening on system[    3.471167] systemd[1]: Listening on systemd-udevd-control.socket - udev Control Socket.
d-journald.socket - Journal Socket.
[    3.472364] systemd[1]: Listening on systemd-udevd-kernel.socket - udev Kernel Socket.
[  OK  ] Listening on systemd-udevd….socket - udev Control Socket.
[  OK  ] Listening on systemd-udevd…l.socket - udev Kernel Socket.
[    3.474800] systemd[1]: Mounting dev-hugepages.mount - Huge Pages File System...
         Mounting dev-hugepages.mount - Huge Pages File System...
[    3.476985] systemd[1]: Mounting dev-mqueue.mount - POSIX Message Queue File System...
         Mounting dev-mqueue.mountproc-fs-nfsd.moun…- NFSD configuration filesystem...
[    3.481399] systemd[1]: Mounting sys-kernel-debug.mount - Kernel Debug File System...
         Mounting sys-kernel-debug.… - Kernel Deb[    3.482425] [trim-mounts-hash]'hugepages'[00000000fc33ffcc]'s top mountpoint dentry: dev
[    3.482529] [trim-mounts-hash]'mqueue'[000000009278c794]'s top mountpoint dentry: dev
[    3.483475] [trim-mounts-hash]dentry 'dev' type: 0
ug File System...
[    3.484728] [trim-mounts-hash]dentry 'dev' type: 0
[    3.485388] systemd[1]: Mounting sys-kernel-tracing.mount - Kernel Trace File System...
[    3.486331] systemd[1]: auth-rpcgss-module.service - Kernel Module supporting RPCSEC_GSS was skipped because of an unmet condition check (ConditionPathExists=/etc/krb5.keytab).
[    3.487438] [trim-mounts-hash]'tracing'[000000000d8835c2]'s top mountpoint dentry: sys
         Mounting sys-kernel-tracin… - Kernel Tra[    3.487874] systemd[1]: Finished blk-availability.service - Availability of block devices.
ce File System...
[    3.488174] [trim-mounts-hash]'debug'[00000000565a7c97]'s top mountpoint dentry: sys
[    3.488183] [trim-mounts-hash]dentry 'sys' type: 0
[    3.488413] [trim-mounts-hash]dentry 'sys' type: 0
[  OK  ] Finished blk-availability.…m - Availability of block devices.
[    3.517611] systemd[1]: Starting keyboard-setup.service - Set the console keyboard layout...
         Starting keyboard-setup.se…Set the console keyboard layout...
[    3.520416] systemd[1]: Starting kmod-static-nodes.service - Create List of Static Device Nodes...
         Starting kmod-static-nodes…ate List of Static Device Nodes...
[    3.523059] systemd[1]: Starting lvm2-monitor.service - Monitoring of LVM2 mirrors, snapshots etc. using dmeventd or progress polling...
         Starting lvm2-monitor.serv…ng dmeventd or progress polling...
[    3.526039] systemd[1]: Starting modprobe@configfs.service - Load Kernel Module configfs...
[    3.526374] RPC: Registered named UNIX socket transport module.
[    3.527299] RPC: Registered udp transport module.
[    3.527300] RPC: Registered tcp transport module.
[    3.527302] RPC: Registered tcp-with-tls transport module.
[    3.527303] RPC: Registered tcp NFSv4.1 backchannel transport module.
         Starting modprobe@configfs…m - Load Kernel Module configfs...
[    3.531059] systemd[1]: Starting modprobe@dm_mod.service - Load Kernel Module dm_mod...
         Starting modprobe@dm_mod.s…[0m - Load Kernel Module dm_mod...
[    3.533688] systemd[1]: Starting modprobe@drm.service - Load Kernel Module drm...
         Starting modprobe@drm.service - Load Kernel Module drm...
[    3.536173] systemd[1]: Starting modprobe@efi_pstore.service - Load Kernel Module efi_pstore...
         Starting modprobe@efi_psto…- Load Kernel Module efi_pstore...
[    3.539103] systemd[1]: Starting modprobe@fuse.service - Load Kernel Module fuse...
         Starting modprobe@fuse.ser…e - Load Kernel Module fuse...
[    3.542113] systemd[1]: Starting modprobe@loop.service - Load Kernel Module loop...
         Starting modprobe@loop.ser…e - Load Kernel Module loop...
[    3.543577] systemd[1]: systemd-fsck-root.service - File System Check on Root Device was skipped because of an unmet condition check (ConditionPathIsReadWrite=!/).
[    3.548103] systemd[1]: Starting systemd-journald.service - Journal Service...
         Starting systemd-journald.service - Journal Service...
[    3.567682] systemd[1]: Starting systemd-modules-load.service - Load Kernel Modules...
         Starting systemd-modules-l…rvice - Load Kernel Modules...
[    3.570412] systemd[1]: Starting systemd-remount-fs.service - Remount Root and Kernel File Systems...
         Starting systemd-remount-f…nt Root and Kernel File Systems...
[    3.573243] systemd[1]: Starting systemd-udev-trigger.service - Coldplug All udev Devices...
         Starting systemd-udev-trig…[0m - Coldplug All udev Devices...
[    3.576645] device-mapper: uevent: version 1.0.3
[    3.577245] device-mapper: ioctl: 4.50.0-ioctl (2025-04-28) initialised: dm-devel@lists.linux.dev
[    3.577412] systemd[1]: Mounted dev-hugepages.mount - Huge Pages File System.
[    3.577601] [trim-mounts-hash]'nfsd'[000000005b7d90ab]'s top mountpoint dentry: proc
[    3.577608] [trim-mounts-hash]dentry 'proc' type: 0
[  OK  ] Mounted dev-hugepages.mount - Huge Pages File System.
[    3.581319] systemd[1]: Mounted dev-mqueue.mount - POSIX Message Queue File System.
[  OK  ] Mounted dev-mqueue.mountOSI[    3.582438] systemd[1]: Mounted proc-fs-nfsd.mount - NFSD configuration filesystem.
X Message Queue File System.
[  OK  ] Mounted proc-fs-nfsd.mount…m - NF[    3.583634] systemd[1]: Mounted sys-kernel-debug.mount - Kernel Debug File System.
SD configuration filesystem.
[  OK  ] Mounted sys-kernel-debug.m…nt[    3.585049] systemd[1]: Mounted sys-kernel-tracing.mount - Kernel Trace File System.
 - Kernel Debug File System.
[  OK  ] Mounted sys-kernel-tracing…nt[    3.586799] systemd[1]: Finished kmod-static-nodes.service - Create List of Static Device Nodes.
 - Kernel Trace File System.
[  OK  ] Finished kmod-static-nodes…reate [    3.588337] systemd[1]: modprobe@configfs.service: Deactivated successfully.
List of Static Device Nodes.
[    3.589242] systemd[1]: Finished modprobe@configfs.service - Load Kernel Module configfs.
[  OK  ] Finished modprobe@configfs…[0m - [    3.590498] systemd[1]: modprobe@dm_mod.service: Deactivated successfully.
Load Kernel Module configfs.
[    3.591464] systemd[1]: Finished modprobe@dm_mod.service - Load Kernel Module dm_mod.
[  OK  ] Finished modprobe@dm_mod.s…e [    3.592703] systemd[1]: modprobe@drm.service: Deactivated successfully.
- Load Kernel Module dm_mod.
[    3.593603] systemd[1]: Finished modprobe@drm.service - Load Kernel Module drm.
[  OK  ] Finished modprobe@drm.service -[    3.594729] systemd[1]: modprobe@efi_pstore.service: Deactivated successfully.
 Load Kernel Module drm.
[    3.595684] systemd[1]: Finished modprobe@efi_pstore.service - Load Kernel Module efi_pstore.
[  OK  ] Finished modprobe@efi_psto…m - Lo[    3.597257] systemd[1]: modprobe@fuse.service: Deactivated successfully.
ad Kernel Module efi_pstore.
[    3.598146] systemd[1]: Finished modprobe@fuse.service - Load Kernel Module fuse.
[  OK  ] Finished modprobe@fuse.service [    3.599267] systemd[1]: modprobe@loop.service: Deactivated successfully.
- Load Kernel Module fuse.
[    3.600196] systemd[1]: Finished modprobe@loop.service - Load Kernel Module loop.
[  OK  ] Finished modprobe@loop.service - Load Kernel Module loop.
[    3.602519] zram: Added device: zram0
[    3.603094] systemd[1]: Mounting sys-fs-fuse-connections.mount - FUSE Control File System...
         Mounting sys-fs-fuse-conne… - FUSE Control File System...
[    3.605685] [trim-mounts-hash]'connections'[0000000020b14279]'s top mountpoint dentry: sys
[    3.606418] [trim-mounts-hash]dentry 'sys' type: 0
[    3.608119] [trim-mounts-hash]'config'[00000000d7ad4ee7]'s top mountpoint dentry: sys
[    3.609202] systemd[1]: Mounting sys-kernel-config.mount - Kernel Configuration File System...
[    3.610147] systemd[1]: systemd-repart.service - Repartition Root Disk was skipped because no trigger condition checks were met.
         Mounting sys-kernel-config…ernel Configurati[    3.612233] [trim-mounts-hash]dentry 'sys' type: 0
on File System...
[    3.612874] systemd[1]: Mounted sys-fs-fuse-connections.mount - FUSE Control File System.
[  OK  ] Mounted sys-fs-fuse-connec…nt[    3.614544] systemd[1]: Mounted sys-kernel-config.mount - Kernel Configuration File System.
 - FUSE Control File System.
[  OK  ] Mounted sys-kernel-config.… Kernel Configuration File System.
[    3.616538] rockchip_pvtm: loading out-of-tree module taints kernel.
[    3.661495] systemd[1]: Started systemd-journald.service - Journal Service.
[  OK  ] Started systemd-journald.service - Journal Service.
[    3.671117] rga_iommu: rga_iommu_bind, binding map scheduler failed!
[    3.671701] rga: rga iommu bind failed!
[  OK  ] Finished lvm2-monitor.serv…sing dmeventd or progress polling.
[  OK  ] Finished keyboard-setup.se…- Set the console keyboard layout.
[  OK  ] Finished systemd-remount-f…ount Root and Kernel File Systems.
         Starting systemd-journal-f…h Journal to Persistent Storage...
         Starting systemd-random-se…ice - Load/Save Random Seed...
         Starting systemd-sysusers.…rvice - Create System Users...
[    3.767374] [trim-mounts-hash]'/'[000000009208168a]'s top mountpoint dentry: dev
[    3.768054] [trim-mounts-hash]dentry 'dev' type: 0
[    3.772848] zfs: module license 'CDDL' taints kernel.
[    3.773304] Disabling lock debugging due to kernel taint
[    3.773831] zfs: module license taints kernel.
[    3.783708] systemd-journald[315]: Received client request to flush runtime journal.
[  OK  ] Finished systemd-journal-f…ush Journal to Persistent Storage.
[  OK  ] Finished systemd-random-se…rvice - Load/Save Random Seed.
[  OK  ] Finished systemd-udev-trig…e - Coldplug All udev Devices.
         Starting ifupdown-pre.serv…ynchronize boot up for ifupdown...
[  OK  ] Finished systemd-sysusers.service - Create System Users.
         Starting systemd-tmpfiles-…ate Static Device Nodes in /dev...
[    3.828954] [trim-mounts-hash]'/'[000000009208168a]'s top mountpoint dentry: dev
[  OK  ] Finished ifupdown-pre.serv… synch[    3.829692] [trim-mounts-hash]dentry 'dev' type: 0
ronize boot up for ifupdown.
[  OK  ] Finished systemd-tmpfiles-…reate Static Device Nodes in /dev.
[  OK  ] Reached target local-fs-pr…reparation for Local File Systems.
         Starting systemd-udevd.ser…ger for Device Events and Files...
[    3.950506] ZFS: Loaded module v2.4.1-1, ZFS pool version 5000, ZFS filesystem version 5
[FAILED] Failed to start systemd-mo…service - Load Kernel Modules.
See 'systemctl status systemd-modules-load.service' for details.
         Starting systemd-sysctl.se…ce - Apply Kernel Variables...
[    3.957972] [trim-mounts-hash]'/'[000000009208168a]'s top mountpoint dentry: dev
[    3.958647] [trim-mounts-hash]dentry 'dev' type: 0
[  OK  ] Finished systemd-sysctl.service - Apply Kernel Variables.
[  OK  ] Started systemd-udevd.serv…nager for Device Events and Files.
         Starting plymouth-start.se…[0m - Show Plymouth Boot Screen...
[  OK  ] Started plymouth-start.ser…e - Show Plymouth Boot Screen.
[  OK  ] Started systemd-ask-passwo…uests to Plymouth Directory Watch.
[  OK  ] Reached target cryptsetup.…get - Local Encrypted Volumes.
[    4.152081] sd 0:0:0:0: Attached scsi generic sg0 type 0
[  OK  ] Found device dev-ttyS2.device - /dev/ttyS2.
[  OK  ] Found device dev-disk-by\x…0.device - ADATA_SP920SS BOOT.
         Starting systemd-fsck@dev-…eb9-05bc-41fd-8e9e-1d8009db2520...
[  OK  ] Started systemd-fsckd.serv…tem Check Daemon to report status.
[    4.385646] cpufreq: cpufreq_policy_online: CPU4: Running at unlisted initial frequency: 1008000 kHz, changing to: 1200000 kHz
fsckd-cancel-msg:Press Ctrl+C to cancel all filesystem checks in progress
Checking in progress on 0 disks (100.0% complete)
[  OK  ] Finished systemd-fsck@dev-…1ceb9-05bc-41fd-8e9e-1d8009db2520.
[    4.431485] cpufreq: cpufreq_policy_online: CPU6: Running at unlisted initial frequency: 1008000 kHz, changing to: 1200000 kHz
[    4.433693] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    4.437155] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    4.446027] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    4.504939] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    4.506268] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    4.507440] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    4.508748] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    4.509831] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    4.513656] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    4.515488] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
[    4.516653] rockchip-pm-domain fd8d8000.power-management:power-controller: Failed to enable supply: -517
         Mounting boot.mount - /boot...
         Mounting tmp.mount - /tmp...
[  OK  ] Reached target machines.target - Containers.
[    4.648232] [trim-mounts-hash]'tmp'[00000000b5f13380]'s top mountpoint dentry: tmp
[    4.648903] [trim-mounts-hash]dentry 'tmp' type: 0
[    4.650041] EXT4-fs (sda1): mounted filesystem 6cd1ceb9-05bc-41fd-8e9e-1d8009db2520 r/w with ordered data mode. Quota mode: none.

[    4.656221] [trim-mounts-hash]'boot'[00000000e0e5cdf5]'s top mountpoint dentry: boot
[    4.656905] [trim-mounts-hash]dentry 'boot' type: 0
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
         Starting systemd-tmpfiles-…te System Files and Directories...
[  OK  ] Finished plymouth-read-wri…lymouth To Write Out Runtime Data.
[  OK  ] Finished pwm-fancontrol.se…ice - PWM Fan Setting Service.
[  OK  ] Finished console-setup.ser…[0m - Set console font and keymap.
         Mounting proc-sys-fs-binfm…utable File Formats File System...
[FAILED] Failed to start set_gpio-i…[0m - GPIO Initialization Service.
See 'systemctl status set_gpio-init.service' for details.
[FAILED] Failed to start led-set.service - LED Setting Service.
See 'systemctl status led-set.service' for details.
[    4.721230] [trim-mounts-hash]'/'[000000009208168a]'s top mountpoint dentry: dev
[    4.721883] [trim-mounts-hash]dentry 'dev' type: 0
[    4.726013] [trim-mounts-hash]'/'[000000000fa52fec]'s top mountpoint dentry: proc
[    4.726675] [trim-mounts-hash]dentry 'proc' type: 0
[  OK  ] Mounted proc-sys-fs-binfmt…ecutable File Formats File System.
[  OK  ] Finished systemd-binfmt.se… Set Up Additional Binary Formats.
[  OK  ] Finished dpdk.service - DPDK runtime environment.
[    4.767987] audit: type=1400 audit(1750949921.736:2): apparmor="STATUS" operation="profile_load" profile="unconfined" name="nvidia_modprobe" pid=783 comm="apparmor_parser"
[    4.769713] audit: type=1400 audit(1750949921.736:3): apparmor="STATUS" operation="profile_load" profile="unconfined" name="nvidia_modprobe//kmod" pid=783 comm="apparmor_parser"
[  OK  ] Finished systemd-tmpfiles-…eate System Files and Directories.
         Mounting run-rpc_pipefs.mount - RPC Pipe File System...
[    4.774554] audit: type=1400 audit(1750949921.744:4): apparmor="STATUS" operation="profile_load" profile="unconfined" name="virt-aa-helper" pid=786 comm="apparmor_parser"
         Starting rpcbind.service - RPC bind portmap service...
[    4.779355] audit: type=1400 audit(1750949921.748:5): apparmor="STATUS" operation="profile_load" profile="unconfined" name="lsb_release" pid=782 comm="apparmor_parser"
[    4.781092] audit: type=1400 audit(1750949921.752:6): apparmor="STATUS" operation="profile_load" profile="unconfined" name="libvirtd" pid=787 comm="apparmor_parser"
[    4.782617] audit: type=1400 audit(1750949921.752:7): apparmor="STATUS" operation="profile_load" profile="unconfined" name="libvirtd//qemu_bridge_helper" pid=787 comm="apparmor_parser"
[    4.784050] audit: type=1400 audit(1750949921.752:8): apparmor="STATUS" operation="profile_load" profile="unconfined" name="/usr/bin/man" pid=785 comm="apparmor_parser"
[    4.785979] audit: type=1400 audit(1750949921.752:9): apparmor="STATUS" operation="profile_load" profile="unconfined" name="man_filter" pid=785 comm="apparmor_parser"
[    4.786434] [trim-mounts-hash]'rpc_pipefs'[00000000b868df5d]'s top mountpoint dentry: run
[    4.787311] audit: type=1400 audit(1750949921.752:10): apparmor="STATUS" operation="profile_load" profile="unconfined" name="man_groff" pid=785 comm="apparmor_parser"
[    4.787986] [trim-mounts-hash]dentry 'run' type: 0
         Starting systemd-timesyncd… - Network Time Synchronization...
         Starting systemd-update-ut…rd System Boot/Shutdown in UTMP...
[  OK  ] Started rpcbind.service - RPC bind portmap service.
[  OK  ] Finished apparmor.service - Load AppArmor profiles.
[  OK  ] Mounted run-rpc_pipefs.mount - RPC Pipe File System.
[  OK  ] Reached target rpc_pipefs.target.
[  OK  ] Reached target rpcbind.target - RPC Port Mapper.
         Starting nfs-blkmap.servic…NFS block layout mapping daemon...
         Starting nfs-idmapd.servic…- NFSv4 ID-name mapping service...
         Starting nfsdcld.serviceFSv4 Client Tracking Daemon...
[  OK  ] Reached target nfs-client.target - NFS client services.
[  OK  ] Reached target remote-fs-p…eparation for Remote File Systems.
[  OK  ] Reached target remote-fs.target - Remote File Systems.
[  OK  ] Started nfs-blkmap.service… pNFS block layout mapping daemon.
[    4.860228] [trim-mounts-hash]'dev'[0000000007137339]'s top mountpoint dentry: tmp
[    4.860898] [trim-mounts-hash]dentry 'tmp' type: 0
[  OK  ] Finished systemd-update-ut…cord System Boot/Shutdown in UTMP.
[  OK  ] Started nfs-idmapd.service…m - NFSv4 ID-name mapping service.
[  OK  ] Started nfsdcld.service - NFSv4 Client Tracking Daemon.
[    4.963935] [trim-mounts-hash]'proc'[000000001267dede]'s top mountpoint dentry: run
[    4.964665] [trim-mounts-hash]dentry 'run' type: 0
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
         Starting rsyslog.service - System Logging Service...
         Starting smartmontools.ser…rting Technology (SMART) Daemon...
         Starting sysstat.service - Resets System Activity Logs...
         Starting system_setmac.ser…able MAC addresses from MMC CID...
         Starting systemd-logind.se…ice - User Login Management...
         Starting systemd-machined.… Container Registration Service...
[  OK  ] Started wsdd2.service …MNR Discovery/Name Service Daemon.
         Starting zramswap.service - Linux zramswap setup...
[    5.069408] [trim-mounts-hash]'proc'[000000001267dede]'s top mountpoint dentry: run
[    5.070100] [trim-mounts-hash]dentry 'run' type: 0
[    5.072353] [trim-mounts-hash]'dev'[00000000d8c662a0]'s top mountpoint dentry: tmp
[    5.073031] [trim-mounts-hash]dentry 'tmp' type: 0
[  OK  ] Finished sysstat.service - Resets System Activity Logs.
[    5.105890] zram0: detected capacity change from 0 to 16337128
[  OK  ] Started rsyslog.service - System Logging Service.
[  OK  ] Started dbus.service - D-Bus System Message Bus.
[    5.127360] Adding 8168560k swap on /dev/zram0.  Priority:100 extents:1 across:8168560k SS
         Starting wpa_supplicant.service - WPA supplicant...
[  OK  ] Finished system_setmac.ser…stable MAC addresses from MMC CID.
[  OK  ] Finished zramswap.service - Linux zramswap setup.
[  OK  ] Reached target network-pre…get - Preparation for Network.
         Starting NetworkManager.service - Network Manager...
         Starting ovsdb-server.serv…0m - Open vSwitch Database Unit...
[  OK  ] Started systemd-logind.service - User Login Management.
[  OK  ] Started systemd-machined.s…nd Container Registration Service.
[  OK  ] Started avahi-daemon.service - Avahi mDNS/DNS-SD Stack.
[  OK  ] Started polkit.service - Authorization Manager.
         Starting ModemManager.service - Modem Manager...
[  OK  ] Started wpa_supplicant.service - WPA supplicant.
[  OK  ] Finished nut-driver-enumer…vices into systemd unit instances.
[  OK  ] Reached target nut-driver.…wer device drivers on this system.
[  OK  ] Stopped wsdd2.service …MNR Discovery/Name Service Daemon.
[    5.237013] [trim-mounts-hash]'dev'[00000000a9a6b7d6]'s top mountpoint dentry: tmp
[  OK  ] Started wsdd2.service …MNR Di[    5.237683] [trim-mounts-hash]dentry 'tmp' type: 0
scovery/Name Service Daemon.
[  OK  ] Finished e2scrub_reap.serv…ine ext4 Metadata Check Snapshots.
[    5.281466] nvme nvme0: using unchecked data buffer
[  OK  ] Started smartmontools.serv…porting Technology (SMART) Daemon.
[  OK  ] Started ModemManager.service - Modem Manager.
[  OK  ] Stopped wsdd2.service …MNR Discovery/Name Service Daemon.
[  OK  ] Started wsdd2.service …MNR Di[    5.417706] [trim-mounts-hash]'dev'[000000003018d3e7]'s top mountpoint dentry: tmp
scovery/Name Service Daemon.
[    5.418582] [trim-mounts-hash]dentry 'tmp' type: 0
[FAILED] Failed to start wsdd2.serv…MNR Discovery/Name Service Daemon.
See 'systemctl status wsdd2.service' for details.
[  OK  ] Started NetworkManager.service - Network Manager.
         Starting NetworkManager-wa…m - Network Manager Wait Online...
         Starting systemd-hostnamed.service - Hostname Service...
[    5.487617] [trim-mounts-hash]'dev'[00000000eab5bd17]'s top mountpoint dentry: tmp
[    5.488322] [trim-mounts-hash]dentry 'tmp' type: 0
[    5.500395] [trim-mounts-hash]'proc'[000000001267dede]'s top mountpoint dentry: run
[    5.501092] [trim-mounts-hash]dentry 'run' type: 0
[  OK  ] Started systemd-hostnamed.service - Hostname Service.
[  OK  ] Listening on systemd-rfkil…l Switch Status /dev/rfkill Watch.
         Starting NetworkManager-di…nager Script Dispatcher Service...
[    5.640306] Realtek Internal NBASE-T PHY r8169-3-3100:00: attached PHY driver (mii_bus:phy_addr=r8169-3-3100:00, irq=MAC)
[  OK  ] Started NetworkManager-dis…Manager Script Dispatcher Service.
[  OK  ] Started ovsdb-server.servi… - Open vSwitch Database Unit.
         Starting ovs-vswitchd.serv… - Open vSwitch Forwarding Unit...
[    5.816669] r8169 0003:31:00.0 eth0: Link is Down
[    5.835890] rk_gmac-dwmac fe1b0000.ethernet eth1: Register MEM_TYPE_PAGE_POOL RxQ-0
[    5.838898] rk_gmac-dwmac fe1b0000.ethernet eth1: Register MEM_TYPE_PAGE_POOL RxQ-1
[    5.899443] openvswitch: Open vSwitch switching datapath
[    6.848148] rk_gmac-dwmac fe1b0000.ethernet eth1: Failed to reset the dma
[    6.848826] rk_gmac-dwmac fe1b0000.ethernet eth1: stmmac_hw_setup: DMA engine initialization failed
[    6.849640] rk_gmac-dwmac fe1b0000.ethernet eth1: __stmmac_open: Hw setup failed
[  OK  ] Started ovs-vswitchd.servi…0m - Open vSwitch Forwarding Unit.
         Starting networking.service - Raise network interfaces...
         Starting openvswitch-switch.service - Open vSwitch...
[  OK  ] Finished openvswitch-switch.service - Open vSwitch.
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
         Starting systemd-user-sess…vice - Permit User Sessions...
[  OK  ] Finished systemd-user-sess…ervice - Permit User Sessions.
[  OK  ] Finished libvirt-guests.se…end/Resume Running libvirt Guests.
[  OK  ] Started libvirtd.service - Virtualization daemon.
[  OK  ] Started smbd.service - Samba SMB/CIFS daemon (smbd).
[    7.732235] r8169 0003:31:00.0: invalid VPD tag 0x00 (size 0) at offset 0; assume missing optional EEPROM
[  OK  ] Started containerd.service…0m - containerd container runtime.
[  OK  ] Finished NetworkManager-wa…[0m - Network Manager Wait Online.
[  OK  ] Reached target network-online.target - Network is Online.
         Starting nfs-mountd.service - NFS Mount Daemon...
         Starting nmbd.service - Samba NMB Daemon...
         Starting ovs-record-hostna… - Open vSwitch Record Hostname...
         Starting rc-local.service - /etc/rc.local Compatibility...
         Starting rpc-statd.service…us monitor for NFSv2/3 locking....
         Starting samba-ad-dc.service - Samba AD Daemon...
[  OK  ] Started nfs-mountd.service - NFS Mount Daemon.
[  OK  ] Started rc-local.service - /etc/rc.local Compatibility.
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




For more information, help or support, go here:
https://www.fnnas.com

fnnas login: root
Password: 
Linux fnnas 6.18.18-trim #491 SMP PREEMPT Fri Apr 17 03:28:48 UTC 2026 aarch64

The programs included with the Debian GNU/Linux system are free software;
the exact distribution terms for each program are described in the
individual files in /usr/share/doc/*/copyright.

Debian GNU/Linux comes with ABSOLUTELY NO WARRANTY, to the extent
permitted by applicable law.
root@fnnas:~# ip a
1: lo: <LOOPBACK,UP,LOWER_UP> mtu 65536 qdisc noqueue state UNKNOWN group default qlen 1000
    link/loopback 00:00:00:00:00:00 brd 00:00:00:00:00:00
    inet 127.0.0.1/8 scope host lo
       valid_lft forever preferred_lft forever
    inet6 ::1/128 scope host 
       valid_lft forever preferred_lft forever
2: eth0: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc fq state DOWN group default qlen 1000
    link/ether 06:f0:dc:b3:5a:9c brd ff:ff:ff:ff:ff:ff
    altname enP3p49s0
3: eth1: <BROADCAST,MULTICAST> mtu 1500 qdisc noop state DOWN group default qlen 1000
    link/ether de:a7:9e:e1:50:3e brd ff:ff:ff:ff:ff:ff
    altname end0
4: docker0: <NO-CARRIER,BROADCAST,MULTICAST,UP> mtu 1500 qdisc noqueue state DOWN group default 
    link/ether fa:42:80:42:60:0f brd ff:ff:ff:ff:ff:ff
    inet 172.17.0.1/16 brd 172.17.255.255 scope global docker0
       valid_lft forever preferred_lft forever
root@fnnas:~# 

```


### fnnas_rockchip_bdy-g98_k6.18.18_2026.07.26.img.gz


测试描述：
1. 能正常引导，自动获取ip正常
2. 其他待测试

#### 引导日志

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
DQ rds:h1 h4 l0 h5 h2 h5 h6 h2, h4 h3 l0 h4 h3 h1 h3 h3 

DQS rds:l0,h1 
CH1 RX Vref:29.3%, TX Vref:23.8%,23.8%
DQ rds:h2 h2 h1 h1 h2 h3 h2 h3, h3 h3 h5 l0 h3 h5 h2 l0 

DQS rds:l0,h3 
CH2 RX Vref:29.7%, TX Vref:21.8%,21.8%
DQ rds:h3 h1 h7 h1 h2 h2 l0 l0, h6 h2 h1 h3 h4 h1 h5 h3 

DQS rds:h1,h1 
CH3 RX Vref:30.1%, TX Vref:22.8%,21.8%
DQ rds:h6 h2 h4 h3 h3 h2 h1 h4, h2 h3 h3 h4 h1 h2 h1 h4 

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
## Checking atf-1 0x00060000 (gzip @0x00260000) ... sha256(047b7bdbff...) + sha256(f99c6f8fb6...) + OK
## Checking uboot 0x00200000 (gzip @0x00400000) ... sha256(40b389ad51...) + sha256(2030c39880...) + OK
## Checking fdt 0x00374a38 ... sha256(2fba0da159...) + OK
## Checking atf-2 0xff100000 ... sha256(74bbc58e20...) + OK
## Checking atf-3 0x000f0000 ... sha256(13b94d9d5a...) + OK
## Checking optee 0x08400000 (gzip @0x08600000) ... sha256(f3a40240f3...) + sha256(76eeb0b48d...) + OK
Jumping to U-Boot(0x00200000) via ARM Trusted Firmware(0x00060000)
Total: 509.908/710.766 ms

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


U-Boot next-dev-gc09af4f875-250929-dirty #root (Aug 29 2026 - 01:13:35 +0800)

Model: BYD G98 Compiled By yifengyou
MPIDR: 0x0
PreSerial: 2, raw, 0xfeb50000
DRAM:  16 GiB
Sysmem: init
Relocation Offset: ed8e5000
Relocation fdt: eb7f66f0 - eb7fecb8, kfdt: 0037d000 - 0037d000
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
Model: BYD G98 Compiled By yifengyou
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
3406 bytes read in 24 ms (137.7 KiB/s)
## Executing script at 00500000
Ignoring attempt to modify 'load_addr'
Boot script loaded from scsi 0
407 bytes read in 13 ms (30.3 KiB/s)
19195590 bytes read in 376 ms (48.7 MiB/s)
32926208 bytes read in 597 ms (52.6 MiB/s)
211244 bytes read in 293 ms (703.1 KiB/s)
** File not found /dtb/rockchip/overlay/rk3588-fixup.scr **
Fdt Ramdisk skip relocation
No misc partition
## Loading init Ramdisk from Legacy Image at 0a200000 ...
   Image Name:   uInitrd
   Image Type:   AArch64 Linux RAMDisk Image (uncompressed)
   Data Size:    19195526 Bytes = 18.3 MiB
   Load Address: 00000000
   Entry Point:  00000000
   Verifying Checksum ... OK
## Flattened Device Tree blob at 0x08300000
   Booting using the fdt blob at 0x08300000
   reserving fdt memory region: addr=8300000 size=99000
   Using Device Tree in place at 0000000008300000, end 000000000839bfff
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
Total: 5698.718/5774.104 ms

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
[    0.000000] NODE_DATA(0) allocated [mem 0x4fdef8a40-0x4fdefb1ff]
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
[    0.000000] Kernel command line: root=UUID=193840fc-a737-4187-b13e-3544fcbfd1dc rootwait rootfstype=btrfs rootflags=compress=zstd:1 bootsplash.bootfile=bootsplash.armbian earlycon console=ttyS2,1500000 console=ttyFIQ0 console=tty1 consoleblank=0 loglevel=7 ubootpart=f8fa9a5a-55df-436c-b2a0-c10c925e1fde usb-storage.quirks=0x2537:0x1066:u,0x2537:0x1068:u rw rootwait net.ifnames=0 max_loop=128 cgroup_enable=cpuset cgroup_memory=1 cgroup_enable=memory swapaccount=1 androidboot.fwver=ddr-v1.21-cb12b99cc23,spl-v1.14,bl31-v1.54,bl32-v1.20,uboot-gc09af4f87-08/29/2026
[    0.000000] Unknown kernel command line parameters "ubootpart=f8fa9a5a-55df-436c-b2a0-c10c925e1fde cgroup_enable=memory cgroup_memory=1", will be passed to user space.
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
[    0.000001] sched_clock: 56 bits at 24MHz, resolution 41ns, wraps every 4398046511097ns
[    0.001818] Console: colour dummy device 80x25
[    0.002226] printk: legacy console [tty1] enabled
[    0.002687] printk: legacy bootconsole [uart0] disabled
ISr1ig/cy i  b
              ISr2igTc snnwo
                            ISr3igTo snowo
                                          I aUiiISa t mro
                                                         ISaUtiISr t mro
                                                                        ISaUtiISa t mro
                                                                                       ISa tiISr t mrt
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
[    0.000000] NODE_DATA(0) allocated [mem 0x4fdef8a40-0x4fdefb1ff]
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
[    0.000000] Kernel command line: root=UUID=193840fc-a737-4187-b13e-3544fcbfd1dc rootwait rootfstype=btrfs rootflags=compress=zstd:1 bootsplash.bootfile=bootsplash.armbian earlycon console=ttyS2,1500000 console=ttyFIQ0 console=tty1 consoleblank=0 loglevel=7 ubootpart=f8fa9a5a-55df-436c-b2a0-c10c925e1fde usb-storage.quirks=0x2537:0x1066:u,0x2537:0x1068:u rw rootwait net.ifnames=0 max_loop=128 cgroup_enable=cpuset cgroup_memory=1 cgroup_enable=memory swapaccount=1 androidboot.fwver=ddr-v1.21-cb12b99cc23,spl-v1.14,bl31-v1.54,bl32-v1.20,uboot-gc09af4f87-08/29/2026
[    0.000000] Unknown kernel command line parameters "ubootpart=f8fa9a5a-55df-436c-b2a0-c10c925e1fde cgroup_enable=memory cgroup_memory=1", will be passed to user space.
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
[    0.000001] sched_clock: 56 bits at 24MHz, resolution 41ns, wraps every 4398046511097ns
[    0.001818] Console: colour dummy device 80x25
[    0.002226] printk: legacy console [tty1] enabled
[    0.002687] printk: legacy bootconsole [uart0] disabled
[    0.003265] Calibrating delay loop (skipped), value calculated using timer frequency.. 48.00 BogoMIPS (lpj=96000)
[    0.003289] pid_max: default: 32768 minimum: 301
[    0.003397] LSM: initializing lsm=capability,yama,apparmor
[    0.003463] Yama: becoming mindful.
[    0.003689] AppArmor: AppArmor initialized
[    0.003788] Mount-cache hash table entries: 32768 (order: 6, 262144 bytes, linear)
[    0.003834] Mountpoint-cache hash table entries: 32768 (order: 6, 262144 bytes, linear)
[    0.006219] rcu: Hierarchical SRCU implementation.
[    0.006235] rcu: 	Max phase no-delay instances is 1000.
[    0.006459] Timer migration: 1 hierarchy levels; 8 children per group; 1 crossnode level
[    0.007268] EFI services will not be available.
[    0.007569] smp: Bringing up secondary CPUs ...
[    0.008224] Detected VIPT I-cache on CPU1
[    0.008423] GICv3: CPU1: found redistributor 100 region 0:0x00000000fe6a0000
[    0.008437] GICv3: CPU1: using allocated LPI pending table @0x00000001004c0000
[    0.008478] CPU1: Booted secondary processor 0x0000000100 [0x412fd050]
[    0.009167] Detected VIPT I-cache on CPU2
[    0.009359] GICv3: CPU2: found redistributor 200 region 0:0x00000000fe6c0000
[    0.009372] GICv3: CPU2: using allocated LPI pending table @0x00000001004d0000
[    0.009407] CPU2: Booted secondary processor 0x0000000200 [0x412fd050]
[    0.010078] Detected VIPT I-cache on CPU3
[    0.010268] GICv3: CPU3: found redistributor 300 region 0:0x00000000fe6e0000
[    0.010280] GICv3: CPU3: using allocated LPI pending table @0x00000001004e0000
[    0.010313] CPU3: Booted secondary processor 0x0000000300 [0x412fd050]
[    0.011036] CPU features: detected: Spectre-v4
[    0.011041] CPU features: detected: Spectre-BHB
[    0.011046] CPU features: detected: SSBS not fully self-synchronizing
[    0.011049] Detected PIPT I-cache on CPU4
[    0.011156] GICv3: CPU4: found redistributor 400 region 0:0x00000000fe700000
[    0.011164] GICv3: CPU4: using allocated LPI pending table @0x00000001004f0000
[    0.011187] CPU4: Booted secondary processor 0x0000000400 [0x414fd0b0]
[    0.011829] Detected PIPT I-cache on CPU5
[    0.011944] GICv3: CPU5: found redistributor 500 region 0:0x00000000fe720000
[    0.011952] GICv3: CPU5: using allocated LPI pending table @0x0000000100500000
[    0.011977] CPU5: Booted secondary processor 0x0000000500 [0x414fd0b0]
[    0.012611] Detected PIPT I-cache on CPU6
[    0.012725] GICv3: CPU6: found redistributor 600 region 0:0x00000000fe740000
[    0.012734] GICv3: CPU6: using allocated LPI pending table @0x0000000100510000
[    0.012758] CPU6: Booted secondary processor 0x0000000600 [0x414fd0b0]
[    0.013548] Detected PIPT I-cache on CPU7
[    0.013664] GICv3: CPU7: found redistributor 700 region 0:0x00000000fe760000
[    0.013672] GICv3: CPU7: using allocated LPI pending table @0x0000000100520000
[    0.013696] CPU7: Booted secondary processor 0x0000000700 [0x414fd0b0]
[    0.013776] smp: Brought up 1 node, 8 CPUs
[    0.014041] SMP: Total of 8 processors activated.
[    0.014052] CPU: All CPU(s) started at EL2
[    0.014064] CPU features: detected: 32-bit EL0 Support
[    0.014076] CPU features: detected: Data cache clean to the PoU not required for I/D coherence
[    0.014093] CPU features: detected: Common not Private translations
[    0.014105] CPU features: detected: CRC32 instructions
[    0.014121] CPU features: detected: RCpc load-acquire (LDAPR)
[    0.014133] CPU features: detected: LSE atomic instructions
[    0.014145] CPU features: detected: Privileged Access Never
[    0.014157] CPU features: detected: PMUv3
[    0.014167] CPU features: detected: RAS Extension Support
[    0.014183] CPU features: detected: Speculative Store Bypassing Safe (SSBS)
[    0.014256] alternatives: applying system-wide alternatives
[    0.017587] CPU features: detected: Hardware dirty bit management on CPU4-7
[    0.018004] Memory: 16172416K/16752640K available (17792K kernel code, 2970K rwdata, 5636K rodata, 5568K init, 714K bss, 439948K reserved, 131072K cma-reserved)
[    0.021407] [trim-mounts-hash]'/'[(____ptrval____)]'s top mountpoint dentry: /
[    0.021431] [trim-mounts-hash]dentry '/' type: 0
[    0.021467] devtmpfs: initialized
[    0.033628] clocksource: jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 7645041785100000 ns
[    0.033655] posixtimers hash table entries: 4096 (order: 4, 65536 bytes, linear)
[    0.033696] futex hash table entries: 2048 (131072 bytes on 1 NUMA nodes, total 128 KiB, linear).
[    0.034260] 24528 pages in range for non-PLT usage
[    0.034263] 516048 pages in range for PLT usage
[    0.034402] pinctrl core: initialized pinctrl subsystem
[    0.034660] DMI not present or invalid.
[    0.036407] NET: Registered PF_NETLINK/PF_ROUTE protocol family
[    0.037133] DMA: preallocated 2048 KiB GFP_KERNEL pool for atomic allocations
[    0.037421] DMA: preallocated 2048 KiB GFP_KERNEL|GFP_DMA pool for atomic allocations
[    0.037699] DMA: preallocated 2048 KiB GFP_KERNEL|GFP_DMA32 pool for atomic allocations
[    0.037724] audit: initializing netlink subsys (disabled)
[    0.037829] audit: type=2000 audit(0.036:1): state=initialized audit_enabled=0 res=1
[    0.039473] thermal_sys: Registered thermal governor 'step_wise'
[    0.039507] cpuidle: using governor menu
[    0.039680] hw-breakpoint: found 6 breakpoint and 4 watchpoint registers.
[    0.039794] ASID allocator initialised with 65536 entries
[    0.039876] Serial: AMBA PL011 UART driver
[    0.050541] /vop@fdd90000: Fixed dependency cycle(s) with /hdmi@fde80000
[    0.050575] /hdmi@fde80000: Fixed dependency cycle(s) with /vop@fdd90000
[    0.053195] /pcie@fe180000: Fixed dependency cycle(s) with /pcie@fe180000/legacy-interrupt-controller
[    0.056986] sram ff001000.sram: block at 0x0 starts after current offset 0x78000
[    0.056999] sram ff001000.sram: probe with driver sram failed with error -22
[    0.063669] gpio gpiochip0: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.064019] rockchip-gpio fd8a0000.gpio: probed /pinctrl/gpio@fd8a0000
[    0.064166] gpio gpiochip1: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.064299] rockchip-gpio fec20000.gpio: probed /pinctrl/gpio@fec20000
[    0.064431] gpio gpiochip2: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.064552] rockchip-gpio fec30000.gpio: probed /pinctrl/gpio@fec30000
[    0.064680] gpio gpiochip3: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.064804] rockchip-gpio fec40000.gpio: probed /pinctrl/gpio@fec40000
[    0.065000] gpio gpiochip4: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.065123] rockchip-gpio fec50000.gpio: probed /pinctrl/gpio@fec50000
[    0.066560] /pcie@fe150000: Fixed dependency cycle(s) with /pcie@fe150000/legacy-interrupt-controller
[    0.066912] /pcie@fe160000: Fixed dependency cycle(s) with /pcie@fe160000/legacy-interrupt-controller
[    0.067283] /pcie@fe170000: Fixed dependency cycle(s) with /pcie@fe170000/legacy-interrupt-controller
[    0.072093] /hdmi@fde80000: Fixed dependency cycle(s) with /hdmi0-con
[    0.072125] /hdmi0-con: Fixed dependency cycle(s) with /hdmi@fde80000
[    0.072823] HugeTLB: registered 1.00 GiB page size, pre-allocated 0 pages
[    0.072832] HugeTLB: 0 KiB vmemmap can be freed for a 1.00 GiB page
[    0.072839] HugeTLB: registered 32.0 MiB page size, pre-allocated 0 pages
[    0.072844] HugeTLB: 0 KiB vmemmap can be freed for a 32.0 MiB page
[    0.072850] HugeTLB: registered 2.00 MiB page size, pre-allocated 0 pages
[    0.072855] HugeTLB: 0 KiB vmemmap can be freed for a 2.00 MiB page
[    0.072862] HugeTLB: registered 64.0 KiB page size, pre-allocated 0 pages
[    0.072867] HugeTLB: 0 KiB vmemmap can be freed for a 64.0 KiB page
[    0.141735] raid6: neonx8   gen()  5133 MB/s
[    0.209802] raid6: neonx4   gen()  5089 MB/s
[    0.277875] raid6: neonx2   gen()  4301 MB/s
[    0.345943] raid6: neonx1   gen()  3410 MB/s
[    0.414013] raid6: int64x8  gen()  2267 MB/s
[    0.482082] raid6: int64x4  gen()  2384 MB/s
[    0.550158] raid6: int64x2  gen()  1990 MB/s
[    0.618232] raid6: int64x1  gen()  1638 MB/s
[    0.618237] raid6: using algorithm neonx8 gen() 5133 MB/s
[    0.686294] raid6: .... xor() 3874 MB/s, rmw enabled
[    0.686300] raid6: using neon recovery algorithm
[    0.686758] iommu: Default domain type: Translated
[    0.686766] iommu: DMA domain TLB invalidation policy: strict mode
[    0.687207] SCSI subsystem initialized
[    0.687397] usbcore: registered new interface driver usbfs
[    0.687418] usbcore: registered new interface driver hub
[    0.687433] usbcore: registered new device driver usb
[    0.687677] pps_core: LinuxPPS API ver. 1 registered
[    0.687683] pps_core: Software ver. 5.3.6 - Copyright 2005-2007 Rodolfo Giometti <giometti@linux.it>
[    0.687694] PTP clock support registered
[    0.687711] EDAC MC: Ver: 3.0.0
[    0.687859] scmi_core: SCMI protocol bus registered
[    0.688388] NetLabel: Initializing
[    0.688395] NetLabel:  domain hash size = 128
[    0.688399] NetLabel:  protocols = UNLABELED CIPSOv4 CALIPSO
[    0.688433] NetLabel:  unlabeled traffic allowed by default
[    0.688523] vgaarb: loaded
[    0.688877] clocksource: Switched to clocksource arch_sys_counter
[    0.689064] VFS: Disk quotas dquot_6.6.0
[    0.689082] VFS: Dquot-cache hash table entries: 512 (order 0, 4096 bytes)
[    0.689408] AppArmor: AppArmor Filesystem Enabled
[    0.693753] NET: Registered PF_INET protocol family
[    0.693954] IP idents hash table entries: 262144 (order: 9, 2097152 bytes, linear)
[    0.701010] tcp_listen_portaddr_hash hash table entries: 8192 (order: 5, 131072 bytes, linear)
[    0.701165] Table-perturb hash table entries: 65536 (order: 6, 262144 bytes, linear)
[    0.701252] TCP established hash table entries: 131072 (order: 8, 1048576 bytes, linear)
[    0.702214] TCP bind hash table entries: 65536 (order: 9, 2097152 bytes, linear)
[    0.703803] TCP: Hash tables configured (established 131072 bind 65536)
[    0.703892] UDP hash table entries: 8192 (order: 7, 524288 bytes, linear)
[    0.704436] UDP-Lite hash table entries: 8192 (order: 7, 524288 bytes, linear)
[    0.705018] NET: Registered PF_UNIX/PF_LOCAL protocol family
[    0.705041] NET: Registered PF_XDP protocol family
[    0.705051] PCI: CLS 0 bytes, default 64
[    0.705142] Trying to unpack rootfs image as initramfs...
[    0.710401] kvm [1]: nv: 568 coarse grained trap handlers
[    0.710612] kvm [1]: IPA Size Limit: 40 bits
[    0.710635] kvm [1]: GICv3: no GICV resource entry
[    0.710641] kvm [1]: disabling GICv2 emulation
[    0.710665] kvm [1]: GIC system register CPU interface enabled
[    0.710684] kvm [1]: vgic interrupt IRQ18
[    0.710709] kvm [1]: VHE mode initialized successfully
[    0.711616] Initialise system trusted keyrings
[    0.711639] Key type blacklist registered
[    0.711764] workingset: timestamp_bits=44 max_order=22 bucket_order=0
[    0.712093] squashfs: version 4.0 (2009/01/31) Phillip Lougher
[    0.712292] fuse: init (API version 7.45)
[    0.713016] trim_trashbin_init
[    0.713024] trim-trashbin driver major=244,minor=0
[    0.713236] integrity: Platform Keyring initialized
[    0.713402] cryptd: max_cpu_qlen set to 1000
[    0.749037] xor: measuring software checksum speed
[    0.749564]    8regs           :  6305 MB/sec
[    0.750096]    32regs          :  6238 MB/sec
[    0.750476]    arm64_neon      :  8753 MB/sec
[    0.750481] xor: using function: arm64_neon (8753 MB/sec)
[    0.750490] Key type asymmetric registered
[    0.750495] Asymmetric key parser 'x509' registered
[    0.750539] Block layer SCSI generic (bsg) driver version 0.4 loaded (major 243)
[    0.750672] io scheduler mq-deadline registered
[    0.750684] io scheduler kyber registered
[    0.750726] io scheduler bfq registered
[    1.103484] Freeing initrd memory: 18740K
[    1.105001] ledtrig-cpu: registered to indicate activity on CPUs
[    1.107567] dma-pl330 fea10000.dma-controller: Loaded driver for PL330 DMAC-241330
[    1.107580] dma-pl330 fea10000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    1.108252] dma-pl330 fea30000.dma-controller: Loaded driver for PL330 DMAC-241330
[    1.108263] dma-pl330 fea30000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    1.108981] dma-pl330 fed10000.dma-controller: Loaded driver for PL330 DMAC-241330
[    1.108991] dma-pl330 fed10000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    1.110486] Serial: 8250/16550 driver, 12 ports, IRQ sharing disabled
[    1.112471] printk: legacy console [ttyS2] disabled
[    1.112620] feb50000.serial: ttyS2 at MMIO 0xfeb50000 (irq = 41, base_baud = 1500000) is a 16550A
[    1.112662] printk: legacy console [ttyS2] enabled
[    1.269052] Serial: AMBA driver
[    1.269736] arm-smmu-v3 fc900000.iommu: ias 48-bit, oas 48-bit (features 0x001c1eaf)
[    1.271144] arm-smmu-v3 fc900000.iommu: allocated 65536 entries for cmdq
[    1.272026] arm-smmu-v3 fc900000.iommu: allocated 32768 entries for evtq
[    1.273050] arm-smmu-v3 fc900000.iommu: msi_domain absent - falling back to wired irqs
[    1.274840] rockchip-pm-domain fd8d8000.power-management:power-controller: supply domain not found, using dummy regulator
[    1.276251] platform fdab0000.npu: Adding to iommu group 0
[    1.277818] platform fdac0000.npu: Adding to iommu group 1
[    1.279324] platform fdad0000.npu: Adding to iommu group 2
[    1.280738] platform fdb50000.video-codec: Adding to iommu group 3
[    1.281570] platform fdb50400.vdpu: Adding to iommu group 3
[    1.282667] platform fdba0000.video-codec: Adding to iommu group 4
[    1.283545] platform fdba0000.jpege-core: Adding to iommu group 4
[    1.284610] platform fdba4000.video-codec: Adding to iommu group 5
[    1.285494] platform fdba4000.jpege-core: Adding to iommu group 5
[    1.286559] platform fdba8000.video-codec: Adding to iommu group 6
[    1.287431] platform fdba8000.jpege-core: Adding to iommu group 6
[    1.288494] platform fdbac000.video-codec: Adding to iommu group 7
[    1.289368] platform fdbac000.jpege-core: Adding to iommu group 7
[    1.290495] platform fdc38000.video-codec: Adding to iommu group 8
[    1.291368] platform fdc38100.rkvdec-core: Adding to iommu group 8
[    1.292608] platform fdc40000.video-codec: Adding to iommu group 9
[    1.293892] rk_iommu fdca0000.iommu: av1d iommu enabled
[    1.294869] platform fdc70000.av1d: Adding to iommu group 10
[    1.295820] platform fdd90000.vop: Adding to iommu group 11
[    1.297342] platform fdb60000.rga: Adding to iommu group 12
[    1.298641] platform fdb70000.rga: Adding to iommu group 13
[    1.299919] platform fdb90000.jpegd: Adding to iommu group 14
[    1.301224] platform fdbd0000.rkvenc-core: Adding to iommu group 15
[    1.302625] platform fdbe0000.rkvenc-core: Adding to iommu group 16
[    1.304050] platform fdc48100.rkvdec-core: Adding to iommu group 17
[    1.343704] loop: module loaded
[    1.344022] er_netlink: netlink socket created (protocol 31)
[    1.344522] Initialized event reporting module
[    1.345126] system_heap: orders[0] = 6
[    1.345458] system_heap: orders[1] = 4
[    1.345787] system_heap: orders[2] = 0
[    1.346739] Key type psk registered
[    1.347932] ahci-dwc fe210000.sata: supply ahci not found, using dummy regulator
[    1.348633] ahci-dwc fe210000.sata: supply phy not found, using dummy regulator
[    1.349452] platform fe210000.sata:sata-port@0: supply target not found, using dummy regulator
[    1.350299] ahci-dwc fe210000.sata: PMPn is limited up to 5 ports
[    1.350874] ahci-dwc fe210000.sata: masking port_map 0x1 -> 0x1
[    1.351403] ahci-dwc fe210000.sata: SSS flag set, parallel bus scan disabled
[    1.352027] ahci-dwc fe210000.sata: AHCI vers 0001.0300, 32 command slots, 6 Gbps, platform mode
[    1.352797] ahci-dwc fe210000.sata: 1/1 ports implemented (port mask 0x1)
[    1.353399] ahci-dwc fe210000.sata: flags: ncq sntf stag pm led clo only pmp fbs pio slum part ccc apst 
[    1.354690] scsi host0: ahci-dwc
[    1.355062] ata1: SATA max UDMA/133 mmio [mem 0xfe210000-0xfe210fff] port 0x100 irq 64 lpm-pol 0
[    1.356947] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/regulators/dcdc-reg7
[    1.357818] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs3-null-pins
[    1.358620] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs2-null-pins
[    1.359421] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs1-null-pins
[    1.361452] thunder_xcv, ver 1.0
[    1.361754] thunder_bgx, ver 1.0
[    1.362052] nicpf, ver 1.0
[    1.364415] usbcore: registered new interface driver usb-storage
[    1.366200] mousedev: PS/2 mouse device common for all mice
[    1.366833] i2c_dev: i2c /dev entries driver
[    1.371505] sdhci: Secure Digital Host Controller Interface driver
[    1.372051] sdhci: Copyright(c) Pierre Ossman
[    1.372443] Synopsys Designware Multimedia Card Interface Driver
[    1.373537] sdhci-pltfm: SDHCI platform and OF driver helper
[    1.375356] mmc2: CQHCI version 5.10
[    1.375548] arm-scmi arm-scmi.0.auto: Using scmi_smc_transport
[    1.376199] arm-scmi arm-scmi.0.auto: SCMI max-rx-timeout: 30ms / max-msg-size: 104bytes / max-msg: 20
[    1.377088] scmi_protocol scmi_dev.1: Enabled polling mode TX channel - prot_id:16
[    1.377832] arm-scmi arm-scmi.0.auto: SCMI Notifications - Core Enabled.
[    1.378445] arm-scmi arm-scmi.0.auto: SCMI Protocol v2.0 'rockchip:' Firmware version 0x0
[    1.379188] arm-scmi arm-scmi.0.auto: Enabling SCMI Quirk [quirk_clock_rates_triplet_out_of_spec]
[    1.380761] SMCCC: SOC_ID: ARCH_SOC_ID not implemented, skipping ....
[    1.381545] hid: raw HID events driver (C) Jiri Kosina
[    1.382044] usbcore: registered new interface driver usbhid
[    1.382534] usbhid: USB HID core driver
[    1.384838] hw perfevents: enabled with armv8_cortex_a55 PMU driver, 7 (0,8000003f) counters available
[    1.386868] hw perfevents: enabled with armv8_cortex_a76 PMU driver, 7 (0,8000003f) counters available
[    1.389093] NET: Registered PF_INET6 protocol family
[    1.390242] Segment Routing with IPv6
[    1.390581] In-situ OAM (IOAM) with IPv6
[    1.390962] NET: Registered PF_PACKET protocol family
[    1.391420] bridge: filtering via arp/ip/ip6tables is no longer available by default. Update your scripts to load br_netfilter if you need this.
[    1.392774] 8021q: 802.1Q VLAN Support v1.8
[    1.393178] Key type dns_resolver registered
[    1.397507] registered taskstats version 1
[    1.397958] Loading compiled-in X.509 certificates
[    1.403468] zswap: loaded using pool zstd
[    1.403916] Demotion targets for Node 0: null
[    1.404354] Key type .fscrypt registered
[    1.404701] Key type fscrypt-provisioning registered
[    1.405589] mmc2: SDHCI controller on fe2e0000.mmc [fe2e0000.mmc] using ADMA
[    1.405809] Btrfs loaded, zoned=yes, fsverity=yes
[    1.406689] Key type encrypted registered
[    1.407044] AppArmor: AppArmor sha256 policy hashing enabled
[    1.417787] mmc2: Failed to initialize a non-removable card
[    1.437156] rockchip-dw-pcie a40c00000.pcie: host bridge /pcie@fe180000 ranges:
[    1.438340] rockchip-dw-pcie a40c00000.pcie:       IO 0x00f3100000..0x00f31fffff -> 0x00f3100000
[    1.439132] rockchip-dw-pcie a40c00000.pcie:      MEM 0x00f3200000..0x00f3ffffff -> 0x00f3200000
[    1.439919] rockchip-dw-pcie a40c00000.pcie:      MEM 0x09c0000000..0x09ffffffff -> 0x09c0000000
[    1.440895] rockchip-dw-pcie a40c00000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    1.640961] rockchip-dw-pcie a40c00000.pcie: PCIe Gen.2 x1 link up
[    1.641849] rockchip-dw-pcie a40c00000.pcie: PCI host bridge to bus 0003:30
[    1.642480] pci_bus 0003:30: root bus resource [bus 30-3f]
[    1.642987] pci_bus 0003:30: root bus resource [io  0x0000-0xfffff] (bus address [0xf3100000-0xf31fffff])
[    1.643839] pci_bus 0003:30: root bus resource [mem 0xf3200000-0xf3ffffff]
[    1.644453] pci_bus 0003:30: root bus resource [mem 0x9c0000000-0x9ffffffff]
[    1.645126] pci 0003:30:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    1.645795] pci 0003:30:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    1.646350] pci 0003:30:00.0: PCI bridge to [bus 01-ff]
[    1.646823] pci 0003:30:00.0:   bridge window [io  0x0000-0x0fff]
[    1.647370] pci 0003:30:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    1.647979] pci 0003:30:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    1.648711] pci 0003:30:00.0: supports D1 D2
[    1.649114] pci 0003:30:00.0: PME# supported from D0 D1 D3hot
[    1.650323] pci 0003:30:00.0: Adding to iommu group 18
[    1.659634] pci 0003:30:00.0: Primary bus is hard wired to 0
[    1.660147] pci 0003:30:00.0: bridge configuration invalid ([bus 01-ff]), reconfiguring
[    1.661023] pci 0003:31:00.0: [10ec:8125] type 00 class 0x020000 PCIe Endpoint
[    1.661825] pci 0003:31:00.0: BAR 0: initial BAR value 0x00000000 invalid
[    1.662430] pci 0003:31:00.0: BAR 0 [io  size 0x0100]
[    1.662900] pci 0003:31:00.0: BAR 2 [mem 0x00000000-0x0000ffff 64bit]
[    1.663484] pci 0003:31:00.0: BAR 4 [mem 0x00000000-0x00003fff 64bit]
[    1.664431] pci 0003:31:00.0: supports D1 D2
[    1.664816] pci 0003:31:00.0: PME# supported from D0 D1 D2 D3hot D3cold
[    1.666085] pci 0003:31:00.0: Adding to iommu group 18
[    1.672934] pci 0003:31:00.0: ASPM: default states L0s L1
[    1.673460] pci_bus 0003:31: busn_res: [bus 31-3f] end is updated to 31
[    1.674073] pci 0003:30:00.0: bridge window [mem 0xf3200000-0xf32fffff]: assigned
[    1.674745] pci 0003:30:00.0: ROM [mem 0xf3300000-0xf330ffff pref]: assigned
[    1.675377] pci 0003:30:00.0: bridge window [io  0x1000-0x1fff]: assigned
[    1.675989] pci 0003:31:00.0: BAR 2 [mem 0xf3200000-0xf320ffff 64bit]: assigned
[    1.676674] pci 0003:31:00.0: BAR 4 [mem 0xf3210000-0xf3213fff 64bit]: assigned
[    1.677375] pci 0003:31:00.0: BAR 0 [io  0x1000-0x10ff]: assigned
[    1.677933] pci 0003:30:00.0: PCI bridge to [bus 31]
[    1.678382] pci 0003:30:00.0:   bridge window [io  0x1000-0x1fff]
[    1.678929] pci 0003:30:00.0:   bridge window [mem 0xf3200000-0xf32fffff]
[    1.679539] pci_bus 0003:30: resource 4 [io  0x0000-0xfffff]
[    1.680047] pci_bus 0003:30: resource 5 [mem 0xf3200000-0xf3ffffff]
[    1.680608] pci_bus 0003:30: resource 6 [mem 0x9c0000000-0x9ffffffff]
[    1.681195] pci_bus 0003:31: resource 0 [io  0x1000-0x1fff]
[    1.681696] pci_bus 0003:31: resource 1 [mem 0xf3200000-0xf32fffff]
[    1.685088] pcieport 0003:30:00.0: PME: Signaling with IRQ 86
[    1.686079] pcieport 0003:30:00.0: AER: enabled with IRQ 87
[    1.687808] rockchip-dw-pcie a40800000.pcie: host bridge /pcie@fe170000 ranges:
[    1.688483] rockchip-dw-pcie a40800000.pcie:       IO 0x00f2100000..0x00f21fffff -> 0x00f2100000
[    1.689314] rockchip-dw-pcie a40800000.pcie:      MEM 0x00f2200000..0x00f2ffffff -> 0x00f2200000
[    1.690105] rockchip-dw-pcie a40800000.pcie:      MEM 0x0980000000..0x09bfffffff -> 0x0980000000
[    1.691034] rockchip-dw-pcie a40800000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    1.825026] ata1: SATA link up 6.0 Gbps (SStatus 133 SControl 300)
[    1.827342] ata1.00: ATA-9: ADATA SP920SS, 1.08, max UDMA/133
[    1.827865] ata1.00: 250069679 sectors, multi 0: LBA48 NCQ (depth 32)
[    1.829307] ata1.00: Features: HIPM DIPM
[    1.831899] ata1.00: configured for UDMA/133
[    1.832520] scsi 0:0:0:0: Direct-Access     ATA      ADATA SP920SS    1.08 PQ: 0 ANSI: 5
[    1.833881] sd 0:0:0:0: [sda] 250069679 512-byte logical blocks: (128 GB/119 GiB)
[    1.834588] sd 0:0:0:0: [sda] Write Protect is off
[    1.835090] sd 0:0:0:0: [sda] Write cache: enabled, read cache: enabled, doesn't support DPO or FUA
[    1.835994] sd 0:0:0:0: [sda] Preferred minimum I/O size 512 bytes
[    1.856336] GPT:Primary header thinks Alt. header is not at the end of the disk.
[    1.857017] GPT:13664255 != 250069678
[    1.857350] GPT:Alternate GPT header not at the end of the disk.
[    1.857884] GPT:13664255 != 250069678
[    1.858213] GPT: Use GNU Parted to correct GPT errors.
[    1.858686]  sda: sda1 sda2
[    1.859351] sd 0:0:0:0: [sda] Attached SCSI disk
[    1.888966] rockchip-dw-pcie a40800000.pcie: PCIe Gen.2 x1 link up
[    1.889623] rockchip-dw-pcie a40800000.pcie: PCI host bridge to bus 0002:20
[    1.890252] pci_bus 0002:20: root bus resource [bus 20-2f]
[    1.890747] pci_bus 0002:20: root bus resource [io  0x100000-0x1fffff] (bus address [0xf2100000-0xf21fffff])
[    1.891620] pci_bus 0002:20: root bus resource [mem 0xf2200000-0xf2ffffff]
[    1.892234] pci_bus 0002:20: root bus resource [mem 0x980000000-0x9bfffffff]
[    1.892901] pci 0002:20:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    1.893569] pci 0002:20:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    1.894124] pci 0002:20:00.0: PCI bridge to [bus 01-ff]
[    1.894598] pci 0002:20:00.0:   bridge window [io  0x0000-0x0fff]
[    1.895144] pci 0002:20:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    1.895753] pci 0002:20:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    1.896483] pci 0002:20:00.0: supports D1 D2
[    1.896869] pci 0002:20:00.0: PME# supported from D0 D1 D3hot
[    1.897873] pci 0002:20:00.0: Adding to iommu group 19
[    1.907324] pci 0002:20:00.0: Primary bus is hard wired to 0
[    1.907837] pci 0002:20:00.0: bridge configuration invalid ([bus 01-ff]), reconfiguring
[    1.908698] pci 0002:21:00.0: [10ec:8125] type 00 class 0x020000 PCIe Endpoint
[    1.909513] pci 0002:21:00.0: BAR 0 [io  0x0000-0x00ff]
[    1.909999] pci 0002:21:00.0: BAR 2 [mem 0x00000000-0x0000ffff 64bit]
[    1.910584] pci 0002:21:00.0: BAR 4 [mem 0x00000000-0x00003fff 64bit]
[    1.911529] pci 0002:21:00.0: supports D1 D2
[    1.911914] pci 0002:21:00.0: PME# supported from D0 D1 D2 D3hot D3cold
[    1.913190] pci 0002:21:00.0: Adding to iommu group 19
[    1.920933] pci 0002:21:00.0: ASPM: default states L0s L1
[    1.921464] pci_bus 0002:21: busn_res: [bus 21-2f] end is updated to 21
[    1.922077] pci 0002:20:00.0: bridge window [mem 0xf2200000-0xf22fffff]: assigned
[    1.922748] pci 0002:20:00.0: ROM [mem 0xf2300000-0xf230ffff pref]: assigned
[    1.923380] pci 0002:20:00.0: bridge window [io  0x100000-0x100fff]: assigned
[    1.924022] pci 0002:21:00.0: BAR 2 [mem 0xf2200000-0xf220ffff 64bit]: assigned
[    1.924706] pci 0002:21:00.0: BAR 4 [mem 0xf2210000-0xf2213fff 64bit]: assigned
[    1.925407] pci 0002:21:00.0: BAR 0 [io  0x100000-0x1000ff]: assigned
[    1.925995] pci 0002:20:00.0: PCI bridge to [bus 21]
[    1.926443] pci 0002:20:00.0:   bridge window [io  0x100000-0x100fff]
[    1.927020] pci 0002:20:00.0:   bridge window [mem 0xf2200000-0xf22fffff]
[    1.927630] pci_bus 0002:20: resource 4 [io  0x100000-0x1fffff]
[    1.928160] pci_bus 0002:20: resource 5 [mem 0xf2200000-0xf2ffffff]
[    1.928720] pci_bus 0002:20: resource 6 [mem 0x980000000-0x9bfffffff]
[    1.929308] pci_bus 0002:21: resource 0 [io  0x100000-0x100fff]
[    1.929840] pci_bus 0002:21: resource 1 [mem 0xf2200000-0xf22fffff]
[    1.933231] pcieport 0002:20:00.0: PME: Signaling with IRQ 98
[    1.934258] pcieport 0002:20:00.0: AER: enabled with IRQ 99
[    1.938822] fan53555-regulator 2-0042: FAN53555 Option[10] Rev[1] Detected!
[    1.938914] ehci-platform fc800000.usb: EHCI Host Controller
[    1.938918] ohci-platform fc840000.usb: Generic Platform OHCI controller
[    1.938932] ohci-platform fc840000.usb: new USB bus registered, assigned bus number 1
[    1.938974] ehci-platform fc880000.usb: EHCI Host Controller
[    1.938988] ehci-platform fc880000.usb: new USB bus registered, assigned bus number 2
[    1.938991] ohci-platform fc840000.usb: irq 102, io mem 0xfc840000
[    1.939055] ehci-platform fc880000.usb: irq 101, io mem 0xfc880000
[    1.939064] fan53555-regulator 0-0042: FAN53555 Option[10] Rev[1] Detected!
[    1.939068] ohci-platform fc8c0000.usb: Generic Platform OHCI controller
[    1.939090] ohci-platform fc8c0000.usb: new USB bus registered, assigned bus number 3
[    1.939198] ohci-platform fc8c0000.usb: irq 103, io mem 0xfc8c0000
[    1.939613] fan53555-regulator 0-0043: FAN53555 Option[10] Rev[1] Detected!
[    1.939960] ehci-platform fc800000.usb: new USB bus registered, assigned bus number 4
[    1.947383] ehci-platform fc800000.usb: irq 100, io mem 0xfc800000
[    1.948968] ehci-platform fc880000.usb: USB 2.0 started, EHCI 1.00
[    1.949607] usb usb2: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    1.950335] usb usb2: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    1.950968] usb usb2: Product: EHCI Host Controller
[    1.951398] usb usb2: Manufacturer: Linux 6.18.18-trim ehci_hcd
[    1.951917] usb usb2: SerialNumber: fc880000.usb
[    1.952735] hub 2-0:1.0: USB hub found
[    1.953098] hub 2-0:1.0: 1 port detected
[    1.956019] avdd_0v75_s0: Bringing 750000uV into 837500-837500uV
[    1.961076] ehci-platform fc800000.usb: USB 2.0 started, EHCI 1.00
[    1.961809] usb usb4: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    1.962551] usb usb4: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    1.963197] usb usb4: Product: EHCI Host Controller
[    1.963636] usb usb4: Manufacturer: Linux 6.18.18-trim ehci_hcd
[    1.964165] usb usb4: SerialNumber: fc800000.usb
[    1.965080] hub 4-0:1.0: USB hub found
[    1.965452] hub 4-0:1.0: 1 port detected
[    1.968287] input: rk805 pwrkey as /devices/platform/feb20000.spi/spi_master/spi2/spi2.0/rk805-pwrkey.3.auto/input/input0
[    1.970773] clk: Disabling unused clocks
[    1.971641] PM: genpd: Disabling unused power domains
[    1.997197] usb usb3: New USB device found, idVendor=1d6b, idProduct=0001, bcdDevice= 6.18
[    1.997939] usb usb3: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    1.998585] usb usb3: Product: Generic Platform OHCI controller
[    1.999115] usb usb3: Manufacturer: Linux 6.18.18-trim ohci_hcd
[    1.999644] usb usb3: SerialNumber: fc8c0000.usb
[    2.000492] hub 3-0:1.0: USB hub found
[    2.000862] hub 3-0:1.0: 1 port detected
[    2.001682] usb usb1: New USB device found, idVendor=1d6b, idProduct=0001, bcdDevice= 6.18
[    2.002413] usb usb1: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    2.003047] usb usb1: Product: Generic Platform OHCI controller
[    2.003566] usb usb1: Manufacturer: Linux 6.18.18-trim ohci_hcd
[    2.004085] usb usb1: SerialNumber: fc840000.usb
[    2.004860] hub 1-0:1.0: USB hub found
[    2.005222] hub 1-0:1.0: 1 port detected
[    2.007224] Freeing unused kernel memory: 5568K
[    2.007721] Run /init as init process
[    2.022744] [trim-mounts-hash]'sys'[00000000d3086608]'s top mountpoint dentry: sys
[    2.023438] [trim-mounts-hash]dentry 'sys' type: 0
[    2.026310] [trim-mounts-hash]'proc'[00000000d1b1241b]'s top mountpoint dentry: proc
[    2.027011] [trim-mounts-hash]dentry 'proc' type: 0
[    2.032612] [trim-mounts-hash]'dev'[00000000a63a76f7]'s top mountpoint dentry: dev
[    2.033320] [trim-mounts-hash]dentry 'dev' type: 0
[    2.047829] [trim-mounts-hash]'pts'[000000009ccccdf9]'s top mountpoint dentry: dev
[    2.048517] [trim-mounts-hash]dentry 'dev' type: 0
[    2.057631] [trim-mounts-hash]'run'[000000006f2791fb]'s top mountpoint dentry: run
[    2.058319] [trim-mounts-hash]dentry 'run' type: 0
[    2.338030] r8169 0003:31:00.0: enabling device (0000 -> 0003)
[    2.367111] r8169 0003:31:00.0 eth0: RTL8125B, 5e:7f:3c:7a:e2:e2, XID 641, IRQ 122
[    2.367790] r8169 0003:31:00.0 eth0: jumbo features [frames: 16362 bytes, tx checksumming: ko]
[    2.368660] r8169 0002:21:00.0: enabling device (0000 -> 0003)
[    2.387605] r8169 0002:21:00.0 eth1: RTL8125B, ea:ee:91:a0:4d:c8, XID 641, IRQ 123
[    2.388283] r8169 0002:21:00.0 eth1: jumbo features [frames: 16362 bytes, tx checksumming: ko]
[    2.409971] rk_gmac-dwmac fe1c0000.ethernet: IRQ sfty not found
[    2.410607] rk_gmac-dwmac fe1c0000.ethernet: supply phy not found, using dummy regulator
[    2.411380] rk_gmac-dwmac fe1c0000.ethernet: clock input or output? (output).
[    2.412010] rk_gmac-dwmac fe1c0000.ethernet: TX delay(0x42).
[    2.412508] rk_gmac-dwmac fe1c0000.ethernet: Can not read property: rx_delay.
[    2.413347] rk_gmac-dwmac fe1c0000.ethernet: set rx_delay to 0x10
[    2.413892] rk_gmac-dwmac fe1c0000.ethernet: integrated PHY? (no).
[    2.419450] rk_gmac-dwmac fe1c0000.ethernet: init for RGMII_RXID
[    2.420163] rk_gmac-dwmac fe1c0000.ethernet: User ID: 0x30, Synopsys ID: 0x51
[    2.420800] rk_gmac-dwmac fe1c0000.ethernet: 	DWMAC4/5
[    2.421276] rk_gmac-dwmac fe1c0000.ethernet: DMA HW capability register supported
[    2.421933] rk_gmac-dwmac fe1c0000.ethernet: RX Checksum Offload Engine supported
[    2.422586] rk_gmac-dwmac fe1c0000.ethernet: TX Checksum insertion supported
[    2.423203] rk_gmac-dwmac fe1c0000.ethernet: Wake-Up On Lan supported
[    2.423806] rk_gmac-dwmac fe1c0000.ethernet: TSO supported
[    2.424288] rk_gmac-dwmac fe1c0000.ethernet: Enable RX Mitigation via HW Watchdog Timer
[    2.425098] rk_gmac-dwmac fe1c0000.ethernet: Enabled L3L4 Flow TC (entries=2)
[    2.425728] rk_gmac-dwmac fe1c0000.ethernet: Enabled RFS Flow TC (entries=10)
[    2.426493] rk_gmac-dwmac fe1c0000.ethernet: TSO feature enabled
[    2.427026] rk_gmac-dwmac fe1c0000.ethernet: SPH feature enabled
[    2.427553] rk_gmac-dwmac fe1c0000.ethernet: Using 32/32 bits DMA host/device width
[    2.435365] rtc-hym8563 6-0051: could not init device, -6
[    2.463903] rockchip-dw-pcie a40000000.pcie: host bridge /pcie@fe150000 ranges:
[    2.464576] rockchip-dw-pcie a40000000.pcie:       IO 0x00f0100000..0x00f01fffff -> 0x00f0100000
[    2.465392] rockchip-dw-pcie a40000000.pcie:      MEM 0x00f0200000..0x00f0ffffff -> 0x00f0200000
[    2.466165] rockchip-dw-pcie a40000000.pcie:      MEM 0x0900000000..0x093fffffff -> 0x0900000000
[    2.474859] rockchip-dw-pcie a40000000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    2.554208] rk_gmac-dwmac fe1b0000.ethernet: IRQ sfty not found
[    2.554934] rk_gmac-dwmac fe1b0000.ethernet: supply phy not found, using dummy regulator
[    2.555709] rk_gmac-dwmac fe1b0000.ethernet: clock input or output? (output).
[    2.556336] rk_gmac-dwmac fe1b0000.ethernet: TX delay(0x44).
[    2.556834] rk_gmac-dwmac fe1b0000.ethernet: Can not read property: rx_delay.
[    2.557481] rk_gmac-dwmac fe1b0000.ethernet: set rx_delay to 0x10
[    2.558021] rk_gmac-dwmac fe1b0000.ethernet: integrated PHY? (no).
[    2.563576] rk_gmac-dwmac fe1b0000.ethernet: init for RGMII_RXID
[    2.564340] rk_gmac-dwmac fe1b0000.ethernet: User ID: 0x30, Synopsys ID: 0x51
[    2.564974] rk_gmac-dwmac fe1b0000.ethernet: 	DWMAC4/5
[    2.565427] rk_gmac-dwmac fe1b0000.ethernet: DMA HW capability register supported
[    2.566082] rk_gmac-dwmac fe1b0000.ethernet: RX Checksum Offload Engine supported
[    2.566737] rk_gmac-dwmac fe1b0000.ethernet: TX Checksum insertion supported
[    2.567354] rk_gmac-dwmac fe1b0000.ethernet: Wake-Up On Lan supported
[    2.567949] rk_gmac-dwmac fe1b0000.ethernet: TSO supported
[    2.568430] rk_gmac-dwmac fe1b0000.ethernet: Enable RX Mitigation via HW Watchdog Timer
[    2.569153] rk_gmac-dwmac fe1b0000.ethernet: Enabled L3L4 Flow TC (entries=2)
[    2.569778] rk_gmac-dwmac fe1b0000.ethernet: Enabled RFS Flow TC (entries=10)
[    2.570402] rk_gmac-dwmac fe1b0000.ethernet: TSO feature enabled
[    2.570928] rk_gmac-dwmac fe1b0000.ethernet: SPH feature enabled
[    2.571455] rk_gmac-dwmac fe1b0000.ethernet: Using 32/32 bits DMA host/device width
[    2.758179] async_tx: api initialized (async)
[    2.777087] rockchip-dw-pcie a40000000.pcie: PCIe Gen.2 x2 link up
[    2.777746] rockchip-dw-pcie a40000000.pcie: PCI host bridge to bus 0000:00
[    2.778362] pci_bus 0000:00: root bus resource [bus 00-0f]
[    2.778846] pci_bus 0000:00: root bus resource [io  0x200000-0x2fffff] (bus address [0xf0100000-0xf01fffff])
[    2.779706] pci_bus 0000:00: root bus resource [mem 0xf0200000-0xf0ffffff]
[    2.780309] pci_bus 0000:00: root bus resource [mem 0x900000000-0x93fffffff]
[    2.780954] pci 0000:00:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    2.781605] pci 0000:00:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    2.782148] pci 0000:00:00.0: PCI bridge to [bus 01-ff]
[    2.782610] pci 0000:00:00.0:   bridge window [io  0x0000-0x0fff]
[    2.783145] pci 0000:00:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    2.783743] pci 0000:00:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    2.784452] pci 0000:00:00.0: supports D1 D2
[    2.784828] pci 0000:00:00.0: PME# supported from D0 D1 D3hot
[    2.786433] pci 0000:00:00.0: Adding to iommu group 20
[    2.793779] pci_bus 0000:01: busn_res: can not insert [bus 01-ff] under [bus 00-0f] (conflicts with (null) [bus 00-0f])
[    2.794815] pci 0000:01:00.0: [9000:1003] type 00 class 0x058000 PCIe Endpoint
[    2.795601] pci 0000:01:00.0: BAR 0 [mem 0x00000000-0x000fffff 64bit]
[    2.796173] pci 0000:01:00.0: BAR 2 [mem 0x00000000-0x000fffff]
[    2.796696] pci 0000:01:00.0: BAR 3 [mem 0x00000000-0x0000ffff]
[    2.797233] pci 0000:01:00.0: BAR 4 [mem 0x00000000-0x00000fff]
[    2.797758] pci 0000:01:00.0: BAR 5 [mem 0x00000000-0x0000ffff]
[    2.798282] pci 0000:01:00.0: ROM [mem 0x00000000-0x007fffff pref]
[    2.799011] pci 0000:01:00.0: supports D1
[    2.799365] pci 0000:01:00.0: PME# supported from D0 D1 D3hot
[    2.799974] pci 0000:01:00.0: 8.000 Gb/s available PCIe bandwidth, limited by 5.0 GT/s PCIe x2 link at 0000:00:00.0 (capable of 16.000 Gb/s with 5.0 GT/s PCIe x4 link)
[    2.801724] pci 0000:01:00.0: Adding to iommu group 20
[    2.802251] pci 0000:00:00.0: bridge window [mem 0x00100000-0x003fffff] to [bus 01-ff] add_size 800000 add_align 800000
[    2.803202] pci 0000:00:00.0: bridge window [mem size 0x00b00000]: can't assign; no space
[    2.803919] pci 0000:00:00.0: bridge window [mem size 0x00b00000]: failed to assign
[    2.804590] pci 0000:00:00.0: ROM [mem 0xf0200000-0xf020ffff pref]: assigned
[    2.805224] pci 0000:00:00.0: ROM [mem 0xf0200000-0xf020ffff pref]: releasing
[    2.805852] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: assigned
[    2.806510] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: failed to expand by 0x800000
[    2.807318] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: failed to add optional 800000
[    2.808138] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: can't assign; no space
[    2.808818] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: failed to assign
[    2.808825] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: assigned
[    2.808857] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: assigned
[    2.810726] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: assigned
[    2.811331] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: assigned
[    2.811342] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: assigned
[    2.812537] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: releasing
[    2.812541] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: releasing
[    2.813798] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: releasing
[    2.814400] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: releasing
[    2.815002] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: releasing
[    2.815606] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: assigned
[    2.816275] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: assigned
[    2.816883] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: assigned
[    2.816895] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: assigned
[    2.816906] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: assigned
[    2.816917] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: can't assign; no space
[    2.819379] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: failed to assign
[    2.819384] pci 0000:00:00.0: PCI bridge to [bus 01-ff]
[    2.819388] pci 0000:00:00.0:   bridge window [mem 0xf0200000-0xf04fffff]
[    2.819394] pci_bus 0000:00: Some PCI device resources are unassigned, try booting with pci=realloc
[    2.819397] pci_bus 0000:00: resource 4 [io  0x200000-0x2fffff]
[    2.819401] pci_bus 0000:00: resource 5 [mem 0xf0200000-0xf0ffffff]
[    2.819405] pci_bus 0000:00: resource 6 [mem 0x900000000-0x93fffffff]
[    2.819408] pci_bus 0000:01: resource 1 [mem 0xf0200000-0xf04fffff]
[    2.821030] pcieport 0000:00:00.0: PME: Signaling with IRQ 139
[    2.825010] pcieport 0000:00:00.0: AER: enabled with IRQ 140
[    2.826267] rockchip-dw-pcie a40400000.pcie: host bridge /pcie@fe160000 ranges:
[    2.826923] rockchip-dw-pcie a40400000.pcie:       IO 0x00f1100000..0x00f11fffff -> 0x00f1100000
[    2.827699] rockchip-dw-pcie a40400000.pcie:      MEM 0x00f1200000..0x00f1ffffff -> 0x00f1200000
[    2.828470] rockchip-dw-pcie a40400000.pcie:      MEM 0x0940000000..0x097fffffff -> 0x0940000000
[    2.837248] rockchip-dw-pcie a40400000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    2.844816] dw-apb-uart feb50000.serial: forbid DMA for kernel console







































































done.
Begin: Mounting root file system ... Begin: Running /scripts/local-top ... done.
Begin: Running /scripts/local-premount ... Scanning for Btrfs filesystems
registered: /dev/sda2
done.
Warning: fsck not present, so skipping root file system
[    2.948617] BTRFS: device label ROOTFS devid 1 transid 12 /dev/sda2 (8:2) scanned by mount (239)
[    2.950120] BTRFS info (device sda2): first mount of filesystem 193840fc-a737-4187-b13e-3544fcbfd1dc
[    2.950972] BTRFS info (device sda2): using crc32c (crc32c-lib) checksum algorithm
[    2.962609] BTRFS info (device sda2): enabling ssd optimizations
[    2.963158] BTRFS info (device sda2): turning on async discard
[    2.963679] BTRFS info (device sda2): enabling free space tree
[    2.964200] BTRFS info (device sda2): use zstd compression, level 1
[    2.965717] [trim-mounts-hash]'root'[00000000270bfa5c]'s top mountpoint dentry: root
[    2.966412] [trim-mounts-hash]dentry 'root' type: 0
done.
Begin: Running /scripts/local-bottom ... done.
Begin: Running /scripts/init-bottom ... done.
[    3.144889] rockchip-dw-pcie a40400000.pcie: PCIe Gen.3 x2 link up
[    3.145547] rockchip-dw-pcie a40400000.pcie: PCI host bridge to bus 0001:10
[    3.146163] pci_bus 0001:10: root bus resource [bus 10-1f]
[    3.146649] pci_bus 0001:10: root bus resource [io  0x300000-0x3fffff] (bus address [0xf1100000-0xf11fffff])
[    3.147510] pci_bus 0001:10: root bus resource [mem 0xf1200000-0xf1ffffff]
[    3.148113] pci_bus 0001:10: root bus resource [mem 0x940000000-0x97fffffff]
[    3.148744] pci 0001:10:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    3.149407] pci 0001:10:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    3.149951] pci 0001:10:00.0: PCI bridge to [bus 01-ff]
[    3.150412] pci 0001:10:00.0:   bridge window [io  0x0000-0x0fff]
[    3.150946] pci 0001:10:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    3.151544] pci 0001:10:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    3.152248] pci 0001:10:00.0: supports D1 D2
[    3.152625] pci 0001:10:00.0: PME# supported from D0 D1 D3hot
[    3.153579] pci 0001:10:00.0: Adding to iommu group 21
[    3.159895] pci 0001:10:00.0: Primary bus is hard wired to 0
[    3.160402] pci 0001:10:00.0: bridge configuration invalid ([bus 01-ff]), reconfiguring
[    3.161220] pci 0001:11:00.0: [1e4b:1202] type 00 class 0x010802 PCIe Endpoint
[    3.161972] pci 0001:11:00.0: BAR 0 [mem 0x00000000-0x00003fff 64bit]
[    3.162828] pci 0001:11:00.0: PME# supported from D0 D3hot D3cold
[    3.163564] pci 0001:11:00.0: 15.752 Gb/s available PCIe bandwidth, limited by 8.0 GT/s PCIe x2 link at 0001:10:00.0 (capable of 31.504 Gb/s with 8.0 GT/s PCIe x4 link)
[    3.165275] pci 0001:11:00.0: Adding to iommu group 21
[    3.172901] pci 0001:11:00.0: ASPM: default states L1
[    3.173360] pci_bus 0001:11: busn_res: [bus 11-1f] end is updated to 11
[    3.173951] pci 0001:10:00.0: bridge window [mem 0xf1200000-0xf12fffff]: assigned
[    3.174609] pci 0001:10:00.0: ROM [mem 0xf1300000-0xf130ffff pref]: assigned
[    3.175230] pci 0001:11:00.0: BAR 0 [mem 0xf1200000-0xf1203fff 64bit]: assigned
[    3.175893] pci 0001:10:00.0: PCI bridge to [bus 11]
[    3.176331] pci 0001:10:00.0:   bridge window [mem 0xf1200000-0xf12fffff]
[    3.176938] pci_bus 0001:10: resource 4 [io  0x300000-0x3fffff]
[    3.177458] pci_bus 0001:10: resource 5 [mem 0xf1200000-0xf1ffffff]
[    3.178007] pci_bus 0001:10: resource 6 [mem 0x940000000-0x97fffffff]
[    3.178572] pci_bus 0001:11: resource 1 [mem 0xf1200000-0xf12fffff]
[    3.180609] pcieport 0001:10:00.0: PME: Signaling with IRQ 151
[    3.181492] pcieport 0001:10:00.0: AER: enabled with IRQ 152
[    3.182931] nvme nvme0: pci function 0001:11:00.0
[    3.183378] nvme 0001:11:00.0: enabling device (0000 -> 0002)
[    3.190313] hwmon hwmon7: temp1_input not attached to any thermal zone
[    3.191009] hwmon hwmon7: temp2_input not attached to any thermal zone
[    3.191673] hwmon hwmon7: temp3_input not attached to any thermal zone
[    3.193766] nvme nvme0: allocated 8 MiB host memory buffer (1 segment).
[    3.199157] xhci-hcd xhci-hcd.4.auto: xHCI Host Controller
[    3.199401] nvme nvme0: 8/0/0 default/read/poll queues
[    3.199654] xhci-hcd xhci-hcd.4.auto: new USB bus registered, assigned bus number 5
[    3.200982] xhci-hcd xhci-hcd.4.auto: hcc params 0x0220fe64 hci version 0x110 quirks 0x0000808002000010
[    3.201827] xhci-hcd xhci-hcd.4.auto: irq 162, io mem 0xfc000000
[    3.201967] nvme nvme0: Ignoring bogus Namespace Identifiers
[    3.202443] xhci-hcd xhci-hcd.4.auto: xHCI Host Controller
[    3.203337] xhci-hcd xhci-hcd.4.auto: new USB bus registered, assigned bus number 6
[    3.204010] xhci-hcd xhci-hcd.4.auto: Host supports USB 3.0 SuperSpeed
[    3.204651] usb usb5: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    3.204933]  nvme0n1: p1 p2 p3
[    3.205389] usb usb5: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    3.206282] usb usb5: Product: xHCI Host Controller
[    3.206710] usb usb5: Manufacturer: Linux 6.18.18-trim xhci-hcd
[    3.207229] usb usb5: SerialNumber: xhci-hcd.4.auto
[    3.207869] hub 5-0:1.0: USB hub found
[    3.208214] hub 5-0:1.0: 1 port detected
[    3.208696] usb usb6: We don't know the algorithms for LPM for this host, disabling LPM.
[    3.209454] usb usb6: New USB device found, idVendor=1d6b, idProduct=0003, bcdDevice= 6.18
[    3.210180] usb usb6: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    3.210812] usb usb6: Product: xHCI Host Controller
[    3.211240] usb usb6: Manufacturer: Linux 6.18.18-trim xhci-hcd
[    3.211759] usb usb6: SerialNumber: xhci-hcd.4.auto
[    3.212552] hub 6-0:1.0: USB hub found
[    3.212911] hub 6-0:1.0: 1 port detected
[    3.214817] rockchip-drm display-subsystem: bound fdd90000.vop (ops rockchip_drm_fini [rockchipdrm])
[    3.216270] dwhdmiqp-rockchip fde80000.hdmi: registered DesignWare HDMI QP I2C bus driver
[    3.217086] rockchip-drm display-subsystem: bound fde80000.hdmi (ops rockchip_drm_fini [rockchipdrm])
[    3.218539] [drm] Initialized rockchip 1.0.0 for display-subsystem on minor 0
[    3.219206] rockchip-drm display-subsystem: [drm] Cannot find any crtc or sizes
[    3.220312] rockchip-drm display-subsystem: [drm] Cannot find any crtc or sizes
[    3.235950] [trim-mounts-hash]'security'[00000000d8eb38ce]'s top mountpoint dentry: sys
[    3.236634] xhci-hcd xhci-hcd.6.auto: xHCI Host Controller
[    3.236671] [trim-mounts-hash]dentry 'sys' type: 0
[    3.236683] xhci-hcd xhci-hcd.6.auto: new USB bus registered, assigned bus number 7
[    3.236776] xhci-hcd xhci-hcd.6.auto: hcc params 0x0220fe64 hci version 0x110 quirks 0x0000808002000010
[    3.237646] [trim-mounts-hash]'/'[00000000c3479a72]'s top mountpoint dentry: proc
[    3.238286] xhci-hcd xhci-hcd.6.auto: irq 165, io mem 0xfc400000
[    3.239098] [trim-mounts-hash]dentry 'proc' type: 0
[    3.240779] xhci-hcd xhci-hcd.6.auto: xHCI Host Controller
[    3.241270] xhci-hcd xhci-hcd.6.auto: new USB bus registered, assigned bus number 8
[    3.241944] xhci-hcd xhci-hcd.6.auto: Host supports USB 3.0 SuperSpeed
[    3.242585] usb usb7: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    3.243311] usb usb7: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    3.243944] usb usb7: Product: xHCI Host Controller
[    3.244374] usb usb7: Manufacturer: Linux 6.18.18-trim xhci-hcd
[    3.244394] systemd[1]: System time before build time, advancing clock.
[    3.244902] usb usb7: SerialNumber: xhci-hcd.6.auto
[    3.245188] hub 7-0:1.0: USB hub found
[    3.246267] hub 7-0:1.0: 1 port detected
[    3.246408] usb usb8: We don't know the algorithms for LPM for this host, disabling LPM.
[    3.247374] usb usb8: New USB device found, idVendor=1d6b, idProduct=0003, bcdDevice= 6.18
[    3.248100] usb usb8: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    3.248732] usb usb8: Product: xHCI Host Controller
[    3.249175] usb usb8: Manufacturer: Linux 6.18.18-trim xhci-hcd
[    3.249693] usb usb8: SerialNumber: xhci-hcd.6.auto
[    3.250365] hub 8-0:1.0: USB hub found
[    3.250705] hub 8-0:1.0: 1 port detected
[    3.267911] systemd[1]: Inserted module 'autofs4'
[    3.270530] [trim-mounts-hash]'shm'[00000000a927d476]'s top mountpoint dentry: dev
[    3.271223] [trim-mounts-hash]dentry 'dev' type: 0
[    3.271881] [trim-mounts-hash]'lock'[000000008b525814]'s top mountpoint dentry: run
[    3.272571] [trim-mounts-hash]dentry 'run' type: 0
[    3.301213] [trim-mounts-hash]'cgroup'[00000000c2933392]'s top mountpoint dentry: sys
[    3.301918] [trim-mounts-hash]dentry 'sys' type: 0
[    3.302693] [trim-mounts-hash]'pstore'[00000000944613cf]'s top mountpoint dentry: sys
[    3.303395] [trim-mounts-hash]dentry 'sys' type: 0
[    3.318447] [trim-mounts-hash]'bpf'[000000005a1ac800]'s top mountpoint dentry: sys
[    3.319136] [trim-mounts-hash]dentry 'sys' type: 0
[    3.322464] systemd[1]: systemd 252.39-1~deb12u1 running in system mode (+PAM +AUDIT +SELINUX +APPARMOR +IMA +SMACK +SECCOMP +GCRYPT -GNUTLS +OPENSSL +ACL +BLKID +CURL +ELFUTILS +FIDO2 +IDN2 -IDN +IPTC +KMOD +LIBCRYPTSETUP +LIBFDISK +PCRE2 -PWQUALITY +P11KIT +QRENCODE +TPM2 +BZIP2 +LZ4 +XZ +ZLIB +ZSTD -BPF_FRAMEWORK -XKBCOMMON +UTMP +SYSVINIT default-hierarchy=unified)
[    3.325385] systemd[1]: Detected architecture arm64.

Welcome to Debian GNU/Linux 12 (bookworm)!

[    3.328187] systemd[1]: Hostname set to <fnnas>.
[    3.569053] systemd[1]: Configuration file /etc/systemd/system/webdav.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.570666] systemd[1]: Configuration file /etc/systemd/system/usersrv.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.572240] systemd[1]: Configuration file /etc/systemd/system/upnp.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.573796] systemd[1]: Configuration file /etc/systemd/system/trim_upload.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.575394] systemd[1]: Configuration file /etc/systemd/system/trim_trashbind.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.577032] systemd[1]: Configuration file /etc/systemd/system/trim_tfa.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.578656] systemd[1]: Configuration file /etc/systemd/system/trim_sharelink.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.580464] systemd[1]: Configuration file /etc/systemd/system/trim_sac.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.582141] systemd[1]: Configuration file /etc/systemd/system/trim_raid_check.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.583813] systemd[1]: Configuration file /etc/systemd/system/trim_nginx.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.585500] systemd[1]: Configuration file /etc/systemd/system/trim_main.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.587113] systemd[1]: Configuration file /etc/systemd/system/trim_license.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.588818] systemd[1]: Configuration file /etc/systemd/system/trim_init.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.590400] systemd[1]: Configuration file /etc/systemd/system/trim_http_cgi.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.592012] systemd[1]: Configuration file /etc/systemd/system/trim_file_monitor.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.593669] systemd[1]: Configuration file /etc/systemd/system/trim_diskpowerd.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.595303] systemd[1]: Configuration file /etc/systemd/system/trim_connect.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.597071] systemd[1]: Configuration file /etc/systemd/system/trim_app_center.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.605034] systemd[1]: Configuration file /etc/systemd/system/system_startup.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.606664] systemd[1]: Configuration file /etc/systemd/system/system_shutdown.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.625283] systemd[1]: Configuration file /etc/systemd/system/sysrestore.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.626962] systemd[1]: Configuration file /etc/systemd/system/sysinfo_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.629479] systemd[1]: Configuration file /etc/systemd/system/smbftpd.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.631900] systemd[1]: Configuration file /etc/systemd/system/show_startup_info.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.633595] systemd[1]: Configuration file /etc/systemd/system/share_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.635246] systemd[1]: Configuration file /etc/systemd/system/security_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.637988] systemd[1]: Configuration file /etc/systemd/system/rpc_broker.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.639579] systemd[1]: Configuration file /etc/systemd/system/resmon_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.650151] systemd[1]: Configuration file /etc/systemd/system/network_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.651816] systemd[1]: Configuration file /etc/systemd/system/multiple-downloads.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.653654] systemd[1]: Configuration file /etc/systemd/system/minidlna.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.655397] systemd[1]: Configuration file /etc/systemd/system/mediasrv.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.665284] systemd[1]: Configuration file /etc/systemd/system/imagesrv.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.672618] systemd[1]: Configuration file /etc/systemd/system/finder_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.674278] systemd[1]: Configuration file /etc/systemd/system/filestor_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.675976] systemd[1]: Configuration file /etc/systemd/system/eventlogger_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.678104] systemd[1]: Configuration file /etc/systemd/system/dsmgr.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.679926] systemd[1]: Configuration file /etc/systemd/system/dockermgr.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.681549] systemd[1]: Configuration file /etc/systemd/system/docker.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.683289] systemd[1]: Configuration file /etc/systemd/system/dlcenter.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.686502] systemd[1]: Configuration file /etc/systemd/system/cloud_storage_dav.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.688254] systemd[1]: Configuration file /etc/systemd/system/backup_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.689978] systemd[1]: Configuration file /etc/systemd/system/avahi.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.692760] systemd[1]: Configuration file /etc/systemd/system/auto_thumbnailer.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.694468] systemd[1]: Configuration file /etc/systemd/system/ai_manager.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.696127] systemd[1]: Configuration file /etc/systemd/system/accountsrv.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.752689] systemd[1]: Queued start job for default target graphical.target.
[    3.767337] systemd[1]: Created slice machine.slice - Virtual Machine and Container Slice.
[  OK  ] Created slice machine.slic…rtual Machine and Container Slice.
[    3.769781] systemd[1]: Created slice system-getty.slice - Slice /system/getty.
[  OK  ] Created slice system-getty.slice - Slice /system/getty.
[    3.771490] systemd[1]: Created slice system-modprobe.slice - Slice /system/modprobe.
[  OK  ] Created slice system-modpr…lice - Slice /system/modprobe.
[    3.773189] systemd[1]: Created slice system-postgresql.slice - Slice /system/postgresql.
[  OK  ] Created slice system-postg…ce - Slice /system/postgresql.
[    3.774889] systemd[1]: Created slice system-serial\x2dgetty.slice - Slice /system/serial-getty.
[  OK  ] Created slice system-seria… - Slice /system/serial-getty.
[    3.776657] systemd[1]: Created slice system-systemd\x2dfsck.slice - Slice /system/systemd-fsck.
[  OK  ] Created slice system-syste… -[    3.778167] systemd[1]: Created slice user.slice - User and Session Slice.
 Slice /system/systemd-fsck.
[    3.779010] systemd[1]: Started systemd-ask-password-wall.path - Forward Password Requests to Wall Directory Watch.
[  OK  ] Created slice user.slice - User[    3.780379] [trim-mounts-hash]'binfmt_misc'[0000000022caf78c]'s top mountpoint dentry: proc
[    3.781315] [trim-mounts-hash]dentry 'proc' type: 0
 and Session Slice.
[  OK  ] Started syst[    3.781790] systemd[1]: Set up automount proc-sys-fs-binfmt_misc.automount - Arbitrary Executable File Formats File System Automount Point.
emd-ask-passwo… Requests to Wall Directory Watch.
[    3.783428] systemd[1]: Expecting device dev-disk-by\x2duuid-e1d59304\x2d9801\x2d4c8c\x2dbd6d\x2d5e6db67644e7.device - /dev/disk/by-uuid/e1d59304-9801-4c8c-bd6d-5e6db67644e7...
[    3.785242] systemd[1]: Expecting device dev-ttyAMA0.device - /dev/ttyAMA0...
[    3.785905] systemd[1]: Expecting device dev-ttyS2.device - /dev/ttyS2...
[  OK  ] Set up automount proc-sys-…rmats [    3.786594] systemd[1]: Reached target integritysetup.target - Local Integrity Protected Volumes.
File System Automount Point.
         Expecting device     3.787921] systemd[1]: Reached target nss-lookup.target - Host and Network Name Lookups.
39mdev-disk-…304-9801-4c8c-bd6d-5e6db67644e7...
         Ex[    3.789310] systemd[1]: Reached target slices.target - Slice Units.
pecting device dev-ttyAMA0.device - /dev/ttyAMA0...[    3.790327] systemd[1]: Reached target swap.target - Swaps.

         Expecting device dev-ttyS2.device - /d[    3.791259] systemd[1]: Reached target veritysetup.target - Local Verity Protected Volumes.
ev/ttyS2...
[  OK  ] Reached target integ[    3.792480] systemd[1]: Reached target virt-guest-shutdown.target - Libvirt guests shutdown.
rityse…Local Integrity Protected Volumes.
[  OK      3.794032] systemd[1]: Listening on dm-event.socket - Device-mapper event daemon FIFOs.
m] Reached target nss-lookup.…m - Host and Network Na[    3.795224] systemd[1]: Listening on lvm2-lvmpolld.socket - LVM2 poll daemon socket.
me Lookups.
[  OK  ] Reached target slices.target - Slice Units.
[  OK  ] Reached target swap.target - Swaps.
[  OK  ] Reached target veritysetup… - Local Verity Protected Volumes.
[  OK  ] Reached target virt-guest-…get - Libvirt guests shutdown.
[  OK  ] Listening on dm-event.sock… Device-mapper event daemon FIFOs.
[  OK  ] Listening on lvm2-lvmpolld…ket - LVM2 poll daemon socket.
[    3.807894] systemd[1]: Listening on rpcbind.socket - RPCbind Server Activation Socket.
[  OK  ] Listening on rpcbind.socke… RPCbind Server Activation Socket.
[    3.809646] systemd[1]: Listening on syslog.socket - Syslog Socket.
[  OK  ] Listening on syslog.socket - Sy[    3.810529] systemd[1]: Listening on systemd-fsckd.socket - fsck to fsckd communication Socket.
slog Socket.
[    3.811894] systemd[1]: Listening on systemd-initctl.socket - initctl Compatibility Named Pipe.
[  OK  ] Listening on systemd-fsckd…sck to fsckd communication Socket.
[  OK  ] Listening on systemd-initc… initctl Compatibility Named Pipe.
[    3.813995] systemd[1]: Listening on systemd-journald-audit.socket - Journal Audit Socket.
[  OK  ] Listening on systemd-journ…socket[    3.815196] systemd[1]: Listening on systemd-journald-dev-log.socket - Journal Socket (/dev/log).
 - Journal Audit Socket.
[  OK  ] Listening on systemd-journ…t [    3.816771] systemd[1]: Listening on systemd-journald.socket - Journal Socket.
- Journal Socket (/dev/log).
[  OK  ] Listening on systemd-journald.socket - Journal Socket.
[    3.818915] systemd[1]: Listening on systemd-udevd-control.socket - udev Control Socket.
[  OK  ] Listening on systemd-udevd….socke[    3.819843] systemd[1]: Listening on systemd-udevd-kernel.socket - udev Kernel Socket.
t - udev Control Socket.
[  OK  ] Listening on systemd-udevd…l.socket - udev Kernel Socket.
[    3.822868] systemd[1]: Mounting dev-hugepages.mount - Huge Pages File System...
         Mounting dev-hugepages.mount - Huge Pages File System...
[    3.825368] systemd[1]: Mounting dev-mqueue.mount - POSIX Message Queue File System...
         Mounting dev-mqueue.mountproc-fs-nfsd.moun…- NFSD configuration filesystem...
[    3.830243] systemd[1]: Mounting sys-kernel-debug.mount - Kernel Debug File System...
         Mounting sys-kernel-debug.… - Kernel Deb[    3.831228] [trim-mounts-hash]'mqueue'[00000000a2a362f8]'s top mountpoint dentry: dev
ug File System...
[    3.831281] [trim-mounts-hash]'hugepages'[00000000d993b57b]'s top mountpoint dentry: dev
[    3.832308] [trim-mounts-hash]dentry 'dev' type: 0
[    3.832743] systemd[1]: Mounting sys-kernel-tracing.mount - Kernel Trace File System...
[    3.833260] [trim-mounts-hash]dentry 'dev' type: 0
         Mounting sys-kernel-tracin… - Kernel Tra[    3.835070] systemd[1]: auth-rpcgss-module.service - Kernel Module supporting RPCSEC_GSS was skipped because of an unmet condition check (ConditionPathExists=/etc/krb5.keytab).
[    3.835318] systemd[1]: Finished blk-availability.service - Availability of block devices.
ce File System...
[    3.837009] [trim-mounts-hash]'tracing'[000000008fc0a682]'s top mountpoint dentry: sys
[    3.837576] [trim-mounts-hash]'debug'[00000000eabe2178]'s top mountpoint dentry: sys
[    3.837586] [trim-mounts-hash]dentry 'sys' type: 0
[    3.839532] [trim-mounts-hash]dentry 'sys' type: 0
[  OK  ] Finished blk-availability.…m - Availability of block devices.
[    3.863322] systemd[1]: Starting keyboard-setup.service - Set the console keyboard layout...
         Starting keyboard-setup.se…Set the console keyboard layout...
[    3.866395] systemd[1]: Starting kmod-static-nodes.service - Create List of Static Device Nodes...
         Starting kmod-static-nodes…ate List of Stati[    3.867910] RPC: Registered named UNIX socket transport module.
c Device Nodes...
[    3.868449] RPC: Registered udp transport module.
[    3.869042] RPC: Registered tcp transport module.
[    3.869361] systemd[1]: Starting lvm2-monitor.service - Monitoring of LVM2 mirrors, snapshots etc. using dmeventd or progress polling...
[    3.869455] RPC: Registered tcp-with-tls transport module.
[    3.869458] RPC: Registered tcp NFSv4.1 backchannel transport module.
         Starting lvm2-monitor.serv…ng dmeventd or progress polling...
[    3.874083] systemd[1]: Starting modprobe@configfs.service - Load Kernel Module configfs...
         Starting modprobe@configfs…m - Load Kernel Module configfs...
[    3.876966] systemd[1]: Starting modprobe@dm_mod.service - Load Kernel Module dm_mod...
         Starting modprobe@dm_mod.s…[0m - Load Kernel Module dm_mod...
[    3.879864] systemd[1]: Starting modprobe@drm.service - Load Kernel Module drm...
         Starting modprobe@drm.service - Load Kernel Module drm...
[    3.882815] systemd[1]: Starting modprobe@efi_pstore.service - Load Kernel Module efi_pstore...
         Starting modprobe@efi_psto…- Load Kernel Module efi_pstore...
[    3.886242] systemd[1]: Starting modprobe@fuse.service - Load Kernel Module fuse...
         Starting modprobe@fuse.ser…e - Load Kernel Module fuse...
[    3.890369] systemd[1]: Starting modprobe@loop.service - Load Kernel Module loop...
         Starting modprobe@loop.ser…e - Load Kernel Module loop...
[    3.892836] systemd[1]: systemd-fsck-root.service - File System Check on Root Device was skipped because of an unmet condition check (ConditionPathIsReadWrite=!/).
[    3.898101] systemd[1]: Starting systemd-journald.service - Journal Service...
         Starting systemd-journald.service - Journal Service...
[    3.899468] device-mapper: uevent: version 1.0.3
[    3.900115] device-mapper: ioctl: 4.50.0-ioctl (2025-04-28) initialised: dm-devel@lists.linux.dev
[    3.902326] systemd[1]: Starting systemd-modules-load.service - Load Kernel Modules...
         Starting systemd-modules-l…rvice - Load Kernel Modules...
[    3.905409] systemd[1]: Starting systemd-remount-fs.service - Remount Root and Kernel File Systems...
         Starting systemd-remount-f…nt Root and Kernel File Systems...
[    3.908681] systemd[1]: Starting systemd-udev-trigger.service - Coldplug All udev Devices...
         Starting systemd-udev-trig…[0m - Coldplug All udev Devices...
[    3.913314] systemd[1]: Mounted dev-hugepages.mount - Huge Pages File System.
[  OK  ] Mounted dev-hugepages.mount - H[    3.914496] systemd[1]: Mounted dev-mqueue.mount - POSIX Message Queue File System.
uge Pages File System.
[  OK  ] Mounted dev-mqueue.mountOSI[    3.915684] systemd[1]: Mounted sys-kernel-debug.mount - Kernel Debug File System.
X Message Queue File System.
[  OK  ] Mounted sys-kernel-debug.m…nt[    3.917008] systemd[1]: Mounted sys-kernel-tracing.mount - Kernel Trace File System.
 - Kernel Debug File System.
[    3.918698] systemd[1]: Finished kmod-static-nodes.service - Create List of Static Device Nodes.
[    3.920264] systemd[1]: modprobe@configfs.service: Deactivated successfully.
[  OK  ] Mounted sys-kernel-tracing…nt[    3.921203] systemd[1]: Finished modprobe@configfs.service - Load Kernel Module configfs.
 - Kernel Trace File System.
[  OK  ] Finished kmod-static-nodes…reate List of Static Device Nodes.
[    3.922720] systemd[1]: modprobe@dm_mod.service: Deactivated successfully.
[  OK  ] Finished modprobe@configfs…[0m - [    3.923993] systemd[1]: Finished modprobe@dm_mod.service - Load Kernel Module dm_mod.
Load Kernel Module configfs.
[  OK  ] Finished modprobe@dm_mod.s…e [    3.925447] systemd[1]: modprobe@drm.service: Deactivated successfully.
- Load Kernel Module dm_mod.
[    3.926443] systemd[1]: Finished modprobe@drm.service - Load Kernel Module drm.
[  OK  ] Finished modprobe@drm.service -[    3.927613] systemd[1]: modprobe@efi_pstore.service: Deactivated successfully.
 Load Kernel Module drm.
[    3.928546] systemd[1]: Finished modprobe@efi_pstore.service - Load Kernel Module efi_pstore.
[    3.929114] [trim-mounts-hash]'nfsd'[000000006e3789a6]'s top mountpoint dentry: proc
[    3.929982] [trim-mounts-hash]dentry 'proc' type: 0
[  OK  ] Finished modprobe@efi_psto…m - Load Kernel Module efi_pstore.
[    3.931141] zram: Added device: zram0
[    3.931995] systemd[1]: Mounted proc-fs-nfsd.mount - NFSD configuration filesystem.
[  OK  ] Mounted proc-fs-nfsd.mount…m - NFSD configuration filesystem.
[    3.933455] systemd[1]: modprobe@fuse.service: Deactivated successfully.
[    3.934364] systemd[1]: Finished modprobe@fuse.service - Load Kernel Module fuse.
[  OK  ] Finished modprobe@fuse.service [    3.935557] systemd[1]: modprobe@loop.service: Deactivated successfully.
- Load Kernel Module fuse.
[    3.935828] rockchip_pvtm: loading out-of-tree module taints kernel.
[    3.936441] systemd[1]: Finished modprobe@loop.service - Load Kernel Module loop.
[  OK  ] Finished modprobe@loop.service - Load Kernel Module loop.
[    3.940119] systemd[1]: Mounting sys-fs-fuse-connections.mount - FUSE Control File System...
         Mounting sys-fs-fuse-conne… - FUSE Control File System...
[    3.942838] systemd[1]: Mounting sys-kernel-config.mount - Kernel Configuration File System...
[    3.943880] systemd[1]: systemd-repart.service - Repartition Root Disk was skipped because no trigger condition checks were met.
[    3.946485] [trim-mounts-hash]'connections'[00000000ce1fce41]'s top mountpoint dentry: sys
[    3.947239] [trim-mounts-hash]dentry 'sys' type: 0
[    3.948555] systemd[1]: Mounted sys-fs-fuse-connections.mount - FUSE Control File System.
         Mounting sys-kernel-config…ernel Configurati[    3.948744] [trim-mounts-hash]'config'[000000003fc006bc]'s top mountpoint dentry: sys
on File System...
[    3.950453] [trim-mounts-hash]dentry 'sys' type: 0
[  OK  ] Mounted sys-fs-fuse-connec…nt - FUSE Control File System.
[    3.952698] systemd[1]: Mounted sys-kernel-config.mount - Kernel Configuration File System.
[  OK  ] Mounted sys-kernel-config.… Kernel Configuration File System.
[    4.043630] systemd[1]: Finished keyboard-setup.service - Set the console keyboard layout.
[  OK  ] Finished keyboard-setup.se…- Set the console keyboard layout.
[    4.058473] systemd[1]: Started systemd-journald.service - Journal Service.
[  OK  ] Started systemd-journald.service - Journal Service.
[  OK  ] Finished systemd-remount-f…ount Root and Kernel File Systems.
[    4.071603] rga3 fdb60000.rga: probe successfully, irq = 57, hw_version:3.0.76831
[    4.072680] rga3 fdb70000.rga: probe successfully, irq = 58, hw_version:3.0.76831
[    4.073733] rga_iommu: IOMMU binding successfully, default mapping core[0x1]
[    4.074532] rga: Module initialized. v1.3.4
[    4.082420] mpp_service mpp-srv: 
[    4.082727] mpp_service mpp-srv: probe start
[    4.084538] mpp_vdpu2 fdb50400.vdpu: probe device
[    4.085328] mpp_vdpu2 fdb50400.vdpu: reset_group->rw_sem_on=0
[    4.085839] mpp_vdpu2 fdb50400.vdpu: reset_group->rw_sem_on=0
[    4.086367] mpp_vdpu2 fdb50400.vdpu: probing finish
[    4.087120] mpp_vepu2 jpege-ccu: probing start
[    4.087515] mpp_vepu2 jpege-ccu: probing finish
[    4.088047] mpp_vepu2 fdba0000.jpege-core: probing start
[    4.088743] mpp_vepu2 fdba0000.jpege-core: attach ccu success
[    4.089281] mpp_vepu2 fdba0000.jpege-core: probing finish
[    4.089985] mpp_vepu2 fdba4000.jpege-core: probing start
[    4.090605] mpp_vepu2 fdba4000.jpege-core: attach ccu success
[    4.091127] mpp_vepu2 fdba4000.jpege-core: probing finish
[    4.091822] mpp_vepu2 fdba8000.jpege-core: probing start
[    4.092461] mpp_vepu2 fdba8000.jpege-core: attach ccu success
[    4.093000] mpp_vepu2 fdba8000.jpege-core: probing finish
         Starting systemd-journal-f…h Journal to Pers[    4.093711] mpp_vepu2 fdbac000.jpege-core: probing start
[    4.093925] mpp_vepu2 fdbac000.jpege-core: attach ccu success
[    4.095189] mpp_vepu2 fdbac000.jpege-core: probing finish
[    4.095679] mpp_jpgdec fdb90000.jpegd: probe device
istent Storage...
         Starting systemd-random-se…ice - Load/Sa[    4.096396] mpp_jpgdec fdb90000.jpegd: probing finish
ve Random Seed...
[    4.097884] mpp_rkvdec2 fdc30000.rkvdec-ccu: rkvdec-ccu, probing start
[    4.098552] mpp_rkvdec2 fdc30000.rkvdec-ccu: ccu-mode: 1
[    4.098556] mpp_rkvdec2 fdc30000.rkvdec-ccu: probing finish
[    4.098848] mpp_rkvdec2 fdc38100.rkvdec-core: rkvdec-core, probing start
         Starting systemd-sysusers.…rvice - Creat[    4.100301] mpp_rkvdec2 fdc38100.rkvdec-core: shared_niu_a is not found!
[    4.100305] rkvdec2_init:1199: No niu aclk reset resource define
[    4.100309] mpp_rkvdec2 fdc38100.rkvdec-core: shared_niu_h is not found!
[    4.100627] [trim-mounts-hash]'/'[00000000f4c4c500]'s top mountpoint dentry: dev
[    4.101201] rkvdec2_init:1202: No niu hclk reset resource define
[    4.101719] [trim-mounts-hash]dentry 'dev' type: 0
[    4.101755] mpp_rkvdec2 fdc38100.rkvdec-core: no regulator, devfreq is disabled
e System Users...
[  OK  ] Finished lvm2-[    4.104691] mpp_rkvdec2 fdc38100.rkvdec-core: core_mask=00010001
monitor.serv…sing dmeventd or progress polling.
[    4.105609] mpp_rkvdec2 fdc38100.rkvdec-core: attach ccu as core 0
[    4.106809] mpp_rkvdec2 fdc38100.rkvdec-core: sram_start 0x00000000ff001000
[    4.107423] mpp_rkvdec2 fdc38100.rkvdec-core: rcb_iova 0x00000000fff00000
[    4.108018] mpp_rkvdec2 fdc38100.rkvdec-core: sram_size 491520
[    4.108530] mpp_rkvdec2 fdc38100.rkvdec-core: rcb_size 1048576
[    4.109052] mpp_rkvdec2 fdc38100.rkvdec-core: min_width 512
[    4.109544] mpp_rkvdec2 fdc38100.rkvdec-core: rcb_info_count 20
[    4.110064] mpp_rkvdec2 fdc38100.rkvdec-core: [136, 24576]
[    4.110546] mpp_rkvdec2 fdc38100.rkvdec-core: [137, 49152]
[    4.111028] mpp_rkvdec2 fdc38100.rkvdec-core: [141, 90112]
[    4.111510] mpp_rkvdec2 fdc38100.rkvdec-core: [140, 49152]
[    4.111992] mpp_rkvdec2 fdc38100.rkvdec-core: [139, 180224]
[    4.112482] mpp_rkvdec2 fdc38100.rkvdec-core: [133, 49152]
[    4.112968] mpp_rkvdec2 fdc38100.rkvdec-core: [134, 8192]
[    4.113444] mpp_rkvdec2 fdc38100.rkvdec-core: [135, 4352]
[    4.113918] mpp_rkvdec2 fdc38100.rkvdec-core: [138, 13056]
[    4.114400] mpp_rkvdec2 fdc38100.rkvdec-core: [142, 291584]
[    4.114932] mpp_rkvdec2 fdc38100.rkvdec-core: probing finish
[    4.115635] mpp_rkvdec2 fdc48100.rkvdec-core: rkvdec-core, probing start
[    4.116060] systemd-journald[325]: Received client request to flush runtime journal.
[    4.116445] mpp_rkvdec2 fdc48100.rkvdec-core: shared_niu_a is not found!
[    4.117510] rkvdec2_init:1199: No niu aclk reset resource define
[    4.118039] mpp_rkvdec2 fdc48100.rkvdec-core: shared_niu_h is not found!
[    4.118625] rkvdec2_init:1202: No niu hclk reset resource define
[    4.119183] mpp_rkvdec2 fdc48100.rkvdec-core: no regulator, devfreq is disabled
[    4.119859] mpp_rkvdec2 fdc48100.rkvdec-core: core_mask=00020002
[    4.120404] mpp_rkvdec2 fdc48100.rkvdec-core: attach ccu as core 1
[    4.121026] mpp_rkvdec2 fdc48100.rkvdec-core: sram_start 0x00000000ff079000
[    4.121639] mpp_rkvdec2 fdc48100.rkvdec-core: rcb_iova 0x00000000ffe00000
[  OK  ] Finished systemd-journal-f…ush Jo[    4.122234] mpp_rkvdec2 fdc48100.rkvdec-core: sram_size 487424
urnal to Persistent Storage.
[    4.123224] mpp_rkvdec2 fdc48100.rkvdec-core: rcb_size 1048576
[    4.123228] mpp_rkvdec2 fdc48100.rkvdec-core: min_width 512
[    4.123232] mpp_rkvdec2 fdc48100.rkvdec-core: rcb_info_count 20
[    4.123234] mpp_rkvdec2 fdc48100.rkvdec-core: [136, 24576]
[    4.123237] mpp_rkvdec2 fdc48100.rkvdec-core: [137, 49152]
[    4.123240] mpp_rkvdec2 fdc48100.rkvdec-core: [141, 90112]
[    4.123242] mpp_rkvdec2 fdc48100.rkvdec-core: [140, 49152]
[    4.123244] mpp_rkvdec2 fdc48100.rkvdec-core: [139, 180224]
[    4.123247] mpp_rkvdec2 fdc48100.rkvdec-core: [133, 49152]
[    4.123249] mpp_rkvdec2 fdc48100.rkvdec-core: [134, 8192]
[    4.123252] mpp_rkvdec2 fdc48100.rkvdec-core: [135, 4352]
[    4.123254] mpp_rkvdec2 fdc48100.rkvdec-core: [138, 13056]
[    4.123257] mpp_rkvdec2 fdc48100.rkvdec-core: [142, 291584]
[    4.123293] mpp_rkvdec2 fdc48100.rkvdec-core: probing finish
[    4.130729] mpp_rkvenc2 rkvenc-ccu: probing start
[    4.131146] mpp_rkvenc2 rkvenc-ccu: probing finish
[    4.131799] mpp_rkvenc2 fdbd0000.rkvenc-core: probing start
[    4.132788] mpp_rkvenc2 fdbd0000.rkvenc-core: bin=0
[    4.133457] mpp_rkvenc2 fdbd0000.rkvenc-core: leakage=10
[    4.133928] mpp_rkvenc2 fdbd0000.rkvenc-core: leakage-volt-sel=0
[    4.135296] mpp_rkvenc2 fdbd0000.rkvenc-core: avs=0
[    4.135836] mpp_rkvenc2 fdbd0000.rkvenc-core: attach ccu as core 0
[    4.136412] mpp_rkvenc2 fdbd0000.rkvenc-core: probing finish
[  OK  ] Finished systemd-random-se…rvice mpp_rkvenc2 fdbe0000.rkvenc-core: probing start
[0m - Load/Save Random Seed.
[    4.138444] mpp_rkvenc2 fdbe0000.rkvenc-core: bin=0
[    4.139062] mpp_rkvenc2 fdbe0000.rkvenc-core: leakage=10
[    4.139531] mpp_rkvenc2 fdbe0000.rkvenc-core: leakage-volt-sel=0
[    4.140821] mpp_rkvenc2 fdbe0000.rkvenc-core: avs=0
[    4.141311] mpp_rkvenc2 fdbe0000.rkvenc-core: attach ccu as core 1
[    4.141878] mpp_rkvenc2 fdbe0000.rkvenc-core: probing finish
[    4.142750] mpp_av1dec fdc70000.av1d: probing start
[    4.143409] mpp_av1dec fdc70000.av1d: probing finish
[    4.144044] mpp_service mpp-srv: probe success
[  OK  ] Finished systemd-sysusers.service - Create System Users.
         Starting systemd-tmpfiles-…ate Static Device Nodes in /dev...
[    4.175746] [trim-mounts-hash]'/'[00000000f4c4c500]'s top mountpoint dentry: dev
[    4.176432] [trim-mounts-hash]dentry 'dev' type: 0
[    4.177873] zfs: module license 'CDDL' taints kernel.
[    4.178325] Disabling lock debugging due to kernel taint
[    4.178873] zfs: module license taints kernel.
[  OK  ] Finished systemd-tmpfiles-…reate Static Device Nodes in /dev.
[  OK  ] Reached target local-fs-pr…reparation for Local File Systems.
         Starting systemd-udevd.ser…ger for Device Events and Files...
[  OK  ] Finished systemd-udev-trig…e - Coldplug All udev Devices.
         Starting ifupdown-pre.serv…ynchronize boot up for ifupdown...
[  OK  ] Finished ifupdown-pre.serv… synchronize boot up for ifupdown.
[    4.393934] ZFS: Loaded module v2.4.1-1, ZFS pool version 5000, ZFS filesystem version 5
[  OK  ] Finished systemd-modules-l…service - Load Kernel Modules.
         Starting systemd-sysctl.se…ce - Apply Kernel Variables...
[    4.405309] [trim-mounts-hash]'/'[00000000f4c4c500]'s top mountpoint dentry: dev
[    4.405986] [trim-mounts-hash]dentry 'dev' type: 0
[  OK  ] Finished systemd-sysctl.service - Apply Kernel Variables.
[  OK  ] Started systemd-udevd.serv…nager for Device Events and Files.
         Starting plymouth-start.se…[0m - Show Plymouth Boot Screen...
[  OK  ] Started plymouth-start.ser…e - Show Plymouth Boot Screen.
[  OK  ] Started systemd-ask-passwo…uests to Plymouth Directory Watch.
[  OK  ] Reached target cryptsetup.…get - Local Encrypted Volumes.
[    4.626915] sd 0:0:0:0: Attached scsi generic sg0 type 0
[  OK  ] Found device dev-ttyS2.device - /dev/ttyS2.
[  OK  ] Found device dev-disk-by\x…7.device - ADATA_SP920SS BOOT.
         Starting systemd-fsck@dev-…304-9801-4c8c-bd6d-5e6db67644e7...
[  OK  ] Started systemd-fsckd.serv…tem Check Daemon to report status.
         Mounting tmp.mount - /tmp...
[  OK  ] Reached target machines.target - Containers.
[    4.931523] [trim-mounts-hash]'tmp'[00000000622019c5]'s top mountpoint dentry: tmp
[    4.932329] [trim-mounts-hash]dentry 'tmp' type: 0
[    4.933853] pstore: Using crash dump compression: deflate
[    4.934379] pstore: Registered ramoops as persistent store backend
[    4.934962] ramoops: using 0xd8000@0x118000, ecc: 0
[  OK  ] Mounted tmp.mount - /tmp.
[  OK  ] Finished systemd-fsck@dev-…59304-9801-4c8c-bd6d-5e6db67644e7.
[    4.991412] cpufreq: cpufreq_policy_online: CPU4: Running at unlisted initial frequency: 1008000 kHz, changing to: 1200000 kHz
[    5.000925] cpufreq: cpufreq_policy_online: CPU6: Running at unlisted initial frequency: 1008000 kHz, changing to: 1200000 kHz
         Mounting boot.mount - /boot...
[    5.053289] EXT4-fs (sda1): mounted filesystem e1d59304-9801-4c8c-bd6d-5e6db67644e7 r/w with ordered data mode. Quota mode: none.
[    5.054336] [trim-mounts-hash]'boot'[000000009e7630b1]'s top mountpoint dentry: boot
[    5.055012] [trim-mounts-hash]dentry 'boot' type: 0
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
         Starting systemd-tmpfiles-…te System Files and Directories...
[  OK  ] Finished plymouth-read-wri…lymouth To Write Out Runtime Data.
[    5.088559] [trim-mounts-hash]'/'[00000000f4c4c500]'s top mountpoint dentry: dev
[    5.089265] [trim-mounts-hash]dentry 'dev' type: 0
[  OK  ] Finished console-setup.ser…[0m - Set console font and keymap.
         Mounting proc-sys-fs-binfm…utable File Formats File System...
[FAILED] Failed to start set_gpio-i…[0m - GPIO Initialization Service.
See 'systemctl status set_gpio-init.service' for details.
[  OK  ] Finished pwm-fancontrol.se…ice - PWM Fan Setting Service.
[FAILED] Failed to start led-set.service - LED Setting Service.
See 'systemctl status led-set.service' for details.
[  OK  ] Finished systemd-tmpfiles-…eate System Files and Directories.
         Mounting run-rpc_pipefs.mount - RPC Pipe File System...
[    5.238403] [trim-mounts-hash]'rpc_pipefs'[00000000ffe7b460]'s top mountpoint dentry: run
[    5.239125] [trim-mounts-hash]dentry 'run' type: 0
[    5.241365] audit: type=1400 audit(1750949921.996:2): apparmor="STATUS" operation="profile_load" profile="unconfined" name="lsb_release" pid=727 comm="apparmor_parser"
[    5.374146] [trim-mounts-hash]'/'[00000000123cc84f]'s top mountpoint dentry: proc
[    5.374808] [trim-mounts-hash]dentry 'proc' type: 0
[    5.410227] audit: type=1400 audit(1750949922.164:3): apparmor="STATUS" operation="profile_load" profile="unconfined" name="virt-aa-helper" pid=743 comm="apparmor_parser"
         Starting rpcbind.service - RPC bind portmap service...
[    5.428528] audit: type=1400 audit(1750949922.180:4): apparmor="STATUS" operation="profile_load" profile="unconfined" name="libvirtd" pid=744 comm="apparmor_parser"
[    5.429822] audit: type=1400 audit(1750949922.184:5): apparmor="STATUS" operation="profile_load" profile="unconfined" name="libvirtd//qemu_bridge_helper" pid=744 comm="apparmor_parser"
[    5.447222] audit: type=1400 audit(1750949922.200:6): apparmor="STATUS" operation="profile_load" profile="unconfined" name="nvidia_modprobe" pid=732 comm="apparmor_parser"
[    5.448705] audit: type=1400 audit(1750949922.200:7): apparmor="STATUS" operation="profile_load" profile="unconfined" name="nvidia_modprobe//kmod" pid=732 comm="apparmor_parser"
         Starting systemd-timesyncd… - Network Time Synchronization...
[    5.455606] audit: type=1400 audit(1750949922.208:8): apparmor="STATUS" operation="profile_load" profile="unconfined" name="/usr/bin/man" pid=739 comm="apparmor_parser"
[    5.456932] audit: type=1400 audit(1750949922.208:9): apparmor="STATUS" operation="profile_load" profile="unconfined" name="man_filter" pid=739 comm="apparmor_parser"
[    5.458224] audit: type=1400 audit(1750949922.208:10): apparmor="STATUS" operation="profile_load" profile="unconfined" name="man_groff" pid=739 comm="apparmor_parser"
         Starting systemd-update-ut…rd System Boot/Shutdown in UTMP...
[  OK  ] Started rpcbind.service - RPC bind portmap service.
[  OK  ] Finished dpdk.service - DPDK runtime environment.
[  OK  ] Mounted proc-sys-fs-binfmt…ecutable File Formats File System.
[  OK  ] Mounted run-rpc_pipefs.mount - RPC Pipe File System.
[  OK  ] Reached target rpc_pipefs.target.
[  OK  ] Reached target rpcbind.target - RPC Port Mapper.
         Starting nfs-blkmap.servic…NFS block layout mapping daemon...
         Starting nfs-idmapd.servic…- NFSv4 ID-name mapping service...
         Starting nfsdcld.serviceFSv4 Client Tracking Daemon...
[  OK  ] Reached target nfs-client.target - NFS client services.
[  OK  ] Reached target remote-fs-p…eparation for Remote File Systems.
[  OK  ] Reached target remote-fs.target - Remote File Systems.
[  OK  ] Finished systemd-binfmt.se… Set Up Additional Binary Formats.
[  OK  ] Finished systemd-update-ut…cord System Boot/Shutdown in UTMP.
[  OK  ] Started nfs-blkmap.service… pNFS block layout mapping daemon.
[    5.515196] [trim-mounts-hash]'dev'[0000000022012bc0]'s top mountpoint dentry: tmp
[    5.517366] [trim-mounts-hash]dentry 'tmp' type: 0
[  OK  ] Started nfs-idmapd.service…m - NFSv4 ID-name mapping service.
[  OK  ] Started nfsdcld.service - NFSv4 Client Tracking Daemon.
[    5.560635] audit: type=1400 audit(1750949922.312:11): apparmor="STATUS" operation="profile_load" profile="unconfined" name="/usr/lib/NetworkManager/nm-dhcp-client.action" pid=734 comm="apparmor_parser"
[  OK  ] Finished apparmor.service - Load AppArmor profiles.
[    5.616880] [trim-mounts-hash]'proc'[00000000209fa293]'s top mountpoint dentry: run
[    5.617566] [trim-mounts-hash]dentry 'run' type: 0
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
[    5.861187] [trim-mounts-hash]'proc'[00000000209fa293]'s top mountpoint dentry: run
[    5.861866] [trim-mounts-hash]dentry 'run' type: 0
[  OK  ] Started wsdd2.service …MNR Discovery/Name Service Daemon.
         Starting zramswap.service - Linux zramswap setup...
[    5.869600] [trim-mounts-hash]'dev'[0000000074e87fcd]'s top mountpoint dentry: tmp
[    5.870287] [trim-mounts-hash]dentry 'tmp' type: 0
[  OK  ] Finished sysstat.service - Resets System Activity Logs.
[    5.897810] fnnas-tf[895]: [ STEPS ] Welcome to the partition expansion tool.
[  OK  ] Started rsyslog.service - System Logging Service.
[    5.910093] zram0: detected capacity change from 0 to 16337000
[  OK  ] Finished system_setmac.ser…stable MAC addresses from MMC CID.
[  OK  ] Reached target network-pre…get - Preparation for Network.
         Starting ovsdb-server.serv…0m - Open vSwitch Database Unit...
[    5.923510] Adding 8168496k swap on /dev/zram0.  Priority:100 extents:1 across:8168496k SS
[  OK  ] Started dbus.service - D-Bus System Message Bus.
[  OK  ] Finished zramswap.service - Linux zramswap setup.
         Starting NetworkManager.service - Network Manager...
         Starting wpa_supplicant.service - WPA supplicant...
[  OK  ] Started systemd-logind.service - User Login Management.
[  OK  ] Started avahi-daemon.service - Avahi mDNS/DNS-SD Stack.
[  OK  ] Started systemd-machined.s…nd Container Registration Service.
[    5.936406] fnnas-tf[895]: [ INFO ] Target Disk: [ sda ], Root Partition: [ 2 ], PT Type: [ gpt ]
[  OK  ] Started polkit.service - Authorization Manager.
         Starting ModemManager.service - Modem Manager...
[  OK  ] Started wpa_supplicant.service - WPA supplicant.
[  OK  ] Finished e2scrub_reap.serv…ine ext4 Metadata Check Snapshots.
[  OK  ] Stopped wsdd2.service …MNR Discovery/Name Service Daemon.
[    6.029477] [trim-mounts-hash]'dev'[00000000e8a9851d]'s top mountpoint dentry: tmp
[  OK  ] Started wsdd2.service …MNR Di[    6.030171] [trim-mounts-hash]dentry 'tmp' type: 0
scovery/Name Service Daemon.
[  OK  ] Finished nut-driver-enumer…vices into systemd unit instances.
[  OK  ] Reached target nut-driver.…wer device drivers on this system.
[    6.116347] nvme nvme0: using unchecked data buffer
[  OK  ] Started ModemManager.service - Modem Manager.
[  OK  ] Stopped wsdd2.service …MNR Discovery/Name Service Daemon.
[    6.241517] [trim-mounts-hash]'dev'[000000003e4c3bc1]'s top mountpoint dentry: tmp
[  OK  ] Started wsdd2.service …MNR Di[    6.242204] [trim-mounts-hash]dentry 'tmp' type: 0
scovery/Name Service Daemon.
[  OK  ] Started smartmontools.serv…porting Technology (SMART) Daemon.
[FAILED] Failed to start wsdd2.serv…MNR Discovery/Name Service Daemon.
See 'systemctl status wsdd2.service' for details.
[  OK  ] Started NetworkManager.service - Network Manager.
         Starting NetworkManager-wa…m - Network Manager Wait Online...
         Starting systemd-hostnamed.service - Hostname Service...
[    6.357937] [trim-mounts-hash]'dev'[000000006184c88f]'s top mountpoint dentry: tmp
[    6.358627] [trim-mounts-hash]dentry 'tmp' type: 0
[    6.366278] [trim-mounts-hash]'proc'[00000000209fa293]'s top mountpoint dentry: run
[    6.366954] [trim-mounts-hash]dentry 'run' type: 0
[  OK  ] Started systemd-hostnamed.service - Hostname Service.
[  OK  ] Listening on systemd-rfkil…l Switch Status /dev/rfkill Watch.
         Starting NetworkManager-di…nager Script Dispatcher Service...
[  OK  ] Started NetworkManager-dis…Manager Script Dispatcher Service.
[    6.512926] Realtek Internal NBASE-T PHY r8169-3-3100:00: attached PHY driver (mii_bus:phy_addr=r8169-3-3100:00, irq=MAC)
[  OK  ] Started ovsdb-server.servi… - Open vSwitch Database Unit.
         Starting ovs-vswitchd.serv… - Open vSwitch Forwarding Unit...
[    6.705397] r8169 0003:31:00.0 eth0: Link is Down
[    6.714139] openvswitch: Open vSwitch switching datapath
[    6.744923] Realtek Internal NBASE-T PHY r8169-2-2100:00: attached PHY driver (mii_bus:phy_addr=r8169-2-2100:00, irq=MAC)
[    6.897579] r8169 0002:21:00.0 eth1: Link is Down
[    6.914858] rk_gmac-dwmac fe1c0000.ethernet eth2: Register MEM_TYPE_PAGE_POOL RxQ-0
[    6.917342] rk_gmac-dwmac fe1c0000.ethernet eth2: Register MEM_TYPE_PAGE_POOL RxQ-1
[  OK  ] Started ovs-vswitchd.servi…0m - Open vSwitch Forwarding Unit.
         Starting networking.service - Raise network interfaces...
         Starting openvswitch-switch.service - Open vSwitch...
[  OK  ] Finished openvswitch-switch.service - Open vSwitch.
[    7.921749] rk_gmac-dwmac fe1c0000.ethernet eth2: Failed to reset the dma
[    7.922381] rk_gmac-dwmac fe1c0000.ethernet eth2: stmmac_hw_setup: DMA engine initialization failed
[    7.923192] rk_gmac-dwmac fe1c0000.ethernet eth2: __stmmac_open: Hw setup failed
[    7.940828] rk_gmac-dwmac fe1b0000.ethernet eth3: Register MEM_TYPE_PAGE_POOL RxQ-0
[    7.943566] rk_gmac-dwmac fe1b0000.ethernet eth3: Register MEM_TYPE_PAGE_POOL RxQ-1
[    8.949242] rk_gmac-dwmac fe1b0000.ethernet eth3: Failed to reset the dma
[    8.949877] rk_gmac-dwmac fe1b0000.ethernet eth3: stmmac_hw_setup: DMA engine initialization failed
[    8.950688] rk_gmac-dwmac fe1b0000.ethernet eth3: __stmmac_open: Hw setup failed
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
[    9.119483] fnnas-tf[895]: [ INFO ] Expanding root partition...
[    9.134581] fnnas-tf[895]: [ INFO ] Current partition: 5GiB, Disk: 119GiB
[    9.134831] fnnas-tf[895]: [ INFO ] GPT partition table detected.
[  OK  ] Started ssh.service - OpenBSD Secure Shell server.
[    9.255191] fnnas-tf[895]: [ INFO ] Strategy: Limit partition 2 to 16GiB...
[  OK  ] Started smbd.service - Samba SMB/CIFS daemon (smbd).
[    9.686037] fnnas-tf[1230]: Warning: Partition /dev/sda2 is being used. Are you sure you want to continue?
Yes/No? Yes                                                               
[  OK  ] Started libvirtd.service - Virtualization daemon.
[    9.751326] fnnas-tf[1230]: Information: You may need to update /etc/fstab.
[    9.973682] r8169 0002:21:00.0 eth1: Link is Up - 1Gbps/Full - flow control rx/tx
[  OK  ] Started containerd.service…0m - containerd container runtime.
[   10.153849] r8169 0002:21:00.0: invalid VPD tag 0x00 (size 0) at offset 0; assume missing optional EEPROM
[   10.162952] r8169 0003:31:00.0: invalid VPD tag 0x00 (size 0) at offset 0; assume missing optional EEPROM
[  OK  ] Started postgresql@15-main… - PostgreSQL Cluster 15-main.
         Starting postgresql.service - PostgreSQL RDBMS...
[  OK  ] Finished postgresql.service - PostgreSQL RDBMS.
                                                                          
[   12.849816] fnnas-tf[895]: [ INFO ] Expanding filesystem...
[   12.919756] BTRFS info (device sda2): resize device /dev/sda2 (devid 1) from 6441402368 to 16626221056
[   12.917009] fnnas-tf[1425]: Resize device id 1 (/dev/sda2) from 6.00GiB to max
[   12.917299] fnnas-tf[895]: [ SUCCESS ] Partition expanded successfully.
[   13.351048] fnnas-tf[895]: [ INFO ] Service resize-rootfs.service disabled
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
[  OK  ] Started rc-local.service - /etc/rc.local Compatibility.
[  OK  ] Started nfs-mountd.service - NFS Mount Daemon.
         Starting plymouth-quit-wai… until boot process finishes up...
         Starting plymouth-quit.ser… Terminate Plymouth Boot Screen...
         Starting show_startup_info… trim show startup info service...
         Starting trim_init.service - trim init service...
[  OK  ] Finished show_startup_info… - trim show startup info service.
[  OK  ] Started rpc-statd.servicetus monitor for NFSv2/3 locking..


███████╗███╗   ██╗ ██████╗ ███████╗
██╔════╝████╗  ██║██╔═══██╗██╔════╝
█████╗  ██╔██╗ ██║██║   ██║███████╗
██╔══╝  ██║╚██╗██║██║   ██║╚════██║
██║     ██║ ╚████║╚██████╔╝███████║
╚═╝     ╚═╝  ╚═══╝ ╚═════╝ ╚══════╝

OS version:         fnOS v1.1.31
Hostname:           fnnas
IPv4 for eth1:      192.168.33.41

fnOS Web UI can be directly accessed at: http://192.168.33.41:5666

For more information, help or support, go here:
https://www.fnnas.com

fnnas login: admin
Password: 
Linux fnos 6.18.18-trim #491 SMP PREEMPT Fri Apr 17 03:28:48 UTC 2026 aarch64

The programs included with the Debian GNU/Linux system are free software;
the exact distribution terms for each program are described in the
individual files in /usr/share/doc/*/copyright.

Debian GNU/Linux comes with ABSOLUTELY NO WARRANTY, to the extent
permitted by applicable law.
No directory, logging in with HOME=/
admin@fnos:/$ sudo su
[sudo] password for admin: 
root@fnos:/# cat /boot/boot.cmd 
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


### fnnas_rockchip_bdy-g98_k6.18.18_2026.08.18.img.gz


测试描述：
1. 能正常引导，自动获取ip正常
2. 其他待测试

#### 引导日志

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
DQ rds:h1 h4 l0 h5 h2 h5 h5 h1, h3 h3 l0 h4 h3 h1 h3 h3 

DQS rds:l0,h1 
CH1 RX Vref:29.3%, TX Vref:23.8%,22.8%
DQ rds:h1 h1 h1 l0 h1 h3 h2 h3, h2 h3 h4 l0 h3 h5 h1 l0 

DQS rds:l0,h2 
CH2 RX Vref:29.7%, TX Vref:22.8%,21.8%
DQ rds:h3 h1 h7 h1 h3 h2 l0 l0, h6 h3 h1 h3 h4 h1 h6 h3 

DQS rds:h1,h1 
CH3 RX Vref:30.1%, TX Vref:22.8%,21.8%
DQ rds:h6 h2 h4 h3 h2 h1 h1 h4, h2 h3 h3 h3 h1 h2 h1 h3 

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
## Checking atf-1 0x00060000 (gzip @0x00260000) ... sha256(047b7bdbff...) + sha256(f99c6f8fb6...) + OK
## Checking uboot 0x00200000 (gzip @0x00400000) ... sha256(40b389ad51...) + sha256(2030c39880...) + OK
## Checking fdt 0x00374a38 ... sha256(2fba0da159...) + OK
## Checking atf-2 0xff100000 ... sha256(74bbc58e20...) + OK
## Checking atf-3 0x000f0000 ... sha256(13b94d9d5a...) + OK
## Checking optee 0x08400000 (gzip @0x08600000) ... sha256(f3a40240f3...) + sha256(76eeb0b48d...) + OK
Jumping to U-Boot(0x00200000) via ARM Trusted Firmware(0x00060000)
Total: 510.1/710.764 ms

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


U-Boot next-dev-gc09af4f875-250929-dirty #root (Aug 29 2026 - 01:13:35 +0800)

Model: BYD G98 Compiled By yifengyou
MPIDR: 0x0
PreSerial: 2, raw, 0xfeb50000
DRAM:  16 GiB
Sysmem: init
Relocation Offset: ed8e5000
Relocation fdt: eb7f66f0 - eb7fecb8, kfdt: 0037d000 - 0037d000
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
Model: BYD G98 Compiled By yifengyou
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
3406 bytes read in 24 ms (137.7 KiB/s)
## Executing script at 00500000
Ignoring attempt to modify 'load_addr'
Boot script loaded from scsi 0
407 bytes read in 13 ms (30.3 KiB/s)
19195622 bytes read in 376 ms (48.7 MiB/s)
32926208 bytes read in 597 ms (52.6 MiB/s)
215041 bytes read in 447 ms (469.7 KiB/s)
** File not found /dtb/rockchip/overlay/rk3588-fixup.scr **
Fdt Ramdisk skip relocation
No misc partition
## Loading init Ramdisk from Legacy Image at 0a200000 ...
   Image Name:   uInitrd
   Image Type:   AArch64 Linux RAMDisk Image (uncompressed)
   Data Size:    19195558 Bytes = 18.3 MiB
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
Total: 7911.33/7986.354 ms

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
[    0.000000] NODE_DATA(0) allocated [mem 0x4fdef3940-0x4fdef60ff]
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
[    0.000000] Kernel command line: root=UUID=69cac71b-78a6-4f66-ba28-643ce0e15aba rootwait rootfstype=btrfs rootflags=compress=zstd:1 bootsplash.bootfile=bootsplash.armbian earlycon console=ttyS2,1500000 console=ttyFIQ0 console=tty1 consoleblank=0 loglevel=7 ubootpart=08bab0a4-c8a5-4111-8b3d-b5d632d2179a usb-storage.quirks=0x2537:0x1066:u,0x2537:0x1068:u rw rootwait net.ifnames=0 max_loop=128 cgroup_enable=cpuset cgroup_memory=1 cgroup_enable=memory swapaccount=1 androidboot.fwver=ddr-v1.21-cb12b99cc23,spl-v1.14,bl31-v1.54,bl32-v1.20,uboot-gc09af4f87-08/29/2026
[    0.000000] Unknown kernel command line parameters "ubootpart=08bab0a4-c8a5-4111-8b3d-b5d632d2179a cgroup_enable=memory cgroup_memory=1", will be passed to user space.
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
[    0.001815] Console: colour dummy device 80x25
[    0.002223] printk: legacy console [tty1] enabled
[    0.002682] printk: legacy bootconsole [uart0] disabled
ISr1ag/c  in b
              ISr2igTc snnwo
                            ISr3igTc snnwo
                                          ISaUtiISr ttmro
                                                         ISa tiISr ttmrt
                                                                        I aUii
                                                                              SaUt rro
                                                                                      ISaUtiISr t mrt
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
[    0.000000] NODE_DATA(0) allocated [mem 0x4fdef3940-0x4fdef60ff]
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
[    0.000000] Kernel command line: root=UUID=69cac71b-78a6-4f66-ba28-643ce0e15aba rootwait rootfstype=btrfs rootflags=compress=zstd:1 bootsplash.bootfile=bootsplash.armbian earlycon console=ttyS2,1500000 console=ttyFIQ0 console=tty1 consoleblank=0 loglevel=7 ubootpart=08bab0a4-c8a5-4111-8b3d-b5d632d2179a usb-storage.quirks=0x2537:0x1066:u,0x2537:0x1068:u rw rootwait net.ifnames=0 max_loop=128 cgroup_enable=cpuset cgroup_memory=1 cgroup_enable=memory swapaccount=1 androidboot.fwver=ddr-v1.21-cb12b99cc23,spl-v1.14,bl31-v1.54,bl32-v1.20,uboot-gc09af4f87-08/29/2026
[    0.000000] Unknown kernel command line parameters "ubootpart=08bab0a4-c8a5-4111-8b3d-b5d632d2179a cgroup_enable=memory cgroup_memory=1", will be passed to user space.
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
[    0.001815] Console: colour dummy device 80x25
[    0.002223] printk: legacy console [tty1] enabled
[    0.002682] printk: legacy bootconsole [uart0] disabled
[    0.003259] Calibrating delay loop (skipped), value calculated using timer frequency.. 48.00 BogoMIPS (lpj=96000)
[    0.003283] pid_max: default: 32768 minimum: 301
[    0.003389] LSM: initializing lsm=capability,yama,apparmor
[    0.003456] Yama: becoming mindful.
[    0.003681] AppArmor: AppArmor initialized
[    0.003780] Mount-cache hash table entries: 32768 (order: 6, 262144 bytes, linear)
[    0.003827] Mountpoint-cache hash table entries: 32768 (order: 6, 262144 bytes, linear)
[    0.006217] rcu: Hierarchical SRCU implementation.
[    0.006233] rcu: 	Max phase no-delay instances is 1000.
[    0.006457] Timer migration: 1 hierarchy levels; 8 children per group; 1 crossnode level
[    0.007270] EFI services will not be available.
[    0.007571] smp: Bringing up secondary CPUs ...
[    0.008221] Detected VIPT I-cache on CPU1
[    0.008420] GICv3: CPU1: found redistributor 100 region 0:0x00000000fe6a0000
[    0.008433] GICv3: CPU1: using allocated LPI pending table @0x00000001004c0000
[    0.008475] CPU1: Booted secondary processor 0x0000000100 [0x412fd050]
[    0.009167] Detected VIPT I-cache on CPU2
[    0.009362] GICv3: CPU2: found redistributor 200 region 0:0x00000000fe6c0000
[    0.009374] GICv3: CPU2: using allocated LPI pending table @0x00000001004d0000
[    0.009410] CPU2: Booted secondary processor 0x0000000200 [0x412fd050]
[    0.010082] Detected VIPT I-cache on CPU3
[    0.010273] GICv3: CPU3: found redistributor 300 region 0:0x00000000fe6e0000
[    0.010285] GICv3: CPU3: using allocated LPI pending table @0x00000001004e0000
[    0.010319] CPU3: Booted secondary processor 0x0000000300 [0x412fd050]
[    0.011042] CPU features: detected: Spectre-v4
[    0.011047] CPU features: detected: Spectre-BHB
[    0.011052] CPU features: detected: SSBS not fully self-synchronizing
[    0.011055] Detected PIPT I-cache on CPU4
[    0.011163] GICv3: CPU4: found redistributor 400 region 0:0x00000000fe700000
[    0.011171] GICv3: CPU4: using allocated LPI pending table @0x00000001004f0000
[    0.011194] CPU4: Booted secondary processor 0x0000000400 [0x414fd0b0]
[    0.011837] Detected PIPT I-cache on CPU5
[    0.011951] GICv3: CPU5: found redistributor 500 region 0:0x00000000fe720000
[    0.011960] GICv3: CPU5: using allocated LPI pending table @0x0000000100500000
[    0.011984] CPU5: Booted secondary processor 0x0000000500 [0x414fd0b0]
[    0.012626] Detected PIPT I-cache on CPU6
[    0.012741] GICv3: CPU6: found redistributor 600 region 0:0x00000000fe740000
[    0.012749] GICv3: CPU6: using allocated LPI pending table @0x0000000100510000
[    0.012773] CPU6: Booted secondary processor 0x0000000600 [0x414fd0b0]
[    0.013571] Detected PIPT I-cache on CPU7
[    0.013686] GICv3: CPU7: found redistributor 700 region 0:0x00000000fe760000
[    0.013694] GICv3: CPU7: using allocated LPI pending table @0x0000000100520000
[    0.013719] CPU7: Booted secondary processor 0x0000000700 [0x414fd0b0]
[    0.013798] smp: Brought up 1 node, 8 CPUs
[    0.014063] SMP: Total of 8 processors activated.
[    0.014074] CPU: All CPU(s) started at EL2
[    0.014086] CPU features: detected: 32-bit EL0 Support
[    0.014098] CPU features: detected: Data cache clean to the PoU not required for I/D coherence
[    0.014114] CPU features: detected: Common not Private translations
[    0.014127] CPU features: detected: CRC32 instructions
[    0.014143] CPU features: detected: RCpc load-acquire (LDAPR)
[    0.014155] CPU features: detected: LSE atomic instructions
[    0.014167] CPU features: detected: Privileged Access Never
[    0.014179] CPU features: detected: PMUv3
[    0.014190] CPU features: detected: RAS Extension Support
[    0.014205] CPU features: detected: Speculative Store Bypassing Safe (SSBS)
[    0.014279] alternatives: applying system-wide alternatives
[    0.017599] CPU features: detected: Hardware dirty bit management on CPU4-7
[    0.018018] Memory: 16172392K/16752640K available (17792K kernel code, 2970K rwdata, 5636K rodata, 5568K init, 714K bss, 439972K reserved, 131072K cma-reserved)
[    0.021388] [trim-mounts-hash]'/'[(____ptrval____)]'s top mountpoint dentry: /
[    0.021413] [trim-mounts-hash]dentry '/' type: 0
[    0.021448] devtmpfs: initialized
[    0.033812] clocksource: jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 7645041785100000 ns
[    0.033839] posixtimers hash table entries: 4096 (order: 4, 65536 bytes, linear)
[    0.033880] futex hash table entries: 2048 (131072 bytes on 1 NUMA nodes, total 128 KiB, linear).
[    0.034446] 24528 pages in range for non-PLT usage
[    0.034449] 516048 pages in range for PLT usage
[    0.034586] pinctrl core: initialized pinctrl subsystem
[    0.034846] DMI not present or invalid.
[    0.036600] NET: Registered PF_NETLINK/PF_ROUTE protocol family
[    0.037332] DMA: preallocated 2048 KiB GFP_KERNEL pool for atomic allocations
[    0.037629] DMA: preallocated 2048 KiB GFP_KERNEL|GFP_DMA pool for atomic allocations
[    0.037899] DMA: preallocated 2048 KiB GFP_KERNEL|GFP_DMA32 pool for atomic allocations
[    0.037922] audit: initializing netlink subsys (disabled)
[    0.038023] audit: type=2000 audit(0.036:1): state=initialized audit_enabled=0 res=1
[    0.039668] thermal_sys: Registered thermal governor 'step_wise'
[    0.039699] cpuidle: using governor menu
[    0.039871] hw-breakpoint: found 6 breakpoint and 4 watchpoint registers.
[    0.039986] ASID allocator initialised with 65536 entries
[    0.040068] Serial: AMBA PL011 UART driver
[    0.051223] /vop@fdd90000: Fixed dependency cycle(s) with /hdmi@fde80000
[    0.051258] /hdmi@fde80000: Fixed dependency cycle(s) with /vop@fdd90000
[    0.053918] /pcie@fe180000: Fixed dependency cycle(s) with /pcie@fe180000/legacy-interrupt-controller
[    0.064435] gpio gpiochip0: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.064783] rockchip-gpio fd8a0000.gpio: probed /pinctrl/gpio@fd8a0000
[    0.064925] gpio gpiochip1: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.065059] rockchip-gpio fec20000.gpio: probed /pinctrl/gpio@fec20000
[    0.065189] gpio gpiochip2: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.065319] rockchip-gpio fec30000.gpio: probed /pinctrl/gpio@fec30000
[    0.065449] gpio gpiochip3: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.065571] rockchip-gpio fec40000.gpio: probed /pinctrl/gpio@fec40000
[    0.065776] gpio gpiochip4: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.065901] rockchip-gpio fec50000.gpio: probed /pinctrl/gpio@fec50000
[    0.067335] /pcie@fe150000: Fixed dependency cycle(s) with /pcie@fe150000/legacy-interrupt-controller
[    0.067679] /pcie@fe160000: Fixed dependency cycle(s) with /pcie@fe160000/legacy-interrupt-controller
[    0.068067] /pcie@fe170000: Fixed dependency cycle(s) with /pcie@fe170000/legacy-interrupt-controller
[    0.072496] /hdmi@fde80000: Fixed dependency cycle(s) with /hdmi0-con
[    0.072527] /hdmi0-con: Fixed dependency cycle(s) with /hdmi@fde80000
[    0.073249] HugeTLB: registered 1.00 GiB page size, pre-allocated 0 pages
[    0.073258] HugeTLB: 0 KiB vmemmap can be freed for a 1.00 GiB page
[    0.073265] HugeTLB: registered 32.0 MiB page size, pre-allocated 0 pages
[    0.073271] HugeTLB: 0 KiB vmemmap can be freed for a 32.0 MiB page
[    0.073277] HugeTLB: registered 2.00 MiB page size, pre-allocated 0 pages
[    0.073282] HugeTLB: 0 KiB vmemmap can be freed for a 2.00 MiB page
[    0.073288] HugeTLB: registered 64.0 KiB page size, pre-allocated 0 pages
[    0.073293] HugeTLB: 0 KiB vmemmap can be freed for a 64.0 KiB page
[    0.141747] raid6: neonx8   gen()  5136 MB/s
[    0.209821] raid6: neonx4   gen()  5090 MB/s
[    0.277903] raid6: neonx2   gen()  4305 MB/s
[    0.345961] raid6: neonx1   gen()  3417 MB/s
[    0.414041] raid6: int64x8  gen()  2268 MB/s
[    0.482109] raid6: int64x4  gen()  2387 MB/s
[    0.550181] raid6: int64x2  gen()  1990 MB/s
[    0.618259] raid6: int64x1  gen()  1638 MB/s
[    0.618264] raid6: using algorithm neonx8 gen() 5136 MB/s
[    0.686319] raid6: .... xor() 3879 MB/s, rmw enabled
[    0.686325] raid6: using neon recovery algorithm
[    0.686888] iommu: Default domain type: Translated
[    0.686896] iommu: DMA domain TLB invalidation policy: strict mode
[    0.687317] SCSI subsystem initialized
[    0.687510] usbcore: registered new interface driver usbfs
[    0.687529] usbcore: registered new interface driver hub
[    0.687545] usbcore: registered new device driver usb
[    0.687780] pps_core: LinuxPPS API ver. 1 registered
[    0.687786] pps_core: Software ver. 5.3.6 - Copyright 2005-2007 Rodolfo Giometti <giometti@linux.it>
[    0.687801] PTP clock support registered
[    0.687818] EDAC MC: Ver: 3.0.0
[    0.687965] scmi_core: SCMI protocol bus registered
[    0.688499] NetLabel: Initializing
[    0.688506] NetLabel:  domain hash size = 128
[    0.688511] NetLabel:  protocols = UNLABELED CIPSOv4 CALIPSO
[    0.688543] NetLabel:  unlabeled traffic allowed by default
[    0.688634] vgaarb: loaded
[    0.688982] clocksource: Switched to clocksource arch_sys_counter
[    0.689188] VFS: Disk quotas dquot_6.6.0
[    0.689205] VFS: Dquot-cache hash table entries: 512 (order 0, 4096 bytes)
[    0.689525] AppArmor: AppArmor Filesystem Enabled
[    0.693982] NET: Registered PF_INET protocol family
[    0.694188] IP idents hash table entries: 262144 (order: 9, 2097152 bytes, linear)
[    0.701343] tcp_listen_portaddr_hash hash table entries: 8192 (order: 5, 131072 bytes, linear)
[    0.701500] Table-perturb hash table entries: 65536 (order: 6, 262144 bytes, linear)
[    0.701587] TCP established hash table entries: 131072 (order: 8, 1048576 bytes, linear)
[    0.702564] TCP bind hash table entries: 65536 (order: 9, 2097152 bytes, linear)
[    0.704178] TCP: Hash tables configured (established 131072 bind 65536)
[    0.704263] UDP hash table entries: 8192 (order: 7, 524288 bytes, linear)
[    0.704816] UDP-Lite hash table entries: 8192 (order: 7, 524288 bytes, linear)
[    0.705402] NET: Registered PF_UNIX/PF_LOCAL protocol family
[    0.705429] NET: Registered PF_XDP protocol family
[    0.705441] PCI: CLS 0 bytes, default 64
[    0.705536] Trying to unpack rootfs image as initramfs...
[    0.710495] kvm [1]: nv: 568 coarse grained trap handlers
[    0.710698] kvm [1]: IPA Size Limit: 40 bits
[    0.710718] kvm [1]: GICv3: no GICV resource entry
[    0.710724] kvm [1]: disabling GICv2 emulation
[    0.710750] kvm [1]: GIC system register CPU interface enabled
[    0.710765] kvm [1]: vgic interrupt IRQ18
[    0.710790] kvm [1]: VHE mode initialized successfully
[    0.711647] Initialise system trusted keyrings
[    0.711671] Key type blacklist registered
[    0.711796] workingset: timestamp_bits=44 max_order=22 bucket_order=0
[    0.712100] squashfs: version 4.0 (2009/01/31) Phillip Lougher
[    0.712318] fuse: init (API version 7.45)
[    0.713114] trim_trashbin_init
[    0.713123] trim-trashbin driver major=244,minor=0
[    0.713321] integrity: Platform Keyring initialized
[    0.713499] cryptd: max_cpu_qlen set to 1000
[    0.748204] xor: measuring software checksum speed
[    0.748722]    8regs           :  6413 MB/sec
[    0.749248]    32regs          :  6308 MB/sec
[    0.749623]    arm64_neon      :  8885 MB/sec
[    0.749628] xor: using function: arm64_neon (8885 MB/sec)
[    0.749637] Key type asymmetric registered
[    0.749642] Asymmetric key parser 'x509' registered
[    0.749677] Block layer SCSI generic (bsg) driver version 0.4 loaded (major 243)
[    0.749810] io scheduler mq-deadline registered
[    0.749820] io scheduler kyber registered
[    0.749845] io scheduler bfq registered
[    1.106921] Freeing initrd memory: 18740K
[    1.113102] ledtrig-cpu: registered to indicate activity on CPUs
[    1.115657] dma-pl330 fea10000.dma-controller: Loaded driver for PL330 DMAC-241330
[    1.115669] dma-pl330 fea10000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    1.116333] dma-pl330 fea30000.dma-controller: Loaded driver for PL330 DMAC-241330
[    1.116343] dma-pl330 fea30000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    1.117031] dma-pl330 fed10000.dma-controller: Loaded driver for PL330 DMAC-241330
[    1.117041] dma-pl330 fed10000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    1.118436] Serial: 8250/16550 driver, 12 ports, IRQ sharing disabled
[    1.120362] printk: legacy console [ttyS2] disabled
[    1.120506] feb50000.serial: ttyS2 at MMIO 0xfeb50000 (irq = 41, base_baud = 1500000) is a 16550A
[    1.120547] printk: legacy console [ttyS2] enabled
[    1.275624] Serial: AMBA driver
[    1.276290] arm-smmu-v3 fc900000.iommu: ias 48-bit, oas 48-bit (features 0x001c1eaf)
[    1.277717] arm-smmu-v3 fc900000.iommu: allocated 65536 entries for cmdq
[    1.278602] arm-smmu-v3 fc900000.iommu: allocated 32768 entries for evtq
[    1.279614] arm-smmu-v3 fc900000.iommu: msi_domain absent - falling back to wired irqs
[    1.281349] rockchip-pm-domain fd8d8000.power-management:power-controller: supply domain not found, using dummy regulator
[    1.282731] platform fdab0000.npu: Adding to iommu group 0
[    1.284225] platform fdac0000.npu: Adding to iommu group 1
[    1.285742] platform fdad0000.npu: Adding to iommu group 2
[    1.287128] platform fdb50000.video-codec: Adding to iommu group 3
[    1.287963] platform fdb50400.vdpu: Adding to iommu group 3
[    1.289084] platform fdb60000.rga: Adding to iommu group 4
[    1.290416] platform fdb70000.rga: Adding to iommu group 5
[    1.291680] platform fdba0000.video-codec: Adding to iommu group 6
[    1.292502] platform fdba0000.jpege-core: Adding to iommu group 6
[    1.293562] platform fdba4000.video-codec: Adding to iommu group 7
[    1.294382] platform fdba4000.jpege-core: Adding to iommu group 7
[    1.295433] platform fdba8000.video-codec: Adding to iommu group 8
[    1.296245] platform fdba8000.jpege-core: Adding to iommu group 8
[    1.297320] platform fdbac000.video-codec: Adding to iommu group 9
[    1.298130] platform fdbac000.jpege-core: Adding to iommu group 9
[    1.299243] platform fdc38000.video-codec: Adding to iommu group 10
[    1.300070] platform fdc38100.rkvdec-core: Adding to iommu group 10
[    1.301314] platform fdc40000.video-codec: Adding to iommu group 11
[    1.302527] rk_iommu fdca0000.iommu: av1d iommu enabled
[    1.303452] platform fdc70000.av1d: Adding to iommu group 12
[    1.304390] platform fdd90000.vop: Adding to iommu group 13
[    1.305816] platform fdb90000.jpegd: Adding to iommu group 14
[    1.307090] platform fdbd0000.rkvenc-core: Adding to iommu group 15
[    1.308482] platform fdbe0000.rkvenc-core: Adding to iommu group 16
[    1.309919] platform fdc48100.rkvdec-core: Adding to iommu group 17
[    1.349669] loop: module loaded
[    1.350001] er_netlink: netlink socket created (protocol 31)
[    1.350504] Initialized event reporting module
[    1.351098] system_heap: orders[0] = 6
[    1.351430] system_heap: orders[1] = 4
[    1.351760] system_heap: orders[2] = 0
[    1.352729] Key type psk registered
[    1.353935] ahci-dwc fe210000.sata: supply ahci not found, using dummy regulator
[    1.354638] ahci-dwc fe210000.sata: supply phy not found, using dummy regulator
[    1.355451] platform fe210000.sata:sata-port@0: supply target not found, using dummy regulator
[    1.356307] ahci-dwc fe210000.sata: PMPn is limited up to 5 ports
[    1.356886] ahci-dwc fe210000.sata: masking port_map 0x1 -> 0x1
[    1.357432] ahci-dwc fe210000.sata: SSS flag set, parallel bus scan disabled
[    1.358057] ahci-dwc fe210000.sata: AHCI vers 0001.0300, 32 command slots, 6 Gbps, platform mode
[    1.358828] ahci-dwc fe210000.sata: 1/1 ports implemented (port mask 0x1)
[    1.359423] ahci-dwc fe210000.sata: flags: ncq sntf stag pm led clo only pmp fbs pio slum part ccc apst 
[    1.360720] scsi host0: ahci-dwc
[    1.361113] ata1: SATA max UDMA/133 mmio [mem 0xfe210000-0xfe210fff] port 0x100 irq 64 lpm-pol 0
[    1.363037] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/regulators/dcdc-reg7
[    1.363909] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs3-null-pins
[    1.364712] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs2-null-pins
[    1.365524] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs1-null-pins
[    1.367511] thunder_xcv, ver 1.0
[    1.367814] thunder_bgx, ver 1.0
[    1.368112] nicpf, ver 1.0
[    1.370507] usbcore: registered new interface driver usb-storage
[    1.372300] mousedev: PS/2 mouse device common for all mice
[    1.372933] i2c_dev: i2c /dev entries driver
[    1.377895] sdhci: Secure Digital Host Controller Interface driver
[    1.378442] sdhci: Copyright(c) Pierre Ossman
[    1.378836] Synopsys Designware Multimedia Card Interface Driver
[    1.379926] sdhci-pltfm: SDHCI platform and OF driver helper
[    1.381802] mmc2: CQHCI version 5.10
[    1.381968] arm-scmi arm-scmi.0.auto: Using scmi_smc_transport
[    1.382646] arm-scmi arm-scmi.0.auto: SCMI max-rx-timeout: 30ms / max-msg-size: 104bytes / max-msg: 20
[    1.383521] scmi_protocol scmi_dev.1: Enabled polling mode TX channel - prot_id:16
[    1.384274] arm-scmi arm-scmi.0.auto: SCMI Notifications - Core Enabled.
[    1.384886] arm-scmi arm-scmi.0.auto: SCMI Protocol v2.0 'rockchip:' Firmware version 0x0
[    1.385646] arm-scmi arm-scmi.0.auto: Enabling SCMI Quirk [quirk_clock_rates_triplet_out_of_spec]
[    1.387255] SMCCC: SOC_ID: ARCH_SOC_ID not implemented, skipping ....
[    1.388022] hid: raw HID events driver (C) Jiri Kosina
[    1.388516] usbcore: registered new interface driver usbhid
[    1.389016] usbhid: USB HID core driver
[    1.392170] hw perfevents: enabled with armv8_cortex_a55 PMU driver, 7 (0,8000003f) counters available
[    1.394145] hw perfevents: enabled with armv8_cortex_a76 PMU driver, 7 (0,8000003f) counters available
[    1.396328] NET: Registered PF_INET6 protocol family
[    1.397576] Segment Routing with IPv6
[    1.397918] In-situ OAM (IOAM) with IPv6
[    1.398296] NET: Registered PF_PACKET protocol family
[    1.398756] bridge: filtering via arp/ip/ip6tables is no longer available by default. Update your scripts to load br_netfilter if you need this.
[    1.400089] 8021q: 802.1Q VLAN Support v1.8
[    1.400489] Key type dns_resolver registered
[    1.404706] registered taskstats version 1
[    1.405159] Loading compiled-in X.509 certificates
[    1.410653] zswap: loaded using pool zstd
[    1.411235] Demotion targets for Node 0: null
[    1.411695] Key type .fscrypt registered
[    1.412043] Key type fscrypt-provisioning registered
[    1.413155] Btrfs loaded, zoned=yes, fsverity=yes
[    1.413618] Key type encrypted registered
[    1.413973] AppArmor: AppArmor sha256 policy hashing enabled
[    1.415116] mmc2: SDHCI controller on fe2e0000.mmc [fe2e0000.mmc] using ADMA
[    1.426896] mmc2: Failed to initialize a non-removable card
[    1.445237] rockchip-dw-pcie a40c00000.pcie: host bridge /pcie@fe180000 ranges:
[    1.446420] rockchip-dw-pcie a40c00000.pcie:       IO 0x00f3100000..0x00f31fffff -> 0x00f3100000
[    1.447212] rockchip-dw-pcie a40c00000.pcie:      MEM 0x00f3200000..0x00f3ffffff -> 0x00f3200000
[    1.447999] rockchip-dw-pcie a40c00000.pcie:      MEM 0x09c0000000..0x09ffffffff -> 0x09c0000000
[    1.448951] rockchip-dw-pcie a40c00000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    1.649120] rockchip-dw-pcie a40c00000.pcie: PCIe Gen.2 x1 link up
[    1.650011] rockchip-dw-pcie a40c00000.pcie: PCI host bridge to bus 0003:30
[    1.650641] pci_bus 0003:30: root bus resource [bus 30-3f]
[    1.651138] pci_bus 0003:30: root bus resource [io  0x0000-0xfffff] (bus address [0xf3100000-0xf31fffff])
[    1.651988] pci_bus 0003:30: root bus resource [mem 0xf3200000-0xf3ffffff]
[    1.652602] pci_bus 0003:30: root bus resource [mem 0x9c0000000-0x9ffffffff]
[    1.653386] pci 0003:30:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    1.654056] pci 0003:30:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    1.654611] pci 0003:30:00.0: PCI bridge to [bus 01-ff]
[    1.655084] pci 0003:30:00.0:   bridge window [io  0x0000-0x0fff]
[    1.655632] pci 0003:30:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    1.656242] pci 0003:30:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    1.656974] pci 0003:30:00.0: supports D1 D2
[    1.657376] pci 0003:30:00.0: PME# supported from D0 D1 D3hot
[    1.658590] pci 0003:30:00.0: Adding to iommu group 18
[    1.667859] pci 0003:30:00.0: Primary bus is hard wired to 0
[    1.668372] pci 0003:30:00.0: bridge configuration invalid ([bus 01-ff]), reconfiguring
[    1.669333] pci 0003:31:00.0: [10ec:8125] type 00 class 0x020000 PCIe Endpoint
[    1.670136] pci 0003:31:00.0: BAR 0: initial BAR value 0x00000000 invalid
[    1.670743] pci 0003:31:00.0: BAR 0 [io  size 0x0100]
[    1.671211] pci 0003:31:00.0: BAR 2 [mem 0x00000000-0x0000ffff 64bit]
[    1.671796] pci 0003:31:00.0: BAR 4 [mem 0x00000000-0x00003fff 64bit]
[    1.672743] pci 0003:31:00.0: supports D1 D2
[    1.673150] pci 0003:31:00.0: PME# supported from D0 D1 D2 D3hot D3cold
[    1.674378] pci 0003:31:00.0: Adding to iommu group 18
[    1.681103] pci 0003:31:00.0: ASPM: default states L0s L1
[    1.681631] pci_bus 0003:31: busn_res: [bus 31-3f] end is updated to 31
[    1.682246] pci 0003:30:00.0: bridge window [mem 0xf3200000-0xf32fffff]: assigned
[    1.682918] pci 0003:30:00.0: ROM [mem 0xf3300000-0xf330ffff pref]: assigned
[    1.683551] pci 0003:30:00.0: bridge window [io  0x1000-0x1fff]: assigned
[    1.684162] pci 0003:31:00.0: BAR 2 [mem 0xf3200000-0xf320ffff 64bit]: assigned
[    1.684848] pci 0003:31:00.0: BAR 4 [mem 0xf3210000-0xf3213fff 64bit]: assigned
[    1.685550] pci 0003:31:00.0: BAR 0 [io  0x1000-0x10ff]: assigned
[    1.686108] pci 0003:30:00.0: PCI bridge to [bus 31]
[    1.686556] pci 0003:30:00.0:   bridge window [io  0x1000-0x1fff]
[    1.687104] pci 0003:30:00.0:   bridge window [mem 0xf3200000-0xf32fffff]
[    1.687713] pci_bus 0003:30: resource 4 [io  0x0000-0xfffff]
[    1.688221] pci_bus 0003:30: resource 5 [mem 0xf3200000-0xf3ffffff]
[    1.688782] pci_bus 0003:30: resource 6 [mem 0x9c0000000-0x9ffffffff]
[    1.689368] pci_bus 0003:31: resource 0 [io  0x1000-0x1fff]
[    1.689869] pci_bus 0003:31: resource 1 [mem 0xf3200000-0xf32fffff]
[    1.693240] pcieport 0003:30:00.0: PME: Signaling with IRQ 86
[    1.694269] pcieport 0003:30:00.0: AER: enabled with IRQ 87
[    1.696032] rockchip-dw-pcie a40800000.pcie: host bridge /pcie@fe170000 ranges:
[    1.696706] rockchip-dw-pcie a40800000.pcie:       IO 0x00f2100000..0x00f21fffff -> 0x00f2100000
[    1.697542] rockchip-dw-pcie a40800000.pcie:      MEM 0x00f2200000..0x00f2ffffff -> 0x00f2200000
[    1.698331] rockchip-dw-pcie a40800000.pcie:      MEM 0x0980000000..0x09bfffffff -> 0x0980000000
[    1.699265] rockchip-dw-pcie a40800000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    1.829125] ata1: SATA link up 6.0 Gbps (SStatus 133 SControl 300)
[    1.831494] ata1.00: ATA-9: ADATA SP920SS, 1.08, max UDMA/133
[    1.832017] ata1.00: 250069679 sectors, multi 0: LBA48 NCQ (depth 32)
[    1.833509] ata1.00: Features: HIPM DIPM
[    1.836202] ata1.00: configured for UDMA/133
[    1.836820] scsi 0:0:0:0: Direct-Access     ATA      ADATA SP920SS    1.08 PQ: 0 ANSI: 5
[    1.838182] sd 0:0:0:0: [sda] 250069679 512-byte logical blocks: (128 GB/119 GiB)
[    1.838888] sd 0:0:0:0: [sda] Write Protect is off
[    1.839389] sd 0:0:0:0: [sda] Write cache: enabled, read cache: enabled, doesn't support DPO or FUA
[    1.840295] sd 0:0:0:0: [sda] Preferred minimum I/O size 512 bytes
[    1.876414] GPT:Primary header thinks Alt. header is not at the end of the disk.
[    1.877094] GPT:13664255 != 250069678
[    1.877427] GPT:Alternate GPT header not at the end of the disk.
[    1.877961] GPT:13664255 != 250069678
[    1.878291] GPT: Use GNU Parted to correct GPT errors.
[    1.878763]  sda: sda1 sda2
[    1.879439] sd 0:0:0:0: [sda] Attached SCSI disk
[    1.897130] rockchip-dw-pcie a40800000.pcie: PCIe Gen.2 x1 link up
[    1.897794] rockchip-dw-pcie a40800000.pcie: PCI host bridge to bus 0002:20
[    1.898423] pci_bus 0002:20: root bus resource [bus 20-2f]
[    1.898920] pci_bus 0002:20: root bus resource [io  0x100000-0x1fffff] (bus address [0xf2100000-0xf21fffff])
[    1.899793] pci_bus 0002:20: root bus resource [mem 0xf2200000-0xf2ffffff]
[    1.900407] pci_bus 0002:20: root bus resource [mem 0x980000000-0x9bfffffff]
[    1.901139] pci 0002:20:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    1.901807] pci 0002:20:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    1.902362] pci 0002:20:00.0: PCI bridge to [bus 01-ff]
[    1.902835] pci 0002:20:00.0:   bridge window [io  0x0000-0x0fff]
[    1.903381] pci 0002:20:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    1.903991] pci 0002:20:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    1.904722] pci 0002:20:00.0: supports D1 D2
[    1.905130] pci 0002:20:00.0: PME# supported from D0 D1 D3hot
[    1.906142] pci 0002:20:00.0: Adding to iommu group 19
[    1.915593] pci 0002:20:00.0: Primary bus is hard wired to 0
[    1.916106] pci 0002:20:00.0: bridge configuration invalid ([bus 01-ff]), reconfiguring
[    1.917057] pci 0002:21:00.0: [10ec:8125] type 00 class 0x020000 PCIe Endpoint
[    1.917859] pci 0002:21:00.0: BAR 0 [io  0x0000-0x00ff]
[    1.918345] pci 0002:21:00.0: BAR 2 [mem 0x00000000-0x0000ffff 64bit]
[    1.918930] pci 0002:21:00.0: BAR 4 [mem 0x00000000-0x00003fff 64bit]
[    1.919875] pci 0002:21:00.0: supports D1 D2
[    1.920262] pci 0002:21:00.0: PME# supported from D0 D1 D2 D3hot D3cold
[    1.921547] pci 0002:21:00.0: Adding to iommu group 19
[    1.929039] pci 0002:21:00.0: ASPM: default states L0s L1
[    1.929565] pci_bus 0002:21: busn_res: [bus 21-2f] end is updated to 21
[    1.930177] pci 0002:20:00.0: bridge window [mem 0xf2200000-0xf22fffff]: assigned
[    1.930850] pci 0002:20:00.0: ROM [mem 0xf2300000-0xf230ffff pref]: assigned
[    1.931481] pci 0002:20:00.0: bridge window [io  0x100000-0x100fff]: assigned
[    1.932121] pci 0002:21:00.0: BAR 2 [mem 0xf2200000-0xf220ffff 64bit]: assigned
[    1.932806] pci 0002:21:00.0: BAR 4 [mem 0xf2210000-0xf2213fff 64bit]: assigned
[    1.933507] pci 0002:21:00.0: BAR 0 [io  0x100000-0x1000ff]: assigned
[    1.934095] pci 0002:20:00.0: PCI bridge to [bus 21]
[    1.934543] pci 0002:20:00.0:   bridge window [io  0x100000-0x100fff]
[    1.935121] pci 0002:20:00.0:   bridge window [mem 0xf2200000-0xf22fffff]
[    1.935730] pci_bus 0002:20: resource 4 [io  0x100000-0x1fffff]
[    1.936261] pci_bus 0002:20: resource 5 [mem 0xf2200000-0xf2ffffff]
[    1.936822] pci_bus 0002:20: resource 6 [mem 0x980000000-0x9bfffffff]
[    1.937411] pci_bus 0002:21: resource 0 [io  0x100000-0x100fff]
[    1.937943] pci_bus 0002:21: resource 1 [mem 0xf2200000-0xf22fffff]
[    1.941278] pcieport 0002:20:00.0: PME: Signaling with IRQ 98
[    1.942287] pcieport 0002:20:00.0: AER: enabled with IRQ 99
[    1.956164] avdd_0v75_s0: Bringing 750000uV into 837500-837500uV
[    1.963278] input: rk805 pwrkey as /devices/platform/feb20000.spi/spi_master/spi2/spi2.0/rk805-pwrkey.3.auto/input/input0
[    1.968257] fan53555-regulator 2-0042: FAN53555 Option[10] Rev[1] Detected!
[    1.968355] fan53555-regulator 0-0042: FAN53555 Option[10] Rev[1] Detected!
[    1.968389] ehci-platform fc800000.usb: EHCI Host Controller
[    1.968411] ehci-platform fc800000.usb: new USB bus registered, assigned bus number 1
[    1.968464] ohci-platform fc840000.usb: Generic Platform OHCI controller
[    1.968478] ohci-platform fc840000.usb: new USB bus registered, assigned bus number 2
[    1.968518] ehci-platform fc800000.usb: irq 117, io mem 0xfc800000
[    1.968537] ohci-platform fc840000.usb: irq 119, io mem 0xfc840000
[    1.968549] ehci-platform fc880000.usb: EHCI Host Controller
[    1.968570] ohci-platform fc8c0000.usb: Generic Platform OHCI controller
[    1.968570] ehci-platform fc880000.usb: new USB bus registered, assigned bus number 3
[    1.968591] ohci-platform fc8c0000.usb: new USB bus registered, assigned bus number 4
[    1.968670] ehci-platform fc880000.usb: irq 118, io mem 0xfc880000
[    1.968689] ohci-platform fc8c0000.usb: irq 120, io mem 0xfc8c0000
[    1.968707] clk: Disabling unused clocks
[    1.968884] fan53555-regulator 0-0043: FAN53555 Option[10] Rev[1] Detected!
[    1.969249] PM: genpd: Disabling unused power domains
[    1.977070] ehci-platform fc800000.usb: USB 2.0 started, EHCI 1.00
[    1.978924] usb usb1: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    1.979666] usb usb1: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    1.980311] usb usb1: Product: EHCI Host Controller
[    1.980750] usb usb1: Manufacturer: Linux 6.18.18-trim ehci_hcd
[    1.981294] usb usb1: SerialNumber: fc800000.usb
[    1.982183] hub 1-0:1.0: USB hub found
[    1.982555] hub 1-0:1.0: 1 port detected
[    1.989192] ehci-platform fc880000.usb: USB 2.0 started, EHCI 1.00
[    1.989915] usb usb3: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    1.990656] usb usb3: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    1.991302] usb usb3: Product: EHCI Host Controller
[    1.991740] usb usb3: Manufacturer: Linux 6.18.18-trim ehci_hcd
[    1.992269] usb usb3: SerialNumber: fc880000.usb
[    1.993196] hub 3-0:1.0: USB hub found
[    1.993567] hub 3-0:1.0: 1 port detected
[    2.025288] usb usb4: New USB device found, idVendor=1d6b, idProduct=0001, bcdDevice= 6.18
[    2.026032] usb usb4: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    2.026677] usb usb4: Product: Generic Platform OHCI controller
[    2.027207] usb usb4: Manufacturer: Linux 6.18.18-trim ohci_hcd
[    2.027736] usb usb4: SerialNumber: fc8c0000.usb
[    2.028653] hub 4-0:1.0: USB hub found
[    2.029046] hub 4-0:1.0: 1 port detected
[    2.029829] usb usb2: New USB device found, idVendor=1d6b, idProduct=0001, bcdDevice= 6.18
[    2.030561] usb usb2: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    2.031194] usb usb2: Product: Generic Platform OHCI controller
[    2.031714] usb usb2: Manufacturer: Linux 6.18.18-trim ohci_hcd
[    2.032234] usb usb2: SerialNumber: fc840000.usb
[    2.033018] hub 2-0:1.0: USB hub found
[    2.033368] hub 2-0:1.0: 1 port detected
[    2.035365] Freeing unused kernel memory: 5568K
[    2.035859] Run /init as init process
[    2.050536] [trim-mounts-hash]'sys'[00000000831d2970]'s top mountpoint dentry: sys
[    2.051230] [trim-mounts-hash]dentry 'sys' type: 0
[    2.054089] [trim-mounts-hash]'proc'[00000000cf3dc1cb]'s top mountpoint dentry: proc
[    2.054788] [trim-mounts-hash]dentry 'proc' type: 0
[    2.060368] [trim-mounts-hash]'dev'[00000000ccb46a2f]'s top mountpoint dentry: dev
[    2.061068] [trim-mounts-hash]dentry 'dev' type: 0
[    2.075492] [trim-mounts-hash]'pts'[00000000592c5df4]'s top mountpoint dentry: dev
[    2.076179] [trim-mounts-hash]dentry 'dev' type: 0
[    2.085165] [trim-mounts-hash]'run'[000000009e39830a]'s top mountpoint dentry: run
[    2.085850] [trim-mounts-hash]dentry 'run' type: 0
[    2.424066] r8169 0003:31:00.0: enabling device (0000 -> 0003)
[    2.450305] r8169 0003:31:00.0 eth0: RTL8125B, 92:64:6e:27:8f:27, XID 641, IRQ 122
[    2.450983] r8169 0003:31:00.0 eth0: jumbo features [frames: 16362 bytes, tx checksumming: ko]
[    2.451870] r8169 0002:21:00.0: enabling device (0000 -> 0003)
[    2.468122] r8169 0002:21:00.0 eth1: RTL8125B, ba:71:62:30:d9:a9, XID 641, IRQ 123
[    2.468801] r8169 0002:21:00.0 eth1: jumbo features [frames: 16362 bytes, tx checksumming: ko]
[    2.474661] rk_gmac-dwmac fe1c0000.ethernet: IRQ sfty not found
[    2.475416] rk_gmac-dwmac fe1c0000.ethernet: supply phy not found, using dummy regulator
[    2.476310] rk_gmac-dwmac fe1c0000.ethernet: clock input or output? (output).
[    2.476956] rk_gmac-dwmac fe1c0000.ethernet: TX delay(0x42).
[    2.477491] rk_gmac-dwmac fe1c0000.ethernet: Can not read property: rx_delay.
[    2.478132] rk_gmac-dwmac fe1c0000.ethernet: set rx_delay to 0x10
[    2.478704] rk_gmac-dwmac fe1c0000.ethernet: integrated PHY? (no).
[    2.480291] rtc-hym8563 6-0051: could not init device, -6
[    2.484337] rk_gmac-dwmac fe1c0000.ethernet: init for RGMII_RXID
[    2.485198] rk_gmac-dwmac fe1c0000.ethernet: User ID: 0x30, Synopsys ID: 0x51
[    2.485762] rockchip-drm display-subsystem: bound fdd90000.vop (ops rockchip_drm_fini [rockchipdrm])
[    2.485865] rk_gmac-dwmac fe1c0000.ethernet: 	DWMAC4/5
[    2.487135] rk_gmac-dwmac fe1c0000.ethernet: DMA HW capability register supported
[    2.487812] rk_gmac-dwmac fe1c0000.ethernet: RX Checksum Offload Engine supported
[    2.488510] rk_gmac-dwmac fe1c0000.ethernet: TX Checksum insertion supported
[    2.488740] dwhdmiqp-rockchip fde80000.hdmi: registered DesignWare HDMI QP I2C bus driver
[    2.489214] rk_gmac-dwmac fe1c0000.ethernet: Wake-Up On Lan supported
[    2.490105] rockchip-drm display-subsystem: bound fde80000.hdmi (ops rockchip_drm_fini [rockchipdrm])
[    2.490538] rk_gmac-dwmac fe1c0000.ethernet: TSO supported
[    2.491614] [drm] Initialized rockchip 1.0.0 for display-subsystem on minor 0
[    2.491859] rk_gmac-dwmac fe1c0000.ethernet: Enable RX Mitigation via HW Watchdog Timer
[    2.492454] rockchip-drm display-subsystem: [drm] Cannot find any crtc or sizes
[    2.492471] rk_gmac-dwmac fe1c0000.ethernet: Enabled L3L4 Flow TC (entries=2)
[    2.493511] rockchip-drm display-subsystem: [drm] Cannot find any crtc or sizes
[    2.493836] rk_gmac-dwmac fe1c0000.ethernet: Enabled RFS Flow TC (entries=10)
[    2.493844] rk_gmac-dwmac fe1c0000.ethernet: TSO feature enabled
[    2.496504] rk_gmac-dwmac fe1c0000.ethernet: SPH feature enabled
[    2.497177] rk_gmac-dwmac fe1c0000.ethernet: Using 32/32 bits DMA host/device width
[    2.515057] xhci-hcd xhci-hcd.5.auto: xHCI Host Controller
[    2.515733] xhci-hcd xhci-hcd.5.auto: new USB bus registered, assigned bus number 5
[    2.516859] xhci-hcd xhci-hcd.5.auto: hcc params 0x0220fe64 hci version 0x110 quirks 0x0000808002000010
[    2.517956] xhci-hcd xhci-hcd.5.auto: irq 129, io mem 0xfc000000
[    2.518720] xhci-hcd xhci-hcd.5.auto: xHCI Host Controller
[    2.519247] xhci-hcd xhci-hcd.5.auto: new USB bus registered, assigned bus number 6
[    2.519943] xhci-hcd xhci-hcd.5.auto: Host supports USB 3.0 SuperSpeed
[    2.520717] usb usb5: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    2.521509] usb usb5: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    2.522158] usb usb5: Product: xHCI Host Controller
[    2.522597] usb usb5: Manufacturer: Linux 6.18.18-trim xhci-hcd
[    2.523126] usb usb5: SerialNumber: xhci-hcd.5.auto
[    2.531107] hub 5-0:1.0: USB hub found
[    2.531513] hub 5-0:1.0: 1 port detected
[    2.532278] usb usb6: We don't know the algorithms for LPM for this host, disabling LPM.
[    2.533167] usb usb6: New USB device found, idVendor=1d6b, idProduct=0003, bcdDevice= 6.18
[    2.533910] usb usb6: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    2.534556] usb usb6: Product: xHCI Host Controller
[    2.534995] usb usb6: Manufacturer: Linux 6.18.18-trim xhci-hcd
[    2.535525] usb usb6: SerialNumber: xhci-hcd.5.auto
[    2.537161] hub 6-0:1.0: USB hub found
[    2.537513] hub 6-0:1.0: 1 port detected
[    2.561380] xhci-hcd xhci-hcd.6.auto: xHCI Host Controller
[    2.561906] xhci-hcd xhci-hcd.6.auto: new USB bus registered, assigned bus number 7
[    2.562717] xhci-hcd xhci-hcd.6.auto: hcc params 0x0220fe64 hci version 0x110 quirks 0x0000808002000010
[    2.563602] xhci-hcd xhci-hcd.6.auto: irq 130, io mem 0xfc400000
[    2.564302] xhci-hcd xhci-hcd.6.auto: xHCI Host Controller
[    2.564807] xhci-hcd xhci-hcd.6.auto: new USB bus registered, assigned bus number 8
[    2.565533] xhci-hcd xhci-hcd.6.auto: Host supports USB 3.0 SuperSpeed
[    2.566282] usb usb7: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    2.567025] usb usb7: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    2.567670] usb usb7: Product: xHCI Host Controller
[    2.568108] usb usb7: Manufacturer: Linux 6.18.18-trim xhci-hcd
[    2.568637] usb usb7: SerialNumber: xhci-hcd.6.auto
[    2.571702] hub 7-0:1.0: USB hub found
[    2.572058] hub 7-0:1.0: 1 port detected
[    2.572561] usb usb8: We don't know the algorithms for LPM for this host, disabling LPM.
[    2.573430] usb usb8: New USB device found, idVendor=1d6b, idProduct=0003, bcdDevice= 6.18
[    2.574158] usb usb8: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    2.574791] usb usb8: Product: xHCI Host Controller
[    2.575220] usb usb8: Manufacturer: Linux 6.18.18-trim xhci-hcd
[    2.575739] usb usb8: SerialNumber: xhci-hcd.6.auto
[    2.576554] hub 8-0:1.0: USB hub found
[    2.576898] hub 8-0:1.0: 1 port detected
[    2.578003] rockchip-dw-pcie a40000000.pcie: host bridge /pcie@fe150000 ranges:
[    2.578660] rockchip-dw-pcie a40000000.pcie:       IO 0x00f0100000..0x00f01fffff -> 0x00f0100000
[    2.579435] rockchip-dw-pcie a40000000.pcie:      MEM 0x00f0200000..0x00f0ffffff -> 0x00f0200000
[    2.580206] rockchip-dw-pcie a40000000.pcie:      MEM 0x0900000000..0x093fffffff -> 0x0900000000
[    2.588963] rockchip-dw-pcie a40000000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    2.627499] rk_gmac-dwmac fe1b0000.ethernet: IRQ sfty not found
[    2.628313] rk_gmac-dwmac fe1b0000.ethernet: supply phy not found, using dummy regulator
[    2.629182] rk_gmac-dwmac fe1b0000.ethernet: clock input or output? (output).
[    2.629823] rk_gmac-dwmac fe1b0000.ethernet: TX delay(0x44).
[    2.630332] rk_gmac-dwmac fe1b0000.ethernet: Can not read property: rx_delay.
[    2.630966] rk_gmac-dwmac fe1b0000.ethernet: set rx_delay to 0x10
[    2.631520] rk_gmac-dwmac fe1b0000.ethernet: integrated PHY? (no).
[    2.637097] rk_gmac-dwmac fe1b0000.ethernet: init for RGMII_RXID
[    2.637992] rk_gmac-dwmac fe1b0000.ethernet: User ID: 0x30, Synopsys ID: 0x51
[    2.638637] rk_gmac-dwmac fe1b0000.ethernet: 	DWMAC4/5
[    2.639099] rk_gmac-dwmac fe1b0000.ethernet: DMA HW capability register supported
[    2.639766] rk_gmac-dwmac fe1b0000.ethernet: RX Checksum Offload Engine supported
[    2.640432] rk_gmac-dwmac fe1b0000.ethernet: TX Checksum insertion supported
[    2.641082] rk_gmac-dwmac fe1b0000.ethernet: Wake-Up On Lan supported
[    2.641724] rk_gmac-dwmac fe1b0000.ethernet: TSO supported
[    2.642218] rk_gmac-dwmac fe1b0000.ethernet: Enable RX Mitigation via HW Watchdog Timer
[    2.642932] rk_gmac-dwmac fe1b0000.ethernet: Enabled L3L4 Flow TC (entries=2)
[    2.643568] rk_gmac-dwmac fe1b0000.ethernet: Enabled RFS Flow TC (entries=10)
[    2.644204] rk_gmac-dwmac fe1b0000.ethernet: TSO feature enabled
[    2.644740] rk_gmac-dwmac fe1b0000.ethernet: SPH feature enabled
[    2.645292] rk_gmac-dwmac fe1b0000.ethernet: Using 32/32 bits DMA host/device width
[    2.835862] async_tx: api initialized (async)
[    2.893086] rockchip-dw-pcie a40000000.pcie: PCIe Gen.2 x2 link up
[    2.893745] rockchip-dw-pcie a40000000.pcie: PCI host bridge to bus 0000:00
[    2.894360] pci_bus 0000:00: root bus resource [bus 00-0f]
[    2.894845] pci_bus 0000:00: root bus resource [io  0x200000-0x2fffff] (bus address [0xf0100000-0xf01fffff])
[    2.895705] pci_bus 0000:00: root bus resource [mem 0xf0200000-0xf0ffffff]
[    2.896309] pci_bus 0000:00: root bus resource [mem 0x900000000-0x93fffffff]
[    2.896948] pci 0000:00:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    2.897615] pci 0000:00:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    2.898159] pci 0000:00:00.0: PCI bridge to [bus 01-ff]
[    2.898623] pci 0000:00:00.0:   bridge window [io  0x0000-0x0fff]
[    2.898627] pci 0000:00:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    2.898634] pci 0000:00:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    2.898669] pci 0000:00:00.0: supports D1 D2
[    2.900825] pci 0000:00:00.0: PME# supported from D0 D1 D3hot
[    2.900833] dw-apb-uart feb50000.serial: forbid DMA for kernel console
[    2.902311] pci 0000:00:00.0: Adding to iommu group 20







































































done.
Begin: Mounting root file system ... Begin: Running /scripts/local-top ... done.
Begin: Running /scripts/local-premount ... [    2.912818] pci_bus 0000:01: busn_res: can not insert [bus 01-ff] under [bus 00-0f] (conflicts with (null) [bus 00-0f])
[    2.913897] pci 0000:01:00.0: [9000:1003] type 00 class 0x058000 PCIe Endpoint
[    2.914704] pci 0000:01:00.0: BAR 0 [mem 0x00000000-0x000fffff 64bit]
[    2.915286] pci 0000:01:00.0: BAR 2 [mem 0x00000000-0x000fffff]
[    2.915819] pci 0000:01:00.0: BAR 3 [mem 0x00000000-0x0000ffff]
[    2.916354] pci 0000:01:00.0: BAR 4 [mem 0x00000000-0x00000fff]
[    2.916888] pci 0000:01:00.0: BAR 5 [mem 0x00000000-0x0000ffff]
[    2.917432] pci 0000:01:00.0: ROM [mem 0x00000000-0x007fffff pref]
[    2.918192] pci 0000:01:00.0: supports D1
[    2.918555] pci 0000:01:00.0: PME# supported from D0 D1 D3hot
[    2.919189] pci 0000:01:00.0: 8.000 Gb/s available PCIe bandwidth, limited by 5.0 GT/s PCIe x2 link at 0000:00:00.0 (capable of 16.000 Gb/s with 5.0 GT/s PCIe x4 link)
[    2.921134] pci 0000:01:00.0: Adding to iommu group 20
[    2.921748] pci 0000:00:00.0: bridge window [mem 0x00100000-0x003fffff] to [bus 01-ff] add_size 800000 add_align 800000
Scanning for Btrfs filesystems
[    2.922742] pci 0000:00:00.0: bridge window [mem size 0x00b00000]: can't assign; no space
[    2.922751] pci 0000:00:00.0: bridge window [mem size 0x00b00000]: failed to assign
[    2.924347] pci 0000:00:00.0: ROM [mem 0xf0200000-0xf020ffff pref]: assigned
[    2.924357] pci 0000:00:00.0: ROM [mem 0xf0200000-0xf020ffff pref]: releasing
[    2.925638] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: assigned
[    2.926309] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: failed to expand by 0x800000
[    2.927131] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: failed to add optional 800000
[    2.927965] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: can't assign; no space
[    2.928656] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: failed to assign
[    2.929317] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: assigned
[    2.930006] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: assigned
[    2.930623] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: assigned
[    2.931239] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: assigned
[    2.931855] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: assigned
[    2.932471] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: releasing
[    2.933141] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: releasing
[    2.933756] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: releasing
[    2.934369] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: releasing
[    2.934983] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: releasing
[    2.935598] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: assigned
[    2.936282] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: assigned
[    2.936898] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: assigned
[    2.937526] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: assigned
[    2.938143] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: assigned
[    2.938805] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: can't assign; no space
[    2.939522] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: failed to assign
[    2.940193] pci 0000:00:00.0: PCI bridge to [bus 01-ff]
[    2.940689] pci 0000:00:00.0:   bridge window [mem 0xf0200000-0xf04fffff]
[    2.941333] pci_bus 0000:00: Some PCI device resources are unassigned, try booting with pci=realloc
[    2.942158] pci_bus 0000:00: resource 4 [io  0x200000-0x2fffff]
[    2.942713] pci_bus 0000:00: resource 5 [mem 0xf0200000-0xf0ffffff]
[    2.943296] pci_bus 0000:00: resource 6 [mem 0x900000000-0x93fffffff]
[    2.943896] pci_bus 0000:01: resource 1 [mem 0xf0200000-0xf04fffff]
[    2.946493] pcieport 0000:00:00.0: PME: Signaling with IRQ 143
[    2.947470] pcieport 0000:00:00.0: AER: enabled with IRQ 144
[    2.948757] rockchip-dw-pcie a40400000.pcie: host bridge /pcie@fe160000 ranges:
[    2.949430] rockchip-dw-pcie a40400000.pcie:       IO 0x00f1100000..0x00f11fffff -> 0x00f1100000
[    2.950207] rockchip-dw-pcie a40400000.pcie:      MEM 0x00f1200000..0x00f1ffffff -> 0x00f1200000
[    2.950977] rockchip-dw-pcie a40400000.pcie:      MEM 0x0940000000..0x097fffffff -> 0x0940000000
[    2.959751] rockchip-dw-pcie a40400000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
registered: /dev/sda2
done.
Warning: fsck not present, so skipping root file system
[    3.019695] BTRFS: device label ROOTFS devid 1 transid 11 /dev/sda2 (8:2) scanned by mount (242)
[    3.021229] BTRFS info (device sda2): first mount of filesystem 69cac71b-78a6-4f66-ba28-643ce0e15aba
[    3.022084] BTRFS info (device sda2): using crc32c (crc32c-lib) checksum algorithm
[    3.033256] BTRFS info (device sda2): enabling ssd optimizations
[    3.033809] BTRFS info (device sda2): turning on async discard
[    3.034330] BTRFS info (device sda2): enabling free space tree
[    3.034851] BTRFS info (device sda2): use zstd compression, level 1
[    3.036330] [trim-mounts-hash]'root'[00000000103a0d7c]'s top mountpoint dentry: root
[    3.037050] [trim-mounts-hash]dentry 'root' type: 0
done.
Begin: Running /scripts/local-bottom ... done.
Begin: Running /scripts/init-bottom ... done.
[    3.273011] rockchip-dw-pcie a40400000.pcie: PCIe Gen.3 x2 link up
[    3.273667] rockchip-dw-pcie a40400000.pcie: PCI host bridge to bus 0001:10
[    3.274284] pci_bus 0001:10: root bus resource [bus 10-1f]
[    3.274769] pci_bus 0001:10: root bus resource [io  0x300000-0x3fffff] (bus address [0xf1100000-0xf11fffff])
[    3.275628] pci_bus 0001:10: root bus resource [mem 0xf1200000-0xf1ffffff]
[    3.276231] pci_bus 0001:10: root bus resource [mem 0x940000000-0x97fffffff]
[    3.276863] pci 0001:10:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    3.277536] pci 0001:10:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    3.278081] pci 0001:10:00.0: PCI bridge to [bus 01-ff]
[    3.278543] pci 0001:10:00.0:   bridge window [io  0x0000-0x0fff]
[    3.279078] pci 0001:10:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    3.279676] pci 0001:10:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    3.280380] pci 0001:10:00.0: supports D1 D2
[    3.280757] pci 0001:10:00.0: PME# supported from D0 D1 D3hot
[    3.282387] pci 0001:10:00.0: Adding to iommu group 21
[    3.291528] [trim-mounts-hash]'security'[00000000e0bbd4de]'s top mountpoint dentry: sys
[    3.292241] [trim-mounts-hash]dentry 'sys' type: 0
[    3.292878] [trim-mounts-hash]'/'[000000003efd6291]'s top mountpoint dentry: proc
[    3.293552] [trim-mounts-hash]dentry 'proc' type: 0
[    3.293737] pci 0001:10:00.0: Primary bus is hard wired to 0
[    3.294489] pci 0001:10:00.0: bridge configuration invalid ([bus 01-ff]), reconfiguring
[    3.295298] pci 0001:11:00.0: [1e4b:1202] type 00 class 0x010802 PCIe Endpoint
[    3.296051] pci 0001:11:00.0: BAR 0 [mem 0x00000000-0x00003fff 64bit]
[    3.296557] systemd[1]: System time before build time, advancing clock.
[    3.296907] pci 0001:11:00.0: PME# supported from D0 D3hot D3cold
[    3.297944] pci 0001:11:00.0: 15.752 Gb/s available PCIe bandwidth, limited by 8.0 GT/s PCIe x2 link at 0001:10:00.0 (capable of 31.504 Gb/s with 8.0 GT/s PCIe x4 link)
[    3.299662] pci 0001:11:00.0: Adding to iommu group 21
[    3.305090] pci 0001:11:00.0: ASPM: default states L1
[    3.305557] pci_bus 0001:11: busn_res: [bus 11-1f] end is updated to 11
[    3.306152] pci 0001:10:00.0: bridge window [mem 0xf1200000-0xf12fffff]: assigned
[    3.306811] pci 0001:10:00.0: ROM [mem 0xf1300000-0xf130ffff pref]: assigned
[    3.307432] pci 0001:11:00.0: BAR 0 [mem 0xf1200000-0xf1203fff 64bit]: assigned
[    3.308094] pci 0001:10:00.0: PCI bridge to [bus 11]
[    3.308531] pci 0001:10:00.0:   bridge window [mem 0xf1200000-0xf12fffff]
[    3.309141] pci_bus 0001:10: resource 4 [io  0x300000-0x3fffff]
[    3.309662] pci_bus 0001:10: resource 5 [mem 0xf1200000-0xf1ffffff]
[    3.310212] pci_bus 0001:10: resource 6 [mem 0x940000000-0x97fffffff]
[    3.310777] pci_bus 0001:11: resource 1 [mem 0xf1200000-0xf12fffff]
[    3.312834] pcieport 0001:10:00.0: PME: Signaling with IRQ 155
[    3.313645] pcieport 0001:10:00.0: AER: enabled with IRQ 156
[    3.314739] nvme nvme0: pci function 0001:11:00.0
[    3.315169] nvme 0001:11:00.0: enabling device (0000 -> 0002)
[    3.321307] hwmon hwmon7: temp1_input not attached to any thermal zone
[    3.321938] hwmon hwmon7: temp2_input not attached to any thermal zone
[    3.322559] hwmon hwmon7: temp3_input not attached to any thermal zone
[    3.324038] nvme nvme0: allocated 8 MiB host memory buffer (1 segment).
[    3.328140] nvme nvme0: 8/0/0 default/read/poll queues
[    3.330528] nvme nvme0: Ignoring bogus Namespace Identifiers
[    3.334529]  nvme0n1: p1 p2 p3
[    3.335918] systemd[1]: Inserted module 'autofs4'
[    3.337466] [trim-mounts-hash]'shm'[000000002eb15554]'s top mountpoint dentry: dev
[    3.338135] [trim-mounts-hash]dentry 'dev' type: 0
[    3.338647] [trim-mounts-hash]'lock'[0000000037c43a02]'s top mountpoint dentry: run
[    3.339319] [trim-mounts-hash]dentry 'run' type: 0
[    3.357257] [trim-mounts-hash]'cgroup'[000000005c29c6dd]'s top mountpoint dentry: sys
[    3.357963] [trim-mounts-hash]dentry 'sys' type: 0
[    3.358737] [trim-mounts-hash]'pstore'[000000003a34696b]'s top mountpoint dentry: sys
[    3.359441] [trim-mounts-hash]dentry 'sys' type: 0
[    3.372970] [trim-mounts-hash]'bpf'[00000000cd5ecd98]'s top mountpoint dentry: sys
[    3.373680] [trim-mounts-hash]dentry 'sys' type: 0
[    3.376933] systemd[1]: systemd 252.39-1~deb12u1 running in system mode (+PAM +AUDIT +SELINUX +APPARMOR +IMA +SMACK +SECCOMP +GCRYPT -GNUTLS +OPENSSL +ACL +BLKID +CURL +ELFUTILS +FIDO2 +IDN2 -IDN +IPTC +KMOD +LIBCRYPTSETUP +LIBFDISK +PCRE2 -PWQUALITY +P11KIT +QRENCODE +TPM2 +BZIP2 +LZ4 +XZ +ZLIB +ZSTD -BPF_FRAMEWORK -XKBCOMMON +UTMP +SYSVINIT default-hierarchy=unified)
[    3.379852] systemd[1]: Detected architecture arm64.

Welcome to Debian GNU/Linux 12 (bookworm)!

[    3.383013] systemd[1]: Hostname set to <fnnas>.
[    3.627739] systemd[1]: Configuration file /etc/systemd/system/webdav.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.629373] systemd[1]: Configuration file /etc/systemd/system/usersrv.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.630951] systemd[1]: Configuration file /etc/systemd/system/upnp.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.632496] systemd[1]: Configuration file /etc/systemd/system/trim_upload.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.634114] systemd[1]: Configuration file /etc/systemd/system/trim_trashbind.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.635745] systemd[1]: Configuration file /etc/systemd/system/trim_tfa.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.637401] systemd[1]: Configuration file /etc/systemd/system/trim_sharelink.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.639218] systemd[1]: Configuration file /etc/systemd/system/trim_sac.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.640875] systemd[1]: Configuration file /etc/systemd/system/trim_raid_check.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.642571] systemd[1]: Configuration file /etc/systemd/system/trim_nginx.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.644242] systemd[1]: Configuration file /etc/systemd/system/trim_main.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.645878] systemd[1]: Configuration file /etc/systemd/system/trim_license.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.647582] systemd[1]: Configuration file /etc/systemd/system/trim_init.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.649173] systemd[1]: Configuration file /etc/systemd/system/trim_http_cgi.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.650793] systemd[1]: Configuration file /etc/systemd/system/trim_file_monitor.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.652449] systemd[1]: Configuration file /etc/systemd/system/trim_diskpowerd.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.654107] systemd[1]: Configuration file /etc/systemd/system/trim_connect.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.655860] systemd[1]: Configuration file /etc/systemd/system/trim_app_center.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.663917] systemd[1]: Configuration file /etc/systemd/system/system_startup.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.665587] systemd[1]: Configuration file /etc/systemd/system/system_shutdown.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.685313] systemd[1]: Configuration file /etc/systemd/system/sysrestore.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.686995] systemd[1]: Configuration file /etc/systemd/system/sysinfo_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.689545] systemd[1]: Configuration file /etc/systemd/system/smbftpd.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.691982] systemd[1]: Configuration file /etc/systemd/system/show_startup_info.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.693651] systemd[1]: Configuration file /etc/systemd/system/share_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.695288] systemd[1]: Configuration file /etc/systemd/system/security_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.698008] systemd[1]: Configuration file /etc/systemd/system/rpc_broker.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.699610] systemd[1]: Configuration file /etc/systemd/system/resmon_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.710363] systemd[1]: Configuration file /etc/systemd/system/network_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.712034] systemd[1]: Configuration file /etc/systemd/system/multiple-downloads.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.713863] systemd[1]: Configuration file /etc/systemd/system/minidlna.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.715609] systemd[1]: Configuration file /etc/systemd/system/mediasrv.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.725602] systemd[1]: Configuration file /etc/systemd/system/imagesrv.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.733034] systemd[1]: Configuration file /etc/systemd/system/finder_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.734677] systemd[1]: Configuration file /etc/systemd/system/filestor_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.736375] systemd[1]: Configuration file /etc/systemd/system/eventlogger_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.738474] systemd[1]: Configuration file /etc/systemd/system/dsmgr.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.740328] systemd[1]: Configuration file /etc/systemd/system/dockermgr.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.741940] systemd[1]: Configuration file /etc/systemd/system/docker.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.743682] systemd[1]: Configuration file /etc/systemd/system/dlcenter.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.746925] systemd[1]: Configuration file /etc/systemd/system/cloud_storage_dav.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.748663] systemd[1]: Configuration file /etc/systemd/system/backup_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.750387] systemd[1]: Configuration file /etc/systemd/system/avahi.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.753215] systemd[1]: Configuration file /etc/systemd/system/auto_thumbnailer.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.754909] systemd[1]: Configuration file /etc/systemd/system/ai_manager.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.756564] systemd[1]: Configuration file /etc/systemd/system/accountsrv.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.813961] systemd[1]: Queued start job for default target graphical.target.
[    3.843411] systemd[1]: Created slice machine.slice - Virtual Machine and Container Slice.
[  OK  ] Created slice machine.slic…rtual Machine and Container Slice.
[    3.845819] systemd[1]: Created slice system-getty.slice - Slice /system/getty.
[  OK  ] Created slice system-getty.slice - Slice /system/getty.
[    3.847488] systemd[1]: Created slice system-modprobe.slice - Slice /system/modprobe.
[  OK  ] Created slice system-modpr…lice - Slice /system/modprobe.
[    3.849145] systemd[1]: Created slice system-postgresql.slice - Slice /system/postgresql.
[  OK  ] Created slice system-postg…ce - Slice /system/postgresql.
[    3.850867] systemd[1]: Created slice system-serial\x2dgetty.slice - Slice /system/serial-getty.
[  OK  ] Created slice system-seria… - Slice /system/serial-getty.
[    3.852659] systemd[1]: Created slice system-systemd\x2dfsck.slice - Slice /system/systemd-fsck.
[  OK  ] Created slice system-syste… -[    3.854160] systemd[1]: Created slice user.slice - User and Session Slice.
 Slice /system/systemd-fsck.
[    3.854968] systemd[1]: Started systemd-ask-password-wall.path - Forward Password Requests to Wall Directory Watch.
[  OK  ] Created slice user.slice - User[    3.856313] [trim-mounts-hash]'binfmt_misc'[00000000ca03d600]'s top mountpoint dentry: proc
[    3.857215] [trim-mounts-hash]dentry 'proc' type: 0
[    3.857684] systemd[1]: Set up automount proc-sys-fs-binfmt_misc.automount - Arbitrary Executable File Formats File System Automount Point.
 and Session Slice.
[  OK  ] Started syst[    3.858853] systemd[1]: Expecting device dev-disk-by\x2duuid-e3d8f69d\x2d2428\x2d4ecf\x2da45b\x2df99f1acd8675.device - /dev/disk/by-uuid/e3d8f69d-2428-4ecf-a45b-f99f1acd8675...
emd-ask-passwo… Requests to Wall Directory Watch.
[    3.860710] systemd[1]: Expecting device dev-ttyAMA0.device - /dev/ttyAMA0...
[  OK  ] Set up automount proc-sys-…rmats [    3.861905] systemd[1]: Expecting device dev-ttyS2.device - /dev/ttyS2...
File System Automount Point.
[    3.862996] systemd[1]: Reached target integritysetup.target - Local Integrity Protected Volumes.
         Expecting device dev-disk-…69d-2428-4ecf-a45[    3.863930] systemd[1]: Reached target nss-lookup.target - Host and Network Name Lookups.
b-f99f1acd8675...
         Expecting device dev-ttyA[    3.865147] systemd[1]: Reached target slices.target - Slice Units.
MA0.device - /dev/ttyAMA0...
         Expecting device     3.866108] systemd[1]: Reached target swap.target - Swaps.
0;1;39mdev-ttyS2.device - /dev/ttyS2...
[  OK      3.867209] systemd[1]: Reached target veritysetup.target - Local Verity Protected Volumes.
m] Reached target integrityse…Local Integrity Protect[    3.868273] systemd[1]: Reached target virt-guest-shutdown.target - Libvirt guests shutdown.
ed Volumes.
[  OK  ] Reached target nss-l[    3.869755] systemd[1]: Listening on dm-event.socket - Device-mapper event daemon FIFOs.
ookup.…m - Host and Network Name Lookups.
[  OK      3.870922] systemd[1]: Listening on lvm2-lvmpolld.socket - LVM2 poll daemon socket.
m] Reached target slices.target - Slice Units.
[  OK  ] Reached target swap.target - Swaps.
[  OK  ] Reached target veritysetup… - Local Verity Protected Volumes.
[  OK  ] Reached target virt-guest-…get - Libvirt guests shutdown.
[  OK  ] Listening on dm-event.sock… Device-mapper event daemon FIFOs.
[  OK  ] Listening on lvm2-lvmpolld…ket - LVM2 poll daemon socket.
[    3.883089] systemd[1]: Listening on rpcbind.socket - RPCbind Server Activation Socket.
[  OK  ] Listening on rpcbind.socke… RPCbind Server Activation Socket.
[    3.884638] systemd[1]: Listening on syslog.socket - Syslog Socket.
[  OK  ] Listening on syslog.socket - Syslog Socket.
[    3.886260] systemd[1]: Listening on systemd-fsckd.socket - fsck to fsckd communication Socket.
[    3.887214] systemd[1]: Listening on systemd-initctl.socket - initctl Compatibility Named Pipe.
[  OK  ] Listening on systemd-fsckd…sck to fsckd communication Socket.
[  OK  ] Listening on[    3.888636] systemd[1]: Listening on systemd-journald-audit.socket - Journal Audit Socket.
 systemd-initc… initctl Compatibility Named Pipe.
[    3.889917] systemd[1]: Listening on systemd-journald-dev-log.socket - Journal Socket (/dev/log).
[  OK  ] Listening on systemd-journ…socket[    3.891322] systemd[1]: Listening on systemd-journald.socket - Journal Socket.
 - Journal Audit Socket.
[  OK  ] Listening on systemd-journ…t - Journal Socket (/dev/log).
[    3.892785] systemd[1]: Listening on systemd-udevd-control.socket - udev Control Socket.
[  OK  ] Listening on systemd-journald.socke[    3.894020] systemd[1]: Listening on systemd-udevd-kernel.socket - udev Kernel Socket.
t - Journal Socket.
[  OK  ] Listening on systemd-udevd….socket - udev Control Socket.
[  OK  ] Listening on systemd-udevd…l.socket - udev Kernel Socket.
[    3.896901] systemd[1]: Mounting dev-hugepages.mount - Huge Pages File System...
         Mounting dev-hugepages.mount - Huge Pages File System...
[    3.899383] systemd[1]: Mounting dev-mqueue.mount - POSIX Message Queue File System...
         Mounting dev-mqueue.mountproc-fs-nfsd.moun…- NFSD configuration filesystem...
[    3.904266] systemd[1]: Mounting sys-kernel-debug.mount - Kernel Debug File System...
[    3.905150] [trim-mounts-hash]'mqueue'[0000000083866fcf]'s top mountpoint dentry: dev
         Mounting sys-kernel-debug.… - Kernel Deb[    3.905175] [trim-mounts-hash]'hugepages'[0000000096dd823d]'s top mountpoint dentry: dev
ug File System...
[    3.905860] [trim-mounts-hash]dentry 'dev' type: 0
[    3.906812] systemd[1]: Mounting sys-kernel-tracing.mount - Kernel Trace File System...
[    3.907057] [trim-mounts-hash]dentry 'dev' type: 0
         Mounting sys-kernel-tracin… - Kernel Tra[    3.909259] systemd[1]: auth-rpcgss-module.service - Kernel Module supporting RPCSEC_GSS was skipped because of an unmet condition check (ConditionPathExists=/etc/krb5.keytab).
ce File System...
[    3.911210] systemd[1]: Finished blk-availability.service - Availability of block devices.
[    3.911943] [trim-mounts-hash]'debug'[000000008601d6ff]'s top mountpoint dentry: sys
[  OK  ] Finished blk-availability.…m - Av[    3.912647] [trim-mounts-hash]dentry 'sys' type: 0
ailability of block devices.
[    3.914528] [trim-mounts-hash]'tracing'[0000000035750b49]'s top mountpoint dentry: sys
[    3.915243] [trim-mounts-hash]dentry 'sys' type: 0
[    3.937243] systemd[1]: Starting keyboard-setup.service - Set the console keyboard layout...
         Starting keyboard-setup.se…Set the console keyboard layout...
[    3.940317] systemd[1]: Starting kmod-static-nodes.service - Create List of Static Device Nodes...
         Starting kmod-static-nodes…ate List of Static Device Nodes...
[    3.942219] RPC: Registered named UNIX socket transport module.
[    3.942747] RPC: Registered udp transport module.
[    3.943161] RPC: Registered tcp transport module.
[    3.943351] systemd[1]: Starting lvm2-monitor.service - Monitoring of LVM2 mirrors, snapshots etc. using dmeventd or progress polling...
[    3.943574] RPC: Registered tcp-with-tls transport module.
[    3.943576] RPC: Registered tcp NFSv4.1 backchannel transport module.
         Starting lvm2-monitor.serv…ng dmeventd or progress polling...
[    3.948088] systemd[1]: Starting modprobe@configfs.service - Load Kernel Module configfs...
         Starting modprobe@configfs…m - Load Kernel Module configfs...
[    3.950973] systemd[1]: Starting modprobe@dm_mod.service - Load Kernel Module dm_mod...
         Starting modprobe@dm_mod.s…[0m - Load Kernel Module dm_mod...
[    3.953887] systemd[1]: Starting modprobe@drm.service - Load Kernel Module drm...
         Starting modprobe@drm.service - Load Kernel Module drm...
[    3.956748] systemd[1]: Starting modprobe@efi_pstore.service - Load Kernel Module efi_pstore...
         Starting modprobe@efi_psto…- Load Kernel Module efi_pstore...
[    3.959822] systemd[1]: Starting modprobe@fuse.service - Load Kernel Module fuse...
         Starting modprobe@fuse.ser…e - Load Kernel Module fuse...
[    3.962675] systemd[1]: Starting modprobe@loop.service - Load Kernel Module loop...
         Starting modprobe@loop.ser…e - Load Kernel Module loop...
[    3.964266] systemd[1]: systemd-fsck-root.service - File System Check on Root Device was skipped because of an unmet condition check (ConditionPathIsReadWrite=!/).
[    3.969461] systemd[1]: Starting systemd-journald.service - Journal Service...
         Starting systemd-journald.service - Journal Service...
[    3.989193] systemd[1]: Starting systemd-modules-load.service - Load Kernel Modules...
         Starting systemd-modules-l…rvice - Load Kernel Modules...
[    3.992159] systemd[1]: Starting systemd-remount-fs.service - Remount Root and Kernel File Systems...
[    3.995415] systemd[1]: Starting systemd-udev-trigger.service - Coldplug All udev Devices...
         Starting systemd-remount-f…nt Root and Kernel File Systems...
         Starting systemd-udev-trig…[0m - Coldplug All udev Devices...
[    3.999710] systemd[1]: Mounted dev-hugepages.mount - Huge Pages File System.
[  OK  ] Mounted dev-hugepages.mount - H[    4.000895] systemd[1]: Mounted dev-mqueue.mount - POSIX Message Queue File System.
uge Pages File System.
[  OK  ] Mounted dev-mqueue.mountOSI[    4.002205] systemd[1]: Mounted sys-kernel-debug.mount - Kernel Debug File System.
X Message Queue File System.
[  OK  ] Mounted sys-kernel-debug.m…nt[    4.003478] systemd[1]: Mounted sys-kernel-tracing.mount - Kernel Trace File System.
 - Kernel Debug File System.
[    4.005392] device-mapper: uevent: version 1.0.3
[    4.005929] device-mapper: ioctl: 4.50.0-ioctl (2025-04-28) initialised: dm-devel@lists.linux.dev
[    4.007199] [trim-mounts-hash]'nfsd'[0000000098defc95]'s top mountpoint dentry: proc
[    4.007888] [trim-mounts-hash]dentry 'proc' type: 0
[    4.010318] systemd[1]: Mounted proc-fs-nfsd.mount - NFSD configuration filesystem.
[  OK  ] Mounted sys-kernel-tracing…nt[    4.011883] systemd[1]: Finished kmod-static-nodes.service - Create List of Static Device Nodes.
 - Kernel Trace File System.
[  OK  ] Mounted proc-fs-nfsd.mount…m - NFSD configuration filesystem.
[    4.013820] systemd[1]: modprobe@configfs.service: Deactivated successfully.
[  OK  ] Finished kmod-static-nodes…reate [    4.014845] systemd[1]: Finished modprobe@configfs.service - Load Kernel Module configfs.
List of Static Device Nodes.
[  OK  ] Finished modprobe@configfs…[0m - [    4.016302] systemd[1]: modprobe@dm_mod.service: Deactivated successfully.
Load Kernel Module configfs.
[    4.017371] systemd[1]: Finished modprobe@dm_mod.service - Load Kernel Module dm_mod.
[  OK  ] Finished modprobe@dm_mod.s…e [    4.018606] systemd[1]: modprobe@drm.service: Deactivated successfully.
- Load Kernel Module dm_mod.
[    4.019557] systemd[1]: Finished modprobe@drm.service - Load Kernel Module drm.
[  OK  ] Finished modprobe@drm.service -[    4.020699] systemd[1]: modprobe@efi_pstore.service: Deactivated successfully.
 Load Kernel Module drm.
[    4.021662] systemd[1]: Finished modprobe@efi_pstore.service - Load Kernel Module efi_pstore.
[  OK  ] Finished modprobe@efi_psto…m - Lo[    4.022899] systemd[1]: modprobe@fuse.service: Deactivated successfully.
ad Kernel Module efi_pstore.
[    4.023862] systemd[1]: Finished modprobe@fuse.service - Load Kernel Module fuse.
[  OK  ] Finished modprobe@fuse.service [    4.025017] systemd[1]: modprobe@loop.service: Deactivated successfully.
- Load Kernel Module fuse.
[    4.025906] systemd[1]: Finished modprobe@loop.service - Load Kernel Module loop.
[  OK  ] Finished modprobe@loop.service - Load Kernel Module loop.
[    4.029153] systemd[1]: Mounting sys-fs-fuse-connections.mount - FUSE Control File System...
         Mounting sys-fs-fuse-conne… - FUSE Control File System...
[    4.031741] systemd[1]: Mounting sys-kernel-config.mount - Kernel Configuration File System...
         Mounting sys-kernel-config…ernel Configurati[    4.032742] systemd[1]: systemd-repart.service - Repartition Root Disk was skipped because no trigger condition checks were met.
on File System...
[    4.035379] [trim-mounts-hash]'connections'[00000000a4ce0706]'s top mountpoint dentry: sys
[    4.036141] [trim-mounts-hash]dentry 'sys' type: 0
[    4.037399] systemd[1]: Mounted sys-fs-fuse-connections.mount - FUSE Control File System.
[    4.037603] [trim-mounts-hash]'config'[000000008d80edeb]'s top mountpoint dentry: sys
[    4.038835] [trim-mounts-hash]dentry 'sys' type: 0
[  OK  ] Mounted sys-fs-fuse-connec…nt - FUSE Control File System.
[    4.039967] zram: Added device: zram0
[    4.040715] systemd[1]: Mounted sys-kernel-config.mount - Kernel Configuration File System.
[  OK  ] Mounted sys-kernel-config.… Kernel Configuration File System.
[    4.043167] rockchip_pvtm: loading out-of-tree module taints kernel.
[    4.076376] rga3 fdb60000.rga: probe successfully, irq = 49, hw_version:3.0.76831
[    4.077497] rga3 fdb70000.rga: probe successfully, irq = 50, hw_version:3.0.76831
[    4.078555] rga_iommu: IOMMU binding successfully, default mapping core[0x1]
[    4.079335] rga: Module initialized. v1.3.4
[    4.087041] mpp_service mpp-srv: 
[    4.087348] mpp_service mpp-srv: probe start
[    4.089449] mpp_vdpu2 fdb50400.vdpu: probe device
[    4.090179] mpp_vdpu2 fdb50400.vdpu: reset_group->rw_sem_on=0
[    4.090690] mpp_vdpu2 fdb50400.vdpu: reset_group->rw_sem_on=0
[    4.091216] mpp_vdpu2 fdb50400.vdpu: probing finish
[    4.091949] mpp_vepu2 jpege-ccu: probing start
[    4.092344] mpp_vepu2 jpege-ccu: probing finish
[    4.092874] mpp_vepu2 fdba0000.jpege-core: probing start
[    4.093599] mpp_vepu2 fdba0000.jpege-core: attach ccu success
[    4.094126] mpp_vepu2 fdba0000.jpege-core: probing finish
[    4.094834] mpp_vepu2 fdba4000.jpege-core: probing start
[    4.095495] mpp_vepu2 fdba4000.jpege-core: attach ccu success
[    4.096017] mpp_vepu2 fdba4000.jpege-core: probing finish
[    4.096716] mpp_vepu2 fdba8000.jpege-core: probing start
[    4.097382] mpp_vepu2 fdba8000.jpege-core: attach ccu success
[    4.097902] mpp_vepu2 fdba8000.jpege-core: probing finish
[    4.098604] mpp_vepu2 fdbac000.jpege-core: probing start
[    4.099220] mpp_vepu2 fdbac000.jpege-core: attach ccu success
[    4.099741] mpp_vepu2 fdbac000.jpege-core: probing finish
[    4.100639] mpp_jpgdec fdb90000.jpegd: probe device
[    4.101240] mpp_jpgdec fdb90000.jpegd: probing finish
[    4.102183] mpp_rkvdec2 fdc30000.rkvdec-ccu: rkvdec-ccu, probing start
[    4.102851] mpp_rkvdec2 fdc30000.rkvdec-ccu: ccu-mode: 1
[    4.103320] mpp_rkvdec2 fdc30000.rkvdec-ccu: probing finish
[    4.104084] mpp_rkvdec2 fdc38100.rkvdec-core: rkvdec-core, probing start
[    4.104848] mpp_rkvdec2 fdc38100.rkvdec-core: shared_niu_a is not found!
[    4.105457] rkvdec2_init:1199: No niu aclk reset resource define
[    4.105986] mpp_rkvdec2 fdc38100.rkvdec-core: shared_niu_h is not found!
[    4.106572] rkvdec2_init:1202: No niu hclk reset resource define
[    4.107125] mpp_rkvdec2 fdc38100.rkvdec-core: no regulator, devfreq is disabled
[    4.107884] mpp_rkvdec2 fdc38100.rkvdec-core: core_mask=00010001
[    4.108412] mpp_rkvdec2 fdc38100.rkvdec-core: attach ccu as core 0
[    4.109234] mpp_rkvdec2 fdc38100.rkvdec-core: sram_start 0x00000000ff001000
[    4.109846] mpp_rkvdec2 fdc38100.rkvdec-core: rcb_iova 0x00000000fff00000
[    4.110442] mpp_rkvdec2 fdc38100.rkvdec-core: sram_size 491520
[    4.110954] mpp_rkvdec2 fdc38100.rkvdec-core: rcb_size 1048576
[    4.111466] mpp_rkvdec2 fdc38100.rkvdec-core: min_width 512
[    4.111958] mpp_rkvdec2 fdc38100.rkvdec-core: rcb_info_count 20
[    4.112477] mpp_rkvdec2 fdc38100.rkvdec-core: [136, 24576]
[    4.112960] mpp_rkvdec2 fdc38100.rkvdec-core: [137, 49152]
[    4.113449] mpp_rkvdec2 fdc38100.rkvdec-core: [141, 90112]
[    4.113930] mpp_rkvdec2 fdc38100.rkvdec-core: [140, 49152]
[    4.114412] mpp_rkvdec2 fdc38100.rkvdec-core: [139, 180224]
[    4.114902] mpp_rkvdec2 fdc38100.rkvdec-core: [133, 49152]
[    4.115383] mpp_rkvdec2 fdc38100.rkvdec-core: [134, 8192]
[    4.115857] mpp_rkvdec2 fdc38100.rkvdec-core: [135, 4352]
[    4.116332] mpp_rkvdec2 fdc38100.rkvdec-core: [138, 13056]
[    4.116813] mpp_rkvdec2 fdc38100.rkvdec-core: [142, 291584]
[    4.117339] mpp_rkvdec2 fdc38100.rkvdec-core: probing finish
[    4.118002] mpp_rkvdec2 fdc48100.rkvdec-core: rkvdec-core, probing start
[    4.118790] mpp_rkvdec2 fdc48100.rkvdec-core: shared_niu_a is not found!
[    4.119380] rkvdec2_init:1199: No niu aclk reset resource define
[    4.119908] mpp_rkvdec2 fdc48100.rkvdec-core: shared_niu_h is not found!
[    4.120495] rkvdec2_init:1202: No niu hclk reset resource define
[    4.121073] mpp_rkvdec2 fdc48100.rkvdec-core: no regulator, devfreq is disabled
[    4.121748] mpp_rkvdec2 fdc48100.rkvdec-core: core_mask=00020002
[    4.122290] mpp_rkvdec2 fdc48100.rkvdec-core: attach ccu as core 1
[    4.123435] mpp_rkvdec2 fdc48100.rkvdec-core: sram_start 0x00000000ff079000
[    4.124046] mpp_rkvdec2 fdc48100.rkvdec-core: rcb_iova 0x00000000ffe00000
[    4.124642] mpp_rkvdec2 fdc48100.rkvdec-core: sram_size 487424
[    4.125165] mpp_rkvdec2 fdc48100.rkvdec-core: rcb_size 1048576
[    4.125680] mpp_rkvdec2 fdc48100.rkvdec-core: min_width 512
[    4.126170] mpp_rkvdec2 fdc48100.rkvdec-core: rcb_info_count 20
[    4.126689] mpp_rkvdec2 fdc48100.rkvdec-core: [136, 24576]
[    4.127171] mpp_rkvdec2 fdc48100.rkvdec-core: [137, 49152]
[    4.127654] mpp_rkvdec2 fdc48100.rkvdec-core: [141, 90112]
[    4.128137] mpp_rkvdec2 fdc48100.rkvdec-core: [140, 49152]
[    4.128618] mpp_rkvdec2 fdc48100.rkvdec-core: [139, 180224]
[    4.129131] mpp_rkvdec2 fdc48100.rkvdec-core: [133, 49152]
[    4.129614] mpp_rkvdec2 fdc48100.rkvdec-core: [134, 8192]
[    4.130088] mpp_rkvdec2 fdc48100.rkvdec-core: [135, 4352]
[    4.130562] mpp_rkvdec2 fdc48100.rkvdec-core: [138, 13056]
[    4.131045] mpp_rkvdec2 fdc48100.rkvdec-core: [142, 291584]
[    4.131565] mpp_rkvdec2 fdc48100.rkvdec-core: probing finish
[    4.132502] mpp_rkvenc2 rkvenc-ccu: probing start
[    4.132919] mpp_rkvenc2 rkvenc-ccu: probing finish
[    4.133586] mpp_rkvenc2 fdbd0000.rkvenc-core: probing start
[    4.134732] mpp_rkvenc2 fdbd0000.rkvenc-core: bin=0
[    4.135374] mpp_rkvenc2 fdbd0000.rkvenc-core: leakage=10
[    4.135846] mpp_rkvenc2 fdbd0000.rkvenc-core: leakage-volt-sel=0
[    4.137228] mpp_rkvenc2 fdbd0000.rkvenc-core: avs=0
[    4.137730] mpp_rkvenc2 fdbd0000.rkvenc-core: attach ccu as core 0
[    4.138297] mpp_rkvenc2 fdbd0000.rkvenc-core: probing finish
[    4.138957] mpp_rkvenc2 fdbe0000.rkvenc-core: probing start
[    4.139926] mpp_rkvenc2 fdbe0000.rkvenc-core: bin=0
[    4.140540] mpp_rkvenc2 fdbe0000.rkvenc-core: leakage=10
[    4.141038] mpp_rkvenc2 fdbe0000.rkvenc-core: leakage-volt-sel=0
[    4.142555] mpp_rkvenc2 fdbe0000.rkvenc-core: avs=0
[    4.143026] mpp_rkvenc2 fdbe0000.rkvenc-core: attach ccu as core 1
[    4.143591] mpp_rkvenc2 fdbe0000.rkvenc-core: probing finish
[    4.144426] mpp_av1dec fdc70000.av1d: probing start
[    4.145080] mpp_av1dec fdc70000.av1d: probing finish
[    4.145703] mpp_service mpp-srv: probe success
[    4.146302] systemd[1]: Started systemd-journald.service - Journal Service.
[  OK  ] Started systemd-journald.service - Journal Service.
[    4.243109] zfs: module license 'CDDL' taints kernel.
[    4.243568] Disabling lock debugging due to kernel taint
[    4.244111] zfs: module license taints kernel.
[  OK  ] Finished keyboard-setup.se…- Set the console keyboard layout.
[  OK  ] Finished lvm2-monitor.serv…sing dmeventd or progress polling.
[  OK  ] Finished systemd-remount-f…ount Root and Kernel File Systems.
         Starting systemd-journal-f…h Journal to Persistent Storage...
         Starting systemd-random-se…ice - Load/Save Random Seed...
         Starting systemd-sysusers.…rvice - Create System Users...
[    4.322587] [trim-mounts-hash]'/'[00000000d9af8193]'s top mountpoint dentry: dev
[    4.323266] [trim-mounts-hash]dentry 'dev' type: 0
[    4.331469] systemd-journald[321]: Received client request to flush runtime journal.
[  OK  ] Finished systemd-journal-f…ush Journal to Persistent Storage.
[  OK  ] Finished systemd-random-se…rvice - Load/Save Random Seed.
[  OK  ] Finished systemd-sysusers.service - Create System Users.
[    4.459877] ZFS: Loaded module v2.4.1-1, ZFS pool version 5000, ZFS filesystem version 5
         Starting systemd-tmpfiles-…ate Static Device Nodes in /dev...
[    4.479606] [trim-mounts-hash]'/'[00000000d9af8193]'s top mountpoint dentry: dev
[    4.480319] [trim-mounts-hash]dentry 'dev' type: 0
[  OK  ] Finished systemd-modules-l…service - Load Kernel Modules.
[  OK  ] Finished systemd-udev-trig…e - Coldplug All udev Devices.
         Starting ifupdown-pre.serv…ynchronize boot up for ifupdown...
         Starting systemd-sysctl.se…ce - Apply Kernel Variables...
[    4.518742] [trim-mounts-hash]'/'[00000000d9af8193]'s top mountpoint dentry: dev
[    4.519425] [trim-mounts-hash]dentry 'dev' type: 0
[  OK  ] Finished ifupdown-pre.serv… synchronize boot up for ifupdown.
[  OK  ] Finished systemd-tmpfiles-…reate Static Device Nodes in /dev.
[  OK  ] Reached target local-fs-pr…reparation for Local File Systems.
         Starting systemd-udevd.ser…ger for Device Events and Files...
[  OK  ] Finished systemd-sysctl.service - Apply Kernel Variables.
[  OK  ] Started systemd-udevd.serv…nager for Device Events and Files.
         Starting plymouth-start.se…[0m - Show Plymouth Boot Screen...
[  OK  ] Started plymouth-start.ser…e - Show Plymouth Boot Screen.
[  OK  ] Started systemd-ask-passwo…uests to Plymouth Directory Watch.
[  OK  ] Reached target cryptsetup.…get - Local Encrypted Volumes.
[    4.819615] sd 0:0:0:0: Attached scsi generic sg0 type 0
         Mounting tmp.mount - /tmp...
[  OK  ] Reached target machines.target - Containers.
[    5.028156] [trim-mounts-hash]'tmp'[0000000014681f81]'s top mountpoint dentry: tmp
[    5.028832] [trim-mounts-hash]dentry 'tmp' type: 0
[  OK  ] Found device dev-disk-by\x…5.device - ADATA_SP920SS BOOT.
[  OK  ] Mounted tmp.mount - /tmp.
[  OK  ] Found device dev-ttyS2.device - /dev/ttyS2.
         Starting systemd-fsck@dev-…69d-2428-4ecf-a45b-f99f1acd8675...
[  OK  ] Started systemd-fsckd.serv…tem Check Daemon to report status.
[    5.117894] cpufreq: cpufreq_policy_online: CPU4: Running at unlisted initial frequency: 1008000 kHz, changing to: 1200000 kHz
[    5.126571] pstore: Using crash dump compression: deflate
[    5.127083] pstore: Registered ramoops as persistent store backend
[    5.127628] ramoops: using 0xd8000@0x118000, ecc: 0
[  OK  ] Finished systemd-fsck@dev-…8f69d-2428-4ecf-a45b-f99f1acd8675.
[    5.129894] cpufreq: cpufreq_policy_online: CPU6: Running at unlisted initial frequency: 1008000 kHz, changing to: 1200000 kHz
         Mounting boot.mount - /boot...
[    5.247569] EXT4-fs (sda1): mounted filesystem e3d8f69d-2428-4ecf-a45b-f99f1acd8675 r/w with ordered data mode. Quota mode: none.
[    5.248622] [trim-mounts-hash]'boot'[000000008d57c517]'s top mountpoint dentry: boot
[    5.249312] [trim-mounts-hash]dentry 'boot' type: 0
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
         Starting systemd-tmpfiles-…te System Files and Directories...
[  OK  ] Finished console-setup.ser…[0m - Set console font and keymap.
[FAILED] Failed to start led-set.service - LED Setting Service.
See 'systemctl status led-set.service' for details.
[  OK  ] Finished plymouth-read-wri…lymouth To Write Out Runtime Data.
[  OK  ] Finished pwm-fancontrol.se…ice - PWM Fan Setting Service.
[FAILED] Failed to start set_gpio-i…[0m - GPIO Initialization Service.
See 'systemctl status set_gpio-init.service' for details.
         Mounting proc-sys-fs-binfm…utable File Formats File System...
[    5.419583] audit: type=1400 audit(1750949922.120:2): apparmor="STATUS" operation="profile_load" profile="unconfined" name="lsb_release" pid=671 comm="apparmor_parser"
[    5.421161] [trim-mounts-hash]'/'[00000000d9af8193]'s top mountpoint dentry: dev
[    5.421808] [trim-mounts-hash]dentry 'dev' type: 0
[    5.425236] [trim-mounts-hash]'/'[00000000b6a8ea47]'s top mountpoint dentry: proc
[    5.425897] [trim-mounts-hash]dentry 'proc' type: 0
[    5.451364] audit: type=1400 audit(1750949922.152:3): apparmor="STATUS" operation="profile_load" profile="unconfined" name="virt-aa-helper" pid=676 comm="apparmor_parser"
[  OK  ] Finished dpdk.service - DPDK runtime environment.
[  OK  ] Mounted proc-sys-fs-binfmt…ecutable File Formats File System.
[  OK  ] Finished systemd-binfmt.se… Set Up Additional Binary Formats.
[  OK  ] Finished systemd-tmpfiles-…eate System Files and Directories.
         Mounting run-rpc_pipefs.mount - RPC Pipe File System...
         Starting rpcbind.service - RPC bind portmap service...
[    5.575696] [trim-mounts-hash]'rpc_pipefs'[000000001d31cdea]'s top mountpoint dentry: run
[    5.576417] [trim-mounts-hash]dentry 'run' type: 0
[    5.622025] audit: type=1400 audit(1750949922.324:4): apparmor="STATUS" operation="profile_load" profile="unconfined" name="nvidia_modprobe" pid=672 comm="apparmor_parser"
[    5.623367] audit: type=1400 audit(1750949922.324:5): apparmor="STATUS" operation="profile_load" profile="unconfined" name="nvidia_modprobe//kmod" pid=672 comm="apparmor_parser"
         Starting systemd-timesyncd… - Network Time Synchronization...
         Starting systemd-update-ut…rd System Boot/Shutdown in UTMP...
[  OK  ] Started rpcbind.service - RPC bind portmap service.
[  OK  ] Mounted run-rpc_pipefs.mount - RPC Pipe File System.
[  OK  ] Reached target rpc_pipefs.target.
[  OK  ] Reached target rpcbind.target - RPC Port Mapper.
         Starting nfs-blkmap.servic…NFS block layout mapping daemon...
         Starting nfs-idmapd.servic…- NFSv4 ID-name mapping service...
         Starting nfsdcld.serviceFSv4 Client Tracking Daemon...
[  OK  ] Reached target nfs-client.target - NFS client services.
[  OK  ] Reached target remote-fs-p…eparation for Remote File Systems.
[  OK  ] Reached target remote-fs.target - Remote File Systems.
[  OK  ] Started nfs-blkmap.service… pNFS block layout mapping daemon.
[  OK  ] Finished systemd-update-ut…cord System Boot/Shutdown in UTMP.
[    5.673001] [trim-mounts-hash]'dev'[00000000a22d1a1d]'s top mountpoint dentry: tmp
[    5.673667] [trim-mounts-hash]dentry 'tmp' type: 0
[  OK  ] Started nfs-idmapd.service…m - NFSv4 ID-name mapping service.
[    5.680746] audit: type=1400 audit(1750949922.380:6): apparmor="STATUS" operation="profile_load" profile="unconfined" name="libvirtd" pid=683 comm="apparmor_parser"
[    5.682070] audit: type=1400 audit(1750949922.380:7): apparmor="STATUS" operation="profile_load" profile="unconfined" name="libvirtd//qemu_bridge_helper" pid=683 comm="apparmor_parser"
[  OK  ] Started nfsdcld.service - NFSv4 Client Tracking Daemon.
[    5.719576] audit: type=1400 audit(1750949922.420:8): apparmor="STATUS" operation="profile_load" profile="unconfined" name="/usr/bin/man" pid=675 comm="apparmor_parser"
[    5.720920] audit: type=1400 audit(1750949922.420:9): apparmor="STATUS" operation="profile_load" profile="unconfined" name="man_filter" pid=675 comm="apparmor_parser"
[    5.722242] audit: type=1400 audit(1750949922.424:10): apparmor="STATUS" operation="profile_load" profile="unconfined" name="man_groff" pid=675 comm="apparmor_parser"
[    5.824028] audit: type=1400 audit(1750949922.524:11): apparmor="STATUS" operation="profile_load" profile="unconfined" name="/usr/lib/NetworkManager/nm-dhcp-client.action" pid=673 comm="apparmor_parser"
[  OK  ] Finished apparmor.service - Load AppArmor profiles.
[    5.856988] [trim-mounts-hash]'proc'[00000000d92b1112]'s top mountpoint dentry: run
[    5.857665] [trim-mounts-hash]dentry 'run' type: 0
[  OK  ] Started systemd-timesyncd.…0m - Network Time Synchronization.
[  OK  ] Reached target sound.target - Sound Card.
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
[    6.011632] fnnas-tf[891]: [ STEPS ] Welcome to the partition expansion tool.
         Starting system_setmac.ser…able MAC addresses from MMC CID...
         Starting systemd-logind.se…ice - User Login Management...
         Starting systemd-machined.… Container Registration Service...
[  OK  ] Started wsdd2.service …MNR Discovery/Name Service Daemon.
         Starting zramswap.service - Linux zramswap setup...
[  OK  ] Started rsyslog.service - Syste[    6.035023] [trim-mounts-hash]'dev'[00000000ba849ad0]'s top mountpoint dentry: tmp
m Logging Service.
[    6.036115] [trim-mounts-hash]dentry 'tmp' type: 0
[  OK  ] Finished e2scrub_reap.serv…ine ext4 Metadata Check Snapshots.
[    6.038147] [trim-mounts-hash]'proc'[00000000d92b1112]'s top mountpoint dentry: run
[    6.038824] [trim-mounts-hash]dentry 'run' type: 0
[  OK  ] Finished sysstat.service - Resets System Activity Logs.
[    6.084963] zram0: detected capacity change from 0 to 16336976
[  OK  ] Finished system_setmac.ser…stable MAC addresses from MMC CID.
[  OK  ] Reached target network-pre…get - Preparation for Network.
[    6.096492] Adding 8168484k swap on /dev/zram0.  Priority:100 extents:1 across:8168484k SS
         Starting ovsdb-server.serv…0m - Open vSwitch Database Unit...
[  OK  ] Finished zramswap.service - Linux zramswap setup.
[    6.114814] fnnas-tf[891]: [ INFO ] Target Disk: [ sda ], Root Partition: [ 2 ], PT Type: [ gpt ]
[  OK  ] Started dbus.service - D-Bus System Message Bus.
         Starting NetworkManager.service - Network Manager...
         Starting wpa_supplicant.service - WPA supplicant...
[  OK  ] Stopped wsdd2.service …MNR Discovery/Name Service Daemon.
[  OK  ] Started wsdd2.service …MNR Discovery/Name Service Daemon.
[  OK  ] Started polkit.service - Authorization Manager.
[  OK  ] Started systemd-machined.s…nd Container Registration Service.
[  OK  ] Started avahi-daemon.service - Avahi mDNS/DNS-SD Stack.
[  OK  ] Started systemd-logind.service - User Login Management.
[    6.213144] [trim-mounts-hash]'dev'[00000000dafd3be4]'s top mountpoint dentry: tmp
[    6.213843] [trim-mounts-hash]dentry 'tmp' type: 0
         Starting ModemManager.service - Modem Manager...
[  OK  ] Finished nut-driver-enumer…vices into systemd unit instances.
[  OK  ] Reached target nut-driver.…wer device drivers on this system.
[    6.218997] nvme nvme0: using unchecked data buffer
[  OK  ] Started smartmontools.serv…porting Technology (SMART) Daemon.
[  OK  ] Started ModemManager.service - Modem Manager.
[  OK  ] Stopped wsdd2.service …MNR Discovery/Name Service Daemon.
[  OK  ] Started wsdd2.service …MNR Di[    6.514680] [trim-mounts-hash]'dev'[0000000073234ffb]'s top mountpoint dentry: tmp
scovery/Name Service Daemon.
[    6.515504] [trim-mounts-hash]dentry 'tmp' type: 0
[  OK  ] Started wpa_supplicant.service - WPA supplicant.
[  OK  ] Started NetworkManager.service - Network Manager.
         Starting NetworkManager-wa…m - Network Manager Wait Online...
         Starting systemd-hostnamed.service - Hostname Service...
[FAILED] Failed to start wsdd2.serv…MNR Discovery/Name Service Daemon.
See 'systemctl status wsdd2.service' for details.
[    6.551397] [trim-mounts-hash]'dev'[00000000f91806a3]'s top mountpoint dentry: tmp
[    6.552088] [trim-mounts-hash]dentry 'tmp' type: 0
[    6.565542] [trim-mounts-hash]'proc'[00000000d92b1112]'s top mountpoint dentry: run
[    6.566241] [trim-mounts-hash]dentry 'run' type: 0
[  OK  ] Started systemd-hostnamed.service - Hostname Service.
[  OK  ] Listening on systemd-rfkil…l Switch Status /dev/rfkill Watch.
         Starting NetworkManager-di…nager Script Dispatcher Service...
[    6.729027] Realtek Internal NBASE-T PHY r8169-3-3100:00: attached PHY driver (mii_bus:phy_addr=r8169-3-3100:00, irq=MAC)
[  OK  ] Started NetworkManager-dis…Manager Script Dispatcher Service.
[  OK  ] Started ovsdb-server.servi… - Open vSwitch Database Unit.
         Starting ovs-vswitchd.serv… - Open vSwitch Forwarding Unit...
[    6.909498] r8169 0003:31:00.0 eth0: Link is Down
[    6.945091] Realtek Internal NBASE-T PHY r8169-2-2100:00: attached PHY driver (mii_bus:phy_addr=r8169-2-2100:00, irq=MAC)
[    7.003083] openvswitch: Open vSwitch switching datapath
[    7.113483] r8169 0002:21:00.0 eth1: Link is Down
[    7.127070] rk_gmac-dwmac fe1c0000.ethernet eth2: Register MEM_TYPE_PAGE_POOL RxQ-0
[    7.129222] rk_gmac-dwmac fe1c0000.ethernet eth2: Register MEM_TYPE_PAGE_POOL RxQ-1
[    8.139211] rk_gmac-dwmac fe1c0000.ethernet eth2: Failed to reset the dma
[    8.139819] rk_gmac-dwmac fe1c0000.ethernet eth2: stmmac_hw_setup: DMA engine initialization failed
[    8.140612] rk_gmac-dwmac fe1c0000.ethernet eth2: __stmmac_open: Hw setup failed
[    8.152672] rk_gmac-dwmac fe1b0000.ethernet eth3: Register MEM_TYPE_PAGE_POOL RxQ-0
[    8.154766] rk_gmac-dwmac fe1b0000.ethernet eth3: Register MEM_TYPE_PAGE_POOL RxQ-1
[  OK  ] Started ovs-vswitchd.servi…0m - Open vSwitch Forwarding Unit.
         Starting networking.service - Raise network interfaces...
         Starting openvswitch-switch.service - Open vSwitch...
[  OK  ] Finished openvswitch-switch.service - Open vSwitch.
[    9.163626] rk_gmac-dwmac fe1b0000.ethernet eth3: Failed to reset the dma
[    9.164233] rk_gmac-dwmac fe1b0000.ethernet eth3: stmmac_hw_setup: DMA engine initialization failed
[    9.165041] rk_gmac-dwmac fe1b0000.ethernet eth3: __stmmac_open: Hw setup failed
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
[    9.355124] fnnas-tf[891]: [ INFO ] Expanding root partition...
[    9.368785] fnnas-tf[891]: [ INFO ] Current partition: 5GiB, Disk: 119GiB
[    9.369088] fnnas-tf[891]: [ INFO ] GPT partition table detected.
[    9.454776] fnnas-tf[891]: [ INFO ] Strategy: Limit partition 2 to 16GiB...
[  OK  ] Started ssh.service - OpenBSD Secure Shell server.
[  OK  ] Started libvirtd.service - Virtualization daemon.
[    9.751660] fnnas-tf[1223]: Warning: Partition /dev/sda2 is being used. Are you sure you want to continue?
Yes/No? Yes                                                               
[  OK  ] Started smbd.service - Samba SMB/CIFS daemon (smbd).
[    9.852721] fnnas-tf[1223]: Information: You may need to update /etc/fstab.
[    9.998059] r8169 0002:21:00.0: invalid VPD tag 0x00 (size 0) at offset 0; assume missing optional EEPROM
[   10.009014] r8169 0003:31:00.0: invalid VPD tag 0x00 (size 0) at offset 0; assume missing optional EEPROM
[   10.093466] r8169 0002:21:00.0 eth1: Link is Up - 1Gbps/Full - flow control rx/tx
[  OK  ] Started containerd.service…0m - containerd container runtime.
[  OK  ] Started postgresql@15-main… - PostgreSQL Cluster 15-main.
         Starting postgresql.service - PostgreSQL RDBMS...
[  OK  ] Finished postgresql.service - PostgreSQL RDBMS.
                                                                          
[   13.155236] fnnas-tf[891]: [ INFO ] Expanding filesystem...
[   13.217252] BTRFS info (device sda2): resize device /dev/sda2 (devid 1) from 6441402368 to 16626221056
[   13.213771] fnnas-tf[1422]: Resize device id 1 (/dev/sda2) from 6.00GiB to max
[   13.214409] fnnas-tf[891]: [ SUCCESS ] Partition expanded successfully.
[   13.569092] fnnas-tf[891]: [ INFO ] Service resize-rootfs.service disabled
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
IPv4 for eth1:      192.168.33.40

fnOS Web UI can be directly accessed at: http://192.168.33.40:5666

For more information, help or support, go here:
https://www.fnnas.com

fnnas login: admin
Password: 
Linux fnos 6.18.18-trim #491 SMP PREEMPT Fri Apr 17 03:28:48 UTC 2026 aarch64

The programs included with the Debian GNU/Linux system are free software;
the exact distribution terms for each program are described in the
individual files in /usr/share/doc/*/copyright.

Debian GNU/Linux comes with ABSOLUTELY NO WARRANTY, to the extent
permitted by applicable law.
suNo directory, logging in with HOME=/
admin@fnos:/$ sudo su
[sudo] password for admin: 
When trying to update a password, this return status indicates that the value provided as the current password is not correct.

Sorry, try again.
[sudo] password for admin: 
When trying to update a password, this return status indicates that the value provided as the current password is not correct.
Sorry, try again.
[sudo] password for admin: 
sudo: 2 incorrect password attempts
admin@fnos:/$ sudo su
[sudo] password for admin: 
root@fnos:/# 

```


### fnnas_rockchip_bdy-g98_k6.18.18_2026.08.19.img.gz

测试描述：
1. 能正常引导，自动获取ip正常
2. 其他待测试

#### 引导日志

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
DQS rds:h2,h1 
CH0 RX Vref:29.3%, TX Vref:21.8%,21.8%
DQ rds:l0 h3 l0 h4 h1 h5 h4 h1, h3 h2 l0 h3 h3 h1 h2 h3 

DQS rds:l0,h1 
CH1 RX Vref:29.3%, TX Vref:23.8%,23.8%
DQ rds:h2 h2 h1 h1 h2 h3 h2 h3, h3 h3 h5 l0 h3 h4 h1 l0 

DQS rds:l0,h2 
CH2 RX Vref:29.7%, TX Vref:21.8%,21.8%
DQ rds:h2 h2 h7 h1 h3 h2 l0 l0, h6 h3 h1 h3 h4 h1 h5 h3 

DQS rds:h2,h1 
CH3 RX Vref:30.1%, TX Vref:22.8%,21.8%
DQ rds:h6 h2 h5 h3 h3 h2 h1 h4, h2 h2 h3 h3 h1 h2 h1 h3 

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
## Checking atf-1 0x00060000 (gzip @0x00260000) ... sha256(047b7bdbff...) + sha256(f99c6f8fb6...) + OK
## Checking uboot 0x00200000 (gzip @0x00400000) ... sha256(40b389ad51...) + sha256(2030c39880...) + OK
## Checking fdt 0x00374a38 ... sha256(2fba0da159...) + OK
## Checking atf-2 0xff100000 ... sha256(74bbc58e20...) + OK
## Checking atf-3 0x000f0000 ... sha256(13b94d9d5a...) + OK
## Checking optee 0x08400000 (gzip @0x08600000) ... sha256(f3a40240f3...) + sha256(76eeb0b48d...) + OK
Jumping to U-Boot(0x00200000) via ARM Trusted Firmware(0x00060000)
Total: 510.70/710.764 ms

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


U-Boot next-dev-gc09af4f875-250929-dirty #root (Aug 29 2026 - 01:13:35 +0800)

Model: BYD G98 Compiled By yifengyou
MPIDR: 0x0
PreSerial: 2, raw, 0xfeb50000
DRAM:  16 GiB
Sysmem: init
Relocation Offset: ed8e5000
Relocation fdt: eb7f66f0 - eb7fecb8, kfdt: 0037d000 - 0037d000
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
Model: BYD G98 Compiled By yifengyou
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
3406 bytes read in 24 ms (137.7 KiB/s)
## Executing script at 00500000
Ignoring attempt to modify 'load_addr'
Boot script loaded from scsi 0
407 bytes read in 13 ms (30.3 KiB/s)
19195666 bytes read in 376 ms (48.7 MiB/s)
32926208 bytes read in 597 ms (52.6 MiB/s)
215113 bytes read in 445 ms (471.7 KiB/s)
** File not found /dtb/rockchip/overlay/rk3588-fixup.scr **
Fdt Ramdisk skip relocation
No misc partition
## Loading init Ramdisk from Legacy Image at 0a200000 ...
   Image Name:   uInitrd
   Image Type:   AArch64 Linux RAMDisk Image (uncompressed)
   Data Size:    19195602 Bytes = 18.3 MiB
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
Total: 7014.625/7089.980 ms

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
[    0.000000] Kernel command line: root=UUID=0bd3196d-bf62-4799-9faa-b3bcd8288112 rootwait rootfstype=btrfs rootflags=compress=zstd:1 bootsplash.bootfile=bootsplash.armbian earlycon console=ttyS2,1500000 console=ttyFIQ0 console=tty1 consoleblank=0 loglevel=7 ubootpart=f35ec32f-807d-48a0-a2c9-64e8449a5a39 usb-storage.quirks=0x2537:0x1066:u,0x2537:0x1068:u rw rootwait net.ifnames=0 max_loop=128 cgroup_enable=cpuset cgroup_memory=1 cgroup_enable=memory swapaccount=1 androidboot.fwver=ddr-v1.21-cb12b99cc23,spl-v1.14,bl31-v1.54,bl32-v1.20,uboot-gc09af4f87-08/29/2026
[    0.000000] Unknown kernel command line parameters "ubootpart=f35ec32f-807d-48a0-a2c9-64e8449a5a39 cgroup_enable=memory cgroup_memory=1", will be passed to user space.
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
[    0.001823] Console: colour dummy device 80x25
[    0.002234] printk: legacy console [tty1] enabled
[    0.002694] printk: legacy bootconsole [uart0] disabled
ISr ig/cy i  b
              ISr ig/c  in b
                            ISr3igTo snnwo
                                          ISaUtiISaUt roo
                                                         ISaUtiISaUt rro
                                                                        ISaUtiISaUt rro
                                                                                       ISaUtiISr ttmrt
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
[    0.000000] Kernel command line: root=UUID=0bd3196d-bf62-4799-9faa-b3bcd8288112 rootwait rootfstype=btrfs rootflags=compress=zstd:1 bootsplash.bootfile=bootsplash.armbian earlycon console=ttyS2,1500000 console=ttyFIQ0 console=tty1 consoleblank=0 loglevel=7 ubootpart=f35ec32f-807d-48a0-a2c9-64e8449a5a39 usb-storage.quirks=0x2537:0x1066:u,0x2537:0x1068:u rw rootwait net.ifnames=0 max_loop=128 cgroup_enable=cpuset cgroup_memory=1 cgroup_enable=memory swapaccount=1 androidboot.fwver=ddr-v1.21-cb12b99cc23,spl-v1.14,bl31-v1.54,bl32-v1.20,uboot-gc09af4f87-08/29/2026
[    0.000000] Unknown kernel command line parameters "ubootpart=f35ec32f-807d-48a0-a2c9-64e8449a5a39 cgroup_enable=memory cgroup_memory=1", will be passed to user space.
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
[    0.001823] Console: colour dummy device 80x25
[    0.002234] printk: legacy console [tty1] enabled
[    0.002694] printk: legacy bootconsole [uart0] disabled
[    0.003270] Calibrating delay loop (skipped), value calculated using timer frequency.. 48.00 BogoMIPS (lpj=96000)
[    0.003295] pid_max: default: 32768 minimum: 301
[    0.003401] LSM: initializing lsm=capability,yama,apparmor
[    0.003467] Yama: becoming mindful.
[    0.003694] AppArmor: AppArmor initialized
[    0.003792] Mount-cache hash table entries: 32768 (order: 6, 262144 bytes, linear)
[    0.003839] Mountpoint-cache hash table entries: 32768 (order: 6, 262144 bytes, linear)
[    0.006234] rcu: Hierarchical SRCU implementation.
[    0.006250] rcu: 	Max phase no-delay instances is 1000.
[    0.006474] Timer migration: 1 hierarchy levels; 8 children per group; 1 crossnode level
[    0.007284] EFI services will not be available.
[    0.007586] smp: Bringing up secondary CPUs ...
[    0.008234] Detected VIPT I-cache on CPU1
[    0.008433] GICv3: CPU1: found redistributor 100 region 0:0x00000000fe6a0000
[    0.008447] GICv3: CPU1: using allocated LPI pending table @0x00000001004c0000
[    0.008489] CPU1: Booted secondary processor 0x0000000100 [0x412fd050]
[    0.009183] Detected VIPT I-cache on CPU2
[    0.009374] GICv3: CPU2: found redistributor 200 region 0:0x00000000fe6c0000
[    0.009386] GICv3: CPU2: using allocated LPI pending table @0x00000001004d0000
[    0.009422] CPU2: Booted secondary processor 0x0000000200 [0x412fd050]
[    0.010093] Detected VIPT I-cache on CPU3
[    0.010282] GICv3: CPU3: found redistributor 300 region 0:0x00000000fe6e0000
[    0.010294] GICv3: CPU3: using allocated LPI pending table @0x00000001004e0000
[    0.010329] CPU3: Booted secondary processor 0x0000000300 [0x412fd050]
[    0.011052] CPU features: detected: Spectre-v4
[    0.011057] CPU features: detected: Spectre-BHB
[    0.011062] CPU features: detected: SSBS not fully self-synchronizing
[    0.011065] Detected PIPT I-cache on CPU4
[    0.011172] GICv3: CPU4: found redistributor 400 region 0:0x00000000fe700000
[    0.011180] GICv3: CPU4: using allocated LPI pending table @0x00000001004f0000
[    0.011204] CPU4: Booted secondary processor 0x0000000400 [0x414fd0b0]
[    0.011848] Detected PIPT I-cache on CPU5
[    0.011962] GICv3: CPU5: found redistributor 500 region 0:0x00000000fe720000
[    0.011971] GICv3: CPU5: using allocated LPI pending table @0x0000000100500000
[    0.011995] CPU5: Booted secondary processor 0x0000000500 [0x414fd0b0]
[    0.012638] Detected PIPT I-cache on CPU6
[    0.012752] GICv3: CPU6: found redistributor 600 region 0:0x00000000fe740000
[    0.012760] GICv3: CPU6: using allocated LPI pending table @0x0000000100510000
[    0.012784] CPU6: Booted secondary processor 0x0000000600 [0x414fd0b0]
[    0.013580] Detected PIPT I-cache on CPU7
[    0.013695] GICv3: CPU7: found redistributor 700 region 0:0x00000000fe760000
[    0.013703] GICv3: CPU7: using allocated LPI pending table @0x0000000100520000
[    0.013727] CPU7: Booted secondary processor 0x0000000700 [0x414fd0b0]
[    0.013807] smp: Brought up 1 node, 8 CPUs
[    0.014072] SMP: Total of 8 processors activated.
[    0.014084] CPU: All CPU(s) started at EL2
[    0.014095] CPU features: detected: 32-bit EL0 Support
[    0.014107] CPU features: detected: Data cache clean to the PoU not required for I/D coherence
[    0.014124] CPU features: detected: Common not Private translations
[    0.014136] CPU features: detected: CRC32 instructions
[    0.014152] CPU features: detected: RCpc load-acquire (LDAPR)
[    0.014165] CPU features: detected: LSE atomic instructions
[    0.014177] CPU features: detected: Privileged Access Never
[    0.014188] CPU features: detected: PMUv3
[    0.014199] CPU features: detected: RAS Extension Support
[    0.014214] CPU features: detected: Speculative Store Bypassing Safe (SSBS)
[    0.014287] alternatives: applying system-wide alternatives
[    0.017603] CPU features: detected: Hardware dirty bit management on CPU4-7
[    0.018020] Memory: 16172388K/16752640K available (17792K kernel code, 2970K rwdata, 5636K rodata, 5568K init, 714K bss, 439976K reserved, 131072K cma-reserved)
[    0.021402] [trim-mounts-hash]'/'[(____ptrval____)]'s top mountpoint dentry: /
[    0.021426] [trim-mounts-hash]dentry '/' type: 0
[    0.021462] devtmpfs: initialized
[    0.033864] clocksource: jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 7645041785100000 ns
[    0.033890] posixtimers hash table entries: 4096 (order: 4, 65536 bytes, linear)
[    0.033931] futex hash table entries: 2048 (131072 bytes on 1 NUMA nodes, total 128 KiB, linear).
[    0.034495] 24528 pages in range for non-PLT usage
[    0.034498] 516048 pages in range for PLT usage
[    0.034635] pinctrl core: initialized pinctrl subsystem
[    0.034895] DMI not present or invalid.
[    0.036652] NET: Registered PF_NETLINK/PF_ROUTE protocol family
[    0.037379] DMA: preallocated 2048 KiB GFP_KERNEL pool for atomic allocations
[    0.037675] DMA: preallocated 2048 KiB GFP_KERNEL|GFP_DMA pool for atomic allocations
[    0.037945] DMA: preallocated 2048 KiB GFP_KERNEL|GFP_DMA32 pool for atomic allocations
[    0.037968] audit: initializing netlink subsys (disabled)
[    0.038070] audit: type=2000 audit(0.036:1): state=initialized audit_enabled=0 res=1
[    0.039720] thermal_sys: Registered thermal governor 'step_wise'
[    0.039750] cpuidle: using governor menu
[    0.039922] hw-breakpoint: found 6 breakpoint and 4 watchpoint registers.
[    0.040040] ASID allocator initialised with 65536 entries
[    0.040205] Serial: AMBA PL011 UART driver
[    0.051594] /vop@fdd90000: Fixed dependency cycle(s) with /hdmi@fde80000
[    0.051630] /hdmi@fde80000: Fixed dependency cycle(s) with /vop@fdd90000
[    0.054359] /pcie@fe180000: Fixed dependency cycle(s) with /pcie@fe180000/legacy-interrupt-controller
[    0.064999] gpio gpiochip0: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.065344] rockchip-gpio fd8a0000.gpio: probed /pinctrl/gpio@fd8a0000
[    0.065491] gpio gpiochip1: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.065626] rockchip-gpio fec20000.gpio: probed /pinctrl/gpio@fec20000
[    0.065772] gpio gpiochip2: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.065898] rockchip-gpio fec30000.gpio: probed /pinctrl/gpio@fec30000
[    0.066043] gpio gpiochip3: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.066167] rockchip-gpio fec40000.gpio: probed /pinctrl/gpio@fec40000
[    0.066371] gpio gpiochip4: Static allocation of GPIO base is deprecated, use dynamic allocation.
[    0.066499] rockchip-gpio fec50000.gpio: probed /pinctrl/gpio@fec50000
[    0.067952] /pcie@fe150000: Fixed dependency cycle(s) with /pcie@fe150000/legacy-interrupt-controller
[    0.068304] /pcie@fe160000: Fixed dependency cycle(s) with /pcie@fe160000/legacy-interrupt-controller
[    0.068712] /pcie@fe170000: Fixed dependency cycle(s) with /pcie@fe170000/legacy-interrupt-controller
[    0.073263] /hdmi@fde80000: Fixed dependency cycle(s) with /hdmi0-con
[    0.073294] /hdmi0-con: Fixed dependency cycle(s) with /hdmi@fde80000
[    0.074028] HugeTLB: registered 1.00 GiB page size, pre-allocated 0 pages
[    0.074037] HugeTLB: 0 KiB vmemmap can be freed for a 1.00 GiB page
[    0.074044] HugeTLB: registered 32.0 MiB page size, pre-allocated 0 pages
[    0.074050] HugeTLB: 0 KiB vmemmap can be freed for a 32.0 MiB page
[    0.074056] HugeTLB: registered 2.00 MiB page size, pre-allocated 0 pages
[    0.074062] HugeTLB: 0 KiB vmemmap can be freed for a 2.00 MiB page
[    0.074068] HugeTLB: registered 64.0 KiB page size, pre-allocated 0 pages
[    0.074073] HugeTLB: 0 KiB vmemmap can be freed for a 64.0 KiB page
[    0.141756] raid6: neonx8   gen()  5046 MB/s
[    0.209829] raid6: neonx4   gen()  5008 MB/s
[    0.277911] raid6: neonx2   gen()  4226 MB/s
[    0.345968] raid6: neonx1   gen()  3351 MB/s
[    0.414040] raid6: int64x8  gen()  2230 MB/s
[    0.482111] raid6: int64x4  gen()  2343 MB/s
[    0.550183] raid6: int64x2  gen()  1954 MB/s
[    0.618262] raid6: int64x1  gen()  1610 MB/s
[    0.618267] raid6: using algorithm neonx8 gen() 5046 MB/s
[    0.686326] raid6: .... xor() 3810 MB/s, rmw enabled
[    0.686331] raid6: using neon recovery algorithm
[    0.686900] iommu: Default domain type: Translated
[    0.686908] iommu: DMA domain TLB invalidation policy: strict mode
[    0.687334] SCSI subsystem initialized
[    0.687525] usbcore: registered new interface driver usbfs
[    0.687546] usbcore: registered new interface driver hub
[    0.687562] usbcore: registered new device driver usb
[    0.687793] pps_core: LinuxPPS API ver. 1 registered
[    0.687799] pps_core: Software ver. 5.3.6 - Copyright 2005-2007 Rodolfo Giometti <giometti@linux.it>
[    0.687814] PTP clock support registered
[    0.687831] EDAC MC: Ver: 3.0.0
[    0.687980] scmi_core: SCMI protocol bus registered
[    0.688518] NetLabel: Initializing
[    0.688524] NetLabel:  domain hash size = 128
[    0.688529] NetLabel:  protocols = UNLABELED CIPSOv4 CALIPSO
[    0.688563] NetLabel:  unlabeled traffic allowed by default
[    0.688658] vgaarb: loaded
[    0.689000] clocksource: Switched to clocksource arch_sys_counter
[    0.689193] VFS: Disk quotas dquot_6.6.0
[    0.689210] VFS: Dquot-cache hash table entries: 512 (order 0, 4096 bytes)
[    0.689527] AppArmor: AppArmor Filesystem Enabled
[    0.693849] NET: Registered PF_INET protocol family
[    0.694073] IP idents hash table entries: 262144 (order: 9, 2097152 bytes, linear)
[    0.701055] tcp_listen_portaddr_hash hash table entries: 8192 (order: 5, 131072 bytes, linear)
[    0.701207] Table-perturb hash table entries: 65536 (order: 6, 262144 bytes, linear)
[    0.701293] TCP established hash table entries: 131072 (order: 8, 1048576 bytes, linear)
[    0.702256] TCP bind hash table entries: 65536 (order: 9, 2097152 bytes, linear)
[    0.703844] TCP: Hash tables configured (established 131072 bind 65536)
[    0.703927] UDP hash table entries: 8192 (order: 7, 524288 bytes, linear)
[    0.704471] UDP-Lite hash table entries: 8192 (order: 7, 524288 bytes, linear)
[    0.705045] NET: Registered PF_UNIX/PF_LOCAL protocol family
[    0.705068] NET: Registered PF_XDP protocol family
[    0.705080] PCI: CLS 0 bytes, default 64
[    0.705278] Trying to unpack rootfs image as initramfs...
[    0.710570] kvm [1]: nv: 568 coarse grained trap handlers
[    0.710777] kvm [1]: IPA Size Limit: 40 bits
[    0.710799] kvm [1]: GICv3: no GICV resource entry
[    0.710805] kvm [1]: disabling GICv2 emulation
[    0.710828] kvm [1]: GIC system register CPU interface enabled
[    0.710848] kvm [1]: vgic interrupt IRQ18
[    0.710874] kvm [1]: VHE mode initialized successfully
[    0.711756] Initialise system trusted keyrings
[    0.711779] Key type blacklist registered
[    0.711899] workingset: timestamp_bits=44 max_order=22 bucket_order=0
[    0.712221] squashfs: version 4.0 (2009/01/31) Phillip Lougher
[    0.712434] fuse: init (API version 7.45)
[    0.713142] trim_trashbin_init
[    0.713150] trim-trashbin driver major=244,minor=0
[    0.713352] integrity: Platform Keyring initialized
[    0.713523] cryptd: max_cpu_qlen set to 1000
[    0.748112] xor: measuring software checksum speed
[    0.748630]    8regs           :  6416 MB/sec
[    0.749158]    32regs          :  6287 MB/sec
[    0.749533]    arm64_neon      :  8885 MB/sec
[    0.749538] xor: using function: arm64_neon (8885 MB/sec)
[    0.749547] Key type asymmetric registered
[    0.749552] Asymmetric key parser 'x509' registered
[    0.749593] Block layer SCSI generic (bsg) driver version 0.4 loaded (major 243)
[    0.749725] io scheduler mq-deadline registered
[    0.749736] io scheduler kyber registered
[    0.749761] io scheduler bfq registered
[    1.121216] Freeing initrd memory: 18740K
[    1.125129] ledtrig-cpu: registered to indicate activity on CPUs
[    1.127662] dma-pl330 fea10000.dma-controller: Loaded driver for PL330 DMAC-241330
[    1.127679] dma-pl330 fea10000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    1.128427] dma-pl330 fea30000.dma-controller: Loaded driver for PL330 DMAC-241330
[    1.128437] dma-pl330 fea30000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    1.129130] dma-pl330 fed10000.dma-controller: Loaded driver for PL330 DMAC-241330
[    1.129142] dma-pl330 fed10000.dma-controller: 	DBUFF-128x8bytes Num_Chans-8 Num_Peri-32 Num_Events-16
[    1.130550] Serial: 8250/16550 driver, 12 ports, IRQ sharing disabled
[    1.132474] printk: legacy console [ttyS2] disabled
[    1.132619] feb50000.serial: ttyS2 at MMIO 0xfeb50000 (irq = 41, base_baud = 1500000) is a 16550A
[    1.132661] printk: legacy console [ttyS2] enabled
[    1.287777] Serial: AMBA driver
[    1.288449] arm-smmu-v3 fc900000.iommu: ias 48-bit, oas 48-bit (features 0x001c1eaf)
[    1.289877] arm-smmu-v3 fc900000.iommu: allocated 65536 entries for cmdq
[    1.290760] arm-smmu-v3 fc900000.iommu: allocated 32768 entries for evtq
[    1.291772] arm-smmu-v3 fc900000.iommu: msi_domain absent - falling back to wired irqs
[    1.293508] rockchip-pm-domain fd8d8000.power-management:power-controller: supply domain not found, using dummy regulator
[    1.294890] platform fdab0000.npu: Adding to iommu group 0
[    1.296374] platform fdac0000.npu: Adding to iommu group 1
[    1.297879] platform fdad0000.npu: Adding to iommu group 2
[    1.299266] platform fdb50000.video-codec: Adding to iommu group 3
[    1.300100] platform fdb50400.vdpu: Adding to iommu group 3
[    1.301218] platform fdb60000.rga: Adding to iommu group 4
[    1.302534] platform fdb70000.rga: Adding to iommu group 5
[    1.303810] platform fdba0000.video-codec: Adding to iommu group 6
[    1.304629] platform fdba0000.jpege-core: Adding to iommu group 6
[    1.305693] platform fdba4000.video-codec: Adding to iommu group 7
[    1.306512] platform fdba4000.jpege-core: Adding to iommu group 7
[    1.307568] platform fdba8000.video-codec: Adding to iommu group 8
[    1.308376] platform fdba8000.jpege-core: Adding to iommu group 8
[    1.309445] platform fdbac000.video-codec: Adding to iommu group 9
[    1.310251] platform fdbac000.jpege-core: Adding to iommu group 9
[    1.311365] platform fdc38000.video-codec: Adding to iommu group 10
[    1.312196] platform fdc38100.rkvdec-core: Adding to iommu group 10
[    1.313501] platform fdc40000.video-codec: Adding to iommu group 11
[    1.314519] rk_iommu fdca0000.iommu: av1d iommu enabled
[    1.315465] platform fdc70000.av1d: Adding to iommu group 12
[    1.316288] platform fdd90000.vop: Adding to iommu group 13
[    1.317924] platform fdb90000.jpegd: Adding to iommu group 14
[    1.319218] platform fdbd0000.rkvenc-core: Adding to iommu group 15
[    1.320615] platform fdbe0000.rkvenc-core: Adding to iommu group 16
[    1.322052] platform fdc48100.rkvdec-core: Adding to iommu group 17
[    1.361632] loop: module loaded
[    1.361955] er_netlink: netlink socket created (protocol 31)
[    1.362456] Initialized event reporting module
[    1.363044] system_heap: orders[0] = 6
[    1.363375] system_heap: orders[1] = 4
[    1.363704] system_heap: orders[2] = 0
[    1.364653] Key type psk registered
[    1.365937] ahci-dwc fe210000.sata: supply ahci not found, using dummy regulator
[    1.366642] ahci-dwc fe210000.sata: supply phy not found, using dummy regulator
[    1.367454] platform fe210000.sata:sata-port@0: supply target not found, using dummy regulator
[    1.368310] ahci-dwc fe210000.sata: PMPn is limited up to 5 ports
[    1.368884] ahci-dwc fe210000.sata: masking port_map 0x1 -> 0x1
[    1.369427] ahci-dwc fe210000.sata: SSS flag set, parallel bus scan disabled
[    1.370051] ahci-dwc fe210000.sata: AHCI vers 0001.0300, 32 command slots, 6 Gbps, platform mode
[    1.370823] ahci-dwc fe210000.sata: 1/1 ports implemented (port mask 0x1)
[    1.371418] ahci-dwc fe210000.sata: flags: ncq sntf stag pm led clo only pmp fbs pio slum part ccc apst 
[    1.372752] scsi host0: ahci-dwc
[    1.373148] ata1: SATA max UDMA/133 mmio [mem 0xfe210000-0xfe210fff] port 0x100 irq 64 lpm-pol 0
[    1.375075] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/regulators/dcdc-reg7
[    1.375948] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs3-null-pins
[    1.376751] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs2-null-pins
[    1.377561] /spi@feb20000/pmic@0: Fixed dependency cycle(s) with /spi@feb20000/pmic@0/dvs1-null-pins
[    1.379546] thunder_xcv, ver 1.0
[    1.379848] thunder_bgx, ver 1.0
[    1.380148] nicpf, ver 1.0
[    1.382539] usbcore: registered new interface driver usb-storage
[    1.384334] mousedev: PS/2 mouse device common for all mice
[    1.384964] i2c_dev: i2c /dev entries driver
[    1.389789] sdhci: Secure Digital Host Controller Interface driver
[    1.390334] sdhci: Copyright(c) Pierre Ossman
[    1.390726] Synopsys Designware Multimedia Card Interface Driver
[    1.391815] sdhci-pltfm: SDHCI platform and OF driver helper
[    1.393394] mmc2: CQHCI version 5.10
[    1.393868] arm-scmi arm-scmi.0.auto: Using scmi_smc_transport
[    1.394383] arm-scmi arm-scmi.0.auto: SCMI max-rx-timeout: 30ms / max-msg-size: 104bytes / max-msg: 20
[    1.395255] scmi_protocol scmi_dev.1: Enabled polling mode TX channel - prot_id:16
[    1.396007] arm-scmi arm-scmi.0.auto: SCMI Notifications - Core Enabled.
[    1.396621] arm-scmi arm-scmi.0.auto: SCMI Protocol v2.0 'rockchip:' Firmware version 0x0
[    1.397372] arm-scmi arm-scmi.0.auto: Enabling SCMI Quirk [quirk_clock_rates_triplet_out_of_spec]
[    1.398958] SMCCC: SOC_ID: ARCH_SOC_ID not implemented, skipping ....
[    1.399738] hid: raw HID events driver (C) Jiri Kosina
[    1.400233] usbcore: registered new interface driver usbhid
[    1.400723] usbhid: USB HID core driver
[    1.403734] hw perfevents: enabled with armv8_cortex_a55 PMU driver, 7 (0,8000003f) counters available
[    1.405690] hw perfevents: enabled with armv8_cortex_a76 PMU driver, 7 (0,8000003f) counters available
[    1.407865] NET: Registered PF_INET6 protocol family
[    1.409117] Segment Routing with IPv6
[    1.409458] In-situ OAM (IOAM) with IPv6
[    1.409836] NET: Registered PF_PACKET protocol family
[    1.410300] bridge: filtering via arp/ip/ip6tables is no longer available by default. Update your scripts to load br_netfilter if you need this.
[    1.411717] 8021q: 802.1Q VLAN Support v1.8
[    1.412126] Key type dns_resolver registered
[    1.416349] registered taskstats version 1
[    1.416794] Loading compiled-in X.509 certificates
[    1.422317] zswap: loaded using pool zstd
[    1.422904] Demotion targets for Node 0: null
[    1.423363] Key type .fscrypt registered
[    1.423711] Key type fscrypt-provisioning registered
[    1.424747] Btrfs loaded, zoned=yes, fsverity=yes
[    1.425216] Key type encrypted registered
[    1.425570] AppArmor: AppArmor sha256 policy hashing enabled
[    1.426900] mmc2: SDHCI controller on fe2e0000.mmc [fe2e0000.mmc] using ADMA
[    1.438070] mmc2: Failed to initialize a non-removable card
[    1.453213] rockchip-dw-pcie a40c00000.pcie: host bridge /pcie@fe180000 ranges:
[    1.454362] rockchip-dw-pcie a40c00000.pcie:       IO 0x00f3100000..0x00f31fffff -> 0x00f3100000
[    1.455137] rockchip-dw-pcie a40c00000.pcie:      MEM 0x00f3200000..0x00f3ffffff -> 0x00f3200000
[    1.455911] rockchip-dw-pcie a40c00000.pcie:      MEM 0x09c0000000..0x09ffffffff -> 0x09c0000000
[    1.456782] rockchip-dw-pcie a40c00000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    1.657145] rockchip-dw-pcie a40c00000.pcie: PCIe Gen.2 x1 link up
[    1.657933] rockchip-dw-pcie a40c00000.pcie: PCI host bridge to bus 0003:30
[    1.658549] pci_bus 0003:30: root bus resource [bus 30-3f]
[    1.659034] pci_bus 0003:30: root bus resource [io  0x0000-0xfffff] (bus address [0xf3100000-0xf31fffff])
[    1.659871] pci_bus 0003:30: root bus resource [mem 0xf3200000-0xf3ffffff]
[    1.660474] pci_bus 0003:30: root bus resource [mem 0x9c0000000-0x9ffffffff]
[    1.661160] pci 0003:30:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    1.661812] pci 0003:30:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    1.662355] pci 0003:30:00.0: PCI bridge to [bus 01-ff]
[    1.662816] pci 0003:30:00.0:   bridge window [io  0x0000-0x0fff]
[    1.663350] pci 0003:30:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    1.663947] pci 0003:30:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    1.664655] pci 0003:30:00.0: supports D1 D2
[    1.665045] pci 0003:30:00.0: PME# supported from D0 D1 D3hot
[    1.666135] pci 0003:30:00.0: Adding to iommu group 18
[    1.671840] pci 0003:30:00.0: Primary bus is hard wired to 0
[    1.672342] pci 0003:30:00.0: bridge configuration invalid ([bus 01-ff]), reconfiguring
[    1.673197] pci 0003:31:00.0: [10ec:8125] type 00 class 0x020000 PCIe Endpoint
[    1.673977] pci 0003:31:00.0: BAR 0: initial BAR value 0x00000000 invalid
[    1.674572] pci 0003:31:00.0: BAR 0 [io  size 0x0100]
[    1.675029] pci 0003:31:00.0: BAR 2 [mem 0x00000000-0x0000ffff 64bit]
[    1.675602] pci 0003:31:00.0: BAR 4 [mem 0x00000000-0x00003fff 64bit]
[    1.676514] pci 0003:31:00.0: supports D1 D2
[    1.676891] pci 0003:31:00.0: PME# supported from D0 D1 D2 D3hot D3cold
[    1.678014] pci 0003:31:00.0: Adding to iommu group 18
[    1.685042] pci 0003:31:00.0: ASPM: default states L0s L1
[    1.685541] pci_bus 0003:31: busn_res: [bus 31-3f] end is updated to 31
[    1.686131] pci 0003:30:00.0: bridge window [mem 0xf3200000-0xf32fffff]: assigned
[    1.686789] pci 0003:30:00.0: ROM [mem 0xf3300000-0xf330ffff pref]: assigned
[    1.687408] pci 0003:30:00.0: bridge window [io  0x1000-0x1fff]: assigned
[    1.688005] pci 0003:31:00.0: BAR 2 [mem 0xf3200000-0xf320ffff 64bit]: assigned
[    1.688674] pci 0003:31:00.0: BAR 4 [mem 0xf3210000-0xf3213fff 64bit]: assigned
[    1.689351] pci 0003:31:00.0: BAR 0 [io  0x1000-0x10ff]: assigned
[    1.689894] pci 0003:30:00.0: PCI bridge to [bus 31]
[    1.690331] pci 0003:30:00.0:   bridge window [io  0x1000-0x1fff]
[    1.690867] pci 0003:30:00.0:   bridge window [mem 0xf3200000-0xf32fffff]
[    1.691463] pci_bus 0003:30: resource 4 [io  0x0000-0xfffff]
[    1.691960] pci_bus 0003:30: resource 5 [mem 0xf3200000-0xf3ffffff]
[    1.692509] pci_bus 0003:30: resource 6 [mem 0x9c0000000-0x9ffffffff]
[    1.693078] pci_bus 0003:31: resource 0 [io  0x1000-0x1fff]
[    1.693568] pci_bus 0003:31: resource 1 [mem 0xf3200000-0xf32fffff]
[    1.695523] pcieport 0003:30:00.0: PME: Signaling with IRQ 86
[    1.696340] pcieport 0003:30:00.0: AER: enabled with IRQ 87
[    1.697604] rockchip-dw-pcie a40800000.pcie: host bridge /pcie@fe170000 ranges:
[    1.698258] rockchip-dw-pcie a40800000.pcie:       IO 0x00f2100000..0x00f21fffff -> 0x00f2100000
[    1.699032] rockchip-dw-pcie a40800000.pcie:      MEM 0x00f2200000..0x00f2ffffff -> 0x00f2200000
[    1.699802] rockchip-dw-pcie a40800000.pcie:      MEM 0x0980000000..0x09bfffffff -> 0x0980000000
[    1.700661] rockchip-dw-pcie a40800000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    1.841151] ata1: SATA link up 6.0 Gbps (SStatus 133 SControl 300)
[    1.843514] ata1.00: ATA-9: ADATA SP920SS, 1.08, max UDMA/133
[    1.844037] ata1.00: 250069679 sectors, multi 0: LBA48 NCQ (depth 32)
[    1.845528] ata1.00: Features: HIPM DIPM
[    1.848221] ata1.00: configured for UDMA/133
[    1.848846] scsi 0:0:0:0: Direct-Access     ATA      ADATA SP920SS    1.08 PQ: 0 ANSI: 5
[    1.850199] sd 0:0:0:0: [sda] 250069679 512-byte logical blocks: (128 GB/119 GiB)
[    1.850905] sd 0:0:0:0: [sda] Write Protect is off
[    1.851406] sd 0:0:0:0: [sda] Write cache: enabled, read cache: enabled, doesn't support DPO or FUA
[    1.852309] sd 0:0:0:0: [sda] Preferred minimum I/O size 512 bytes
[    1.888617] GPT:Primary header thinks Alt. header is not at the end of the disk.
[    1.889295] GPT:13664255 != 250069678
[    1.889627] GPT:Alternate GPT header not at the end of the disk.
[    1.890161] GPT:13664255 != 250069678
[    1.890491] GPT: Use GNU Parted to correct GPT errors.
[    1.890963]  sda: sda1 sda2
[    1.891636] sd 0:0:0:0: [sda] Attached SCSI disk
[    1.901149] rockchip-dw-pcie a40800000.pcie: PCIe Gen.2 x1 link up
[    1.901763] rockchip-dw-pcie a40800000.pcie: PCI host bridge to bus 0002:20
[    1.902377] pci_bus 0002:20: root bus resource [bus 20-2f]
[    1.902862] pci_bus 0002:20: root bus resource [io  0x100000-0x1fffff] (bus address [0xf2100000-0xf21fffff])
[    1.903720] pci_bus 0002:20: root bus resource [mem 0xf2200000-0xf2ffffff]
[    1.904322] pci_bus 0002:20: root bus resource [mem 0x980000000-0x9bfffffff]
[    1.904975] pci 0002:20:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    1.905636] pci 0002:20:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    1.906180] pci 0002:20:00.0: PCI bridge to [bus 01-ff]
[    1.906642] pci 0002:20:00.0:   bridge window [io  0x0000-0x0fff]
[    1.907177] pci 0002:20:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    1.907774] pci 0002:20:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    1.908480] pci 0002:20:00.0: supports D1 D2
[    1.908857] pci 0002:20:00.0: PME# supported from D0 D1 D3hot
[    1.909716] pci 0002:20:00.0: Adding to iommu group 19
[    1.915539] pci 0002:20:00.0: Primary bus is hard wired to 0
[    1.916043] pci 0002:20:00.0: bridge configuration invalid ([bus 01-ff]), reconfiguring
[    1.916890] pci 0002:21:00.0: [10ec:8125] type 00 class 0x020000 PCIe Endpoint
[    1.917676] pci 0002:21:00.0: BAR 0 [io  0x0000-0x00ff]
[    1.918148] pci 0002:21:00.0: BAR 2 [mem 0x00000000-0x0000ffff 64bit]
[    1.918721] pci 0002:21:00.0: BAR 4 [mem 0x00000000-0x00003fff 64bit]
[    1.919633] pci 0002:21:00.0: supports D1 D2
[    1.920009] pci 0002:21:00.0: PME# supported from D0 D1 D2 D3hot D3cold
[    1.921169] pci 0002:21:00.0: Adding to iommu group 19
[    1.933121] pci 0002:21:00.0: ASPM: default states L0s L1
[    1.933626] pci_bus 0002:21: busn_res: [bus 21-2f] end is updated to 21
[    1.934220] pci 0002:20:00.0: bridge window [mem 0xf2200000-0xf22fffff]: assigned
[    1.934878] pci 0002:20:00.0: ROM [mem 0xf2300000-0xf230ffff pref]: assigned
[    1.935496] pci 0002:20:00.0: bridge window [io  0x100000-0x100fff]: assigned
[    1.936124] pci 0002:21:00.0: BAR 2 [mem 0xf2200000-0xf220ffff 64bit]: assigned
[    1.936792] pci 0002:21:00.0: BAR 4 [mem 0xf2210000-0xf2213fff 64bit]: assigned
[    1.937471] pci 0002:21:00.0: BAR 0 [io  0x100000-0x1000ff]: assigned
[    1.938045] pci 0002:20:00.0: PCI bridge to [bus 21]
[    1.938481] pci 0002:20:00.0:   bridge window [io  0x100000-0x100fff]
[    1.939048] pci 0002:20:00.0:   bridge window [mem 0xf2200000-0xf22fffff]
[    1.939645] pci_bus 0002:20: resource 4 [io  0x100000-0x1fffff]
[    1.940165] pci_bus 0002:20: resource 5 [mem 0xf2200000-0xf2ffffff]
[    1.940715] pci_bus 0002:20: resource 6 [mem 0x980000000-0x9bfffffff]
[    1.941284] pci_bus 0002:21: resource 0 [io  0x100000-0x100fff]
[    1.941804] pci_bus 0002:21: resource 1 [mem 0xf2200000-0xf22fffff]
[    1.943739] pcieport 0002:20:00.0: PME: Signaling with IRQ 98
[    1.944572] pcieport 0002:20:00.0: AER: enabled with IRQ 99
[    1.953802] avdd_0v75_s0: Bringing 750000uV into 837500-837500uV
[    1.958757] input: rk805 pwrkey as /devices/platform/feb20000.spi/spi_master/spi2/spi2.0/rk805-pwrkey.3.auto/input/input0
[    1.962749] fan53555-regulator 2-0042: FAN53555 Option[10] Rev[1] Detected!
[    1.963067] fan53555-regulator 0-0042: FAN53555 Option[10] Rev[1] Detected!
[    1.963295] clk: Disabling unused clocks
[    1.963449] ehci-platform fc880000.usb: EHCI Host Controller
[    1.963461] ehci-platform fc800000.usb: EHCI Host Controller
[    1.963515] ehci-platform fc880000.usb: new USB bus registered, assigned bus number 1
[    1.963524] ohci-platform fc8c0000.usb: Generic Platform OHCI controller
[    1.963537] ohci-platform fc840000.usb: Generic Platform OHCI controller
[    1.963537] ohci-platform fc8c0000.usb: new USB bus registered, assigned bus number 2
[    1.963551] ohci-platform fc840000.usb: new USB bus registered, assigned bus number 3
[    1.963588] fan53555-regulator 0-0043: FAN53555 Option[10] Rev[1] Detected!
[    1.963605] ohci-platform fc8c0000.usb: irq 120, io mem 0xfc8c0000
[    1.963617] ohci-platform fc840000.usb: irq 119, io mem 0xfc840000
[    1.963650] ehci-platform fc880000.usb: irq 118, io mem 0xfc880000
[    1.963819] PM: genpd: Disabling unused power domains
[    1.971325] ehci-platform fc800000.usb: new USB bus registered, assigned bus number 4
[    1.971424] ehci-platform fc800000.usb: irq 117, io mem 0xfc800000
[    1.973025] ehci-platform fc880000.usb: USB 2.0 started, EHCI 1.00
[    1.973773] usb usb1: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    1.974515] usb usb1: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    1.975161] usb usb1: Product: EHCI Host Controller
[    1.975598] usb usb1: Manufacturer: Linux 6.18.18-trim ehci_hcd
[    1.976128] usb usb1: SerialNumber: fc880000.usb
[    1.977048] hub 1-0:1.0: USB hub found
[    1.977419] hub 1-0:1.0: 1 port detected
[    1.989135] ehci-platform fc800000.usb: USB 2.0 started, EHCI 1.00
[    1.989861] usb usb4: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    1.990602] usb usb4: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    1.991247] usb usb4: Product: EHCI Host Controller
[    1.991685] usb usb4: Manufacturer: Linux 6.18.18-trim ehci_hcd
[    1.992214] usb usb4: SerialNumber: fc800000.usb
[    1.993093] hub 4-0:1.0: USB hub found
[    1.993468] hub 4-0:1.0: 1 port detected
[    2.021165] usb usb2: New USB device found, idVendor=1d6b, idProduct=0001, bcdDevice= 6.18
[    2.021896] usb usb2: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    2.022530] usb usb2: Product: Generic Platform OHCI controller
[    2.023051] usb usb2: Manufacturer: Linux 6.18.18-trim ohci_hcd
[    2.023570] usb usb2: SerialNumber: fc8c0000.usb
[    2.024341] hub 2-0:1.0: USB hub found
[    2.024695] hub 2-0:1.0: 1 port detected
[    2.025318] usb usb3: New USB device found, idVendor=1d6b, idProduct=0001, bcdDevice= 6.18
[    2.026048] usb usb3: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    2.026683] usb usb3: Product: Generic Platform OHCI controller
[    2.027202] usb usb3: Manufacturer: Linux 6.18.18-trim ohci_hcd
[    2.027720] usb usb3: SerialNumber: fc840000.usb
[    2.028487] hub 3-0:1.0: USB hub found
[    2.028835] hub 3-0:1.0: 1 port detected
[    2.030752] Freeing unused kernel memory: 5568K
[    2.031248] Run /init as init process
[    2.046459] [trim-mounts-hash]'sys'[00000000e0151ea7]'s top mountpoint dentry: sys
[    2.047156] [trim-mounts-hash]dentry 'sys' type: 0
[    2.050011] [trim-mounts-hash]'proc'[0000000076a0f0c6]'s top mountpoint dentry: proc
[    2.050710] [trim-mounts-hash]dentry 'proc' type: 0
[    2.056327] [trim-mounts-hash]'dev'[00000000ccceb765]'s top mountpoint dentry: dev
[    2.057026] [trim-mounts-hash]dentry 'dev' type: 0
[    2.071480] [trim-mounts-hash]'pts'[000000006afa28e8]'s top mountpoint dentry: dev
[    2.072166] [trim-mounts-hash]dentry 'dev' type: 0
[    2.081136] [trim-mounts-hash]'run'[00000000605cd30e]'s top mountpoint dentry: run
[    2.081822] [trim-mounts-hash]dentry 'run' type: 0
[    2.510073] rtc-hym8563 6-0051: could not init device, -6
[    2.518273] r8169 0003:31:00.0: enabling device (0000 -> 0003)
[    2.541815] rockchip-dw-pcie a40000000.pcie: host bridge /pcie@fe150000 ranges:
[    2.542495] rockchip-dw-pcie a40000000.pcie:       IO 0x00f0100000..0x00f01fffff -> 0x00f0100000
[    2.543275] rockchip-dw-pcie a40000000.pcie:      MEM 0x00f0200000..0x00f0ffffff -> 0x00f0200000
[    2.544046] rockchip-dw-pcie a40000000.pcie:      MEM 0x0900000000..0x093fffffff -> 0x0900000000
[    2.552771] rockchip-dw-pcie a40000000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    2.554403] rk_gmac-dwmac fe1c0000.ethernet: IRQ sfty not found
[    2.555055] rk_gmac-dwmac fe1c0000.ethernet: supply phy not found, using dummy regulator
[    2.555842] rk_gmac-dwmac fe1c0000.ethernet: clock input or output? (output).
[    2.558702] rk_gmac-dwmac fe1c0000.ethernet: TX delay(0x42).
[    2.559209] rk_gmac-dwmac fe1c0000.ethernet: Can not read property: rx_delay.
[    2.559834] rk_gmac-dwmac fe1c0000.ethernet: set rx_delay to 0x10
[    2.560382] rk_gmac-dwmac fe1c0000.ethernet: integrated PHY? (no).
[    2.565950] rk_gmac-dwmac fe1c0000.ethernet: init for RGMII_RXID
[    2.566660] rk_gmac-dwmac fe1c0000.ethernet: User ID: 0x30, Synopsys ID: 0x51
[    2.567311] rk_gmac-dwmac fe1c0000.ethernet: 	DWMAC4/5
[    2.567775] rk_gmac-dwmac fe1c0000.ethernet: DMA HW capability register supported
[    2.568442] rk_gmac-dwmac fe1c0000.ethernet: RX Checksum Offload Engine supported
[    2.569160] rk_gmac-dwmac fe1c0000.ethernet: TX Checksum insertion supported
[    2.569792] rk_gmac-dwmac fe1c0000.ethernet: Wake-Up On Lan supported
[    2.574348] rk_gmac-dwmac fe1c0000.ethernet: TSO supported
[    2.574841] rk_gmac-dwmac fe1c0000.ethernet: Enable RX Mitigation via HW Watchdog Timer
[    2.575544] rk_gmac-dwmac fe1c0000.ethernet: Enabled L3L4 Flow TC (entries=2)
[    2.576170] rk_gmac-dwmac fe1c0000.ethernet: Enabled RFS Flow TC (entries=10)
[    2.576795] rk_gmac-dwmac fe1c0000.ethernet: TSO feature enabled
[    2.577344] rk_gmac-dwmac fe1c0000.ethernet: SPH feature enabled
[    2.577870] rk_gmac-dwmac fe1c0000.ethernet: Using 32/32 bits DMA host/device width
[    2.619863] r8169 0003:31:00.0 eth0: RTL8125B, 52:be:5f:83:9e:21, XID 641, IRQ 123
[    2.620564] r8169 0003:31:00.0 eth0: jumbo features [frames: 16362 bytes, tx checksumming: ko]
[    2.621570] r8169 0002:21:00.0: enabling device (0000 -> 0003)
[    2.627562] rockchip-drm display-subsystem: bound fdd90000.vop (ops vop2_component_ops [rockchipdrm])
[    2.629851] dwhdmiqp-rockchip fde80000.hdmi: registered DesignWare HDMI QP I2C bus driver
[    2.630686] rockchip-drm display-subsystem: bound fde80000.hdmi (ops dw_hdmi_qp_rockchip_ops [rockchipdrm])
[    2.634356] [drm] Initialized rockchip 1.0.0 for display-subsystem on minor 0
[    2.635067] r8169 0002:21:00.0 eth1: RTL8125B, fa:3d:4b:e9:ae:17, XID 641, IRQ 129
[    2.635496] rockchip-drm display-subsystem: [drm] Cannot find any crtc or sizes
[    2.635754] r8169 0002:21:00.0 eth1: jumbo features [frames: 16362 bytes, tx checksumming: ko]
[    2.636709] rockchip-drm display-subsystem: [drm] Cannot find any crtc or sizes
[    2.734457] rk_gmac-dwmac fe1b0000.ethernet: IRQ sfty not found
[    2.735181] rk_gmac-dwmac fe1b0000.ethernet: supply phy not found, using dummy regulator
[    2.735957] rk_gmac-dwmac fe1b0000.ethernet: clock input or output? (output).
[    2.736582] rk_gmac-dwmac fe1b0000.ethernet: TX delay(0x44).
[    2.737096] rk_gmac-dwmac fe1b0000.ethernet: Can not read property: rx_delay.
[    2.737720] rk_gmac-dwmac fe1b0000.ethernet: set rx_delay to 0x10
[    2.738257] rk_gmac-dwmac fe1b0000.ethernet: integrated PHY? (no).
[    2.743810] rk_gmac-dwmac fe1b0000.ethernet: init for RGMII_RXID
[    2.744592] rk_gmac-dwmac fe1b0000.ethernet: User ID: 0x30, Synopsys ID: 0x51
[    2.745227] rk_gmac-dwmac fe1b0000.ethernet: 	DWMAC4/5
[    2.745680] rk_gmac-dwmac fe1b0000.ethernet: DMA HW capability register supported
[    2.746335] rk_gmac-dwmac fe1b0000.ethernet: RX Checksum Offload Engine supported
[    2.746989] rk_gmac-dwmac fe1b0000.ethernet: TX Checksum insertion supported
[    2.747605] rk_gmac-dwmac fe1b0000.ethernet: Wake-Up On Lan supported
[    2.748200] rk_gmac-dwmac fe1b0000.ethernet: TSO supported
[    2.748682] rk_gmac-dwmac fe1b0000.ethernet: Enable RX Mitigation via HW Watchdog Timer
[    2.749389] rk_gmac-dwmac fe1b0000.ethernet: Enabled L3L4 Flow TC (entries=2)
[    2.750014] rk_gmac-dwmac fe1b0000.ethernet: Enabled RFS Flow TC (entries=10)
[    2.750639] rk_gmac-dwmac fe1b0000.ethernet: TSO feature enabled
[    2.751165] rk_gmac-dwmac fe1b0000.ethernet: SPH feature enabled
[    2.751692] rk_gmac-dwmac fe1b0000.ethernet: Using 32/32 bits DMA host/device width
[    2.861151] rockchip-dw-pcie a40000000.pcie: PCIe Gen.2 x2 link up
[    2.861780] rockchip-dw-pcie a40000000.pcie: PCI host bridge to bus 0000:00
[    2.862395] pci_bus 0000:00: root bus resource [bus 00-0f]
[    2.862880] pci_bus 0000:00: root bus resource [io  0x200000-0x2fffff] (bus address [0xf0100000-0xf01fffff])
[    2.863739] pci_bus 0000:00: root bus resource [mem 0xf0200000-0xf0ffffff]
[    2.864342] pci_bus 0000:00: root bus resource [mem 0x900000000-0x93fffffff]
[    2.864972] pci 0000:00:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    2.865634] pci 0000:00:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    2.866178] pci 0000:00:00.0: PCI bridge to [bus 01-ff]
[    2.866639] pci 0000:00:00.0:   bridge window [io  0x0000-0x0fff]
[    2.867175] pci 0000:00:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    2.867772] pci 0000:00:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    2.868482] pci 0000:00:00.0: supports D1 D2
[    2.868858] pci 0000:00:00.0: PME# supported from D0 D1 D3hot
[    2.870113] pci 0000:00:00.0: Adding to iommu group 20
[    2.875998] pci_bus 0000:01: busn_res: can not insert [bus 01-ff] under [bus 00-0f] (conflicts with (null) [bus 00-0f])
[    2.877041] pci 0000:01:00.0: [9000:1003] type 00 class 0x058000 PCIe Endpoint
[    2.877828] pci 0000:01:00.0: BAR 0 [mem 0x00000000-0x000fffff 64bit]
[    2.878399] pci 0000:01:00.0: BAR 2 [mem 0x00000000-0x000fffff]
[    2.878922] pci 0000:01:00.0: BAR 3 [mem 0x00000000-0x0000ffff]
[    2.879445] pci 0000:01:00.0: BAR 4 [mem 0x00000000-0x00000fff]
[    2.879969] pci 0000:01:00.0: BAR 5 [mem 0x00000000-0x0000ffff]
[    2.880492] pci 0000:01:00.0: ROM [mem 0x00000000-0x007fffff pref]
[    2.881226] pci 0000:01:00.0: supports D1
[    2.881580] pci 0000:01:00.0: PME# supported from D0 D1 D3hot
[    2.882189] pci 0000:01:00.0: 8.000 Gb/s available PCIe bandwidth, limited by 5.0 GT/s PCIe x2 link at 0000:00:00.0 (capable of 16.000 Gb/s with 5.0 GT/s PCIe x4 link)
[    2.883787] pci 0000:01:00.0: Adding to iommu group 20
[    2.884309] pci 0000:00:00.0: bridge window [mem 0x00100000-0x003fffff] to [bus 01-ff] add_size 800000 add_align 800000
[    2.885272] pci 0000:00:00.0: bridge window [mem size 0x00b00000]: can't assign; no space
[    2.885989] pci 0000:00:00.0: bridge window [mem size 0x00b00000]: failed to assign
[    2.886660] pci 0000:00:00.0: ROM [mem 0xf0200000-0xf020ffff pref]: assigned
[    2.887280] pci 0000:00:00.0: ROM [mem 0xf0200000-0xf020ffff pref]: releasing
[    2.887904] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: assigned
[    2.888561] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: failed to expand by 0x800000
[    2.889374] pci 0000:00:00.0: bridge window [mem 0xf0200000-0xf04fffff]: failed to add optional 800000
[    2.890194] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: can't assign; no space
[    2.890872] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: failed to assign
[    2.891506] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: assigned
[    2.892176] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: assigned
[    2.892779] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: assigned
[    2.893387] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: assigned
[    2.893990] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: assigned
[    2.894593] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: releasing
[    2.895242] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: releasing
[    2.895844] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: releasing
[    2.896446] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: releasing
[    2.897052] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: releasing
[    2.897656] pci 0000:01:00.0: BAR 0 [mem 0xf0200000-0xf02fffff 64bit]: assigned
[    2.898328] pci 0000:01:00.0: BAR 2 [mem 0xf0300000-0xf03fffff]: assigned
[    2.898340] pci 0000:01:00.0: BAR 3 [mem 0xf0400000-0xf040ffff]: assigned
[    2.898351] pci 0000:01:00.0: BAR 5 [mem 0xf0410000-0xf041ffff]: assigned
[    2.898362] pci 0000:01:00.0: BAR 4 [mem 0xf0420000-0xf0420fff]: assigned
[    2.898374] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: can't assign; no space
[    2.898377] pci 0000:01:00.0: ROM [mem size 0x00800000 pref]: failed to assign
[    2.898382] pci 0000:00:00.0: PCI bridge to [bus 01-ff]
[    2.902521] pci 0000:00:00.0:   bridge window [mem 0xf0200000-0xf04fffff]
[    2.902527] pci_bus 0000:00: Some PCI device resources are unassigned, try booting with pci=realloc
[    2.902530] pci_bus 0000:00: resource 4 [io  0x200000-0x2fffff]
[    2.902534] pci_bus 0000:00: resource 5 [mem 0xf0200000-0xf0ffffff]
[    2.902538] pci_bus 0000:00: resource 6 [mem 0x900000000-0x93fffffff]
[    2.902541] pci_bus 0000:01: resource 1 [mem 0xf0200000-0xf04fffff]
[    2.904170] pcieport 0000:00:00.0: PME: Signaling with IRQ 141
[    2.907051] pcieport 0000:00:00.0: AER: enabled with IRQ 142
[    2.908299] rockchip-dw-pcie a40400000.pcie: host bridge /pcie@fe160000 ranges:
[    2.908954] rockchip-dw-pcie a40400000.pcie:       IO 0x00f1100000..0x00f11fffff -> 0x00f1100000
[    2.909746] rockchip-dw-pcie a40400000.pcie:      MEM 0x00f1200000..0x00f1ffffff -> 0x00f1200000
[    2.910516] rockchip-dw-pcie a40400000.pcie:      MEM 0x0940000000..0x097fffffff -> 0x0940000000
[    2.919279] rockchip-dw-pcie a40400000.pcie: iATU: unroll T, 8 ob, 8 ib, align 64K, limit 8G
[    2.967572] async_tx: api initialized (async)
[    3.030629] dw-apb-uart feb50000.serial: forbid DMA for kernel console







































































done.
Begin: Mounting root file system ... Begin: Running /scripts/local-top ... done.
Begin: Running /scripts/local-premount ... Scanning for Btrfs filesystems
registered: /dev/sda2
done.
Warning: fsck not present, so skipping root file system
[    3.134071] BTRFS: device label ROOTFS devid 1 transid 11 /dev/sda2 (8:2) scanned by mount (242)
[    3.135545] BTRFS info (device sda2): first mount of filesystem 0bd3196d-bf62-4799-9faa-b3bcd8288112
[    3.136391] BTRFS info (device sda2): using crc32c (crc32c-lib) checksum algorithm
[    3.147355] BTRFS info (device sda2): enabling ssd optimizations
[    3.147899] BTRFS info (device sda2): turning on async discard
[    3.148420] BTRFS info (device sda2): enabling free space tree
[    3.148941] BTRFS info (device sda2): use zstd compression, level 1
[    3.150527] [trim-mounts-hash]'root'[000000005ea14dc4]'s top mountpoint dentry: root
[    3.151222] [trim-mounts-hash]dentry 'root' type: 0
done.
Begin: Running /scripts/local-bottom ... done.
Begin: Running /scripts/init-bottom ... done.
[    3.221154] rockchip-dw-pcie a40400000.pcie: PCIe Gen.3 x2 link up
[    3.221798] rockchip-dw-pcie a40400000.pcie: PCI host bridge to bus 0001:10
[    3.222412] pci_bus 0001:10: root bus resource [bus 10-1f]
[    3.222898] pci_bus 0001:10: root bus resource [io  0x300000-0x3fffff] (bus address [0xf1100000-0xf11fffff])
[    3.223758] pci_bus 0001:10: root bus resource [mem 0xf1200000-0xf1ffffff]
[    3.224360] pci_bus 0001:10: root bus resource [mem 0x940000000-0x97fffffff]
[    3.224991] pci 0001:10:00.0: [1d87:3588] type 01 class 0x060400 PCIe Root Port
[    3.225655] pci 0001:10:00.0: ROM [mem 0x00000000-0x0000ffff pref]
[    3.226200] pci 0001:10:00.0: PCI bridge to [bus 01-ff]
[    3.226662] pci 0001:10:00.0:   bridge window [io  0x0000-0x0fff]
[    3.227197] pci 0001:10:00.0:   bridge window [mem 0x00000000-0x000fffff]
[    3.227794] pci 0001:10:00.0:   bridge window [mem 0x00000000-0x000fffff 64bit pref]
[    3.228499] pci 0001:10:00.0: supports D1 D2
[    3.228876] pci 0001:10:00.0: PME# supported from D0 D1 D3hot
[    3.229948] pci 0001:10:00.0: Adding to iommu group 21
[    3.237774] pci 0001:10:00.0: Primary bus is hard wired to 0
[    3.238278] pci 0001:10:00.0: bridge configuration invalid ([bus 01-ff]), reconfiguring
[    3.239079] pci 0001:11:00.0: [1e4b:1202] type 00 class 0x010802 PCIe Endpoint
[    3.239830] pci 0001:11:00.0: BAR 0 [mem 0x00000000-0x00003fff 64bit]
[    3.240687] pci 0001:11:00.0: PME# supported from D0 D3hot D3cold
[    3.241430] pci 0001:11:00.0: 15.752 Gb/s available PCIe bandwidth, limited by 8.0 GT/s PCIe x2 link at 0001:10:00.0 (capable of 31.504 Gb/s with 8.0 GT/s PCIe x4 link)
[    3.243049] pci 0001:11:00.0: Adding to iommu group 21
[    3.253099] pci 0001:11:00.0: ASPM: default states L1
[    3.253566] pci_bus 0001:11: busn_res: [bus 11-1f] end is updated to 11
[    3.254159] pci 0001:10:00.0: bridge window [mem 0xf1200000-0xf12fffff]: assigned
[    3.254817] pci 0001:10:00.0: ROM [mem 0xf1300000-0xf130ffff pref]: assigned
[    3.255438] pci 0001:11:00.0: BAR 0 [mem 0xf1200000-0xf1203fff 64bit]: assigned
[    3.256101] pci 0001:10:00.0: PCI bridge to [bus 11]
[    3.256539] pci 0001:10:00.0:   bridge window [mem 0xf1200000-0xf12fffff]
[    3.257146] pci_bus 0001:10: resource 4 [io  0x300000-0x3fffff]
[    3.257667] pci_bus 0001:10: resource 5 [mem 0xf1200000-0xf1ffffff]
[    3.258217] pci_bus 0001:10: resource 6 [mem 0x940000000-0x97fffffff]
[    3.258782] pci_bus 0001:11: resource 1 [mem 0xf1200000-0xf12fffff]
[    3.260816] pcieport 0001:10:00.0: PME: Signaling with IRQ 153
[    3.261851] pcieport 0001:10:00.0: AER: enabled with IRQ 154
[    3.263223] nvme nvme0: pci function 0001:11:00.0
[    3.263663] nvme 0001:11:00.0: enabling device (0000 -> 0002)
[    3.270363] hwmon hwmon7: temp1_input not attached to any thermal zone
[    3.271082] hwmon hwmon7: temp2_input not attached to any thermal zone
[    3.271797] hwmon hwmon7: temp3_input not attached to any thermal zone
[    3.273916] nvme nvme0: allocated 8 MiB host memory buffer (1 segment).
[    3.279035] nvme nvme0: 8/0/0 default/read/poll queues
[    3.279513] xhci-hcd xhci-hcd.5.auto: xHCI Host Controller
[    3.279524] xhci-hcd xhci-hcd.5.auto: new USB bus registered, assigned bus number 5
[    3.280775] xhci-hcd xhci-hcd.5.auto: hcc params 0x0220fe64 hci version 0x110 quirks 0x0000808002000010
[    3.281403] nvme nvme0: Ignoring bogus Namespace Identifiers
[    3.281637] xhci-hcd xhci-hcd.5.auto: irq 164, io mem 0xfc000000
[    3.282706] xhci-hcd xhci-hcd.5.auto: xHCI Host Controller
[    3.283191] xhci-hcd xhci-hcd.5.auto: new USB bus registered, assigned bus number 6
[    3.283864] xhci-hcd xhci-hcd.5.auto: Host supports USB 3.0 SuperSpeed
[    3.284509] usb usb5: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    3.284920]  nvme0n1: p1 p2 p3
[    3.285336] usb usb5: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    3.286153] usb usb5: Product: xHCI Host Controller
[    3.286581] usb usb5: Manufacturer: Linux 6.18.18-trim xhci-hcd
[    3.287100] usb usb5: SerialNumber: xhci-hcd.5.auto
[    3.287805] hub 5-0:1.0: USB hub found
[    3.288149] hub 5-0:1.0: 1 port detected
[    3.288641] usb usb6: We don't know the algorithms for LPM for this host, disabling LPM.
[    3.289402] usb usb6: New USB device found, idVendor=1d6b, idProduct=0003, bcdDevice= 6.18
[    3.290128] usb usb6: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    3.290762] usb usb6: Product: xHCI Host Controller
[    3.291191] usb usb6: Manufacturer: Linux 6.18.18-trim xhci-hcd
[    3.291710] usb usb6: SerialNumber: xhci-hcd.5.auto
[    3.292594] hub 6-0:1.0: USB hub found
[    3.292945] hub 6-0:1.0: 1 port detected
[    3.309294] xhci-hcd xhci-hcd.6.auto: xHCI Host Controller
[    3.309793] xhci-hcd xhci-hcd.6.auto: new USB bus registered, assigned bus number 7
[    3.310563] xhci-hcd xhci-hcd.6.auto: hcc params 0x0220fe64 hci version 0x110 quirks 0x0000808002000010
[    3.311410] xhci-hcd xhci-hcd.6.auto: irq 165, io mem 0xfc400000
[    3.312014] xhci-hcd xhci-hcd.6.auto: xHCI Host Controller
[    3.312498] xhci-hcd xhci-hcd.6.auto: new USB bus registered, assigned bus number 8
[    3.313251] xhci-hcd xhci-hcd.6.auto: Host supports USB 3.0 SuperSpeed
[    3.313886] usb usb7: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.18
[    3.314611] usb usb7: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    3.315245] usb usb7: Product: xHCI Host Controller
[    3.315675] usb usb7: Manufacturer: Linux 6.18.18-trim xhci-hcd
[    3.316193] usb usb7: SerialNumber: xhci-hcd.6.auto
[    3.316945] hub 7-0:1.0: USB hub found
[    3.317298] hub 7-0:1.0: 1 port detected
[    3.317780] usb usb8: We don't know the algorithms for LPM for this host, disabling LPM.
[    3.318530] usb usb8: New USB device found, idVendor=1d6b, idProduct=0003, bcdDevice= 6.18
[    3.319255] usb usb8: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    3.319886] usb usb8: Product: xHCI Host Controller
[    3.320315] usb usb8: Manufacturer: Linux 6.18.18-trim xhci-hcd
[    3.320834] usb usb8: SerialNumber: xhci-hcd.6.auto
[    3.321535] hub 8-0:1.0: USB hub found
[    3.321877] hub 8-0:1.0: 1 port detected
[    3.391580] [trim-mounts-hash]'security'[00000000f9ff016d]'s top mountpoint dentry: sys
[    3.392294] [trim-mounts-hash]dentry 'sys' type: 0
[    3.392938] [trim-mounts-hash]'/'[000000004539235b]'s top mountpoint dentry: proc
[    3.393621] [trim-mounts-hash]dentry 'proc' type: 0
[    3.396253] systemd[1]: System time before build time, advancing clock.
[    3.414671] systemd[1]: Inserted module 'autofs4'
[    3.416235] [trim-mounts-hash]'shm'[0000000090c9b106]'s top mountpoint dentry: dev
[    3.416906] [trim-mounts-hash]dentry 'dev' type: 0
[    3.417435] [trim-mounts-hash]'lock'[00000000ec2dcf80]'s top mountpoint dentry: run
[    3.418106] [trim-mounts-hash]dentry 'run' type: 0
[    3.437284] [trim-mounts-hash]'cgroup'[000000000dafad99]'s top mountpoint dentry: sys
[    3.437977] [trim-mounts-hash]dentry 'sys' type: 0
[    3.438562] [trim-mounts-hash]'pstore'[00000000fd449e28]'s top mountpoint dentry: sys
[    3.439250] [trim-mounts-hash]dentry 'sys' type: 0
[    3.454056] [trim-mounts-hash]'bpf'[000000007ff159a5]'s top mountpoint dentry: sys
[    3.454730] [trim-mounts-hash]dentry 'sys' type: 0
[    3.456829] systemd[1]: systemd 252.39-1~deb12u1 running in system mode (+PAM +AUDIT +SELINUX +APPARMOR +IMA +SMACK +SECCOMP +GCRYPT -GNUTLS +OPENSSL +ACL +BLKID +CURL +ELFUTILS +FIDO2 +IDN2 -IDN +IPTC +KMOD +LIBCRYPTSETUP +LIBFDISK +PCRE2 -PWQUALITY +P11KIT +QRENCODE +TPM2 +BZIP2 +LZ4 +XZ +ZLIB +ZSTD -BPF_FRAMEWORK -XKBCOMMON +UTMP +SYSVINIT default-hierarchy=unified)
[    3.459708] systemd[1]: Detected architecture arm64.

Welcome to Debian GNU/Linux 12 (bookworm)!

[    3.462736] systemd[1]: Hostname set to <fnnas>.
[    3.655976] systemd[1]: Configuration file /etc/systemd/system/webdav.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.657666] systemd[1]: Configuration file /etc/systemd/system/usersrv.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.659293] systemd[1]: Configuration file /etc/systemd/system/upnp.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.660880] systemd[1]: Configuration file /etc/systemd/system/trim_upload.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.662549] systemd[1]: Configuration file /etc/systemd/system/trim_trashbind.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.664234] systemd[1]: Configuration file /etc/systemd/system/trim_tfa.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.665932] systemd[1]: Configuration file /etc/systemd/system/trim_sharelink.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.667811] systemd[1]: Configuration file /etc/systemd/system/trim_sac.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.669540] systemd[1]: Configuration file /etc/systemd/system/trim_raid_check.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.671271] systemd[1]: Configuration file /etc/systemd/system/trim_nginx.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.673012] systemd[1]: Configuration file /etc/systemd/system/trim_main.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.674681] systemd[1]: Configuration file /etc/systemd/system/trim_license.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.676434] systemd[1]: Configuration file /etc/systemd/system/trim_init.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.678079] systemd[1]: Configuration file /etc/systemd/system/trim_http_cgi.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.679743] systemd[1]: Configuration file /etc/systemd/system/trim_file_monitor.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.681483] systemd[1]: Configuration file /etc/systemd/system/trim_diskpowerd.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.683169] systemd[1]: Configuration file /etc/systemd/system/trim_connect.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.685008] systemd[1]: Configuration file /etc/systemd/system/trim_app_center.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.694184] systemd[1]: Configuration file /etc/systemd/system/system_startup.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.695854] systemd[1]: Configuration file /etc/systemd/system/system_shutdown.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.717396] systemd[1]: Configuration file /etc/systemd/system/sysrestore.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.719127] systemd[1]: Configuration file /etc/systemd/system/sysinfo_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.721832] systemd[1]: Configuration file /etc/systemd/system/smbftpd.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.724433] systemd[1]: Configuration file /etc/systemd/system/show_startup_info.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.726137] systemd[1]: Configuration file /etc/systemd/system/share_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.727810] systemd[1]: Configuration file /etc/systemd/system/security_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.730757] systemd[1]: Configuration file /etc/systemd/system/rpc_broker.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.732386] systemd[1]: Configuration file /etc/systemd/system/resmon_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.744505] systemd[1]: Configuration file /etc/systemd/system/network_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.746298] systemd[1]: Configuration file /etc/systemd/system/multiple-downloads.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.748168] systemd[1]: Configuration file /etc/systemd/system/minidlna.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.750003] systemd[1]: Configuration file /etc/systemd/system/mediasrv.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.761022] systemd[1]: Configuration file /etc/systemd/system/imagesrv.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.769425] systemd[1]: Configuration file /etc/systemd/system/finder_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.771103] systemd[1]: Configuration file /etc/systemd/system/filestor_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.772836] systemd[1]: Configuration file /etc/systemd/system/eventlogger_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.775040] systemd[1]: Configuration file /etc/systemd/system/dsmgr.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.776947] systemd[1]: Configuration file /etc/systemd/system/dockermgr.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.778656] systemd[1]: Configuration file /etc/systemd/system/docker.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.780484] systemd[1]: Configuration file /etc/systemd/system/dlcenter.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.784046] systemd[1]: Configuration file /etc/systemd/system/cloud_storage_dav.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.785867] systemd[1]: Configuration file /etc/systemd/system/backup_service.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.787607] systemd[1]: Configuration file /etc/systemd/system/avahi.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.790680] systemd[1]: Configuration file /etc/systemd/system/auto_thumbnailer.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.792400] systemd[1]: Configuration file /etc/systemd/system/ai_manager.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.794114] systemd[1]: Configuration file /etc/systemd/system/accountsrv.service is marked executable. Please remove executable permission bits. Proceeding anyway.
[    3.858898] systemd[1]: Queued start job for default target graphical.target.
[    3.879508] systemd[1]: Created slice machine.slice - Virtual Machine and Container Slice.
[  OK  ] Created slice machine.slic…rtual Machine and Container Slice.
[    3.881955] systemd[1]: Created slice system-getty.slice - Slice /system/getty.
[  OK  ] Created slice system-getty.slice - Slice /system/getty.
[    3.883677] systemd[1]: Created slice system-modprobe.slice - Slice /system/modprobe.
[  OK  ] Created slice system-modpr…lice - Slice /system/modprobe.
[    3.885376] systemd[1]: Created slice system-postgresql.slice - Slice /system/postgresql.
[  OK  ] Created slice system-postg…ce - Slice /system/postgresql.
[    3.887087] systemd[1]: Created slice system-serial\x2dgetty.slice - Slice /system/serial-getty.
[  OK  ] Created slice system-seria… - Slice /system/serial-getty.
[    3.888867] systemd[1]: Created slice system-systemd\x2dfsck.slice - Slice /system/systemd-fsck.
[  OK  ] Created slice system-syste… -[    3.890335] systemd[1]: Created slice user.slice - User and Session Slice.
 Slice /system/systemd-fsck.
[    3.891176] systemd[1]: Started systemd-ask-password-wall.path - Forward Password Requests to Wall Directory Watch.
[  OK  ] Created slice user.slice - User[    3.892572] [trim-mounts-hash]'binfmt_misc'[00000000ef271996]'s top mountpoint dentry: proc
[    3.893417] [trim-mounts-hash]dentry 'proc' type: 0
 and Session Slice.
[  OK  ] Started syst[    3.893889] systemd[1]: Set up automount proc-sys-fs-binfmt_misc.automount - Arbitrary Executable File Formats File System Automount Point.
emd-ask-passwo… Requests to Wall Directory Watch.
[    3.895534] systemd[1]: Expecting device dev-disk-by\x2duuid-31a92a6c\x2d7bab\x2d4b6e\x2db65b\x2d3fea6fb7399d.device - /dev/disk/by-uuid/31a92a6c-7bab-4b6e-b65b-3fea6fb7399d...
[    3.897341] systemd[1]: Expecting device dev-ttyAMA0.device - /dev/ttyAMA0...
[  OK  ] Set up automount proc-sys-…rmats [    3.898135] systemd[1]: Expecting device dev-ttyS2.device - /dev/ttyS2...
File System Automount Point.
[    3.899309] systemd[1]: Reached target integritysetup.target - Local Integrity Protected Volumes.
         Expecting device dev-disk-…a6c-7bab-4b6e-b65[    3.900393] systemd[1]: Reached target nss-lookup.target - Host and Network Name Lookups.
b-3fea6fb7399d...
         Expecting device dev-ttyA[    3.901725] systemd[1]: Reached target slices.target - Slice Units.
MA0.device - /dev/ttyAMA0...
         Expecting device     3.902566] systemd[1]: Reached target swap.target - Swaps.
0;1;39mdev-ttyS2.device - /dev/ttyS2...
[  OK      3.903578] systemd[1]: Reached target veritysetup.target - Local Verity Protected Volumes.
m] Reached target integrityse…Local Integrity Protect[    3.904811] systemd[1]: Reached target virt-guest-shutdown.target - Libvirt guests shutdown.
ed Volumes.
[  OK  ] Reached target nss-l[    3.906409] systemd[1]: Listening on dm-event.socket - Device-mapper event daemon FIFOs.
ookup.…m - Host and Network Name Lookups.
[  OK      3.907588] systemd[1]: Listening on lvm2-lvmpolld.socket - LVM2 poll daemon socket.
m] Reached target slices.target - Slice Units.
[  OK  ] Reached target swap.target - Swaps.
[  OK  ] Reached target veritysetup… - Local Verity Protected Volumes.
[  OK  ] Reached target virt-guest-…get - Libvirt guests shutdown.
[  OK  ] Listening on dm-event.sock… Device-mapper event daemon FIFOs.
[  OK  ] Listening on lvm2-lvmpolld…ket - LVM2 poll daemon socket.
[    3.919759] systemd[1]: Listening on rpcbind.socket - RPCbind Server Activation Socket.
[  OK  ] Listening on rpcbind.socke… RPCbind Server Activation Socket.
[    3.921337] systemd[1]: Listening on syslog.socket - Syslog Socket.
[  OK  ] Listening on syslog.socket - Sy[    3.922353] systemd[1]: Listening on systemd-fsckd.socket - fsck to fsckd communication Socket.
slog Socket.
[    3.923714] systemd[1]: Listening on systemd-initctl.socket - initctl Compatibility Named Pipe.
[  OK  ] Listening on systemd-fsckd…sck to fsckd communication Socket.
[  OK  ] Listening on systemd-initc… initctl Compatibility Named Pipe.
[    3.925750] systemd[1]: Listening on systemd-journald-audit.socket - Journal Audit Socket.
[  OK  ] Listening on systemd-journ…socket[    3.926981] systemd[1]: Listening on systemd-journald-dev-log.socket - Journal Socket (/dev/log).
 - Journal Audit Socket.
[  OK  ] Listening on systemd-journ…t [    3.928545] systemd[1]: Listening on systemd-journald.socket - Journal Socket.
- Journal Socket (/dev/log).
[  OK  ] Listening on systemd-journald.socket - Journal Socket.
[    3.930763] systemd[1]: Listening on systemd-udevd-control.socket - udev Control Socket.
[  OK  ] Listening on systemd-udevd….socke[    3.931699] systemd[1]: Listening on systemd-udevd-kernel.socket - udev Kernel Socket.
t - udev Control Socket.
[  OK  ] Listening on systemd-udevd…l.socket - udev Kernel Socket.
[    3.934775] systemd[1]: Mounting dev-hugepages.mount - Huge Pages File System...
         Mounting dev-hugepages.mount - Huge Pages File System...
[    3.937295] systemd[1]: Mounting dev-mqueue.mount - POSIX Message Queue File System...
         Mounting dev-mqueue.mountproc-fs-nfsd.moun…- NFSD configuration filesystem...
[    3.943127] [trim-mounts-hash]'mqueue'[0000000025b75076]'s top mountpoint dentry: dev
[    3.943596] systemd[1]: Mounting sys-kernel-debug.mount - Kernel Debug File System...
[    3.943834] [trim-mounts-hash]dentry 'dev' type: 0
         Mounting sys-kernel-debug.… - Kernel Debug File System...
[    3.946852] systemd[1]: Mounting sys-kernel-tracing.mount - Kernel Trace File System...
[    3.947491] [trim-mounts-hash]'debug'[000000004a7dd595]'s top mountpoint dentry: sys
[    3.948245] [trim-mounts-hash]dentry 'sys' type: 0
         Mounting sys-kernel-tracin… - Kernel Tra[    3.948988] systemd[1]: auth-rpcgss-module.service - Kernel Module supporting RPCSEC_GSS was skipped because of an unmet condition check (ConditionPathExists=/etc/krb5.keytab).
ce File System...
[    3.950989] systemd[1]: Finished blk-availability.service - Availability of block devices.
[  OK  ] Finished blk-availability.…m - Availability of block devices.
[    3.952417] [trim-mounts-hash]'tracing'[0000000082353397]'s top mountpoint dentry: sys
[    3.953369] [trim-mounts-hash]dentry 'sys' type: 0
[    3.955347] systemd[1]: Starting keyboard-setup.service - Set the console keyboard layout...
         Starting keyboard-setup.se…Set the console keyboard layout...
[    3.958547] systemd[1]: Starting kmod-static-nodes.service - Create List of Static Device Nodes...
         Starting kmod-static-nodes…ate List of Static Device Nodes...
[    3.961691] systemd[1]: Starting lvm2-monitor.service - Monitoring of LVM2 mirrors, snapshots etc. using dmeventd or progress polling...
         Starting lvm2-monitor.serv…ng dmeventd or progress polling...
[    3.965103] systemd[1]: Starting modprobe@configfs.service - Load Kernel Module configfs...
         Starting modprobe@configfs…m - Load Kernel Module configfs...
[    3.968013] systemd[1]: Starting modprobe@dm_mod.service - Load Kernel Module dm_mod...
         Starting modprobe@dm_mod.s…[0m - Load Kernel Module dm_mod...
[    3.970835] systemd[1]: Starting modprobe@drm.service - Load Kernel Module drm...
         Starting modprobe@drm.service - Load Kernel Module drm...
[    3.973628] systemd[1]: Starting modprobe@efi_pstore.service - Load Kernel Module efi_pstore...
         Starting modprobe@efi_psto…- Load Kernel Module efi_pstore...
[    3.976605] systemd[1]: Starting modprobe@fuse.service - Load Kernel Module fuse...
         Starting modprobe@fuse.ser…e - Load Kernel Module fuse...
[    3.979455] systemd[1]: Starting modprobe@loop.service - Load Kernel Module loop...
         Starting modprobe@loop.ser…e - Load Kernel Module loop...
[    3.981095] systemd[1]: systemd-fsck-root.service - File System Check on Root Device was skipped because of an unmet condition check (ConditionPathIsReadWrite=!/).
[    3.986758] systemd[1]: Starting systemd-journald.service - Journal Service...
         Starting systemd-journald.service - Journal Service...
[    3.990646] systemd[1]: Starting systemd-modules-load.service - Load Kernel Modules...
         Starting systemd-modules-l…rvice - Load Kernel Modules...
[    3.993914] systemd[1]: Starting systemd-remount-fs.service - Remount Root and Kernel File Systems...
         Starting systemd-remount-f…nt Root and Kernel File Systems...
[    3.997560] systemd[1]: Starting systemd-udev-trigger.service - Coldplug All udev Devices...
         Starting systemd-udev-trig…[0m - Coldplug All udev Devices...
[    4.002226] systemd[1]: Mounted dev-hugepages.mount - Huge Pages File System.
[    4.006338] RPC: Registered named UNIX socket transport module.
[    4.007066] RPC: Registered udp transport module.
[    4.007070] RPC: Registered tcp transport module.
[    4.007071] RPC: Registered tcp-with-tls transport module.
[    4.007073] RPC: Registered tcp NFSv4.1 backchannel transport module.
[  OK  ] Mounted dev-hugepages.mount - H[    4.009765] systemd[1]: Mounted dev-mqueue.mount - POSIX Message Queue File System.
uge Pages File System.
[    4.009822] device-mapper: uevent: version 1.0.3
[  OK  ] Mounted dev-mqueue.mountOSI[    4.011355] device-mapper: ioctl: 4.50.0-ioctl (2025-04-28) initialised: dm-devel@lists.linux.dev
X Message Queue File System.
[    4.011758] systemd[1]: Mounted sys-kernel-debug.mount - Kernel Debug File System.
[  OK  ] Mounted sys-kernel-debug.m…nt - Kernel Debug File System.
[    4.014156] systemd[1]: Mounted sys-kernel-tracing.mount - Kernel Trace File System.
[  OK  ] Mounted sys-kernel-tracing…nt - Kernel Trace File System.
[    4.015752] systemd[1]: Finished kmod-static-nodes.service - Create List of Static Device Nodes.
[  OK  ] Finished kmod-static-nodes…reate List of Static Device Nodes.
[    4.017524] systemd[1]: modprobe@configfs.service: Deactivated successfully.
[    4.017884] zram: Added device: zram0
[    4.018458] systemd[1]: Finished modprobe@configfs.service - Load Kernel Module configfs.
[  OK  ] Finished modprobe@configfs…[0m - Load Kernel Module configfs.
[    4.019823] systemd[1]: modprobe@dm_mod.service: Deactivated successfully.
[    4.020965] systemd[1]: Finished modprobe@dm_mod.service - Load Kernel Module dm_mod.
[  OK  ] Finished modprobe@dm_mod.s…e [    4.022321] systemd[1]: modprobe@drm.service: Deactivated successfully.
- Load Kernel Module dm_mod.
[    4.023215] systemd[1]: Finished modprobe@drm.service - Load Kernel Module drm.
[  OK  ] Finished modprobe@drm.service - Load Kernel Module drm.
[    4.024561] systemd[1]: modprobe@efi_pstore.service: Deactivated successfully.
[    4.025647] systemd[1]: Finished modprobe@efi_pstore.service - Load Kernel Module efi_pstore.
[  OK  ] Finished modprobe@efi_psto…m - Lo[    4.026959] rockchip_pvtm: loading out-of-tree module taints kernel.
ad Kernel Module efi_pstore.
[    4.027081] systemd[1]: modprobe@fuse.service: Deactivated successfully.
[    4.028700] systemd[1]: Finished modprobe@fuse.service - Load Kernel Module fuse.
[  OK  ] Finished modprobe@fuse.service - Load Kernel Module fuse.
[    4.030079] systemd[1]: modprobe@loop.service: Deactivated successfully.
[    4.031111] systemd[1]: Finished modprobe@loop.service - Load Kernel Module loop.
[  OK  ] Finished modprobe@loop.service - Load Kernel Module loop.
[    4.034385] systemd[1]: Mounting sys-fs-fuse-connections.mount - FUSE Control File System...
         Mounting sys-fs-fuse-conne… - FUSE Control File System...
[    4.037436] systemd[1]: Mounting sys-kernel-config.mount - Kernel Configuration File System...
         Mounting sys-kernel-config…ernel Configurati[    4.038412] systemd[1]: systemd-repart.service - Repartition Root Disk was skipped because no trigger condition checks were met.
on File System...
[    4.040166] [trim-mounts-hash]'config'[000000002d784765]'s top mountpoint dentry: sys
[    4.040703] [trim-mounts-hash]'connections'[00000000fc3a5980]'s top mountpoint dentry: sys
[    4.040867] [trim-mounts-hash]dentry 'sys' type: 0
[    4.042083] [trim-mounts-hash]dentry 'sys' type: 0
[    4.043554] systemd[1]: Mounted sys-fs-fuse-connections.mount - FUSE Control File System.
[  OK  ] Mounted sys-fs-fuse-connec…nt[    4.044904] systemd[1]: Mounted sys-kernel-config.mount - Kernel Configuration File System.
 - FUSE Control File System.
[  OK  ] Mounted sys-kernel-config.… Kernel Configuration File System.
[    4.069807] [trim-mounts-hash]'nfsd'[000000001211221f]'s top mountpoint dentry: proc
[    4.070523] [trim-mounts-hash]dentry 'proc' type: 0
[    4.071939] systemd[1]: Mounted proc-fs-nfsd.mount - NFSD configuration filesystem.
[  OK  ] Mounted proc-fs-nfsd.mount…m - NFSD configuration filesystem.
[    4.082388] rga3 fdb60000.rga: probe successfully, irq = 49, hw_version:3.0.76831
[    4.083502] rga3 fdb70000.rga: probe successfully, irq = 50, hw_version:3.0.76831
[    4.084667] rga_iommu: IOMMU binding successfully, default mapping core[0x1]
[    4.085602] rga: Module initialized. v1.3.4
[    4.093490] mpp_service mpp-srv: 
[    4.093794] mpp_service mpp-srv: probe start
[    4.096199] mpp_vdpu2 fdb50400.vdpu: probe device
[    4.096936] mpp_vdpu2 fdb50400.vdpu: reset_group->rw_sem_on=0
[    4.097494] mpp_vdpu2 fdb50400.vdpu: reset_group->rw_sem_on=0
[    4.098026] mpp_vdpu2 fdb50400.vdpu: probing finish
[    4.098831] mpp_vepu2 jpege-ccu: probing start
[    4.099226] mpp_vepu2 jpege-ccu: probing finish
[    4.099778] mpp_vepu2 fdba0000.jpege-core: probing start
[    4.100576] mpp_vepu2 fdba0000.jpege-core: attach ccu success
[    4.101127] mpp_vepu2 fdba0000.jpege-core: probing finish
[    4.101868] mpp_vepu2 fdba4000.jpege-core: probing start
[    4.102575] mpp_vepu2 fdba4000.jpege-core: attach ccu success
[    4.103101] mpp_vepu2 fdba4000.jpege-core: probing finish
[    4.103807] mpp_vepu2 fdba8000.jpege-core: probing start
[    4.104456] mpp_vepu2 fdba8000.jpege-core: attach ccu success
[    4.104979] mpp_vepu2 fdba8000.jpege-core: probing finish
[    4.105714] mpp_vepu2 fdbac000.jpege-core: probing start
[    4.106383] mpp_vepu2 fdbac000.jpege-core: attach ccu success
[    4.106905] mpp_vepu2 fdbac000.jpege-core: probing finish
[    4.107881] mpp_jpgdec fdb90000.jpegd: probe device
[    4.108508] mpp_jpgdec fdb90000.jpegd: probing finish
[    4.109536] mpp_rkvdec2 fdc30000.rkvdec-ccu: rkvdec-ccu, probing start
[    4.110215] mpp_rkvdec2 fdc30000.rkvdec-ccu: ccu-mode: 1
[    4.110683] mpp_rkvdec2 fdc30000.rkvdec-ccu: probing finish
[    4.111460] mpp_rkvdec2 fdc38100.rkvdec-core: rkvdec-core, probing start
[    4.112222] mpp_rkvdec2 fdc38100.rkvdec-core: shared_niu_a is not found!
[    4.112811] rkvdec2_init:1199: No niu aclk reset resource define
[    4.113372] mpp_rkvdec2 fdc38100.rkvdec-core: shared_niu_h is not found!
[    4.113960] rkvdec2_init:1202: No niu hclk reset resource define
[    4.114514] mpp_rkvdec2 fdc38100.rkvdec-core: no regulator, devfreq is disabled
[    4.115295] mpp_rkvdec2 fdc38100.rkvdec-core: core_mask=00010001
[    4.115824] mpp_rkvdec2 fdc38100.rkvdec-core: attach ccu as core 0
[    4.116638] mpp_rkvdec2 fdc38100.rkvdec-core: sram_start 0x00000000ff001000
[    4.117259] mpp_rkvdec2 fdc38100.rkvdec-core: rcb_iova 0x00000000fff00000
[    4.117854] mpp_rkvdec2 fdc38100.rkvdec-core: sram_size 491520
[    4.118366] mpp_rkvdec2 fdc38100.rkvdec-core: rcb_size 1048576
[    4.118879] mpp_rkvdec2 fdc38100.rkvdec-core: min_width 512
[    4.119371] mpp_rkvdec2 fdc38100.rkvdec-core: rcb_info_count 20
[    4.119890] mpp_rkvdec2 fdc38100.rkvdec-core: [136, 24576]
[    4.120372] mpp_rkvdec2 fdc38100.rkvdec-core: [137, 49152]
[    4.120855] mpp_rkvdec2 fdc38100.rkvdec-core: [141, 90112]
[    4.121344] mpp_rkvdec2 fdc38100.rkvdec-core: [140, 49152]
[    4.121825] mpp_rkvdec2 fdc38100.rkvdec-core: [139, 180224]
[    4.122315] mpp_rkvdec2 fdc38100.rkvdec-core: [133, 49152]
[    4.122796] mpp_rkvdec2 fdc38100.rkvdec-core: [134, 8192]
[    4.123272] mpp_rkvdec2 fdc38100.rkvdec-core: [135, 4352]
[    4.123746] mpp_rkvdec2 fdc38100.rkvdec-core: [138, 13056]
[    4.124229] mpp_rkvdec2 fdc38100.rkvdec-core: [142, 291584]
[    4.124756] mpp_rkvdec2 fdc38100.rkvdec-core: probing finish
[    4.125460] mpp_rkvdec2 fdc48100.rkvdec-core: rkvdec-core, probing start
[    4.126330] mpp_rkvdec2 fdc48100.rkvdec-core: shared_niu_a is not found!
[    4.126921] rkvdec2_init:1199: No niu aclk reset resource define
[    4.127450] mpp_rkvdec2 fdc48100.rkvdec-core: shared_niu_h is not found!
[    4.128037] rkvdec2_init:1202: No niu hclk reset resource define
[    4.128587] mpp_rkvdec2 fdc48100.rkvdec-core: no regulator, devfreq is disabled
[    4.129277] mpp_rkvdec2 fdc48100.rkvdec-core: core_mask=00020002
[    4.129820] mpp_rkvdec2 fdc48100.rkvdec-core: attach ccu as core 1
[    4.130968] mpp_rkvdec2 fdc48100.rkvdec-core: sram_start 0x00000000ff079000
[    4.131578] mpp_rkvdec2 fdc48100.rkvdec-core: rcb_iova 0x00000000ffe00000
[    4.132173] mpp_rkvdec2 fdc48100.rkvdec-core: sram_size 487424
[    4.132684] mpp_rkvdec2 fdc48100.rkvdec-core: rcb_size 1048576
[    4.133222] mpp_rkvdec2 fdc48100.rkvdec-core: min_width 512
[    4.133713] mpp_rkvdec2 fdc48100.rkvdec-core: rcb_info_count 20
[    4.134233] mpp_rkvdec2 fdc48100.rkvdec-core: [136, 24576]
[    4.134714] mpp_rkvdec2 fdc48100.rkvdec-core: [137, 49152]
[    4.135195] mpp_rkvdec2 fdc48100.rkvdec-core: [141, 90112]
[    4.135676] mpp_rkvdec2 fdc48100.rkvdec-core: [140, 49152]
[    4.136158] mpp_rkvdec2 fdc48100.rkvdec-core: [139, 180224]
[    4.136647] mpp_rkvdec2 fdc48100.rkvdec-core: [133, 49152]
[    4.137135] mpp_rkvdec2 fdc48100.rkvdec-core: [134, 8192]
[    4.137609] mpp_rkvdec2 fdc48100.rkvdec-core: [135, 4352]
[    4.138083] mpp_rkvdec2 fdc48100.rkvdec-core: [138, 13056]
[    4.138565] mpp_rkvdec2 fdc48100.rkvdec-core: [142, 291584]
[    4.139090] mpp_rkvdec2 fdc48100.rkvdec-core: probing finish
[    4.140071] mpp_rkvenc2 rkvenc-ccu: probing start
[    4.140489] mpp_rkvenc2 rkvenc-ccu: probing finish
[    4.141159] mpp_rkvenc2 fdbd0000.rkvenc-core: probing start
[    4.142226] mpp_rkvenc2 fdbd0000.rkvenc-core: bin=0
[    4.142873] mpp_rkvenc2 fdbd0000.rkvenc-core: leakage=10
[    4.143344] mpp_rkvenc2 fdbd0000.rkvenc-core: leakage-volt-sel=0
[    4.144712] mpp_rkvenc2 fdbd0000.rkvenc-core: avs=0
[    4.145248] mpp_rkvenc2 fdbd0000.rkvenc-core: attach ccu as core 0
[    4.145823] mpp_rkvenc2 fdbd0000.rkvenc-core: probing finish
[    4.146507] mpp_rkvenc2 fdbe0000.rkvenc-core: probing start
[    4.147712] mpp_rkvenc2 fdbe0000.rkvenc-core: bin=0
[    4.148333] mpp_rkvenc2 fdbe0000.rkvenc-core: leakage=10
[    4.148803] mpp_rkvenc2 fdbe0000.rkvenc-core: leakage-volt-sel=0
[    4.150179] mpp_rkvenc2 fdbe0000.rkvenc-core: avs=0
[    4.150655] mpp_rkvenc2 fdbe0000.rkvenc-core: attach ccu as core 1
[    4.151227] mpp_rkvenc2 fdbe0000.rkvenc-core: probing finish
[    4.152108] mpp_av1dec fdc70000.av1d: probing start
[    4.152826] mpp_av1dec fdc70000.av1d: probing finish
[    4.153501] mpp_service mpp-srv: probe success
[    4.156238] systemd[1]: Started systemd-journald.service - Journal Service.
[  OK  ] Started systemd-journald.service - Journal Service.
[  OK  ] Finished lvm2-monitor.serv…sing dmeventd or progress polling.
[  OK  ] Finished systemd-remount-f…ount Root and Kernel File Systems.
[    4.228283] zfs: module license 'CDDL' taints kernel.
[    4.228742] Disabling lock debugging due to kernel taint
[    4.229304] zfs: module license taints kernel.
         Starting systemd-journal-f…h Journal to Persistent Storage...
         Starting systemd-random-se…ice - Load/Save Random Seed...
         Starting systemd-sysusers.…rvice - Create System Users...
[  OK  ] Finished keyboard-setup.se…- Set the console keyboard layout.
[    4.257163] [trim-mounts-hash]'/'[00000000ae0aadc4]'s top mountpoint dentry: dev
[    4.257843] [trim-mounts-hash]dentry 'dev' type: 0
[    4.273247] systemd-journald[321]: Received client request to flush runtime journal.
[  OK  ] Finished systemd-journal-f…ush Journal to Persistent Storage.
[  OK  ] Finished systemd-random-se…rvice - Load/Save Random Seed.
[  OK  ] Finished systemd-sysusers.service - Create System Users.
[    4.445567] ZFS: Loaded module v2.4.1-1, ZFS pool version 5000, ZFS filesystem version 5
         Starting systemd-tmpfiles-…ate Static Device Nodes in /dev...
[    4.471735] [trim-mounts-hash]'/'[00000000ae0aadc4]'s top mountpoint dentry: dev
[    4.472416] [trim-mounts-hash]dentry 'dev' type: 0
[  OK  ] Finished systemd-modules-l…service - Load Kernel Modules.
[  OK  ] Finished systemd-udev-trig…e - Coldplug All udev Devices.
         Starting ifupdown-pre.serv…ynchronize boot up for ifupdown...
         Starting systemd-sysctl.se…ce - Apply Kernel Variables...
[    4.487508] [trim-mounts-hash]'/'[00000000ae0aadc4]'s top mountpoint dentry: dev
[    4.488189] [trim-mounts-hash]dentry 'dev' type: 0
[  OK  ] Finished ifupdown-pre.serv… synchronize boot up for ifupdown.
[  OK  ] Finished systemd-tmpfiles-…reate Static Device Nodes in /dev.
[  OK  ] Reached target local-fs-pr…reparation for Local File Systems.
         Starting systemd-udevd.ser…ger for Device Events and Files...
[  OK  ] Finished systemd-sysctl.service - Apply Kernel Variables.
[  OK  ] Started systemd-udevd.serv…nager for Device Events and Files.
         Starting plymouth-start.se…[0m - Show Plymouth Boot Screen...
[  OK  ] Started plymouth-start.ser…e - Show Plymouth Boot Screen.
[  OK  ] Started systemd-ask-passwo…uests to Plymouth Directory Watch.
[  OK  ] Reached target cryptsetup.…get - Local Encrypted Volumes.
[    4.771738] sd 0:0:0:0: Attached scsi generic sg0 type 0
[  OK  ] Found device dev-ttyS2.device - /dev/ttyS2.
         Mounting tmp.mount - /tmp...
[  OK  ] Reached target machines.target - Containers.
[    5.036017] [trim-mounts-hash]'tmp'[00000000ff5e50fb]'s top mountpoint dentry: tmp
[    5.036694] [trim-mounts-hash]dentry 'tmp' type: 0
[  OK  ] Found device dev-disk-by\x…d.device - ADATA_SP920SS BOOT.
[  OK  ] Mounted tmp.mount - /tmp.
         Starting systemd-fsck@dev-…a6c-7bab-4b6e-b65b-3fea6fb7399d...
[  OK  ] Started systemd-fsckd.serv…tem Check Daemon to report status.
[  OK  ] Finished systemd-fsck@dev-…92a6c-7bab-4b6e-b65b-3fea6fb7399d.
         Mounting boot.mount - /boot...
[    5.240479] pstore: Using crash dump compression: deflate
[    5.240978] pstore: Registered ramoops as persistent store backend
[    5.241541] ramoops: using 0xd8000@0x118000, ecc: 0
[    5.260035] EXT4-fs (sda1): mounted filesystem 31a92a6c-7bab-4b6e-b65b-3fea6fb7399d r/w with ordered data mode. Quota mode: none.
[    5.265077] [trim-mounts-hash]'boot'[000000000e2776db]'s top mountpoint dentry: boot
[    5.265770] [trim-mounts-hash]dentry 'boot' type: 0
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
         Starting systemd-tmpfiles-…te System Files and Directories...
[    5.347009] [trim-mounts-hash]'/'[00000000ae0aadc4]'s top mountpoint dentry: dev
[    5.347671] [trim-mounts-hash]dentry 'dev' type: 0
[  OK  ] Finished console-setup.ser…[0m - Set console font and keymap.
[    5.381116] cpufreq: cpufreq_policy_online: CPU4: Running at unlisted initial frequency: 1008000 kHz, changing to: 1200000 kHz
[FAILED] Failed to start led-set.service - LED Setting Service.
See 'systemctl status led-set.service' for details.
[  OK  ] Finished plymouth-read-wri…lymouth To Write Out Runtime Data.
[  OK  ] Finished pwm-fancontrol.se…ice - PWM Fan Setting Service.
[    5.406383] cpufreq: cpufreq_policy_online: CPU6: Running at unlisted initial frequency: 1008000 kHz, changing to: 1200000 kHz
[FAILED] Failed to start set_gpio-i…[0m - GPIO Initialization Service.
See 'systemctl status set_gpio-init.service' for details.
[  OK  ] Finished systemd-tmpfiles-…eate System Files and Directories.
         Mounting proc-sys-fs-binfm…utable File Formats File System...
         Mounting run-rpc_pipefs.mount - RPC Pipe File System...
[    5.453466] [trim-mounts-hash]'/'[00000000b16e6ff3]'s top mountpoint dentry: proc
[    5.454126] [trim-mounts-hash]dentry 'proc' type: 0
[    5.454804] [trim-mounts-hash]'rpc_pipefs'[00000000ced2ed69]'s top mountpoint dentry: run
[    5.455523] [trim-mounts-hash]dentry 'run' type: 0
[    5.465563] audit: type=1400 audit(1750949922.068:2): apparmor="STATUS" operation="profile_load" profile="unconfined" name="lsb_release" pid=694 comm="apparmor_parser"
         Starting rpcbind.service - RPC bind portmap service...
[    5.483518] audit: type=1400 audit(1750949922.084:3): apparmor="STATUS" operation="profile_load" profile="unconfined" name="nvidia_modprobe" pid=698 comm="apparmor_parser"
[    5.484864] audit: type=1400 audit(1750949922.084:4): apparmor="STATUS" operation="profile_load" profile="unconfined" name="nvidia_modprobe//kmod" pid=698 comm="apparmor_parser"
         Starting systemd-timesyncd… - Network Time Synchronization...
         Starting systemd-update-ut…rd System Boot/Shutdown in UTMP...
[  OK  ] Started rpcbind.service - RPC bind portmap service.
[  OK  ] Finished dpdk.service - DPDK runtime environment.
[  OK  ] Mounted proc-sys-fs-binfmt…ecutable File Formats File System.
[  OK  ] Mounted run-rpc_pipefs.mount - RPC Pipe File System.
[  OK  ] Reached target rpc_pipefs.target.
[  OK  ] Reached target rpcbind.target - RPC Port Mapper.
         Starting nfs-blkmap.servic…NFS block layout mapping daemon...
         Starting nfs-idmapd.servic…- NFSv4 ID-name mapping service...
         Starting nfsdcld.serviceFSv4 Client Tracking Daemon...
[  OK  ] Reached target nfs-client.target - NFS client services.
[  OK  ] Reached target remote-fs-p…eparation for Remote [    5.499152] [trim-mounts-hash]'dev'[00000000d11baa1e]'s top mountpoint dentry: tmp
File Systems.
[  OK  ] Reached target rem[    5.499910] [trim-mounts-hash]dentry 'tmp' type: 0
ote-fs.target - Remote File Systems.
[  OK  ] Finished systemd-binfmt.se… Set Up Additional Binary Formats.
[  OK  ] Started nfs-blkmap.service… pNFS block layout mapping daemon.
[  OK  ] Started nfs-idmapd.service…m - NFSv4 ID-name mapping service.
[  OK  ] Finished systemd-update-ut…cord System Boot/Shutdown in UTMP.
[    5.539787] audit: type=1400 audit(1750949922.140:5): apparmor="STATUS" operation="profile_load" profile="unconfined" name="virt-aa-helper" pid=709 comm="apparmor_parser"
[  OK  ] Started nfsdcld.service - NFSv4 Client Tracking Daemon.
[    5.589023] [trim-mounts-hash]'proc'[000000004b72b345]'s top mountpoint dentry: run
[    5.589700] [trim-mounts-hash]dentry 'run' type: 0
[    5.609948] audit: type=1400 audit(1750949922.212:6): apparmor="STATUS" operation="profile_load" profile="unconfined" name="libvirtd" pid=718 comm="apparmor_parser"
[    5.611275] audit: type=1400 audit(1750949922.212:7): apparmor="STATUS" operation="profile_load" profile="unconfined" name="libvirtd//qemu_bridge_helper" pid=718 comm="apparmor_parser"
[    5.622807] audit: type=1400 audit(1750949922.224:8): apparmor="STATUS" operation="profile_load" profile="unconfined" name="/usr/bin/man" pid=706 comm="apparmor_parser"
[    5.624184] audit: type=1400 audit(1750949922.224:9): apparmor="STATUS" operation="profile_load" profile="unconfined" name="man_filter" pid=706 comm="apparmor_parser"
[    5.625529] audit: type=1400 audit(1750949922.224:10): apparmor="STATUS" operation="profile_load" profile="unconfined" name="man_groff" pid=706 comm="apparmor_parser"
[  OK  ] Started systemd-timesyncd.…0m - Network Time Synchronization.
[  OK  ] Reached target time-set.target - System Time Set.
[    5.792437] audit: type=1400 audit(1764407792.032:11): apparmor="STATUS" operation="profile_load" profile="unconfined" name="/usr/lib/NetworkManager/nm-dhcp-client.action" pid=704 comm="apparmor_parser"
[  OK  ] Finished apparmor.service - Load AppArmor profiles.
[  OK  ] Reached target sysinit.target - System Initialization.
[  OK  ] Started nut-driver-enumerator.path.
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
[  OK  ] Started systemd-tmpfiles-c… Cleanup of Temporary Directories.
[  OK  ] Reached target paths.target - Path Units.
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
[  OK  ] Started wsdd2.service …MNR Discovery/Name Service Daemon.
         Starting zramswap.service - Linux zramswap setup...
[    5.939204] fnnas-tf[879]: [ STEPS ] Welcome to the partition expansion tool.
[    5.955616] [trim-mounts-hash]'dev'[000000006c76c922]'s top mountpoint dentry: tmp
[    5.956290] [trim-mounts-hash]dentry 'tmp' type: 0
[  OK  ] Finished sysstat.service - Resets System Activity Logs.
[    5.964077] zram0: detected capacity change from 0 to 16336976
[    5.976080] Adding 8168484k swap on /dev/zram0.  Priority:100 extents:1 across:8168484k SS
[  OK  ] Finished zramswap.service - Linux zramswap setup.
[  OK  ] Started dbus.service - D-Bus System Message Bus.
[  OK  ] Finished system_setmac.ser…stable MAC addresses from MMC CID.
[  OK  ] Reached target network-pre…get - Preparation for Network.
[    6.004057] fnnas-tf[879]: [ INFO ] Target Disk: [ sda ], Root Partition: [ 2 ], PT Type: [ gpt ]
         Starting NetworkManager.service - Network Manager...
         Starting ovsdb-server.serv…0m - Open vSwitch Database Unit...
         Starting wpa_supplicant.service - WPA supplicant...
[  OK  ] Started systemd-machined.s…nd Container Registration Service.
[  OK  ] Started avahi-daemon.service - Avahi mDNS/DNS-SD Stack.
[    6.034408] [trim-mounts-hash]'proc'[000000004b72b345]'s top mountpoint dentry: run
[    6.035084] [trim-mounts-hash]dentry 'run' type: 0
[  OK  ] Started rsyslog.service - System Logging Service.
[  OK  ] Started polkit.service - Authorization Manager.
         Starting ModemManager.service - Modem Manager...
[  OK  ] Reached target sound.target - Sound Card.
[    6.152548] nvme nvme0: using unchecked data buffer
[  OK  ] Started smartmontools.serv…porting Technology (SMART) Daemon.
[  OK  ] Started systemd-logind.service - User Login Management.
[  OK  ] Stopped wsdd2.service …MNR Discovery/Name Service Daemon.
[  OK  ] Started wsdd2.service …MNR Discovery/Name Service Daemon.
[    6.262613] [trim-mounts-hash]'dev'[000000008580b1ad]'s top mountpoint dentry: tmp
[    6.263311] [trim-mounts-hash]dentry 'tmp' type: 0
[  OK  ] Started wpa_supplicant.service - WPA supplicant.
[  OK  ] Finished nut-driver-enumer…vices into systemd unit instances.
[  OK  ] Reached target nut-driver.…wer device drivers on this system.
[  OK  ] Started ModemManager.service - Modem Manager.
[  OK  ] Finished e2scrub_reap.serv…ine ext4 Metadata Check Snapshots.
[  OK  ] Started NetworkManager.service - Network Manager.
         Starting NetworkManager-wa…m - Network Manager Wait Online...
         Starting systemd-hostnamed.service - Hostname Service...
[  OK  ] Stopped wsdd2.service …MNR Discovery/Name Service Daemon.
[    6.437096] [trim-mounts-hash]'dev'[000000006bc9ce96]'s top mountpoint dentry: tmp
[    6.437782] [trim-mounts-hash]dentry 'tmp' type: 0
[  OK  ] Started wsdd2.service …MNR Discovery/Name Service Daemon.
[    6.442996] [trim-mounts-hash]'proc'[000000004b72b345]'s top mountpoint dentry: run
[    6.443670] [trim-mounts-hash]dentry 'run' type: 0
[    6.444457] [trim-mounts-hash]'dev'[0000000074adaca0]'s top mountpoint dentry: tmp
[    6.445152] [trim-mounts-hash]dentry 'tmp' type: 0
[FAILED] Failed to start wsdd2.serv…MNR Discovery/Name Service Daemon.
See 'systemctl status wsdd2.service' for details.
[  OK  ] Started systemd-hostnamed.service - Hostname Service.
[  OK  ] Listening on systemd-rfkil…l Switch Status /dev/rfkill Watch.
         Starting NetworkManager-di…nager Script Dispatcher Service...
[    6.549167] Realtek Internal NBASE-T PHY r8169-3-3100:00: attached PHY driver (mii_bus:phy_addr=r8169-3-3100:00, irq=MAC)
[  OK  ] Started NetworkManager-dis…Manager Script Dispatcher Service.
[  OK  ] Started ovsdb-server.servi… - Open vSwitch Database Unit.
[    6.733281] r8169 0003:31:00.0 eth0: Link is Down
         Starting ovs-vswitchd.serv… - Open vSwitch Forwarding Unit...
[    6.769154] Realtek Internal NBASE-T PHY r8169-2-2100:00: attached PHY driver (mii_bus:phy_addr=r8169-2-2100:00, irq=MAC)
[    6.857951] openvswitch: Open vSwitch switching datapath
[    6.957439] r8169 0002:21:00.0 eth1: Link is Down
[    6.968181] rk_gmac-dwmac fe1c0000.ethernet eth2: Register MEM_TYPE_PAGE_POOL RxQ-0
[    6.970224] rk_gmac-dwmac fe1c0000.ethernet eth2: Register MEM_TYPE_PAGE_POOL RxQ-1
[    7.979176] rk_gmac-dwmac fe1c0000.ethernet eth2: Failed to reset the dma
[    7.979786] rk_gmac-dwmac fe1c0000.ethernet eth2: stmmac_hw_setup: DMA engine initialization failed
[    7.980578] rk_gmac-dwmac fe1c0000.ethernet eth2: __stmmac_open: Hw setup failed
[    7.991843] rk_gmac-dwmac fe1b0000.ethernet eth3: Register MEM_TYPE_PAGE_POOL RxQ-0
[    7.993947] rk_gmac-dwmac fe1b0000.ethernet eth3: Register MEM_TYPE_PAGE_POOL RxQ-1
[    9.000948] rk_gmac-dwmac fe1b0000.ethernet eth3: Failed to reset the dma
[    9.001566] rk_gmac-dwmac fe1b0000.ethernet eth3: stmmac_hw_setup: DMA engine initialization failed
[    9.002358] rk_gmac-dwmac fe1b0000.ethernet eth3: __stmmac_open: Hw setup failed
[  OK  ] Started ovs-vswitchd.servi…0m - Open vSwitch Forwarding Unit.
         Starting networking.service - Raise network interfaces...
         Starting openvswitch-switch.service - Open vSwitch...
[  OK  ] Finished openvswitch-switch.service - Open vSwitch.
[    9.077009] fnnas-tf[879]: [ INFO ] Expanding root partition...
[    9.087313] fnnas-tf[879]: [ INFO ] Current partition: 5GiB, Disk: 119GiB
[    9.087460] fnnas-tf[879]: [ INFO ] GPT partition table detected.
[    9.118562] fnnas-tf[879]: [ INFO ] Strategy: Limit partition 2 to 16GiB...
[    9.143973] fnnas-tf[1184]: Warning: Partition /dev/sda2 is being used. Are you sure you want to continue?
Yes/No? Yes                                                               
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
[    9.224755] fnnas-tf[1184]: Information: You may need to update /etc/fstab.
[  OK  ] Finished systemd-user-sess…ervice - Permit User Sessions.
[  OK  ] Started ssh.service - OpenBSD Secure Shell server.
[  OK  ] Started libvirtd.service - Virtualization daemon.
[  OK  ] Started smbd.service - Samba SMB/CIFS daemon (smbd).
[   10.050451] r8169 0002:21:00.0 eth1: Link is Up - 1Gbps/Full - flow control rx/tx
[   10.137967] r8169 0002:21:00.0: invalid VPD tag 0x00 (size 0) at offset 0; assume missing optional EEPROM
[   10.148109] r8169 0003:31:00.0: invalid VPD tag 0x00 (size 0) at offset 0; assume missing optional EEPROM
[  OK  ] Started containerd.service…0m - containerd container runtime.
[  OK  ] Started postgresql@15-main… - PostgreSQL Cluster 15-main.
         Starting postgresql.service - PostgreSQL RDBMS...
[  OK  ] Finished postgresql.service - PostgreSQL RDBMS.
                                                                          
[   12.573564] fnnas-tf[879]: [ INFO ] Expanding filesystem...
[   12.654998] BTRFS info (device sda2): resize device /dev/sda2 (devid 1) from 6441402368 to 16626221056
[   12.651348] fnnas-tf[1418]: Resize device id 1 (/dev/sda2) from 6.00GiB to max
[   12.651510] fnnas-tf[879]: [ SUCCESS ] Partition expanded successfully.
[   13.047847] fnnas-tf[879]: [ INFO ] Service resize-rootfs.service disabled
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
[  OK  ] Started rc-local.service - /etc/rc.local Compatibility.
         Starting plymouth-quit-wai… until boot process finishes up...
         Starting plymouth-quit.ser… Terminate Plymouth Boot Screen...
         Starting show_startup_info… trim show startup info service...
         Starting trim_init.service - trim init service...
[  OK  ] Started nfs-mountd.service - NFS Mount Daemon.
[  OK  ] Finished show_startup_info… - trim show startup info service.


????????????   ??? ??????? ????????
?????????????  ????????????????????
??????  ?????? ??????   ???????????
??????  ?????????????   ???????????
???     ??? ???????????????????????
???     ???  ????? ??????? ????????

OS version:         fnOS v1.1.31
Hostname:           fnnas
IPv4 for eth1:      192.168.33.39

fnOS Web UI can be directly accessed at: http://192.168.33.39:5666

For more information, help or support, go here:
https://www.fnnas.com

fnnas login: admin
Password: 
Linux fnos 6.18.18-trim #491 SMP PREEMPT Fri Apr 17 03:28:48 UTC 2026 aarch64

The programs included with the Debian GNU/Linux system are free software;
the exact distribution terms for each program are described in the
individual files in /usr/share/doc/*/copyright.

Debian GNU/Linux comes with ABSOLUTELY NO WARRANTY, to the extent
permitted by applicable law.
No directory, logging in with HOME=/
admin@fnos:/$ 
admin@fnos:/$ 
admin@fnos:/$ 

```




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



### load_addr 地址写死，与optee地址重叠


* https://github.com/OP-TEE/optee_os/issues/7868

```shell
=> bdinfo
arch_number = 0x00000000
boot_params = 0x00000000
DRAM bank   = 0x00000000
-> start    = 0x00200000
-> size     = 0x08200000
DRAM bank   = 0x00000001
-> start    = 0x09400000
-> size     = 0xE6C00000
baudrate    = 1500000 bps
TLB addr    = 0xEFFF0000
relocaddr   = 0xEDAE5000
reloc off   = 0xED8E5000
irq_sp      = 0xEB7F6680
sp start    = 0xEB7F6680
Early malloc usage: 4f40 / 80000
fdt_blob = 00000000eb7f6690
=> 
```

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

boot.scr对应的boot.cmd中写死了 0x9000000 作为loader地址，但改地址与optee重叠


解决办法：

通过hook setenv命令，忽略load_addr地址，并提前定义好有效地址。实测可以解决问题

```shell
    Environment size: 9689/32764 bytes
    => setenv test 123
    => printenv load_addr
    load_addr=0x0a000000
    => setenv load_addr 123
    Ignoring attempt to modify 'load_addr'
    => printenv load_addr
    load_addr=0x0a000000
    => printenv test
    test=123
    =>
```


lean大反馈，不适用optee即可。

* https://github.com/istoreos/istoreos/blob/fb971407ffd9a094e6f16d9c029f1f580ed5c2ad/package/boot/uboot-rk35xx/patches/011-optional-tee.patch#L4








