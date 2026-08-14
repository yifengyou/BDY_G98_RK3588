# 原厂wayos固件

## 基本信息


```shell
kernel->init->sbin/rc
sbin/rc->jhttpd 网页服务
sbin/rc->usr/sbin/openvpn.sh -> openvpn server/client服务
sbin/rc->usr/sbin/cdn_daemon.sh->cdn_daemon-> wys_cdn - > jinshang pcdn服务
```


```shell
[   14.788528] Linux version 5.10.160 (root@ubuntu) (aarch64-openwrt-linux-musl-gcc (OpenWrt GCC 8.4.0 r5594-6d397cf17) 8.4.0, GNU ld (GNU Binutils) 2.37) #3890 SMP Wed Jun 11 15:32:24 CST 2025
[   14.796664] Machine model: Rockchip RK3588 NVR DEMO LP4 SPI NOR Board
...
[   15.162348] Kernel command line: root=PARTUUID=614e0000-0000-4b53-8000-1d28000054a9 rw console=ttyFIQ0 console=tty1 cgroup_enable=cpuset cgroup_memory=1 cgroup_enable=memory net.ifnames=0 biosdevname=0 level=10 loglevel=10 selinux=0 crashkernel=384M-:128M systemd.mask=systemd-growfs@-.service rockchip.dmc_freq=528000 video=HDMI-A-1:1920x1080@60 iommu.passthrough=1 arm-smmu-v3.disable_bypass=0  init=/bin/bash rootwait earlycon=uart8250,mmio32,0xfeb50000 androidboot.fwver=ddr-v1.18-9fa84341ce,spl-v1.13,bl31-v1.54,bl32-v1.20,uboot-ga7159c6b5-08/08/2026

```

```shell
[   38.937698] r8125: eth2: Link Up - 1000Mbps/Full
[   38.937738] IPv6: ADDRCONF(NETDEV_CHANGE): eth2: link becomes ready
[   38.937838] br0: port 8(eth2) entered blocking state
[   38.937844] br0: port 8(eth2) entered forwarding state
[   39.806119] pppoe server stop
[   48.985342] 
[   48.985342] 
[   48.985342] ********************************************
[   48.985342]       VERSION      GX-SU7-Max-25.03.10V
[   48.985342]       WEB URL      http://192.168.168.1:8080
[   48.985342]    Ctrl+Alt+D      Restore default parameters
[   48.985342]    Ctrl+Alt+P      Restore WEB password
[   48.985342]    Ctrl+Alt+F      Turn off ACL and MAC filtering
[   48.985342]    Ctrl+Alt+Del    Reboot
[   48.985342] ********************************************
[   48.985342] 
[   60.965244] vdd_gpu_s0: disabling
```


* 由于jhttpd加载模块等动作

```shell
modprobe r8125
modprobe r8169
modprobe xhci-hcd
modprobe xhci-pci
modprobe xhci-plat-hcd
modprobe ehci-hcd
modprobe ehci-pci
modprobe ehci-platform
modprobe mmc_core
modprobe mmc_block
modprobe pwrseq_simple
modprobe sdmmc_vendor_storage
modprobe sdhci-of-dwcmshc
modprobe libata
modprobe libahci
modprobe ahci
modprobe ahci_platform
modprobe nvme-core
modprobe nvme
```


## 改造

1. usr/sbin/cdn_daemon

置空


2. usr/sbin/wys_cdn





## 问题及解决

### busybox init 挂死

```shell
[   31.937155] Freeing unused kernel memory: 18048K
[   31.947932] Run /init as init process
[   31.947940]   with arguments:
[   31.947942]     /init
[   31.947944]   with environment:
[   31.947947]     HOME=/
[   31.947949]     TERM=linux
[   31.947951]     cgroup_enable=memory
[   31.947953]     cgroup_memory=1
[   31.947955]     biosdevname=0
[   31.947958]     level=10
[   31.947960]     selinux=0
[   31.948187] Kernel panic - not syncing: Attempted to kill init! exitcode=0x00007f00
[   31.951362] CPU: 4 PID: 1 Comm: init Not tainted 5.10.160 #3890
[   31.951883] Hardware name: Rockchip RK3588 NVR DEMO LP4 SPI NOR Board (DT)
[   31.952482] Call trace:
[   31.952710]  dump_backtrace+0x0/0x1d8
[   31.953038]  show_stack+0x18/0x28
[   31.953336]  dump_stack_lvl+0xd4/0xfc
[   31.953664]  dump_stack+0x18/0x58
[   31.953961]  panic+0x168/0x33c
[   31.954237]  do_exit+0x9fc/0xa00
[   31.954522]  do_group_exit+0x44/0xa8
[   31.954838]  __wake_up_parent+0x0/0x30
[   31.955167]  el0_svc_common.constprop.4+0xb4/0x238
[   31.955591]  do_el0_svc+0x24/0x90
[   31.955887]  el0_svc+0x14/0x20
[   31.956160]  el0_sync_handler+0x90/0xb8
[   31.956499]  el0_sync+0x1a0/0x1c0
[   31.956797] SMP: stopping secondary CPUs
[   31.957148] CPU2: stopping
[   31.957149] CPU1: stopping
[   31.957151] CPU3: stopping
[   31.957153] CPU0: stopping
[   31.957155] CPU5: stopping
[   31.957158] CPU6: stopping
[   31.957161] CPU7: stopping
```


根因，busybox无法直接作为init




















