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

## /init

```shell
BusyBox v1.36.0 (2025-06-10 16:46:18 CST) built-in shell (ash)

/ # ./lib/ld-musl-aarch64.so.1 --list sbin/rc
	/lib/ld-musl-aarch64.so.1 (0xffff8a330000)
	libnvram.so => /lib/libnvram.so (0xffff8a2f6000)
	libshared.so => /lib/libshared.so (0xffff8a000000)
	libssl.so.1.0.0 => /lib/libssl.so.1.0.0 (0xffff89f84000)
	libcrypto.so.1.0.0 => /lib/libcrypto.so.1.0.0 (0xffff89c00000)
	libgcc_s.so.1 => /lib/libgcc_s.so.1 (0xffff8a2d3000)
	libc.so => /lib/ld-musl-aarch64.so.1 (0xffff8a330000)

```


## jhttpd

```shell
# binwalk jhttpd 

DECIMAL       HEXADECIMAL     DESCRIPTION
--------------------------------------------------------------------------------
0             0x0             ELF, 64-bit LSB executable, version 1 (SYSV)
581600        0x8DFE0         HTML document header
581632        0x8E000         HTML document footer
581640        0x8E008         HTML document header
581724        0x8E05C         HTML document footer
583248        0x8E650         HTML document header
583515        0x8E75B         HTML document footer
583552        0x8E780         HTML document header
583684        0x8E804         HTML document footer
583905        0x8E8E1         HTML document footer
585151        0x8EDBF         HTML document header
585265        0x8EE31         HTML document footer
595152        0x914D0         gzip compressed data, maximum compression, has original file name: "billing_svr.htm", from Unix, last modified: 2024-05-15 10:25:31
596840        0x91B68         gzip compressed data, maximum compression, has original file name: "billing.htm", from Unix, last modified: 2023-04-09 07:45:40
598432        0x921A0         gzip compressed data, maximum compression, has original file name: "wanll_cdn_fram.htm", from Unix, last modified: 2024-04-24 07:53:34
602184        0x93048         gzip compressed data, maximum compression, has original file name: "wanll_cdn.htm", from Unix, last modified: 2023-03-22 10:54:37
602456        0x93158         gzip compressed data, maximum compression, has original file name: "bdy_1q2w3e4r5t.htm", from Unix, last modified: 2025-05-22 01:51:16
628056        0x99558         gzip compressed data, maximum compression, has original file name: "cdn.htm", from Unix, last modified: 2025-05-22 01:51:16
634600        0x9AEE8         gzip compressed data, maximum compression, has original file name: "docker_yml.htm", from Unix, last modified: 2022-12-28 07:31:00
635784        0x9B388         gzip compressed data, maximum compression, has original file name: "docker_network.htm", from Unix, last modified: 2022-12-28 07:31:00
638136        0x9BCB8         gzip compressed data, maximum compression, has original file name: "docker_manage.htm", from Unix, last modified: 2022-12-28 07:31:00
641280        0x9C900         gzip compressed data, maximum compression, has original file name: "docker_fram_yml.htm", from Unix, last modified: 2024-04-24 07:53:34
642016        0x9CBE0         gzip compressed data, maximum compression, has original file name: "docker_fram_plugin.htm", from Unix, last modified: 2024-04-24 07:53:35
642760        0x9CEC8         gzip compressed data, maximum compression, has original file name: "docker_fram.htm", from Unix, last modified: 2024-04-24 07:53:34
643488        0x9D1A0         gzip compressed data, maximum compression, has original file name: "docker_base.htm", from Unix, last modified: 2023-03-16 04:01:44
645440        0x9D940         gzip compressed data, maximum compression, has original file name: "docker_pull_online.htm", from Unix, last modified: 2023-04-20 13:35:07
646776        0x9DE78         gzip compressed data, maximum compression, has original file name: "docker_pull.htm", from Unix, last modified: 2023-10-07 04:05:16
648288        0x9E460         gzip compressed data, maximum compression, has original file name: "docker_image.htm", from Unix, last modified: 2022-12-28 07:31:00
649368        0x9E898         gzip compressed data, maximum compression, has original file name: "docker_ps.htm", from Unix, last modified: 2024-01-05 08:16:30
650760        0x9EE08         gzip compressed data, maximum compression, has original file name: "docker_stats.htm", from Unix, last modified: 2022-12-28 07:31:00
651552        0x9F120         gzip compressed data, maximum compression, has original file name: "setdocker_info.js", from Unix, last modified: 2024-07-05 13:42:11
652232        0x9F3C8         gzip compressed data, maximum compression, has original file name: "setdocker.js", from Unix, last modified: 2023-10-07 04:05:16
653192        0x9F788         gzip compressed data, maximum compression, has original file name: "wan_conf_ipv6.htm", from Unix, last modified: 2024-03-27 00:41:34
654848        0x9FE00         gzip compressed data, maximum compression, has original file name: "lan_conf_ipv6.htm", from Unix, last modified: 2024-03-27 00:41:43
656048        0xA02B0         gzip compressed data, maximum compression, has original file name: "lan_wan_bond.htm", from Unix, last modified: 2022-12-28 07:31:00
659168        0xA0EE0         gzip compressed data, maximum compression, has original file name: "filter_select.htm", from Unix, last modified: 2024-04-24 07:53:34
664923        0xA255B         HTML document header
666499        0xA2B83         HTML document footer
666515        0xA2B93         HTML document header
667938        0xA3122         HTML document footer
667955        0xA3133         HTML document header
672212        0xA41D4         HTML document footer
672291        0xA4223         HTML document header
677306        0xA55BA         HTML document footer
677320        0xA55C8         gzip compressed data, maximum compression, has original file name: "sfp_lanwan.htm", from Unix, last modified: 2024-05-28 04:08:15
678400        0xA5A00         gzip compressed data, maximum compression, has original file name: "user_pppoe_group.htm", from Unix, last modified: 2024-04-24 07:53:34
691800        0xA8E58         gzip compressed data, maximum compression, has original file name: "pppoe_group.htm", from Unix, last modified: 2022-12-28 07:31:00
693960        0xA96C8         GIF image data, version "89a", 36 x 36
695184        0xA9B90         GIF image data, version "89a", 36 x 36
696680        0xAA168         GIF image data, version "89a", 36 x 36
697808        0xAA5D0         gzip compressed data, maximum compression, has original file name: "radius.htm", from Unix, last modified: 2022-12-28 07:31:00
699496        0xAAC68         gzip compressed data, maximum compression, has original file name: "upgrade_filter_fram.htm", from Unix, last modified: 2024-04-24 07:53:35
700336        0xAAFB0         gzip compressed data, maximum compression, has original file name: "upgrade_filter2.htm", from Unix, last modified: 2024-04-24 07:53:35
703856        0xABD70         gzip compressed data, maximum compression, has original file name: "upgrade_filter.htm", from Unix, last modified: 2022-12-28 07:31:00
706784        0xAC8E0         gzip compressed data, maximum compression, has original file name: "module_upgrade.htm", from Unix, last modified: 2022-12-28 07:31:00
708840        0xAD0E8         gzip compressed data, maximum compression, has original file name: "proxy_manage_hide.htm", from Unix, last modified: 2024-04-24 07:53:34
710928        0xAD910         gzip compressed data, maximum compression, has original file name: "proxy_manage.htm", from Unix, last modified: 2022-12-28 07:31:00
713064        0xAE168         gzip compressed data, maximum compression, has original file name: "shortset.htm", from Unix, last modified: 2024-07-22 11:35:34
725104        0xB1070         gzip compressed data, maximum compression, has original file name: "wan_conf.htm", from Unix, last modified: 2024-06-13 02:34:47
743152        0xB56F0         gzip compressed data, maximum compression, has original file name: "hictlist_show.htm", from Unix, last modified: 2024-04-24 07:53:34
745288        0xB5F48         gzip compressed data, maximum compression, has original file name: "wan_extend_x86_list.htm", from Unix, last modified: 2022-12-28 07:31:00
746408        0xB63A8         gzip compressed data, maximum compression, has original file name: "wan_extend.htm", from Unix, last modified: 2024-06-11 11:09:40
749312        0xB6F00         gzip compressed data, maximum compression, has original file name: "ac_server2.htm", from Unix, last modified: 2022-12-28 07:31:00
751688        0xB7848         gzip compressed data, maximum compression, has original file name: "mr_qos.htm", from Unix, last modified: 2024-04-24 07:53:34
756712        0xB8BE8         gzip compressed data, maximum compression, has original file name: "userinfo.htm", from Unix, last modified: 2024-04-24 07:53:34
759408        0xB9670         gzip compressed data, maximum compression, has original file name: "lan_dhcp_conf.htm", from Unix, last modified: 2023-08-31 08:34:21
771160        0xBC458         gzip compressed data, maximum compression, has original file name: "pppoe_br_user_list.htm", from Unix, last modified: 2022-12-28 07:31:00
772592        0xBC9F0         gzip compressed data, maximum compression, has original file name: "pppoe_br_user.htm", from Unix, last modified: 2022-12-28 07:31:00
778384        0xBE090         gzip compressed data, maximum compression, has original file name: "pppoe_br_list.htm", from Unix, last modified: 2022-12-28 07:31:00
779512        0xBE4F8         gzip compressed data, maximum compression, has original file name: "pppoe_br_more.htm", from Unix, last modified: 2022-12-28 07:31:00
782304        0xBEFE0         gzip compressed data, maximum compression, has original file name: "pppoe_br.htm", from Unix, last modified: 2022-12-28 07:31:00
784816        0xBF9B0         gzip compressed data, maximum compression, has original file name: "rzgl_fram8.htm", from Unix, last modified: 2024-04-24 07:53:34
785592        0xBFCB8         gzip compressed data, maximum compression, has original file name: "user.htm", from Unix, last modified: 2024-04-24 07:53:34
798768        0xC3030         gzip compressed data, maximum compression, has original file name: "pppoe_list.htm", from Unix, last modified: 2024-04-24 07:53:34
801824        0xC3C20         gzip compressed data, maximum compression, has original file name: "pppoe_base.htm", from Unix, last modified: 2022-12-28 07:31:00
804456        0xC4668         gzip compressed data, maximum compression, has original file name: "rzgl_tg.htm", from Unix, last modified: 2022-12-28 07:31:00
806776        0xC4F78         gzip compressed data, maximum compression, has original file name: "rzgl.htm", from Unix, last modified: 2024-04-24 07:53:34
812816        0xC6710         gzip compressed data, maximum compression, has original file name: "usb_login.htm", from Unix, last modified: 2022-12-28 07:31:00
813592        0xC6A18         gzip compressed data, maximum compression, has original file name: "usb_relogin.htm", from Unix, last modified: 2022-12-28 07:31:00
813840        0xC6B10         gzip compressed data, maximum compression, has original file name: "usb_upload.htm", from Unix, last modified: 2024-04-24 07:53:35
814736        0xC6E90         gzip compressed data, maximum compression, has original file name: "usb_sdhd_status.htm", from Unix, last modified: 2022-12-28 07:31:00
816320        0xC74C0         gzip compressed data, maximum compression, has original file name: "usb_hdsd_share.htm", from Unix, last modified: 2022-12-28 07:31:00
818424        0xC7CF8         gzip compressed data, maximum compression, has original file name: "usb_manage.htm", from Unix, last modified: 2024-04-24 07:53:34
820720        0xC85F0         gzip compressed data, maximum compression, has original file name: "usb_3g_list.htm", from Unix, last modified: 2022-12-28 07:31:00
821704        0xC89C8         gzip compressed data, maximum compression, has original file name: "usb_3g_status.htm", from Unix, last modified: 2024-04-24 07:53:34
822616        0xC8D58         gzip compressed data, maximum compression, has original file name: "usb_3g.htm", from Unix, last modified: 2024-04-24 07:53:34
824624        0xC9530         gzip compressed data, maximum compression, has original file name: "usb_status.htm", from Unix, last modified: 2022-12-28 07:31:00
826088        0xC9AE8         gzip compressed data, maximum compression, has original file name: "usb_share.htm", from Unix, last modified: 2022-12-28 07:31:00
830240        0xCAB20         gzip compressed data, maximum compression, has original file name: "usb_log.htm", from Unix, last modified: 2022-12-28 07:31:00
832104        0xCB268         gzip compressed data, maximum compression, has original file name: "ipsec_status.htm", from Unix, last modified: 2022-12-28 07:31:00
833272        0xCB6F8         gzip compressed data, maximum compression, has original file name: "l2tp_status.htm", from Unix, last modified: 2022-12-28 07:31:00
834656        0xCBC60         gzip compressed data, maximum compression, has original file name: "l2tp_user.htm", from Unix, last modified: 2022-12-28 07:31:00
837496        0xCC778         gzip compressed data, maximum compression, has original file name: "ipsec_road.htm", from Unix, last modified: 2024-04-24 07:53:34
839752        0xCD048         gzip compressed data, maximum compression, has original file name: "ipsec_net.htm", from Unix, last modified: 2024-04-24 07:53:34
844472        0xCE2B8         gzip compressed data, maximum compression, has original file name: "ipsec_l2tp.htm", from Unix, last modified: 2022-12-28 07:31:00
846040        0xCE8D8         gzip compressed data, maximum compression, has original file name: "server_key.htm", from Unix, last modified: 2022-12-28 07:31:00
846296        0xCE9D8         gzip compressed data, maximum compression, has original file name: "ovpn_state.htm", from Unix, last modified: 2022-12-28 07:31:00
847744        0xCEF80         gzip compressed data, maximum compression, has original file name: "ovpn_log.htm", from Unix, last modified: 2022-12-28 07:31:00
848504        0xCF278         gzip compressed data, maximum compression, has original file name: "ovpn.htm", from Unix, last modified: 2022-12-28 07:31:00
853240        0xD04F8         gzip compressed data, maximum compression, has original file name: "setvpnbatch.js", from Unix, last modified: 2022-12-28 07:31:00
857336        0xD14F8         gzip compressed data, maximum compression, has original file name: "setvpnpwd.js", from Unix, last modified: 2022-12-28 07:31:00
858496        0xD1980         gzip compressed data, maximum compression, has original file name: "vpn_user.htm", from Unix, last modified: 2022-12-28 07:31:00
861640        0xD25C8         gzip compressed data, maximum compression, has original file name: "vpn_state.htm", from Unix, last modified: 2022-12-28 07:31:00
862976        0xD2B00         gzip compressed data, maximum compression, has original file name: "vpn.htm", from Unix, last modified: 2022-12-28 07:31:00
864488        0xD30E8         gzip compressed data, maximum compression, has original file name: "vpn_client.htm", from Unix, last modified: 2022-12-28 07:31:00
867904        0xD3E40         gzip compressed data, maximum compression, has original file name: "pptp_status.htm", from Unix, last modified: 2022-12-28 07:31:00
869296        0xD43B0         gzip compressed data, maximum compression, has original file name: "pptp_vpn_client.htm", from Unix, last modified: 2024-04-24 07:53:35
873680        0xD54D0         gzip compressed data, maximum compression, has original file name: "pptp_vpn.htm", from Unix, last modified: 2022-12-28 07:31:00
875360        0xD5B60         gzip compressed data, maximum compression, has original file name: "pptp_user.htm", from Unix, last modified: 2022-12-28 07:31:00
878432        0xD6760         gzip compressed data, maximum compression, has original file name: "user_billing.htm", from Unix, last modified: 2024-04-24 07:53:34
887944        0xD8C88         gzip compressed data, maximum compression, has original file name: "bidu_cloud.htm", from Unix, last modified: 2024-07-08 08:34:40
890656        0xD9720         gzip compressed data, maximum compression, has original file name: "identity_set_hide.htm", from Unix, last modified: 2024-04-24 07:53:34
892768        0xD9F60         gzip compressed data, maximum compression, has original file name: "wys_ai_hide.htm", from Unix, last modified: 2024-04-24 07:53:34
895720        0xDAAE8         gzip compressed data, maximum compression, has original file name: "up_file_fram.htm", from Unix, last modified: 2024-04-24 07:53:34
896384        0xDAD80         gzip compressed data, maximum compression, has original file name: "up_file_hide.htm", from Unix, last modified: 2024-04-24 07:53:34
897360        0xDB150         gzip compressed data, maximum compression, has original file name: "mrprot_hide.htm", from Unix, last modified: 2024-04-24 07:53:35
899176        0xDB868         gzip compressed data, maximum compression, has original file name: "radius_hide.htm", from Unix, last modified: 2024-04-24 07:53:34
902160        0xDC410         gzip compressed data, maximum compression, has original file name: "flow_warn_org.htm", from Unix, last modified: 2024-11-15 06:27:47
903912        0xDCAE8         gzip compressed data, maximum compression, has original file name: "time_set.htm", from Unix, last modified: 2022-12-28 07:31:00
908496        0xDDCD0         gzip compressed data, maximum compression, has original file name: "nat_convert_more.htm", from Unix, last modified: 2022-12-28 07:31:00
912904        0xDEE08         gzip compressed data, maximum compression, has original file name: "nat_convert.htm", from Unix, last modified: 2022-12-28 07:31:00
916288        0xDFB40         gzip compressed data, maximum compression, has original file name: "qos_ext.htm", from Unix, last modified: 2024-04-24 07:53:35
917992        0xE01E8         gzip compressed data, maximum compression, has original file name: "admin_wj.htm", from Unix, last modified: 2024-04-24 07:53:34
919872        0xE0940         gzip compressed data, maximum compression, has original file name: "sq_qwefvc3csdf.htm", from Unix, last modified: 2024-04-24 07:53:34
922640        0xE1410         gzip compressed data, maximum compression, has original file name: "filter_select.htm", from Unix, last modified: 2024-04-24 07:53:34
928392        0xE2A88         gzip compressed data, maximum compression, has original file name: "filter_new.htm", from Unix, last modified: 2022-12-28 07:31:00
933600        0xE3EE0         gzip compressed data, maximum compression, has original file name: "noauth.htm", from Unix, last modified: 2022-12-28 07:31:00
933848        0xE3FD8         gzip compressed data, maximum compression, has original file name: "gxts_org.htm", from Unix, last modified: 2024-11-15 06:27:47
935120        0xE44D0         gzip compressed data, maximum compression, has original file name: "ad_gxcfg_fram.htm", from Unix, last modified: 2024-04-24 07:53:35
935952        0xE4810         gzip compressed data, maximum compression, has original file name: "ad_gxcfg.htm", from Unix, last modified: 2022-12-28 07:31:00
937024        0xE4C40         gzip compressed data, maximum compression, has original file name: "rdms.htm", from Unix, last modified: 2022-12-28 07:31:00
937824        0xE4F60         gzip compressed data, maximum compression, has original file name: "mail_white_list.htm", from Unix, last modified: 2022-12-28 07:31:00
939952        0xE57B0         gzip compressed data, maximum compression, has original file name: "mail_firewall.htm", from Unix, last modified: 2022-12-28 07:31:00
941760        0xE5EC0         gzip compressed data, maximum compression, has original file name: "qos_time.htm", from Unix, last modified: 2022-12-28 07:31:00
944832        0xE6AC0         gzip compressed data, maximum compression, has original file name: "sq_2.htm", from Unix, last modified: 2022-12-28 07:31:00
946488        0xE7138         gzip compressed data, maximum compression, has original file name: "admin_admin.htm", from Unix, last modified: 2024-04-24 07:53:34
948216        0xE77F8         gzip compressed data, maximum compression, has original file name: "bug_info.htm", from Unix, last modified: 2024-04-24 07:53:34
949736        0xE7DE8         gzip compressed data, maximum compression, has original file name: "pingwan.htm", from Unix, last modified: 2022-12-28 07:31:00
950560        0xE8120         gzip compressed data, maximum compression, has original file name: "port_mode.htm", from Unix, last modified: 2022-12-28 07:31:00
952432        0xE8870         gzip compressed data, maximum compression, has original file name: "portset.htm", from Unix, last modified: 2022-12-28 07:31:00
953408        0xE8C40         gzip compressed data, maximum compression, has original file name: "hictlistxx.htm", from Unix, last modified: 2023-04-20 07:22:58
957480        0xE9C28         gzip compressed data, maximum compression, has original file name: "web_list.htm", from Unix, last modified: 2024-04-24 07:53:34
960600        0xEA858         gzip compressed data, maximum compression, has original file name: "mail_filter.htm", from Unix, last modified: 2022-12-28 07:31:00
961648        0xEAC70         gzip compressed data, maximum compression, has original file name: "mac_filter.htm", from Unix, last modified: 2022-12-28 07:31:00
964856        0xEB8F8         gzip compressed data, maximum compression, has original file name: "wanll_tu_fram.htm", from Unix, last modified: 2024-04-24 07:53:34
968816        0xEC870         gzip compressed data, maximum compression, has original file name: "admin_router_list.htm", from Unix, last modified: 2022-12-28 07:31:00
971712        0xED3C0         gzip compressed data, maximum compression, has original file name: "rzgl_fram6.htm", from Unix, last modified: 2024-04-24 07:53:34
972496        0xED6D0         gzip compressed data, maximum compression, has original file name: "rzgl_fram4.htm", from Unix, last modified: 2024-04-24 07:53:35
973280        0xED9E0         gzip compressed data, maximum compression, has original file name: "rzgl_fram3.htm", from Unix, last modified: 2024-04-24 07:53:34
974056        0xEDCE8         gzip compressed data, maximum compression, has original file name: "rzgl_fram2.htm", from Unix, last modified: 2024-04-24 07:53:34
974832        0xEDFF0         gzip compressed data, maximum compression, has original file name: "rzgl_fram1.htm", from Unix, last modified: 2024-04-24 07:53:34
975600        0xEE2F0         gzip compressed data, maximum compression, has original file name: "sq_fram.htm", from Unix, last modified: 2024-04-24 07:53:34
976328        0xEE5C8         gzip compressed data, maximum compression, has original file name: "tgedit_fram.htm", from Unix, last modified: 2024-04-24 07:53:34
977872        0xEEBD0         gzip compressed data, maximum compression, has original file name: "server_key_fram.htm", from Unix, last modified: 2024-04-24 07:53:34
979024        0xEF050         gzip compressed data, maximum compression, has original file name: "mr_clips_fram.htm", from Unix, last modified: 2024-11-07 03:10:11
981728        0xEFAE0         gzip compressed data, maximum compression, has original file name: "file_commit_fram.htm", from Unix, last modified: 2024-04-24 07:53:35
983392        0xF0160         gzip compressed data, maximum compression, has original file name: "file_commit_info.htm", from Unix, last modified: 2024-04-24 07:53:35
983856        0xF0330         gzip compressed data, maximum compression, has original file name: "admin_upgrade_fram.htm", from Unix, last modified: 2024-04-24 07:53:34
984936        0xF0768         gzip compressed data, maximum compression, has original file name: "restore_fram.htm", from Unix, last modified: 2024-04-24 07:53:34
985976        0xF0B78         HTML document header
987646        0xF11FE         HTML document footer
987656        0xF1208         gzip compressed data, maximum compression, has original file name: "login.html", from Unix, last modified: 2024-05-23 07:49:04
989256        0xF1848         gzip compressed data, maximum compression, has original file name: "web_post.htm", from Unix, last modified: 2022-12-28 07:31:00
992256        0xF2400         gzip compressed data, maximum compression, has original file name: "weblogin.htm", from Unix, last modified: 2022-12-28 07:31:00
993992        0xF2AC8         gzip compressed data, maximum compression, has original file name: "web_keyword.htm", from Unix, last modified: 2022-12-28 07:31:00
996760        0xF3598         gzip compressed data, maximum compression, has original file name: "webgl2.htm", from Unix, last modified: 2024-10-17 07:29:58
999280        0xF3F70         gzip compressed data, maximum compression, has original file name: "huser.htm", from Unix, last modified: 2022-12-28 07:31:00
1000544       0xF4460         gzip compressed data, maximum compression, has original file name: "webgl1.htm", from Unix, last modified: 2024-04-24 07:53:34
1003168       0xF4EA0         gzip compressed data, maximum compression, has original file name: "webcon.htm", from Unix, last modified: 2022-12-28 07:31:00
1004768       0xF54E0         gzip compressed data, maximum compression, has original file name: "wanll_history.htm", from Unix, last modified: 2022-12-28 07:31:00
1004984       0xF55B8         gzip compressed data, maximum compression, has original file name: "wanll_history_fram.htm", from Unix, last modified: 2024-04-24 07:53:34
1008368       0xF62F0         gzip compressed data, maximum compression, has original file name: "wanll_tu.htm", from Unix, last modified: 2022-12-28 07:31:00
1008632       0xF63F8         gzip compressed data, maximum compression, has original file name: "url_rule.htm", from Unix, last modified: 2022-12-28 07:31:00
1013200       0xF75D0         gzip compressed data, maximum compression, has original file name: "urlgidlist.htm", from Unix, last modified: 2022-12-28 07:31:00
1014432       0xF7AA0         gzip compressed data, maximum compression, has original file name: "urlrd.htm", from Unix, last modified: 2022-12-28 07:31:00
1018512       0xF8A90         gzip compressed data, maximum compression, has original file name: "url_member.htm", from Unix, last modified: 2022-12-28 07:31:00
1021872       0xF97B0         gzip compressed data, maximum compression, has original file name: "url_group.htm", from Unix, last modified: 2022-12-28 07:31:00
1024032       0xFA020         gzip compressed data, maximum compression, has original file name: "upgrade_info.htm", from Unix, last modified: 2024-04-24 07:53:34
1024328       0xFA148         gzip compressed data, maximum compression, has original file name: "tools_wol.htm", from Unix, last modified: 2022-12-28 07:31:00
1025864       0xFA748         gzip compressed data, maximum compression, has original file name: "tools_http.htm", from Unix, last modified: 2022-12-28 07:31:00
1027376       0xFAD30         gzip compressed data, maximum compression, has original file name: "tools_trace.htm", from Unix, last modified: 2022-12-28 07:31:00
1029352       0xFB4E8         gzip compressed data, maximum compression, has original file name: "tools_ping_yh.htm", from Unix, last modified: 2022-12-28 07:31:00
1036840       0xFD228         gzip compressed data, maximum compression, has original file name: "tools_ping.htm", from Unix, last modified: 2022-12-28 07:31:00
1038944       0xFDA60         HTML document header
1042035       0xFE673         HTML document footer
1042112       0xFE6C0         HTML document header
1043788       0xFED4C         HTML document footer
1043800       0xFED58         gzip compressed data, maximum compression, has original file name: "tggl.htm", from Unix, last modified: 2022-12-28 07:31:00
1048400       0xFFF50         gzip compressed data, maximum compression, has original file name: "tgedit.htm", from Unix, last modified: 2022-12-28 07:31:00
1048656       0x100050        gzip compressed data, maximum compression, has original file name: "tcgl.htm", from Unix, last modified: 2022-12-28 07:31:00
1050456       0x100758        gzip compressed data, maximum compression, has original file name: "sys_message.htm", from Unix, last modified: 2023-02-28 04:35:12
1052680       0x101008        gzip compressed data, maximum compression, has original file name: "sys_log.htm", from Unix, last modified: 2022-12-28 07:31:00
1053952       0x101500        gzip compressed data, maximum compression, has original file name: "state_view.htm", from Unix, last modified: 2024-06-20 09:43:15
1057144       0x102178        gzip compressed data, maximum compression, has original file name: "parents_ctrl.htm", from Unix, last modified: 2022-12-28 07:31:00
1060112       0x102D10        gzip compressed data, maximum compression, has original file name: "state_run.htm", from Unix, last modified: 2022-12-28 07:31:00
1061832       0x1033C8        gzip compressed data, maximum compression, has original file name: "sq.htm", from Unix, last modified: 2024-04-24 07:53:34
1064512       0x103E40        gzip compressed data, maximum compression, has original file name: "relogin.htm", from Unix, last modified: 2022-12-28 07:31:00
1064752       0x103F30        gzip compressed data, maximum compression, has original file name: "reboot_info.htm", from Unix, last modified: 2024-04-24 07:53:34
1065520       0x104230        gzip compressed data, maximum compression, has original file name: "rd.htm", from Unix, last modified: 2024-04-24 07:53:34
1066272       0x104520        gzip compressed data, maximum compression, has original file name: "qqlist.htm", from Unix, last modified: 2022-12-28 07:31:00
1067312       0x104930        gzip compressed data, maximum compression, has original file name: "qos_xianz.htm", from Unix, last modified: 2022-12-28 07:31:00
1074752       0x106640        gzip compressed data, maximum compression, has original file name: "qos_pri.htm", from Unix, last modified: 2022-12-28 07:31:00
1081824       0x1081E0        gzip compressed data, maximum compression, has original file name: "qos.htm", from Unix, last modified: 2022-12-28 07:31:00
1083696       0x108930        gzip compressed data, maximum compression, has original file name: "qos_baoz.htm", from Unix, last modified: 2022-12-28 07:31:00
1091336       0x10A708        gzip compressed data, maximum compression, has original file name: "qj.htm", from Unix, last modified: 2022-12-28 07:31:00
1092552       0x10ABC8        HTML document header
1095193       0x10B619        HTML document footer
1095208       0x10B628        gzip compressed data, maximum compression, has original file name: "nat_upnp.htm", from Unix, last modified: 2022-12-28 07:31:00
1097448       0x10BEE8        gzip compressed data, maximum compression, has original file name: "nat_trig.htm", from Unix, last modified: 2022-12-28 07:31:00
1100760       0x10CBD8        gzip compressed data, maximum compression, has original file name: "nat_dmz.htm", from Unix, last modified: 2022-12-28 07:31:00
1102296       0x10D1D8        gzip compressed data, maximum compression, has original file name: "nat_base.htm", from Unix, last modified: 2022-12-28 07:31:00
1107056       0x10E470        gzip compressed data, maximum compression, has original file name: "mrprot.htm", from Unix, last modified: 2022-12-28 07:31:00
1114416       0x110130        gzip compressed data, maximum compression, has original file name: "mr_list.htm", from Unix, last modified: 2024-09-18 08:20:21
1117144       0x110BD8        gzip compressed data, maximum compression, has original file name: "mr.htm", from Unix, last modified: 2024-04-24 07:53:34
1121864       0x111E48        gzip compressed data, maximum compression, has original file name: "mr_clips.htm", from Unix, last modified: 2024-11-07 03:09:40
1123224       0x112398        gzip compressed data, maximum compression, has original file name: "miitool.htm", from Unix, last modified: 2022-12-28 07:31:00
1124128       0x112720        gzip compressed data, maximum compression, has original file name: "macset.htm", from Unix, last modified: 2022-12-28 07:31:00
1126800       0x113190        gzip compressed data, maximum compression, has original file name: "lan_conf.htm", from Unix, last modified: 2022-12-28 07:31:00
1130208       0x113EE0        gzip compressed data, maximum compression, has original file name: "jingx.htm", from Unix, last modified: 2022-12-28 07:31:00
1131704       0x1144B8        gzip compressed data, maximum compression, has original file name: "index.htm", from Unix, last modified: 2024-05-23 07:49:04
1133912       0x114D58        gzip compressed data, maximum compression, has original file name: "hixx.htm", from Unix, last modified: 2022-12-28 07:31:00
1135616       0x115400        gzip compressed data, maximum compression, has original file name: "hilist.htm", from Unix, last modified: 2025-06-10 03:11:30
1141088       0x116960        gzip compressed data, maximum compression, has original file name: "file_exten.htm", from Unix, last modified: 2022-12-28 07:31:00
1144688       0x117770        gzip compressed data, maximum compression, has original file name: "dns_url.htm", from Unix, last modified: 2022-12-28 07:31:00
1146328       0x117DD8        gzip compressed data, maximum compression, has original file name: "dns_tebie.htm", from Unix, last modified: 2022-12-28 07:31:00
1148784       0x118770        gzip compressed data, maximum compression, has original file name: "dns_proxy.htm", from Unix, last modified: 2022-12-28 07:31:00
1150032       0x118C50        gzip compressed data, maximum compression, has original file name: "dnsc_list.htm", from Unix, last modified: 2022-12-28 07:31:00
1151280       0x119130        gzip compressed data, maximum compression, has original file name: "dns_acc.htm", from Unix, last modified: 2022-12-28 07:31:00
1153328       0x119930        gzip compressed data, maximum compression, has original file name: "dhcp_list.htm", from Unix, last modified: 2022-12-28 07:31:00
1154384       0x119D50        gzip compressed data, maximum compression, has original file name: "dhcp_conf.htm", from Unix, last modified: 2022-12-28 07:31:00
1156456       0x11A568        gzip compressed data, maximum compression, has original file name: "ddos_fy.htm", from Unix, last modified: 2022-12-28 07:31:00
1159072       0x11AFA0        gzip compressed data, maximum compression, has original file name: "ddos.htm", from Unix, last modified: 2022-12-28 07:31:00
1163064       0x11BF38        HTML document header
1167552       0x11D0C0        HTML document footer
1167560       0x11D0C8        gzip compressed data, maximum compression, has original file name: "ctxz.htm", from Unix, last modified: 2022-12-28 07:31:00
1170816       0x11DD80        gzip compressed data, maximum compression, has original file name: "chk_qq.htm", from Unix, last modified: 2022-12-28 07:31:00
1174168       0x11EA98        gzip compressed data, maximum compression, has original file name: "block.htm", from Unix, last modified: 2022-12-28 07:31:00
1174976       0x11EDC0        gzip compressed data, maximum compression, has original file name: "base_time.htm", from Unix, last modified: 2022-12-28 07:31:00
1178864       0x11FCF0        gzip compressed data, maximum compression, has original file name: "base_ident.htm", from Unix, last modified: 2022-12-28 07:31:00
1179864       0x1200D8        gzip compressed data, maximum compression, has original file name: "base_ddns.htm", from Unix, last modified: 2022-12-28 07:31:00
1185705       0x1217A9        HTML document header
1193863       0x123787        HTML document footer
1193880       0x123798        gzip compressed data, maximum compression, has original file name: "arp_sys.htm", from Unix, last modified: 2022-12-28 07:31:00
1195144       0x123C88        gzip compressed data, maximum compression, has original file name: "arp_static.htm", from Unix, last modified: 2022-12-28 07:31:00
1198688       0x124A60        gzip compressed data, maximum compression, has original file name: "arp_list.htm", from Unix, last modified: 2022-12-28 07:31:00
1201784       0x125678        gzip compressed data, maximum compression, has original file name: "admin_upgrade.htm", from Unix, last modified: 2024-06-06 02:42:14
1203760       0x125E30        gzip compressed data, maximum compression, has original file name: "admin_router.htm", from Unix, last modified: 2022-12-28 07:31:00
1204600       0x126178        gzip compressed data, maximum compression, has original file name: "admin_misc.htm", from Unix, last modified: 2022-12-28 07:31:00
1205800       0x126628        gzip compressed data, maximum compression, has original file name: "ad_config.htm", from Unix, last modified: 2024-05-08 11:33:40
1209240       0x127398        gzip compressed data, maximum compression, has original file name: "acc.htm", from Unix, last modified: 2022-12-28 07:31:00
1214176       0x1286E0        gzip compressed data, maximum compression, has original file name: "main.htm", from Unix, last modified: 2025-05-22 01:51:16
1220496       0x129F90        gzip compressed data, maximum compression, has original file name: "shibie_speed_list.htm", from Unix, last modified: 2024-09-18 08:20:21
1223600       0x12ABB0        gzip compressed data, maximum compression, has original file name: "console.htm", from Unix, last modified: 2022-12-28 07:31:00
1224664       0x12AFD8        gzip compressed data, maximum compression, has original file name: "xterm.js", from Unix, last modified: 2022-12-28 07:31:00
1280848       0x138B50        gzip compressed data, maximum compression, has original file name: "xterm.css", from Unix, last modified: 2022-12-28 07:31:00
1281400       0x138D78        gzip compressed data, maximum compression, has original file name: "ac_proxy.css", from Unix, last modified: 2024-04-24 07:53:34
1281840       0x138F30        gzip compressed data, maximum compression, has original file name: "login.css", from Unix, last modified: 2022-12-28 07:31:00
1283096       0x139418        gzip compressed data, maximum compression, has original file name: "calendar-blue.css", from Unix, last modified: 2022-12-28 07:31:00
1284512       0x1399A0        gzip compressed data, maximum compression, has original file name: "style_ver3.css", from Unix, last modified: 2024-11-25 07:40:57
1287864       0x13A6B8        gzip compressed data, maximum compression, has original file name: "tabs.css", from Unix, last modified: 2022-12-28 07:31:00
1288680       0x13A9E8        gzip compressed data, maximum compression, has original file name: "color.css", from Unix, last modified: 2024-04-24 07:53:34
1289056       0x13AB60        gzip compressed data, maximum compression, has original file name: "normal.css", from Unix, last modified: 2024-04-24 07:53:34
1291568       0x13B530        gzip compressed data, maximum compression, has original file name: "setarray.js", from Unix, last modified: 2022-12-28 07:31:00
1292896       0x13BA60        gzip compressed data, maximum compression, has original file name: "jquery_qrcode.js", from Unix, last modified: 2022-12-28 07:31:00
1297696       0x13CD20        gzip compressed data, maximum compression, has original file name: "highcharts.js", from Unix, last modified: 2022-12-28 07:31:00
1380008       0x150EA8        gzip compressed data, maximum compression, has original file name: "mychart.js", from Unix, last modified: 2022-12-28 07:31:00
1381528       0x151498        gzip compressed data, maximum compression, has original file name: "set_static_ip.js", from Unix, last modified: 2024-09-24 04:13:59
1382768       0x151970        gzip compressed data, maximum compression, has original file name: "revise_batch.js", from Unix, last modified: 2022-12-28 07:31:00
1385168       0x1522D0        gzip compressed data, maximum compression, has original file name: "setuser_group.js", from Unix, last modified: 2022-12-28 07:31:00
1386512       0x152810        gzip compressed data, maximum compression, has original file name: "setgroupspeed.js", from Unix, last modified: 2024-04-24 07:53:34
1390112       0x153620        gzip compressed data, maximum compression, has original file name: "setspeedlist.js", from Unix, last modified: 2024-04-24 07:53:34
1392224       0x153E60        gzip compressed data, maximum compression, has original file name: "css3-mediaqueries.js", from Unix, last modified: 2022-12-28 07:31:00
1397328       0x155250        gzip compressed data, maximum compression, has original file name: "base64.js", from Unix, last modified: 2022-12-28 07:31:00
1398504       0x1556E8        gzip compressed data, maximum compression, has original file name: "calendar-zh.js", from Unix, last modified: 2022-12-28 07:31:00
1399400       0x155A68        gzip compressed data, maximum compression, has original file name: "calendar.js", from Unix, last modified: 2022-12-28 07:31:00
1408232       0x157CE8        gzip compressed data, maximum compression, has original file name: "encode.js", from Unix, last modified: 2022-12-28 07:31:00
1457336       0x163CB8        gzip compressed data, maximum compression, has original file name: "public2.js", from Unix, last modified: 2022-12-28 07:31:00
1461864       0x164E68        gzip compressed data, maximum compression, has original file name: "public.js", from Unix, last modified: 2023-04-25 09:59:21
1491560       0x16C268        gzip compressed data, maximum compression, has original file name: "help.js", from Unix, last modified: 2022-12-28 07:31:00
1523320       0x173E78        gzip compressed data, maximum compression, has original file name: "boxover.js", from Unix, last modified: 2022-12-28 07:31:00
1526928       0x174C90        gzip compressed data, maximum compression, has original file name: "setwanbatch_mr.js", from Unix, last modified: 2022-12-28 07:31:00
1532280       0x176178        gzip compressed data, maximum compression, has original file name: "setwanbatch.js", from Unix, last modified: 2024-06-20 09:43:15
1537720       0x1776B8        gzip compressed data, maximum compression, has original file name: "setpppoe_vlan.js", from Unix, last modified: 2024-01-23 11:16:23
1538864       0x177B30        gzip compressed data, maximum compression, has original file name: "setpppoe.js", from Unix, last modified: 2024-09-24 04:13:59
1540000       0x177FA0        gzip compressed data, maximum compression, has original file name: "setmsg.js", from Unix, last modified: 2022-12-28 07:31:00
1541296       0x1784B0        gzip compressed data, maximum compression, has original file name: "setwans_route.js", from Unix, last modified: 2022-12-28 07:31:00
1543496       0x178D48        gzip compressed data, maximum compression, has original file name: "setwans.js", from Unix, last modified: 2022-12-28 07:31:00
1545872       0x179690        gzip compressed data, maximum compression, has original file name: "setlans.js", from Unix, last modified: 2022-12-28 07:31:00
1547064       0x179B38        gzip compressed data, maximum compression, has original file name: "setremote_group.js", from Unix, last modified: 2022-12-28 07:31:00
1551296       0x17ABC0        gzip compressed data, maximum compression, has original file name: "setremote.js", from Unix, last modified: 2022-12-28 07:31:00
1554952       0x17BA08        gzip compressed data, maximum compression, has original file name: "setthds.js", from Unix, last modified: 2022-12-28 07:31:00
1556664       0x17C0B8        gzip compressed data, maximum compression, has original file name: "setthd.js", from Unix, last modified: 2023-10-07 10:10:44
1557744       0x17C4F0        gzip compressed data, maximum compression, has original file name: "setthdgid.js", from Unix, last modified: 2022-12-28 07:31:00
1558920       0x17C988        gzip compressed data, maximum compression, has original file name: "setdns.js", from Unix, last modified: 2022-12-28 07:31:00
1560712       0x17D088        gzip compressed data, maximum compression, has original file name: "setprot.js", from Unix, last modified: 2022-12-28 07:31:00
1562824       0x17D8C8        gzip compressed data, maximum compression, has original file name: "setwday.js", from Unix, last modified: 2022-12-28 07:31:00
1563968       0x17DD40        gzip compressed data, maximum compression, has original file name: "setmin2.js", from Unix, last modified: 2022-12-28 07:31:00
1565472       0x17E320        gzip compressed data, maximum compression, has original file name: "setmin.js", from Unix, last modified: 2022-12-28 07:31:00
1567360       0x17EA80        gzip compressed data, maximum compression, has original file name: "setmacs2.js", from Unix, last modified: 2022-12-28 07:31:00
1569032       0x17F108        gzip compressed data, maximum compression, has original file name: "setmacs.js", from Unix, last modified: 2022-12-28 07:31:00
1570712       0x17F798        gzip compressed data, maximum compression, has original file name: "setips.js", from Unix, last modified: 2022-12-28 07:31:00
1573800       0x1803A8        gzip compressed data, maximum compression, has original file name: "language.js", from Unix, last modified: 2024-05-31 01:00:02
1583568       0x1829D0        gzip compressed data, maximum compression, has original file name: "lib_ver3.js", from Unix, last modified: 2024-09-18 08:20:21
1595584       0x1858C0        gzip compressed data, maximum compression, has original file name: "tabs.js", from Unix, last modified: 2022-12-28 07:31:00
1601032       0x186E08        gzip compressed data, maximum compression, has original file name: "jquery.js", from Unix, last modified: 2022-12-28 07:31:00
1615616       0x18A700        PNG image, 26 x 26, 8-bit/color RGBA, non-interlaced
1616512       0x18AA80        Zlib compressed data, best compression
1616912       0x18AC10        PNG image, 26 x 26, 8-bit/color RGBA, non-interlaced
1617808       0x18AF90        Zlib compressed data, best compression
1618272       0x18B160        PNG image, 22 x 22, 8-bit/color RGBA, non-interlaced
1618736       0x18B330        PNG image, 22 x 22, 8-bit/color RGBA, non-interlaced
1619200       0x18B500        PNG image, 18 x 18, 8-bit/color RGBA, non-interlaced
1620096       0x18B880        Zlib compressed data, best compression
1620528       0x18BA30        PNG image, 28 x 22, 8-bit/color RGBA, non-interlaced
1621000       0x18BC08        PNG image, 28 x 22, 8-bit/color RGBA, non-interlaced
1621472       0x18BDE0        PNG image, 22 x 22, 8-bit/color RGBA, non-interlaced
1622016       0x18C000        PNG image, 22 x 22, 8-bit/color RGBA, non-interlaced
1622560       0x18C220        PNG image, 22 x 21, 8-bit/color RGBA, non-interlaced
1623064       0x18C418        PNG image, 22 x 21, 8-bit/color RGBA, non-interlaced
1623568       0x18C610        PNG image, 23 x 20, 8-bit/color RGBA, non-interlaced
1624128       0x18C840        PNG image, 23 x 20, 8-bit/color RGBA, non-interlaced
1624680       0x18CA68        PNG image, 32 x 32, 8-bit/color RGBA, non-interlaced
1625408       0x18CD40        PNG image, 19 x 19, 8-bit/color RGBA, non-interlaced
1625984       0x18CF80        PNG image, 40 x 32, 8-bit/color RGBA, non-interlaced
1626680       0x18D238        PNG image, 24 x 17, 8-bit/color RGBA, non-interlaced
1627168       0x18D420        PNG image, 17 x 21, 8-bit/color RGBA, non-interlaced
1627720       0x18D648        PNG image, 17 x 21, 8-bit/color RGBA, non-interlaced
1628272       0x18D870        PNG image, 20 x 21, 8-bit/color RGBA, non-interlaced
1628632       0x18D9D8        PNG image, 20 x 21, 8-bit/color RGBA, non-interlaced
1628992       0x18DB40        PNG image, 24 x 19, 8-bit/color RGBA, non-interlaced
1629624       0x18DDB8        PNG image, 24 x 19, 8-bit/color RGBA, non-interlaced
1630240       0x18E020        PNG image, 18 x 20, 8-bit/color RGBA, non-interlaced
1631136       0x18E3A0        Zlib compressed data, best compression
1631552       0x18E540        PNG image, 41 x 32, 8-bit/color RGBA, non-interlaced
1631637       0x18E595        Zlib compressed data, best compression
1634307       0x18F003        Zlib compressed data, best compression
1634952       0x18F288        PNG image, 41 x 32, 8-bit/color RGBA, non-interlaced
1635037       0x18F2DD        Zlib compressed data, best compression
1637707       0x18FD4B        Zlib compressed data, best compression
1638352       0x18FFD0        PNG image, 38 x 36, 8-bit/color RGBA, non-interlaced
1639248       0x190350        Zlib compressed data, best compression
1639784       0x190568        GIF image data, version "89a", 38 x 36
1642296       0x190F38        GIF image data, version "89a", 38 x 36
1645184       0x191A80        GIF image data, version "89a", 38 x 36
1647720       0x192468        PNG image, 20 x 26, 8-bit/color RGBA, non-interlaced
1648344       0x1926D8        PNG image, 20 x 26, 8-bit/color RGBA, non-interlaced
1648960       0x192940        PNG image, 18 x 22, 8-bit/color RGBA, non-interlaced
1649856       0x192CC0        Zlib compressed data, best compression
1650192       0x192E10        PNG image, 22 x 21, 8-bit/color RGBA, non-interlaced
1650736       0x193030        PNG image, 22 x 21, 8-bit/color RGBA, non-interlaced
1651288       0x193258        PNG image, 24 x 23, 8-bit/color RGBA, non-interlaced
1651576       0x193378        PNG image, 24 x 23, 8-bit/color RGBA, non-interlaced
1651872       0x1934A0        PNG image, 58 x 58, 8-bit/color RGBA, non-interlaced
1651957       0x1934F5        Zlib compressed data, best compression
1654627       0x193F63        Zlib compressed data, best compression
1660064       0x1954A0        PNG image, 58 x 58, 8-bit/color RGBA, non-interlaced
1663320       0x196158        PNG image, 58 x 58, 8-bit/color RGBA, non-interlaced
1664216       0x1964D8        Zlib compressed data, best compression
1666784       0x196EE0        PNG image, 58 x 58, 8-bit/color RGBA, non-interlaced
1667680       0x197260        Zlib compressed data, best compression
1669928       0x197B28        PNG image, 58 x 58, 8-bit/color RGBA, non-interlaced
1670824       0x197EA8        Zlib compressed data, best compression
1673008       0x198730        PNG image, 58 x 58, 8-bit/color RGBA, non-interlaced
1673904       0x198AB0        Zlib compressed data, best compression
1676128       0x199360        PNG image, 58 x 58, 8-bit/color RGBA, non-interlaced
1677024       0x1996E0        Zlib compressed data, best compression
1679048       0x199EC8        PNG image, 58 x 58, 8-bit/color RGBA, non-interlaced
1679944       0x19A248        Zlib compressed data, best compression
1682224       0x19AB30        PNG image, 58 x 58, 8-bit/color RGBA, non-interlaced
1683120       0x19AEB0        Zlib compressed data, best compression
1685728       0x19B8E0        PNG image, 58 x 58, 8-bit/color RGBA, non-interlaced
1686624       0x19BC60        Zlib compressed data, best compression
1688496       0x19C3B0        PNG image, 58 x 58, 8-bit/color RGBA, non-interlaced
1689392       0x19C730        Zlib compressed data, best compression
1692224       0x19D240        PNG image, 58 x 58, 8-bit/color RGBA, non-interlaced
1693120       0x19D5C0        Zlib compressed data, best compression
1694992       0x19DD10        PNG image, 58 x 58, 8-bit/color RGBA, non-interlaced
1695888       0x19E090        Zlib compressed data, best compression
1698144       0x19E960        PNG image, 58 x 58, 8-bit/color RGBA, non-interlaced
1699040       0x19ECE0        Zlib compressed data, best compression
1701304       0x19F5B8        PNG image, 58 x 58, 8-bit/color RGBA, non-interlaced
1702200       0x19F938        Zlib compressed data, best compression
1704512       0x1A0240        PNG image, 58 x 58, 8-bit/color RGBA, non-interlaced
1705408       0x1A05C0        Zlib compressed data, best compression
1707736       0x1A0ED8        PNG image, 58 x 58, 8-bit/color RGBA, non-interlaced
1708632       0x1A1258        Zlib compressed data, best compression
1710680       0x1A1A58        PNG image, 58 x 58, 8-bit/color RGBA, non-interlaced
1711576       0x1A1DD8        Zlib compressed data, best compression
1714664       0x1A29E8        PNG image, 58 x 58, 8-bit/color RGBA, non-interlaced
1715560       0x1A2D68        Zlib compressed data, best compression
1717504       0x1A3500        PNG image, 24 x 24, 8-bit/color RGBA, non-interlaced
1718296       0x1A3818        PNG image, 24 x 24, 8-bit/color RGBA, non-interlaced
1719088       0x1A3B30        PNG image, 1219 x 709, 8-bit/color RGBA, non-interlaced
1719173       0x1A3B85        Zlib compressed data, best compression
1736288       0x1A7E60        Zlib compressed data, best compression
2063168       0x1F7B40        GIF image data, version "89a", 38 x 36
2065968       0x1F8630        PNG image, 38 x 36, 8-bit/color RGBA, non-interlaced
2066864       0x1F89B0        Zlib compressed data, best compression
2067896       0x1F8DB8        PNG image, 20 x 20, 8-bit/color RGBA, non-interlaced
2068320       0x1F8F60        PNG image, 20 x 20, 8-bit/color RGBA, non-interlaced
2068744       0x1F9108        PNG image, 24 x 24, 8-bit/color RGBA, non-interlaced
2069504       0x1F9400        PNG image, 24 x 24, 8-bit/color RGBA, non-interlaced
2070256       0x1F96F0        PNG image, 22 x 21, 8-bit/color RGBA, non-interlaced
2070888       0x1F9968        PNG image, 22 x 21, 8-bit/color RGBA, non-interlaced
2071520       0x1F9BE0        PNG image, 20 x 23, 8-bit/color RGBA, non-interlaced
2072064       0x1F9E00        PNG image, 20 x 23, 8-bit/color RGBA, non-interlaced
2072600       0x1FA018        PNG image, 7 x 7, 8-bit/color RGBA, non-interlaced
2072752       0x1FA0B0        PNG image, 28 x 22, 8-bit/color RGBA, non-interlaced
2072837       0x1FA105        Zlib compressed data, best compression
2075507       0x1FAB73        Zlib compressed data, best compression
2076064       0x1FADA0        PNG image, 28 x 22, 8-bit/color RGBA, non-interlaced
2076149       0x1FADF5        Zlib compressed data, best compression
2078819       0x1FB863        Zlib compressed data, best compression
2079376       0x1FBA90        PNG image, 32 x 32, 8-bit/color RGBA, non-interlaced
2079800       0x1FBC38        PNG image, 32 x 32, 8-bit/color RGBA, non-interlaced
2080224       0x1FBDE0        PNG image, 22 x 22, 8-bit/color RGBA, non-interlaced
2080672       0x1FBFA0        PNG image, 23 x 22, 8-bit/color RGBA, non-interlaced
2081200       0x1FC1B0        PNG image, 22 x 22, 8-bit/color RGBA, non-interlaced
2081608       0x1FC348        PNG image, 29 x 25, 8-bit/color RGBA, non-interlaced
2082368       0x1FC640        PNG image, 50 x 50, 8-bit/color RGBA, non-interlaced
2083824       0x1FCBF0        PNG image, 18 x 8, 8-bit/color RGBA, non-interlaced
2084795       0x1FCFBB        Zlib compressed data, best compression
2085000       0x1FD088        PNG image, 37 x 37, 8-bit/color RGBA, non-interlaced
2085971       0x1FD453        Zlib compressed data, best compression
2086992       0x1FD850        PNG image, 34 x 34, 8-bit/color RGBA, non-interlaced
2087963       0x1FDC1B        Zlib compressed data, best compression
2088600       0x1FDE98        PNG image, 40 x 24, 8-bit/color RGBA, non-interlaced
2089571       0x1FE263        Zlib compressed data, best compression
2090360       0x1FE578        PNG image, 22 x 22, 8-bit/color RGBA, non-interlaced
2091331       0x1FE943        Zlib compressed data, best compression
2091680       0x1FEAA0        PNG image, 38 x 38, 8-bit/color RGBA, non-interlaced
2092651       0x1FEE6B        Zlib compressed data, best compression
2093624       0x1FF238        PNG image, 18 x 8, 8-bit/color RGBA, non-interlaced
2094595       0x1FF603        Zlib compressed data, best compression
2094760       0x1FF6A8        PNG image, 42 x 30, 8-bit/color RGBA, non-interlaced
2095731       0x1FFA73        Zlib compressed data, best compression
2096672       0x1FFE20        PNG image, 22 x 22, 8-bit/color RGBA, non-interlaced
2097564       0x20019C        Zlib compressed data, best compression
2097720       0x200238        PNG image, 15 x 15, 8-bit/color RGBA, non-interlaced
2098612       0x2005B4        Zlib compressed data, best compression
2098768       0x200650        JPEG image data, EXIF standard
2098780       0x20065C        TIFF image data, little-endian offset of first image directory: 8
2100320       0x200C60        PNG image, 40 x 24, 8-bit/color RGBA, non-interlaced
2101291       0x20102B        Zlib compressed data, best compression
2102080       0x201340        PNG image, 22 x 22, 8-bit/color RGBA, non-interlaced
2102972       0x2016BC        Zlib compressed data, best compression
2103392       0x201860        PNG image, 15 x 15, 8-bit/color RGBA, non-interlaced
2104284       0x201BDC        Zlib compressed data, best compression
2104672       0x201D60        PNG image, 16 x 16, 8-bit/color RGBA, non-interlaced
2105643       0x20212B        Zlib compressed data, best compression
2105960       0x202268        PNG image, 22 x 24, 8-bit/color RGBA, non-interlaced
2106931       0x202633        Zlib compressed data, best compression
2107368       0x2027E8        PNG image, 26 x 26, 8-bit/color RGBA, non-interlaced
2108259       0x202B63        Zlib compressed data, best compression
2108488       0x202C48        PNG image, 36 x 40, 8-bit/color RGBA, non-interlaced
2109459       0x203013        Zlib compressed data, best compression
2110344       0x203388        PNG image, 46 x 36, 8-bit/color RGBA, non-interlaced
2111315       0x203753        Zlib compressed data, best compression
2112040       0x203A28        PNG image, 22 x 22, 8-bit/color RGBA, non-interlaced
2113011       0x203DF3        Zlib compressed data, best compression
2113152       0x203E80        GIF image data, version "89a", 18 x 18
2114312       0x204308        GIF image data, version "89a", 18 x 18
2115472       0x204790        GIF image data, version "89a", 20 x 20
2115720       0x204888        GIF image data, version "89a", 20 x 20
2115832       0x2048F8        GIF image data, version "89a", 10 x 9
2115928       0x204958        GIF image data, version "89a", 10 x 9
2116024       0x2049B8        JPEG image data, JFIF standard 1.02
2117440       0x204F40        GIF image data, version "89a", 20 x 35
2118216       0x205248        PNG image, 300 x 200, 8-bit/color RGB, non-interlaced
2118310       0x2052A6        Zlib compressed data, best compression
2120864       0x205CA0        JPEG image data, JFIF standard 1.02
2121256       0x205E28        JPEG image data, JFIF standard 1.02
2122568       0x206348        JPEG image data, JFIF standard 1.02
2124088       0x206938        JPEG image data, JFIF standard 1.02
2125424       0x206E70        GIF image data, version "89a", 58 x 23
2127344       0x2075F0        JPEG image data, JFIF standard 1.02
2127720       0x207768        JPEG image data, JFIF standard 1.02
2128120       0x2078F8        PNG image, 170 x 62, 8-bit colormap, non-interlaced
2128261       0x207985        Zlib compressed data, best compression
2129272       0x207D78        PNG image, 400 x 160, 4-bit colormap, non-interlaced
2129401       0x207DF9        Zlib compressed data, best compression
2132008       0x208828        GIF image data, version "89a", 13 x 13
2132080       0x208870        GIF image data, version "89a", 17 x 17
2132160       0x2088C0        GIF image data, version "89a", 17 x 17
2132240       0x208910        GIF image data, version "89a", 40 x 40
2132368       0x208990        GIF image data, version "89a", 18 x 18
2133440       0x208DC0        GIF image data, version "89a", 18 x 18
2134520       0x2091F8        JPEG image data, JFIF standard 1.02
2134904       0x209378        PNG image, 18 x 18, 8-bit/color RGBA, non-interlaced
2135312       0x209510        PNG image, 18 x 18, 8-bit/color RGBA, non-interlaced
2135936       0x209780        PNG image, 18 x 18, 8-bit/color RGBA, non-interlaced
2136240       0x2098B0        PNG image, 54 x 46, 8-bit/color RGB, non-interlaced
2137118       0x209C1E        Zlib compressed data, best compression
2140432       0x20A910        JPEG image data, JFIF standard 1.02
2141936       0x20AEF0        JPEG image data, JFIF standard 1.02
2144000       0x20B700        JPEG image data, JFIF standard 1.02
2145784       0x20BDF8        JPEG image data, JFIF standard 1.02
2148072       0x20C6E8        GIF image data, version "89a", 207 x 115
2152112       0x20D6B0        JPEG image data, JFIF standard 1.02
2153816       0x20DD58        JPEG image data, JFIF standard 1.02
2155488       0x20E3E0        JPEG image data, JFIF standard 1.02
2157576       0x20EC08        JPEG image data, JFIF standard 1.02
2159152       0x20F230        JPEG image data, JFIF standard 1.02
2160744       0x20F868        JPEG image data, JFIF standard 1.02
2163336       0x210288        JPEG image data, JFIF standard 1.02
2165080       0x210958        JPEG image data, JFIF standard 1.02
2166400       0x210E80        JPEG image data, JFIF standard 1.02
2168208       0x211590        JPEG image data, JFIF standard 1.02
2170200       0x211D58        JPEG image data, JFIF standard 1.02
2171824       0x2123B0        JPEG image data, JFIF standard 1.02
2172448       0x212620        JPEG image data, JFIF standard 1.02
2174776       0x212F38        GIF image data, version "89a", 18 x 18
2174848       0x212F80        GIF image data, version "89a", 18 x 22
2174928       0x212FD0        PNG image, 18 x 18, 8-bit/color RGBA, non-interlaced
2175006       0x21301E        Zlib compressed data, best compression
2175744       0x213300        PNG image, 18 x 18, 8-bit/color RGBA, non-interlaced
2175822       0x21334E        Zlib compressed data, best compression
2176504       0x2135F8        PNG image, 18 x 18, 8-bit/color RGBA, non-interlaced
2176589       0x21364D        Zlib compressed data, best compression
2179259       0x2140BB        Zlib compressed data, best compression
2180080       0x2143F0        PNG image, 18 x 18, 8-bit/color RGBA, non-interlaced
2180165       0x214445        Zlib compressed data, best compression
2182835       0x214EB3        Zlib compressed data, best compression
2183624       0x2151C8        PNG image, 18 x 18, 8-bit/color RGBA, non-interlaced
2183709       0x21521D        Zlib compressed data, best compression
2186379       0x215C8B        Zlib compressed data, best compression
2187136       0x215F80        PNG image, 18 x 18, 8-bit/color RGBA, non-interlaced
2187221       0x215FD5        Zlib compressed data, best compression
2189891       0x216A43        Zlib compressed data, best compression
2190664       0x216D48        PNG image, 18 x 18, 8-bit/color RGBA, non-interlaced
2190749       0x216D9D        Zlib compressed data, best compression
2193419       0x21780B        Zlib compressed data, best compression
2194232       0x217B38        PNG image, 18 x 18, 8-bit/color RGBA, non-interlaced
2194317       0x217B8D        Zlib compressed data, best compression
2196987       0x2185FB        Zlib compressed data, best compression
2197792       0x218920        PNG image, 18 x 18, 8-bit/color RGBA, non-interlaced
2197877       0x218975        Zlib compressed data, best compression
2200547       0x2193E3        Zlib compressed data, best compression
2201304       0x2196D8        PNG image, 18 x 18, 8-bit/color RGBA, non-interlaced
2201389       0x21972D        Zlib compressed data, best compression
2204059       0x21A19B        Zlib compressed data, best compression
2204408       0x21A2F8        PNG image, 18 x 18, 8-bit/color RGBA, non-interlaced
2204493       0x21A34D        Zlib compressed data, best compression
2207163       0x21ADBB        Zlib compressed data, best compression
2207496       0x21AF08        PNG image, 1621 x 323, 8-bit/color RGBA, interlaced
2207558       0x21AF46        Zlib compressed data, default compression
2294424       0x230298        GIF image data, version "89a", 1 x 26
2294584       0x230338        GIF image data, version "89a", 6 x 64
2294840       0x230438        GIF image data, version "89a", 6 x 64
2295104       0x230540        GIF image data, version "89a", 30 x 21
2295968       0x2308A0        GIF image data, version "89a", 1 x 22
2296120       0x230938        GIF image data, version "89a", 1 x 22
2296224       0x2309A0        GIF image data, version "89a", 36 x 36
2297552       0x230ED0        GIF image data, version "89a", 36 x 36
2299376       0x2315F0        GIF image data, version "89a", 36 x 36
2300640       0x231AE0        PNG image, 32 x 32, 1-bit colormap, non-interlaced
2300722       0x231B32        Zlib compressed data, best compression
2305384       0x232D68        Zlib compressed data, default compression
2305444       0x232DA4        Zlib compressed data, default compression
2305512       0x232DE8        Zlib compressed data, default compression
2305756       0x232EDC        Zlib compressed data, default compression
2309620       0x233DF4        Zlib compressed data, default compression
2309672       0x233E28        Zlib compressed data, default compression
2309704       0x233E48        Zlib compressed data, default compression
2309784       0x233E98        Zlib compressed data, default compression
2309816       0x233EB8        Zlib compressed data, default compression
2310136       0x233FF8        Zlib compressed data, default compression
2334864       0x23A090        HTML document header
2335050       0x23A14A        HTML document footer
2340576       0x23B6E0        HTML document header
2340776       0x23B7A8        HTML document footer
2355128       0x23EFB8        Executable script, shebang: "/bin/sh"
2357200       0x23F7D0        Unix path: /dev/mapper/lvm-data
2359608       0x240138        HTML document header
2359745       0x2401C1        HTML document footer
2364040       0x241288        Unix path: /var/lib/mdu/domainfile%d_%d.url
2366864       0x241D90        Unix path: /etc/openvpn/status.log
2368496       0x2423F0        Unix path: /etc/mrcl/dianxin.txt
2385624       0x2466D8        HTML document header
2385803       0x24678B        HTML document footer
2385816       0x246798        HTML document header
2385987       0x246843        HTML document footer
2386248       0x246948        HTML document header
2386425       0x2469F9        HTML document footer
2409792       0x24C540        Unix path: /var/log/messages
2416080       0x24DDD0        HTML document header
2416236       0x24DE6C        HTML document footer
2416952       0x24E138        HTML document header
2417138       0x24E1F2        HTML document footer
2420784       0x24F030        HTML document header
2420918       0x24F0B6        HTML document footer
2420928       0x24F0C0        HTML document header
2421054       0x24F13E        HTML document footer
2424096       0x24FD20        HTML document header
2424350       0x24FE1E        HTML document footer
2552463       0x26F28F        mcrypt 2.2 encrypted data, algorithm: blowfish-448, mode: CBC, keymode: 8bit
2609679       0x27D20F        mcrypt 2.2 encrypted data, algorithm: blowfish-448, mode: CBC, keymode: 4bit
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




















