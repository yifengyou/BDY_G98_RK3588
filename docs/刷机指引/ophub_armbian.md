# armbian

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



