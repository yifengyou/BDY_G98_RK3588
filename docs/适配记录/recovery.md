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

## 📜 免责声明

**本仓库所提供的内容均基于公开、合法渠道整理，仅供用户参考与学习之用。**

* 严格遵守国家相关法律法规，尊重并保护个人隐私及知识产权。
* 如您认为相关内容涉及您的隐私、版权或其他合法权益，请及时联系，将依法核实并在必要时予以删除或下架。
* 对于因使用或无法使用本网站/平台内容所引发的任何直接或间接损失，不承担任何法律责任。
* 用户在使用过程中应自行判断信息的适用性，并承担相应风险。



