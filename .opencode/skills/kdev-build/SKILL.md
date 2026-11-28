---
name: kdev-build
description: 彼度云 BDY-G98（RK3588）主板镜像构建技能。在 /2T/rockchip/bdy-g98.git（GitHub: yifengyou/BDY_G98_RK3588）仓库中开发、修改、调试 GitHub Actions workflow、kdevbuild 构建脚本、新增内核版本适配、rootfs 发行版矩阵，或答疑构建链路时使用。涵盖按内核版本分类的 20 个根 workflows、13 个子仓库 workflows、kernel/image 两阶段构建流程、kdev 项目 rootfs（118 个发行版组合）、RKDevTool 固件打包与 Release tag 体系。
---

# kdev-build（BDY-G98 镜像构建）开发技能

彼度云 BDY-G98（RK3588，8核A76+A55，16GB DDR4，2×2.5G+8×1G 网口）主板的多内核 Linux 镜像构建总仓。
仓库路径：`/2T/rockchip/bdy-g98.git`（GitHub: `yifengyou/BDY_G98_RK3588`）。

详细参考文档（本目录下）：
- `references/workflows.md` — 全部 33 个 workflow 的分类明细（触发条件、分支、脚本、Release tag）
- `references/build-flow.md` — kernel/image 两阶段构建全流程、产物清单、打包细节、已知疑点

## 核心架构

```
┌─────────────────────────────────────────────────────────────────┐
│ 总仓 yifengyou/BDY_G98_RK3588 (bdy-g98.git)                     │
│ .github/workflows/*.yml × 20 + kdevbuild/*.sh × 32              │
│ <内核版本补丁目录>/0001-*.patch + defconfig + dts               │
└─────────────────────────────────────────────────────────────────┘
     │                          │                        │
     ▼                          ▼                        ▼
 kernel 产物 Release      image 产物 Release      recovery 产物 Release
 (ophub_6.18.y_kernel 等)  (ophub_6.18.y_image 等)  (spi_recovery 等)

上游依赖（Release 下载）：
- U-Boot     ← yifengyou/BDY_G98_RK3588-uboot (release tag: bdy-g98-uboot)
- 子仓内核   ← BDY_G98_RK3588-{linux-stable,openeuler,opencloudos,anolis} 等
- rootfs     ← yifengyou/kdev (release tag: ${set_vendor}-rootfs)  ★发行版 rootfs 由 kdev 项目构建
- RKDevTool  ← yifengyou/rockchip-tools (RKDevTool-v3.37-G98-RK3588 模板)
```

## 根 workflows 按内核版本分类（.github/workflows/）

| 分类 | workflow | 内核源（clone） | 补丁目录/方式 | kernel tag | image tag |
|---|---|---|---|---|---|
| **ophub 系列** | `ophub_6.1.y.yml` | ophub/linux-6.1.y | `ophub_6.1.y/*.patch` | `ophub_6.1.y_kernel` | `ophub_6.1.y_image` |
| | `ophub_6.6.y.yml` | ophub/linux-6.6.y | `ophub_6.6.y/*.patch` | `ophub_6.6.y_kernel` | `ophub_6.6.y_image` |
| | `ophub_6.12.y.yml` | ophub/linux-6.12.y | 脚本内嵌 | `ophub_6.12.y_kernel` | `ophub_6.12.y_image` |
| | `ophub_6.18.y.yml` | ophub/linux-6.18.y | `ophub_6.18.y/`（4个补丁） | `ophub_6.18.y_kernel` | `ophub_6.18.y_image` |
| | `ophub_linux-6.1.y-rockchip.yml` | ophub/linux-6.1.y-rockchip (-b main) | `ophub_linux-6.1.y-rockchip/` | 同名 `_kernel` | 同名 `_image` |
| **rockchip BSP** | `rockchip-linux_develop-6.1.yml` | rockchip-linux/kernel -b develop-6.1 | `rockchip-linux_develop-6.1/` | 同名 `_kernel` | 同名 `_image` |
| | `rockchip-linux_develop-6.6.yml` | rockchip-linux/kernel -b develop-6.6 | `rockchip-linux_develop-6.6/` | 同名 `_kernel` | 同名 `_image` |
| | `official_5.10.66.yml` | yifengyou/BDY_G98_RK3588-kernel（官方 BSP 5.10.66） | 已内置 | `official_5.10.66_kernel` | `official_5.10.66_image` |
| **发行版内核** | `openeuler_OLK6.6.yml`（仅 image job） | 内核来自子仓 `BDY_G98_RK3588-openeuler` | — | —（子仓 `OpenEuler_OLK6.6`） | `openeuler_OLK-6.6_image` |
| | `opencloudos_6.6.yml`（仅 image job） | 来自 `BDY_G98_RK3588-opencloudos` | — | —（子仓 `OpenCloudOS_linux-6.6`） | `OpenCloudOS-6.6` |
| | `openanolis_6.6.yml`（仅 image job） | 来自 `BDY_G98_RK3588-opencloudos` ⚠️见疑点 | — | — | `OpenAnolis-6.6` |
| **主线 stable** | `linux-stable.yml`（仅 image job，push 触发） | 来自 `BDY_G98_RK3588-linux-stable`（tag `linux_stable_kernel`，如 Image-7.3.0-rc4-kdev） | — | — | `linux_stable_image` |
| | `torvalds_linux.yml` | torvalds/linux master | 脚本内嵌 | `torvalds_linux_kernel` | `torvalds_linux_image` |
| **厂商内核** | `armbian_rk-6.1-rkr5.1.yml` | armbian/linux-rockchip -b rk-6.1-rkr5.1 | `armbian_rk-6.1-rkr5.1/` | 同名 `_kernel` | 同名 `_image` |
| | `radxa_linux-6.1-stan-rkr5.1.yml` | radxa/kernel -b linux-6.1-stan-rkr5.1 | 脚本内嵌 | 同名 `_kernel` | 同名 `_image` |
| | `friendlyarm_nanopi6-v6.1.y.yml` | friendlyarm/kernel-rockchip -b nanopi6-v6.1.y | 脚本内嵌 | 同名 `_kernel` | 同名 `_image` |
| | `lubancat_lbc-develop-6.1.yml` | LubanCat/kernel -b lbc-develop-6.1 | 脚本内嵌 | 同名 `_kernel` | 同名 `_image` |
| | `orangepi-xunlong_orange-pi-6.1-rk35xx.yml` | orangepi-xunlong/linux-orangepi -b orange-pi-6.1-rk35xx | 脚本内嵌 | 同名 `_kernel` | 同名 `_image` |
| **recovery** | `recovery_uboot2017.yml` | `recovery_uboot2017/kdev-build.sh`（U-Boot bsp v2017.09） | — | — | `emmc_recovery` / `spi_recovery` |
| | `recovery_uboot2026.yml` | `recovery_uboot2026/kdev-build.sh`（U-Boot v2026.10） | — | — | `emmc_recovery_uboot2026` / `spi_recovery_uboot2026` |

## 子仓库 workflows（本地 `github_<仓库名>_<分支名>.git/` 目录 ↔ 独立 GitHub 仓库，push 分支触发）

目录命名规则：`github_` + GitHub 仓库名 + `_` + 分支名 + `.git`（如 `github_rk3588-uboot-mainline_bdy-g98.git`）。

| 本地目录 | workflow | 触发分支 | 产物 Release tag |
|---|---|---|---|
| `github_BDY_G98_RK3588-uboot_bdy-g98-only-spi.git/` | `bdy-g98-only-spi.yml` | `bdy-g98-only-spi` | `bdy-g98-only-spi-uboot` |
| `github_rk3588-uboot-mainline_bdy-g98.git/` | `bdy-g98-uboot-build.yml` | `bdy-g98` | `bdy-g98-uboot`（BDY_G98_UBOOT.zip） |
| `github_rockchip-ophub-linux-6.18.y_bdy-g98-recovery.git/` | `bdy-g98-recovery.yml` | `bdy-g98-recovery` | `bdy-g98-recovery-spi` |
| `github_rk3588-ophub-linux-6.18.y_bdy-g98-recovery.git/` | `bdy-g98-recovery.yml` | `kdev-recovery` | `bdy-g98-recovery` |
| `github_BDY_G98_RK3588-linux-stable_bdy-g98.git/` | `bdy_g98.yml` | `bdy-g98` | `linux_stable_kernel` |
| `github_BDY_G98_RK3588-openanolis_bdy-g98.git/` | `oa_devel-6.6.yml` | `bdy-g98` | `OpenAnolis_linux-6.6` |
| `github_BDY_G98_RK3588-openeuler_bdy-g98.git/` | `openeuler_olk6.6.yml` | `bdy-g98` | `OpenEuler_OLK6.6` |
| `github_BDY_G98_RK3588-opencloudos_bdy-g98.git/` | `oc_linux-6.6_devel.yml` | `bdy-g98` | `OpenCloudOS_linux-6.6` |
| `github_rockchip-edk2_bdy-g98.git/` | `bdy-g98.yml` | `bdy-g98` | `bdy-g98-edk2-uefi` |
| `github_rockchip-khadas-android12_bdy-g98.git/` | `bdy-g98-android12.yml` | `bdy-g98` | `bdy_g98_uboot`/`bdy_g98_kernel`/`bdy_g98_android12` |
| `github_rockchip-khadas-android13_bdy-g98.git/` | `bdy-g98-android13.yml` | `bdy-g98` | 同上（android13） |
| `github_BDY_G98_RK3588-khadas-android14_bdy-g98.git/` | `bdy-g98-android14.yml` | `bdy-g98` | 同上（android14） |
| `secret/github_BDY_G98_RK3588-uboot_kdev.git/` | `g98-uboot.yml` | `kdev` | `bdy-g98-uboot` |

子仓库通用模式：`./kdev-build.sh`（android 系列为 `kdev-build-uboot.sh`/`kdev-build-kernel.sh`，支持 workflow_dispatch `build_target: all/uboot/kernel/android`）。其余 edk2/openssl/brotli 等第三方子模块内的 workflows 为上游 CI，与本工程无关。

## 通用 workflow 模板（根仓 20 个文件高度同构）

1. `actions/checkout@v4`
2. Show environment（nproc/df/meminfo）
3. **Create simulated physical disk**：把 runner `/mnt`+`/` 剩余空间 truncate 成 img → loop6/loop7 → LVM vgcreate github → mkfs.xfs → 挂载 `/builder`（解决 GitHub runner 磁盘不足）
4. `docker run --rm --privileged -v /dev:/dev -v /builder:/workspace ubuntu:22.04` 内执行 `kdevbuild/<name>_kernel.sh` 或 `_image.sh`（image 传入 `set_vendor`/`set_rootfs` 环境变量）
5. `ncipollo/release-action@main` 上传 `/builder/release/*` 到固定 tag，`allowUpdates: true`

触发方式：`workflow_dispatch`（`build_type: kernel|image` 两个 job 用 if 区分）+ `repository_dispatch`；部分加 `push`（master + paths 监听脚本/yml 自身）。`runs-on: ubuntu-22.04`，`TZ: Asia/Shanghai`。

## kernel 构建（`kdevbuild/*_kernel.sh`，7 步）

安装依赖 → 下载预编译 U-Boot（`BDY_G98_RK3588-uboot` release 的 BDY_G98_UBOOT.zip）→ clone 内核源码 + `git am <补丁目录>/*.patch`（补丁目录还含 defconfig/dts，整体 `cp -a` 进源码树）→ `make bdy_g98_rk3588_defconfig` + `olddefconfig`（校验 kernelrelease 以 `-kdev` 结尾）→ 编译 `dtbs`/`Image`/`modules`（`LOCALVERSION=-kdev`，交叉编译 `aarch64-linux-gnu-`）→ 收集产物 → 生成 kernel-devel 包（fixdep/modpost 交叉编译为 arm64，供 DKMS）。

产物（release/）：`Image-<ver>-kdev`、`rk3588-bdy-g98.dtb`、`config-<ver>-kdev`、`System.map-<ver>-kdev`、`kos-<ver>.tar.gz`（模块 strip 版）、`kernel-debuginfo-<ver>.tar.gz`、`kernel-headers-<ver>.tar.gz`、`kernel-devel-<ver>.tar.gz`、`uboot.img`、构建日志。

## image 构建（`kdevbuild/*_image.sh`）

1. 下载 rootfs：`https://github.com/yifengyou/kdev/releases/download/${set_vendor}-rootfs/${set_rootfs}`（rar，解出 rootfs.img）——**rootfs 发行版由 kdev 项目预构建**
2. 下载 uboot + 内核产物（从对应 kernel release tag）
3. 挂载 rootfs.img 注入：内核模块→`/lib/modules`、`firmware/`→`/lib/firmware`、kernel-devel→`/usr/src/kernels`、headers→`/usr/include`（均有容量检查，不足则跳过）
4. 生成 boot.img：256MB ext2（label `kdevboot`），含 vmlinuz/config/System.map/dtb/`extlinux.conf`（extlinux 引导，`root=PARTUUID=614e0000-0000-4b53-8000-1d28000054a9`，`console=ttyS2,1500000`，normal+single 两项）+ `armbian_first_run.txt`（默认账号 root/admin、admin/admin）
5. clone `yifengyou/rockchip-tools`，用 `RKDevTool-v3.37-G98-RK3588` 模板打包 uboot/boot/rootfs 为 rar：`BDY_G98_<内核版本>_${set_rootfs}`（如 `BDY_G98_6.18.y_ubuntu_noble_24.04_arm64.rar`），刷机用 RKDevTool「下载镜像」

## rootfs 矩阵（每个 image workflow 均为 118 组合，`strategy.matrix.include`）

`openeuler×24、openanolis×19、armbian×19、opencloudos×17、fedora×13、openwrt×5、istoreos×5、ubuntu×4、rockylinux×3、debian×3、centos×3、kali×2、fnos×1`

rootfs 文件名形如 `armbian_bookworm_gnome_aarch64.rar`、`openEuler-24.03-LTS-SP1-aarch64.rar`、`fnos_1.1.19_arm64.rar`。

## 常见任务

- **触发构建**：GitHub Actions 页面 workflow_dispatch（选 build_type），或用 github-actions MCP `trigger_workflow`（owner=yifengyou，repo=BDY_G98_RK3588，workflow_id 为 yml 文件名）
- **新增内核版本**：新建 `.github/workflows/<name>.yml`（复制 ophub_6.18.y.yml 模板）+ `kdevbuild/<name>_kernel.sh`/`_image.sh`（复制改名，改 clone 源/补丁目录/版本号）+ 根目录建补丁目录（0001-*.patch + defconfig + dts）
- **修改 rootfs 列表**：改 image workflow 的 matrix.include（118 处同列表需同步）；rootfs 本体在 yifengyou/kdev 仓库构建并上传 `${vendor}-rootfs` tag
- **内核适配**：defconfig 统一命名 `bdy_g98_rk3588_defconfig`，dts 为 `rk3588-bdy-g98.dtb`，内核版本后缀必须 `-kdev`（脚本强校验）

## 已知疑点（答疑/排查时注意）

- `kdevbuild/openanolis_6.6_image.sh` 的内核产物实际从 `BDY_G98_RK3588-opencloudos` 仓库下载（复用 OpenCloudOS 内核 6.6.119-kdev），而 anolis 子仓 workflow 的 `OpenAnolis_linux-6.6` tag 未被引用
- `recovery_uboot2017.yml` 的 push paths 只监听 yml 自身（未含 `recovery_uboot2017/kdev-build.sh`，uboot2026 版已修正此问题）
- EMMC recovery（uboot v2017.09）标注"测试中，无法引导"；uboot2026 的 EMMC 版同样标注测试中
- 设备 SPI Nor Flash 与 eMMC 引脚互斥，只能二选一启动介质（出厂标配 SPI）

## 相关文档

- 仓库 `README.md` / `SUMMARY.md` / `.github/kdev.md`（各子仓 GitHub 地址清单）
- `docs/适配记录/`（uboot2017/uboot2026/recovery/kernel/android12-14/edk2 等适配过程）
- `docs/刷机指引/`（ophub armbian/飞牛/openwrt、原厂 wayos、spi/emmc recovery、android 固件）
