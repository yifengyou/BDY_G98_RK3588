# recovery

本项目是 **BDY_G98 (RK3588)** 开发板的 U-Boot 引导加载程序适配仓库，基于 Rockchip Linux 官方 U-Boot 进行定制开发。

## 📦 源码基线

- **上游来源**: [rockchip-linux/u-boot](https://github.com/rockchip-linux/u-boot.git)
- **分支**: `next-dev`

## ✨ 适配进展与特性

针对 BDY_G98 硬件平台，已完成以下外设及启动功能的适配：

🚨 **注意**：仅支持有SPI Nor Flash，没有EMMC的设备

| 模块 | 状态 | 说明 |
| :--- | :---: | :--- |
| **SATA / SCSI** | ✅ | 可正常识别 SATA/SCSI 存储设备并引导 |
| **NVMe** | ✅ | 双 M.2 NVMe 插槽均可识别并引导 |
| **USB 3.0** | ✅ | 两个 USB 3.0 端口均工作正常 |
| **eMMC** | ❌ | 引脚冲突、不识别、不支持、默认禁用 |
| **启动配置** | ✅ | 自动扫描 `extlinux.conf` 与 `boot.scr`（Distro Boot） |
| **存储后端切换** | ✅ | 支持 NVMe / SATA / SPI Flash 后端存储切换 |
| **常用命令** | ✅ | 支持 `rbrom`、`sf`、`scsi`、`nvme`、`mmc` 等调试命令 |
| **2.5G 网口** | ❌ | RTL8125 暂不支持，网络功能不可用 |
| **千兆网口** | ❌ | YT9215 驱动未适配，网络功能不可用 |

* 🚨 **注意**：暂不支持EMMC，没有测试条件。不支持EMMC，默认禁用。
* 🚨 **注意**：当前版本 **不支持任何有线网络**，无法使用 TFTP/NFS 启动或 U-Boot 网络命令。如需网络功能，请等待后续驱动适配。

## 🚀 默认启动顺序

```
USB → NVMe → SATA(SCSI)
```

对每个存储设备依次执行以下搜索流程，任一命中即启动；未命中则自动回退至下一设备。**全部失败后进入Loader模式**。

## 搜索策略

| 优先级 | 配置文件 | 搜索路径 |
| :---: | :--- | :--- |
| 1 | `extlinux.conf` | `/boot/extlinux/extlinux.conf` → `/extlinux/extlinux.conf` → `/extlinux.conf` |
| 2 | `boot.scr` | `/boot/boot.scr` → `/boot.scr` |

- **分区范围**：仅搜索设备的 **分区 1** 和 **分区 2**
- **设备遍历**：每类设备尝试 `devnum 0` 和 `devnum 1`
- **匹配逻辑**：先 extlinux 后 boot.scr；extlinux 使用 `sysboot` 解析，boot.scr 使用 `source` 执行

## 适配信息

| 项目 | 版本 / 来源 |
| :--- | :--- |
| U-Boot 基线 | [rockchip-linux/u-boot](https://github.com/rockchip-linux/u-boot) 2017.09 |
| 烧录工具 | RKDevTool Release v3.37 |
| 二进制固件 | Rockchip SDK 6.1 rkbin |

## 🐛 问题反馈

如在适配或使用过程中发现缺陷，请通过 [Issues](https://github.com/yifengyou/BDY_G98_RK3588/issues) 提交详细的问题描述与日志，感谢您的贡献！



## 问题跟踪


### spi nor flash挂载问题

* 内核没有识别分区，但是可以手动挂载

```shell
mount -o loop,offset=4194304 /dev/mtdblock0 /mnt
```

分区表有多余的rootfs、boot，不影响

recovery是ext4分区，可以挂载修改recovery.conf


### 2.5G网卡 tx 队列超时问题

```shell
[root@bdy-g98 ~]# [   35.467110] vdd_gpu_s0: disabling
[  121.443267] r8125 0002:21:00.0 eth3: NETDEV WATCHDOG: CPU: 6: transmit queue 1 timed out 6190 ms
[  121.444047] r8125 0002:21:00.0 eth3: Transmit timeout reset Device!
[  121.463509] r8125 0002:21:00.0 eth3: Device reseting!
[  125.255703] r8125: eth3: link up
[  131.474962] arm-smmu-v3 fc900000.iommu: event 0x10 received:
[  131.475699] arm-smmu-v3 fc900000.iommu: 	0x0000210000000010
[  131.476205] arm-smmu-v3 fc900000.iommu: 	0x0000020000000000
[  131.476767] arm-smmu-v3 fc900000.iommu: 	0x0000000000000000
[  131.477597] arm-smmu-v3 fc900000.iommu: 	0x0000000000000000
[  131.478201] arm-smmu-v3 fc900000.iommu: event: F_TRANSLATION client: 0002:21:00.0 sid: 0x2100 ssid: 0x0 iova: 0x0 ipa: 0x0
[  131.479515] arm-smmu-v3 fc900000.iommu: unpriv data write s1 "Input address caused fault" stag: 0x0
[  131.480585] arm-smmu-v3 fc900000.iommu: event 0x10 received:
[  131.481164] arm-smmu-v3 fc900000.iommu: 	0x0000210000000010
[  131.481734] arm-smmu-v3 fc900000.iommu: 	0x0000020000000000
[  131.482306] arm-smmu-v3 fc900000.iommu: 	0x0000000000000000
[  131.482808] arm-smmu-v3 fc900000.iommu: 	0x0000000000000000
[  131.483312] arm-smmu-v3 fc900000.iommu: event: F_TRANSLATION client: 0002:21:00.0 sid: 0x2100 ssid: 0x0 iova: 0x0 ipa: 0x0
[  131.484278] arm-smmu-v3 fc900000.iommu: unpriv data write s1 "Input address caused fault" stag: 0x0
[  131.485073] arm-smmu-v3 fc900000.iommu: event 0x10 received:
[  131.485570] arm-smmu-v3 fc900000.iommu: 	0x0000210000000010
[  131.486059] arm-smmu-v3 fc900000.iommu: 	0x0000020000000000
[  131.486549] arm-smmu-v3 fc900000.iommu: 	0x0000000000000000
[  131.487043] arm-smmu-v3 fc900000.iommu: 	0x0000000000000000
[  131.487878] arm-smmu-v3 fc900000.iommu: event: F_TRANSLATION client: 0002:21:00.0 sid: 0x2100 ssid: 0x0 iova: 0x0 ipa: 0x0
[  131.489237] arm-smmu-v3 fc900000.iommu: unpriv data write s1 "Input address caused fault" stag: 0x0
[  131.490307] arm-smmu-v3 fc900000.iommu: event 0x10 received:
[  131.491110] arm-smmu-v3 fc900000.iommu: 	0x0000210000000010
[  131.491746] arm-smmu-v3 fc900000.iommu: 	0x0000020000000000
[  131.492550] arm-smmu-v3 fc900000.iommu: 	0x0000000000000000
[  131.493177] arm-smmu-v3 fc900000.iommu: 	0x0000000000000000
[  131.493981] arm-smmu-v3 fc900000.iommu: event: F_TRANSLATION client: 0002:21:00.0 sid: 0x2100 ssid: 0x0 iova: 0x0 ipa: 0x0
[  131.495278] arm-smmu-v3 fc900000.iommu: unpriv data write s1 "Input address caused fault" stag: 0x0
[  131.496301] arm-smmu-v3 fc900000.iommu: event 0x10 received:
[  131.497125] arm-smmu-v3 fc900000.iommu: 	0x0000210000000010
[  131.497766] arm-smmu-v3 fc900000.iommu: 	0x0000020000000000
[  131.498521] arm-smmu-v3 fc900000.iommu: 	0x0000000000000000
[  131.499183] arm-smmu-v3 fc900000.iommu: 	0x0000000000000000
[  131.499754] arm-smmu-v3 fc900000.iommu: event: F_TRANSLATION client: 0002:21:00.0 sid: 0x2100 ssid: 0x0 iova: 0x0 ipa: 0x0
[  131.501012] arm-smmu-v3 fc900000.iommu: unpriv data write s1 "Input address caused fault" stag: 0x0
[  131.501989] arm-smmu-v3 fc900000.iommu: event 0x10 received:
[  131.502570] arm-smmu-v3 fc900000.iommu: 	0x0000210000000010
[  131.503165] arm-smmu-v3 fc900000.iommu: 	0x0000020000000000
[  131.503734] arm-smmu-v3 fc900000.iommu: 	0x0000000000000000
[  131.504341] arm-smmu-v3 fc900000.iommu: 	0x0000000000000000
[  131.504995] arm-smmu-v3 fc900000.iommu: event: F_TRANSLATION client: 0002:21:00.0 sid: 0x2100 ssid: 0x0 iova: 0x0 ipa: 0x0
[  131.506567] arm-smmu-v3 fc900000.iommu: unpriv data write s1 "Input address caused fault" stag: 0x0
[  131.507724] arm-smmu-v3 fc900000.iommu: event 0x10 received:
[  131.508408] arm-smmu-v3 fc900000.iommu: 	0x0000210000000010
[  131.508995] arm-smmu-v3 fc900000.iommu: 	0x0000020000000000
[  131.509664] arm-smmu-v3 fc900000.iommu: 	0x0000000000000100
[  131.510332] arm-smmu-v3 fc900000.iommu: 	0x0000000000000000
[  131.511090] arm-smmu-v3 fc900000.iommu: event: F_TRANSLATION client: 0002:21:00.0 sid: 0x2100 ssid: 0x0 iova: 0x100 ipa: 0x0
[  131.512599] arm-smmu-v3 fc900000.iommu: unpriv data write s1 "Input address caused fault" stag: 0x0
[  131.513809] arm-smmu-v3 fc900000.iommu: event 0x10 received:
[  131.514523] arm-smmu-v3 fc900000.iommu: 	0x0000210000000010
[  131.515279] arm-smmu-v3 fc900000.iommu: 	0x0000020000000000
[  131.515886] arm-smmu-v3 fc900000.iommu: 	0x0000000000000000
[  131.516472] arm-smmu-v3 fc900000.iommu: 	0x0000000000000000
[  131.517065] arm-smmu-v3 fc900000.iommu: event: F_TRANSLATION client: 0002:21:00.0 sid: 0x2100 ssid: 0x0 iova: 0x0 ipa: 0x0
[  131.518369] arm-smmu-v3 fc900000.iommu: unpriv data write s1 "Input address caused fault" stag: 0x0
[  131.519407] arm-smmu-v3 fc900000.iommu: event 0x10 received:
[  131.520162] arm-smmu-v3 fc900000.iommu: 	0x0000210000000010
[  131.520760] arm-smmu-v3 fc900000.iommu: 	0x0000020000000000
[  131.521339] arm-smmu-v3 fc900000.iommu: 	0x0000000000000000
[  131.521841] arm-smmu-v3 fc900000.iommu: 	0x0000000000000000
[  131.522331] arm-smmu-v3 fc900000.iommu: event: F_TRANSLATION client: 0002:21:00.0 sid: 0x2100 ssid: 0x0 iova: 0x0 ipa: 0x0
[  131.523307] arm-smmu-v3 fc900000.iommu: unpriv data write s1 "Input address caused fault" stag: 0x0
[  131.524424] arm-smmu-v3 fc900000.iommu: event 0x10 received:
[  131.525050] arm-smmu-v3 fc900000.iommu: 	0x0000210000000010
[  131.525628] arm-smmu-v3 fc900000.iommu: 	0x0000020000000000
[  131.526215] arm-smmu-v3 fc900000.iommu: 	0x0000000000000000
[  131.526756] arm-smmu-v3 fc900000.iommu: 	0x0000000000000000
[  131.527259] arm-smmu-v3 fc900000.iommu: event: F_TRANSLATION client: 0002:21:00.0 sid: 0x2100 ssid: 0x0 iova: 0x0 ipa: 0x0
[  131.528225] arm-smmu-v3 fc900000.iommu: unpriv data write s1 "Input address caused fault" stag: 0x0
```

更新r8125驱动到最新，测试1小时，暂未崩溃



































## 📜 免责声明

**本仓库所提供的内容均基于公开、合法渠道整理，仅供用户参考与学习之用。**

* 严格遵守国家相关法律法规，尊重并保护个人隐私及知识产权。
* 如您认为相关内容涉及您的隐私、版权或其他合法权益，请及时联系，将依法核实并在必要时予以删除或下架。
* 对于因使用或无法使用本网站/平台内容所引发的任何直接或间接损失，不承担任何法律责任。
* 用户在使用过程中应自行判断信息的适用性，并承担相应风险。



