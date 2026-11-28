# 构建全流程详解（kernel / image / recovery）

数据来源：`kdevbuild/ophub_6.18.y_kernel.sh`（390 行）、`kdevbuild/ophub_6.18.y_image.sh` 等脚本的实际解析。所有 `*_kernel.sh` / `*_image.sh` 结构同构，仅内核源、版本号、产物文件名不同。

## 一、总体链路（以 ophub_6.18.y 为例）

```
[阶段0] U-Boot 预构建（github_rk3588-uboot-mainline_bdy-g98.git 子仓，分支 bdy-g98）
        → release tag: bdy-g98-uboot（BDY_G98_UBOOT.zip 内含 uboot.img）

[阶段1] kernel job（根仓 ophub_6.18.y.yml，build_type=kernel）
        → release tag: ophub_6.18.y_kernel
        产物：Image-6.18.y-kdev / rk3588-bdy-g98.dtb / config / System.map /
              kos-6.18.y.tar.gz / kernel-debuginfo / kernel-headers / kernel-devel / uboot.img

[阶段2] image job（build_type=image，matrix 118 组合，每个 rootfs 一个 runner）
        下载 [kdev rootfs] + [阶段1 内核产物] + [阶段0/1 uboot]
        → release tag: ophub_6.18.y_image
        产物：BDY_G98_6.18.y_${set_rootfs}.rar（RKDevTool 整机刷机包）

[kdev 项目] https://github.com/yifengyou/kdev
        预构建各发行版 rootfs.img，按 vendor 分类上传 release tag：${set_vendor}-rootfs
        ★ 这就是"发行版用 kdev 项目构建 rootfs"的来源
```

其它内核系列的差异仅在于阶段 1 的内核源：
- 发行版系列（openeuler/opencloudos/openanolis/linux-stable）：阶段 1 在**子仓库**进行（如 `github_BDY_G98_RK3588-openeuler_bdy-g98.git` → `BDY_G98_RK3588-openeuler` release `OpenEuler_OLK6.6`），根仓只做阶段 2。
- uboot 下载源有两套：`BDY_G98_RK3588-uboot`（release `bdy-g98-uboot`，ophub 系列用）与 `BDY_G98_RK3588-uboot-mainline`（release `bdy-g98-uboot`，文件 `uboot-g98_only-emmc.img`，发行版系列用）。

## 二、kernel 脚本 7 步流程（`kdevbuild/*_kernel.sh`）

脚本头部：`set -euxo pipefail`；`exec > >(tee -a build-<ver>.log) 2>&1` 全程留日志。

1. **初始化**：apt 安装全套交叉编译/打包工具链（`crossbuild-essential-arm64`、`device-tree-compiler`、`rar`、`qemu-user-static`、`binwalk`、`ripgrep` 等约 100 个包）；`localedef zh_CN.UTF-8`；建 `rockdev/`、`release/`。
2. **获取 U-Boot**：`wget yifengyou/BDY_G98_RK3588-uboot/releases/download/bdy-g98-uboot/BDY_G98_UBOOT.zip` → 解出 `uboot.img` 放 `release/`（kernel release 里附带 uboot，image 阶段再从 kernel tag 下载）。
3. **克隆内核 + 打补丁**：
   - `git clone <内核源> <src_dir>`
   - 若补丁目录存在 `*.patch`：`git config user.name/email` 后 `git am <补丁目录>/*.patch`
   - 补丁目录其余内容（defconfig、dts）整体 `cp -a` 覆盖进源码树
4. **配置**：`make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- LOCALVERSION=-kdev bdy_g98_rk3588_defconfig` → `olddefconfig` → 校验 `make kernelrelease` 以 `kdev` 结尾，否则报错退出（防止 LOCALVERSION 丢失）。
5. **编译**：依次 `dtbs`、`Image`（`KCFLAGS="-Wno-unused-function"`）、`modules`、`modules_install`（→ `kos/`）、`headers_install`（→ `kernel-headers/<KVER>/`），全部 `-j$(nproc)`。
6. **收集产物**（全部进 `release/`）：
   - `Image-<ver>-kdev`（如 Image-6.18.y-kdev）
   - `rk3588-bdy-g98.dtb`（arch/arm64/boot/dts/rockchip/）
   - `config-<ver>-kdev`、`System.map-<ver>-kdev`
   - `kos-<ver>.tar.gz`：`kos/lib/modules` 先留 `kos-debug` 副本，再 `aarch64-linux-gnu-strip --strip-debug` 压缩体积
   - `kernel-debuginfo-<ver>.tar.gz`：vmlinux/vmlinux.unstripped/System.map/Module.symvers/.config/kos-debug
   - `kernel-headers-<ver>.tar.gz`
7. **kernel-devel 包**（供目标机 DKMS 编译外部模块）：
   - `fixdep`、`modpost` 用 `aarch64-linux-gnu-gcc` 重编为 arm64
   - 组装 `kernel-devel/<KVER>/`：Makefile/Kbuild、Module.symvers、System.map、.config、scripts/、include/、arch/arm64/{include,scripts,Makefile,*.lds,boot/dts 源文件}、arm/include/asm（arm64 兼容层）、全部 Makefile/Kconfig/Kbuild、objtool（按 .config 条件）
   - 清理 `.*.cmd`、`*.o`、`*.dtb(o)`、临时文件；对齐时间戳避免外部模块误触发重编；兜底 `include/config/auto.conf`
   - 打包 `kernel-devel-<ver>.tar.gz` + 日志归档

## 三、image 脚本流程（`kdevbuild/*_image.sh`）

1. **初始化**：同 kernel 脚本依赖安装；`export BUILD_TAG="BDY_G98_<内核版本>_${set_rootfs}"`。
2. **下载 rootfs**（kdev 项目）：
   ```bash
   ROOTFS_URL="https://github.com/yifengyou/kdev/releases/download/${set_vendor}-rootfs/${set_rootfs}"
   aria2c -x16 下载 → rar x 解压 → mv rootfs.img rockdev/
   ```
   `set_vendor`/`set_rootfs` 由 workflow matrix 注入环境变量。
3. **下载 uboot**：从本仓 kernel release tag wget `uboot.img`（ophub 系列）或从 `BDY_G98_RK3588-uboot-mainline` 下载 `uboot-g98_only-emmc.img`（发行版系列）。
4. **下载内核产物**：从 kernel release tag wget Image/config/System.map/dtb/kos/kernel-devel/kernel-headers 并解包。
5. **定制 rootfs**（loop 挂载 rootfs.img 到 /mnt，逐项带容量检查，空间不足则跳过并警告）：
   - `kos/lib/modules/*` → `/mnt/lib/modules`（先清空旧模块）
   - 根仓 `firmware/` 目录 → `/mnt/lib/firmware`
   - `kernel-devel/*` → `/mnt/usr/src/kernels/`
   - `kernel-headers/*` → `/mnt/usr/include/`
   - `umount -l /mnt`（lazy umount）
6. **生成 boot.img**（256MB ext2，UUID `7A3F0000-0000-446A-8000-702F00006273`，label `kdevboot`）：
   - `/dtb/rk3588-bdy-g98.dtb`、`vmlinuz-<ver>-kdev`、`config-…`、`System.map-…`、空 `initrd.img-<ver>-kdev`
   - `extlinux.conf`：U-Boot extlinux 引导（`default l0`，timeout 90），两个启动项：
     - `normal`：`root=PARTUUID=614e0000-0000-4b53-8000-1d28000054a9 rw console=ttyS2,1500000 console=tty1 cgroup_enable=cpuset cgroup_memory=1 cgroup_enable=memory net.ifnames=0 biosdevname=0 level=10 loglevel=10 selinux=0 crashkernel=384M-:128M systemd.mask=systemd-growfs@-.service rockchip.dmc_freq=528000 video=HDMI-A-1:1920x1080@60`
     - `single`：同上 + `single`（rescue target）
   - `armbian_first_run.txt`：root/admin、admin/admin（首次开机建账号）
7. **打包 RKDevTool 刷机包**：
   - `git clone yifengyou/rockchip-tools` → 取 `RKDevTool-v3.37-G98-RK3588` 模板为 `RKDevTool/`
   - `uboot.img`、`boot.img`、`rootfs.img` → `RKDevTool/Image/`
   - `rar a ${BUILD_TAG}.rar RKDevTool` → `release/` + sha256sum
   - 最终产物名如 `BDY_G98_6.18.y_openeuler_24.03-LTS-SP1-aarch64.rar`，用户解压后 RKDevTool 选「下载镜像」→「执行」

## 四、recovery 构建流程（`recovery_uboot20xx/kdev-build.sh`）

根仓 recovery workflow 直接执行目录内 `kdev-build.sh`（不进 kdevbuild/），产物四件：
- `emmc_full_disk*` / `G98-Recovery_ONLY-EMMC*`（EMMC 版，⚠️ 2017/2026 均标注测试中无法引导）
- `spi_full_disk*` / `G98-Recovery_ONLY-SPI*`（SPI 版，出厂标配介质，可用）

`G98-Recovery_ONLY-SPI.zip` 自带 `RKDevTool_Release_v3.37`；`spi_full_disk.img` 为 SPI 全盘镜像，从 `0x00000000` 偏移写入。硬件注意：SPI Nor Flash 与 eMMC 引脚互斥，只能二选一。

## 五、rootfs 矩阵（118 组合/每个 image workflow）

| vendor | 数量 | 示例 rootfs 文件名 |
|---|---|---|
| openeuler | 24 | openEuler-22.03-LTS-SP4-aarch64.rar、openEuler-25.09-aarch64.rar |
| openanolis | 19 | AnolisOS-8.8-aarch64-ANCK/RHCK.rar、AnolisOS-23.x |
| armbian | 19 | armbian_{bookworm,noble,trixie,jammy,plucky,forky,bullseye}_{gnome,mini,xfce}_aarch64.rar |
| opencloudos | 17 | OpenCloudOS-GenericCloud-9.2/9.4-*.aarch64.rar |
| fedora | 13 | Fedora-Cloud-Base-33~43、UEFI-UKI、Server-Guest-Generic |
| openwrt | 5 | openwrt_24.10.{1..5}_aarch64.rar |
| istoreos | 5 | istoreos_24.10.{1..5}_arm64.rar |
| ubuntu | 4 | ubuntu_{bionic,focal,jammy,noble}_*.rar |
| rockylinux | 3 | rockylinux_{8,9,10}_aarch64.rar |
| debian | 3 | debian_{bullseye,bookworm,trixie}*.rar |
| centos | 3 | centos_{8,9,10}_aarch64.rar |
| kali | 2 | kali-linux-2025.{3,4}-cloud-genericcloud-arm64.rar |
| fnos | 1 | fnos_1.1.19_arm64.rar（飞牛 NAS） |

新增发行版步骤：① kdev 项目构建 rootfs 并上传 `${vendor}-rootfs` release；② 18 个 image workflow 的 matrix 同步添加（列表全仓复制粘贴，需逐个文件改）。

## 六、关键约定与校验点

- defconfig 统一名：`bdy_g98_rk3588_defconfig`；设备树：`rk3588-bdy-g98.dtb`
- 内核版本后缀强制 `-kdev`（kernel 脚本 make kernelrelease 校验，失败即退出）
- 交叉工具链：`aarch64-linux-gnu-`；runner：`ubuntu-22.04` 容器内再跑 `ubuntu:22.04` docker
- boot 分区 root PARTUUID：`614e0000-0000-4b53-8000-1d28000054a9`；串口 `ttyS2,1500000`
- Release tag 命名：`<脚本名>_kernel` / `<脚本名>_image` / 特殊（OpenCloudOS-6.6、OpenAnolis-6.6 用连字符）
- 产物命名：内核 `Image-<kver>-kdev`；镜像 `BDY_G98_<内核目录名>_<rootfs名>.rar`

## 七、已知疑点与排查入口

1. `openanolis_6.6_image.sh` 实际下载 `BDY_G98_RK3588-opencloudos` 的 `OpenCloudOS_linux-6.6` 内核（6.6.119-kdev），anolis 子仓 tag `OpenAnolis_linux-6.6` 无人消费 → 若要求"anolis 内核 + anolis rootfs"需改脚本 wget 源。
2. `ophub_6.1.y_kernel.sh` 引用 `ophub_6.1.y/*.patch`，但根目录无 `ophub_6.1.y/` 补丁目录（6.12.y 补丁内嵌脚本、6.1.y 疑似缺失）→ 触发 6.1.y kernel 构建可能失败，先补目录。
3. `opencloudos_6.6.yml` / `openanolis_6.6.yml` 的 push paths 写的是 `opencloudos_6.6_image.sh`（无 `kdevbuild/` 前缀）→ push 修改脚本不会触发自动构建（路径不匹配），linux-stable 与 openeuler 已带前缀，可对比修复。
4. `recovery_uboot2017.yml` push paths 未包含 `recovery_uboot2017/kdev-build.sh`（uboot2026 版已修正）。
5. EMMC recovery 两代 U-Boot 均标注"测试中，无法引导"；引导异常优先用 SPI recovery + maskrom 短接（主板背面短接点，见 README）。
6. GitHub runner 磁盘扩展（LVM /builder）依赖 `/mnt` 与 `/` 的空闲空间，`df` 数值异常时该步骤可能失败——排查 workflow 日志 "Create simulated physical disk"。
