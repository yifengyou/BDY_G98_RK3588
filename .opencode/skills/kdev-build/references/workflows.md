# Workflows 全量明细

检索范围：`/2T/rockchip/bdy-g98.git` 当前目录及全部子目录的 `.github/workflows/`。
共 33 个工程自有 workflow（根仓 20 个 + 子仓库 13 个）；edk2/openssl/brotli/libspdm 等第三方子模块内的 workflows（约 110 个）为上游 CI，与本工程无关，不在此列。

## 一、根仓 workflows（`.github/workflows/`，20 个）

### 1. ophub 内核系列（5 个）

均支持 `workflow_dispatch`（input `build_type`: kernel|image，默认 kernel）+ `repository_dispatch`，无 push 触发。
两个 job：`build-kernel`（if build_type=='kernel'）、`build-image`（if build_type=='image'，118 组合 matrix）。

| 文件 | workflow name | kernel 脚本 | image 脚本 | 内核 clone 源 | 补丁 | kernel release tag | image release tag |
|---|---|---|---|---|---|---|---|
| `ophub_6.1.y.yml` | ophub kernel 6.1.y | `kdevbuild/ophub_6.1.y_kernel.sh` | `kdevbuild/ophub_6.1.y_image.sh` | `https://github.com/ophub/linux-6.1.y.git` | `ophub_6.1.y/*.patch`（git am） | `ophub_6.1.y_kernel` | `ophub_6.1.y_image` |
| `ophub_6.6.y.yml` | ophub kernel 6.6.y | 同上模式 | 同上模式 | `ophub/linux-6.6.y.git` | `ophub_6.6.y/0001-adapt-for-bdy-g98.patch` | `ophub_6.6.y_kernel` | `ophub_6.6.y_image` |
| `ophub_6.12.y.yml` | ophub kernel 6.12.y | 同上模式 | 同上模式 | `ophub/linux-6.12.y.git` | 脚本内嵌 | `ophub_6.12.y_kernel` | `ophub_6.12.y_image` |
| `ophub_6.18.y.yml` | ophub kernel 6.18.y | 同上模式 | 同上模式 | `ophub/linux-6.18.y.git` | `ophub_6.18.y/`（0001 yt921x RJ45 LED、0002 RTL8125 LED、0003 主体适配、0004 禁 eMMC 启用 SPI Nor） | `ophub_6.18.y_kernel` | `ophub_6.18.y_image` |
| `ophub_linux-6.1.y-rockchip.yml` | ophub kernel linux-6.1.y-rockchip | 同上模式 | 同上模式 | `ophub/linux-6.1.y-rockchip.git -b main` | `ophub_linux-6.1.y-rockchip/0001-adapt-for-bdy-g98-rk3588.patch` | `ophub_linux-6.1.y-rockchip_kernel` | `ophub_linux-6.1.y-rockchip_image` |

注：ophub_6.1.y / 6.6.y / 6.12.y 的 kernel 脚本中 `git am ${WORKDIR}/ophub_<ver>.y/*.patch`，但 6.1.y、6.12.y 目录当前不存在于根目录（6.12.y 补丁内嵌在脚本中；6.1.y 脚本目录缺失时 git am 会失败——改动前先确认）。

### 2. rockchip BSP 内核系列（3 个）

| 文件 | workflow name | 内核 clone 源 | 补丁目录 | tags |
|---|---|---|---|---|
| `rockchip-linux_develop-6.1.yml` | rockchip-linux kernel develop-6.1 | `rockchip-linux/kernel.git -b develop-6.1` | `rockchip-linux_develop-6.1/0001-adapt-for-bdy-g98-rk3588.patch` | `rockchip-linux_develop-6.1_kernel` / `_image` |
| `rockchip-linux_develop-6.6.yml` | rockchip-linux kernel develop-6.6 | `rockchip-linux/kernel.git -b develop-6.6` | `rockchip-linux_develop-6.6/0001-adapt-for-bdy-g98-with-rockchip-develop-6.6.patch` | `rockchip-linux_develop-6.6_kernel` / `_image` |
| `official_5.10.66.yml` | official kernel 5.10.66 | `yifengyou/BDY_G98_RK3588-kernel`（官方 BSP 5.10.66，适配已内置） | — | `official_5.10.66_kernel` / `_image` |

触发：workflow_dispatch（build_type）+ repository_dispatch。

### 3. 商业发行版内核系列（3 个，仅 image job）

内核不在本仓构建，由对应子仓库构建后上传 release，本仓 workflow 只做镜像组装。
触发：`workflow_dispatch` + `repository_dispatch` + `push`（master，paths 监听 yml 与 image 脚本）。

| 文件 | workflow name | 内核产物来源（wget） | 内核版本示例 | image tag | push paths |
|---|---|---|---|---|---|
| `openeuler_OLK6.6.yml` | openeuler kernel linux-6.6 | `BDY_G98_RK3588-openeuler` release `OpenEuler_OLK6.6` | 6.6.0-kdev | `openeuler_OLK-6.6_image` | yml + `kdevbuild/openeuler_olk6.6_image.sh` |
| `opencloudos_6.6.yml` | opencloudos kernel linux-6.6 | `BDY_G98_RK3588-opencloudos` release `OpenCloudOS_linux-6.6` | 6.6.119-kdev | `OpenCloudOS-6.6` | yml + `opencloudos_6.6_image.sh`（⚠️ 无 kdevbuild/ 前缀，历史遗留路径） |
| `openanolis_6.6.yml` | openanolis kernel linux-6.6 | ⚠️ `BDY_G98_RK3588-opencloudos` release `OpenCloudOS_linux-6.6`（复用 OpenCloudOS 内核，anolis 子仓 `OpenAnolis_linux-6.6` tag 未被引用） | 6.6.119-kdev | `OpenAnolis-6.6` | yml + `openanolis_6.6_image.sh`（⚠️ 同上无前缀） |

uboot 均取自 `BDY_G98_RK3588-uboot-mainline` release `bdy-g98-uboot` 的 `uboot-g98_only-emmc.img`。

### 4. 主线 stable 内核系列（2 个）

| 文件 | 说明 | tags |
|---|---|---|
| `linux-stable.yml` | 仅 image job；push（master，paths: yml + `kdevbuild/linux_stable_image.sh`）+ dispatch；内核来自 `BDY_G98_RK3588-linux-stable` release `linux_stable_kernel`（如 `Image-7.3.0-rc4-kdev`，由子仓 `github_BDY_G98_RK3588-linux-stable_bdy-g98.git` 构建） | `linux_stable_image` |
| `torvalds_linux.yml` | kernel+image 双 job；clone `torvalds/linux -b master`；补丁内嵌脚本 | `torvalds_linux_kernel` / `torvalds_linux_image` |

### 5. 厂商内核系列（5 个）

均 workflow_dispatch（build_type）+ repository_dispatch；kernel+image 双 job；补丁内嵌脚本（armbian 除外，用 `armbian_rk-6.1-rkr5.1/` 补丁目录）。

| 文件 | 内核 clone 源（分支） | tags（同名 `_kernel`/`_image`） |
|---|---|---|
| `armbian_rk-6.1-rkr5.1.yml` | `armbian/linux-rockchip`（rk-6.1-rkr5.1） | `armbian_rk-6.1-rkr5.1_kernel` / `_image` |
| `radxa_linux-6.1-stan-rkr5.1.yml` | `radxa/kernel`（linux-6.1-stan-rkr5.1） | `radxa_linux-6.1-stan-rkr5.1_kernel` / `_image` |
| `friendlyarm_nanopi6-v6.1.y.yml` | `friendlyarm/kernel-rockchip`（nanopi6-v6.1.y） | `friendlyarm_nanopi6-v6.1.y_kernel` / `_image` |
| `lubancat_lbc-develop-6.1.yml` | `LubanCat/kernel`（lbc-develop-6.1） | `lubancat_lbc-develop-6.1_kernel` / `_image` |
| `orangepi-xunlong_orange-pi-6.1-rk35xx.yml` | `orangepi-xunlong/linux-orangepi`（orange-pi-6.1-rk35xx） | `orangepi-xunlong_orange-pi-6.1-rk35xx_kernel` / `_image` |

### 6. recovery 系列（2 个）

| 文件 | 构建脚本 | 产物 | release tags |
|---|---|---|---|
| `recovery_uboot2017.yml` | `recovery_uboot2017/kdev-build.sh` | `emmc_full_disk*`、`G98-Recovery_ONLY-EMMC*`、`spi_full_disk*`、`G98-Recovery_ONLY-SPI*` | `emmc_recovery`、`spi_recovery` |
| `recovery_uboot2026.yml` | `recovery_uboot2026/kdev-build.sh` | 同上 | `emmc_recovery_uboot2026`、`spi_recovery_uboot2026` |

触发：push（master，paths）+ 双 dispatch；`ACTIONS_STEP_DEBUG: true`；额外 apt 安装 `device-tree-compiler zip u-boot-tools`。
`G98-Recovery_ONLY-SPI.zip` 内含 `RKDevTool_Release_v3.37`，maskrom 模式「下载镜像」直接执行；`*_full_disk.img` 为全盘备份（从 0x00000000 写入）。

## 二、子仓库 workflows（13 个）

各子仓库即独立 GitHub 仓库（`.github/kdev.md` 记录对应关系），本地目录命名规则：`github_<仓库名>_<分支名>.git`。workflow 位于各自 `.github/workflows/`，构建脚本为仓库根 `./kdev-build.sh`。push 分支触发 + 双 dispatch。

| 本地目录 | workflow 文件 | 触发分支 | job | release tag(s) | 备注 |
|---|---|---|---|---|---|
| `github_BDY_G98_RK3588-uboot_bdy-g98-only-spi.git/` | `bdy-g98-only-spi.yml` | `bdy-g98-only-spi` | build-uboot | `bdy-g98-only-spi-uboot` | U-Boot bsp v2017.09，仅 SPI |
| `github_rk3588-uboot-mainline_bdy-g98.git/` | `bdy-g98-uboot-build.yml` | `bdy-g98` | build-uboot | `bdy-g98-uboot` | 产物 BDY_G98_UBOOT.zip（主线 U-Boot，kernel 脚本依赖此 tag） |
| `github_rockchip-ophub-linux-6.18.y_bdy-g98-recovery.git/` | `bdy-g98-recovery.yml` | `bdy-g98-recovery` | build-recovery | `bdy-g98-recovery-spi` | |
| `github_rk3588-ophub-linux-6.18.y_bdy-g98-recovery.git/` | `bdy-g98-recovery.yml` | `kdev-recovery` | build-recovery | `bdy-g98-recovery` | |
| `github_BDY_G98_RK3588-linux-stable_bdy-g98.git/` | `bdy_g98.yml` | `bdy-g98` | build-kernel | `linux_stable_kernel` | 对应 GitHub `BDY_G98_RK3588-linux-stable`；linux-stable 主仓镜像的数据源 |
| `github_BDY_G98_RK3588-openanolis_bdy-g98.git/` | `oa_devel-6.6.yml` | `bdy-g98` | build-kernel | `OpenAnolis_linux-6.6` | ⚠️ 主仓 openanolis image 脚本未引用此 tag（用 opencloudos 内核） |
| `github_BDY_G98_RK3588-openeuler_bdy-g98.git/` | `openeuler_olk6.6.yml` | `bdy-g98` | build-kernel | `OpenEuler_OLK6.6` | 对应 `BDY_G98_RK3588-openeuler` |
| `github_BDY_G98_RK3588-opencloudos_bdy-g98.git/` | `oc_linux-6.6_devel.yml` | `bdy-g98` | build-kernel | `OpenCloudOS_linux-6.6` | 对应 `BDY_G98_RK3588-opencloudos` |
| `github_rockchip-edk2_bdy-g98.git/` | `bdy-g98.yml` | `bdy-g98` | build | `bdy-g98-edk2-uefi` | runs-on: ubuntu-latest；UEFI 固件 |
| `github_rockchip-khadas-android12_bdy-g98.git/` | `bdy-g98-android12.yml` | `bdy-g98` | build（matrix 步骤） | `bdy_g98_uboot`、`bdy_g98_kernel`、`bdy_g98_android12` | dispatch input `build_target`: all/uboot/kernel/android |
| `github_rockchip-khadas-android13_bdy-g98.git/` | `bdy-g98-android13.yml` | `bdy-g98` | 同上 | `bdy_g98_uboot`、`bdy_g98_kernel`、`bdy_g98_android13` | 同上 |
| `github_BDY_G98_RK3588-khadas-android14_bdy-g98.git/` | `bdy-g98-android14.yml` | `bdy-g98` | 同上 | `bdy_g98_uboot`、`bdy_g98_kernel`、`bdy_g98_android14` | 同上 |
| `secret/github_BDY_G98_RK3588-uboot_kdev.git/` | `g98-uboot.yml` | `kdev` | build-uboot | `bdy-g98-uboot` | 备份 uboot 仓 |

android 系列 workflow 结构：单 job 内按 `build_target` 分步执行 `./kdev-build-uboot.sh`（uboot 分支产物）与 `./kdev-build-kernel.sh`（内核分支产物），android 整包单独上传。

## 三、通用 workflow 结构模板（根仓 kernel/image 系列）

```yaml
name: <name>
on:
  repository_dispatch:
  workflow_dispatch:
    inputs:
      build_type: { description: 构建类型, default: kernel, type: choice, options: [image, kernel] }
env: { TZ: Asia/Shanghai }
jobs:
  build-kernel:
    if: ${{ github.event.inputs.build_type == 'kernel' }}
    runs-on: ubuntu-22.04
    steps:
      - uses: actions/checkout@v4
      - name: Show environment            # nproc/uname/df/meminfo
      - name: Create simulated physical disk   # 见下
      - name: Run Kernel Build in Ubuntu 22.04 container
        working-directory: /builder
        run: |
          sudo /bin/cp -a ${{ github.workspace }}/* .
          sudo docker run --rm --privileged --cap-add SYS_ADMIN \
            -v /dev:/dev -v /builder:/workspace -w /workspace \
            ubuntu:22.04 bash -c "chmod +x /workspace/kdevbuild/<name>_kernel.sh; /workspace/kdevbuild/<name>_kernel.sh"
      - name: List build output           # ls + md5sum /builder/release/*
      - uses: ncipollo/release-action@main
        with: { tag: <name>_kernel, artifacts: /builder/release/*, allowUpdates: true, replacesArtifacts: true, token: ${{ secrets.GITHUB_TOKEN }} }
  build-image:
    if: ${{ github.event.inputs.build_type == 'image' }}
    strategy: { fail-fast: false, matrix: { include: [ {set_vendor: ..., set_rootfs: ...} × 118 ] } }
    # docker run 额外传 -e set_vendor -e set_rootfs；release tag <name>_image
```

**Create simulated physical disk**（解决 GitHub runner 磁盘不足的核心技巧）：
```bash
mnt_size=$(df -h /mnt 可用GB - 1); root_size=$(df -h / 可用GB - 4)
truncate -s ${mnt_size}G /mnt/mnt.img; truncate -s ${root_size}G /root.img
losetup /dev/loop6 /mnt/mnt.img; losetup /dev/loop7 /root.img
pvcreate loop6 loop7; vgcreate github; lvcreate -n runner -l 100%FREE; mkfs.xfs
mount /dev/github/runner /builder; chown runner.runner /builder
```

## 四、github-actions MCP 操作指引

已接入 `github-actions` MCP（Code Mode 内 `tools["github-actions"].*`）：
- 触发构建：`trigger_workflow({ owner: "yifengyou", repo: "BDY_G98_RK3588", workflow_id: "<yml文件名>", ref: "master", inputs: { build_type: "kernel"|"image" } })`
- 查运行：`list_workflows` / `list_runs` / `get_run` / `get_run_logs` / `list_artifacts`
- 重跑/取消：`rerun_workflow` / `rerun_failed_jobs` / `cancel_run`
