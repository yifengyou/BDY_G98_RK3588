# recovery.img 构建过程完整分析

> 本文档基于 Khadas Android 14 (Rockchip RK3588) 源码树分析生成。
> 代码路径: `/2T/rockchip/android/khadas-android/android14`

---

## 目录

1. [概述](#1-概述)
2. [构建模式分类](#2-构建模式分类)
3. [关键配置文件索引](#3-关键配置文件索引)
4. [构建流程详解](#4-构建流程详解)
    - 4.1 [构建决策阶段](#41-构建决策阶段)
    - 4.2 [Recovery Root 目录准备](#42-recovery-root-目录准备)
    - 4.3 [Recovery Ramdisk 生成](#43-recovery-ramdisk-生成)
    - 4.4 [Recovery Image 打包](#44-recovery-image-打包)
    - 4.5 [AVB 签名](#45-avb-签名)
    - 4.6 [Recovery Patch 生成（非 A/B）](#46-recovery-patch-生成非-ab)
    - 4.7 [Target-files 打包](#47-target-files-打包)
5. [Recovery 二进制及依赖模块构建](#5-recovery-二进制及依赖模块构建)
6. [设备特定配置（Khadas/Rockchip）](#6-设备特定配置khamasrockchip)
7. [工具链说明](#7-工具链说明)
8. [完整构建流程图](#8-完整构建流程图)
9. [附录：关键变量速查表](#9-附录关键变量速查表)

---

## 1. 概述

`recovery.img` 是 Android 系统的恢复模式镜像，用于系统升级、恢复出厂设置等场景。它由以下核心部分组成：

```
recovery.img = kernel + recovery_ramdisk (cpio.gz) + resource.img (second) + dtbo + dtb + boot header
```

在 Khadas Android 14 (Rockchip) 平台中，recovery.img 的构建由 AOSP 构建系统的 `build/make/core/Makefile` 统一调度，设备配置由 `device/khamas/common/` 目录下的多个 `.mk` 文件提供。

---

## 2. 构建模式分类

Recovery 的构建模式取决于以下 BoardConfig 变量的组合：

| 模式 | 条件 | 结果 |
|------|------|------|
| **独立 recovery.img（非 A/B）** | `BOARD_RECOVERYIMAGE_PARTITION_SIZE` 已定义 + 非 `TARGET_NO_RECOVERY` + 非 `BOARD_USES_RECOVERY_AS_BOOT` + 非 `BOARD_MOVE_RECOVERY_RESOURCES_TO_VENDOR_BOOT` | 构建独立 `$(PRODUCT_OUT)/recovery.img` |
| **recovery-as-boot（A/B 非 GKI）** | `BOARD_USES_RECOVERY_AS_BOOT := true` | recovery 资源合入 `boot.img`，无独立 recovery.img |
| **recovery-to-vendor-boot（A/B + GKI）** | `BOARD_MOVE_RECOVERY_RESOURCES_TO_VENDOR_BOOT := true` | recovery 资源合入 `vendor_boot.img`，无独立 recovery.img |
| **GKI + 非 A/B** | `PRODUCT_BUILD_RECOVERY_IMAGE := true` + `BOARD_EXCLUDE_KERNEL_FROM_RECOVERY_IMAGE` 未设置 | 构建独立 recovery.img 但不含 kernel |
| **不构建** | `TARGET_NO_RECOVERY := true` 且非 `BOARD_USES_RECOVERY_AS_BOOT` | 无任何 recovery 镜像 |

**Khadas RK3588 默认配置（kedge2，非 A/B，非 GKI）**：
- 构建独立 `recovery.img`
- 使用 boot header v2
- 包含 kernel + ramdisk + resource.img (second) + dtbo + dtb
- AVB 启用时使用 full recovery image（不做 patch）

---

## 3. 关键配置文件索引

### AOSP 构建系统核心文件

| 文件 | 作用 |
|------|------|
| `build/make/core/Makefile:187-200` | `INSTALLED_RECOVERYIMAGE_TARGET` 定义 |
| `build/make/core/Makefile:2130-2590` | Recovery image 完整构建逻辑 |
| `build/make/core/Makefile:3250-3277` | Recovery from boot patch 生成 |
| `build/make/core/Makefile:5870-5915` | Target-files 中 recovery 组件打包 |
| `build/make/core/Makefile:6160-6164` | 非 A/B OTA recovery patch 生成 |
| `build/make/core/board_config.mk:494-510` | `BUILDING_RECOVERY_IMAGE` 决策逻辑 |
| `build/make/core/config.mk:676` | `MAKE_RECOVERY_PATCH` 工具路径 |
| `build/make/core/envsetup.mk:274` | `TARGET_COPY_OUT_RECOVERY := recovery` |
| `build/make/core/tasks/recovery_snapshot.mk` | Recovery snapshot 生成 |

### Recovery 源码

| 文件 | 作用 |
|------|------|
| `bootable/recovery/Android.bp` | Recovery 二进制及库的 Soong 配置（261 行） |
| `bootable/recovery/Android.mk` | `RECOVERY_API_VERSION := 3`，`TARGET_RECOVERY_UI_LIB`，`recovery_deps` |
| `bootable/recovery/recovery_ui/Android.bp` | Recovery UI 接口库 |
| `bootable/recovery/minui/Android.bp` | 最小 UI 库 |
| `bootable/recovery/minadbd/Android.bp` | 最小 ADB 守护进程 |
| `bootable/recovery/install/Android.bp` | OTA install 流程 |
| `bootable/recovery/applypatch/Android.bp` | Patch 应用工具 |
| `bootable/recovery/updater/Android.bp` | OTA updater |
| `bootable/recovery/uncrypt/Android.bp` | Uncrypt 工具 |
| `bootable/recovery/fuse_sideload/Android.bp` | Sideload FUSE 支持 |

### Khadas/Rockchip 设备配置

| 文件 | 作用 |
|------|------|
| `device/khadas/common/BoardConfig.mk:172-189` | Recovery 基础配置（像素格式、UI 库等） |
| `device/khadas/common/BoardConfig_AB.mk:17-27` | A/B 模式 `BOARD_USES_RECOVERY_AS_BOOT` |
| `device/khadas/common/modules/recovery.mk` | Recovery 模块包（update_engine, bootctrl 等） |
| `device/khadas/common/modules/make_boot.mk:55-71` | `BOARD_RECOVERY_MKBOOTIMG_ARGS`, `BOARD_INCLUDE_RECOVERY_DTBO` |
| `device/khadas/common/modules/gki_common.mk:47-54` | GKI 模式 recovery 资源策略 |
| `device/khadas/common/modules/avb.mk:58-96` | AVB recovery 签名配置 |
| `device/khadas/common/build/rockchip/Partitions.mk:54,74` | `BOARD_RECOVERYIMAGE_PARTITION_SIZE`（默认 96MB） |
| `device/khadas/common/build/rockchip/RebuildFstab.mk:112` | `TARGET_RECOVERY_FSTAB` 生成 |
| `device/khadas/common/recovery/Android.mk` | 设备自定义 recovery UI（`librecovery_ui_$(TARGET_PRODUCT)`） |
| `device/khadas/common/device.mk:286-287` | inherit recovery.mk |

### GKI 模块化内核配置

| 文件 | 作用 |
|------|------|
| `mkcombinedroot/modular_kernel.mk` | GKI 模块化内核主入口 |
| `mkcombinedroot/res/recovery_gki.mk` | `BOARD_RECOVERY_KERNEL_MODULES` / `BOARD_RECOVERY_KERNEL_MODULES_LOAD` |

### 发布工具

| 文件 | 作用 |
|------|------|
| `build/make/tools/releasetools/make_recovery_patch.py` | 生成 recovery patch |
| `build/make/tools/releasetools/common.py:3727-3809` | `MakeRecoveryPatch()` 函数 |
| `build/make/tools/releasetools/add_img_to_target_files.py:1044-1077` | recovery.img 写入 target-files |
| `build/make/tools/releasetools/non_ab_ota.py` | 非 A/B OTA recovery 刷写脚本 |
| `build/make/tools/releasetools/sign_target_files_apks.py` | recovery.img 签名 |

---

## 4. 构建流程详解

### 4.1 构建决策阶段

**文件**: `build/make/core/board_config.mk:494-510`

构建系统首先决定是否需要构建 recovery image：

```makefile
BUILDING_RECOVERY_IMAGE :=
ifeq ($(PRODUCT_BUILD_RECOVERY_IMAGE),)
  ifeq ($(BOARD_USES_RECOVERY_AS_BOOT),true)
    BUILDING_RECOVERY_IMAGE := true              # recovery-as-boot 模式
  else ifeq ($(BOARD_MOVE_RECOVERY_RESOURCES_TO_VENDOR_BOOT),true)
    BUILDING_RECOVERY_IMAGE := true              # recovery 移入 vendor_boot
  else ifdef BOARD_RECOVERYIMAGE_PARTITION_SIZE
    ifeq (,$(filter true, $(TARGET_NO_KERNEL) $(TARGET_NO_RECOVERY)))
      BUILDING_RECOVERY_IMAGE := true            # 有独立 recovery 分区
    endif
  endif
else ifeq ($(PRODUCT_BUILD_RECOVERY_IMAGE),true)
  BUILDING_RECOVERY_IMAGE := true                # 强制构建
endif
```

**然后**，在 `build/make/core/Makefile:187-200`，决定是否生成独立 `recovery.img`：

```makefile
INSTALLED_RECOVERYIMAGE_TARGET :=
ifdef BUILDING_RECOVERY_IMAGE
ifneq ($(BOARD_USES_RECOVERY_AS_BOOT),true)
ifneq ($(BOARD_MOVE_RECOVERY_RESOURCES_TO_VENDOR_BOOT),true)
INSTALLED_RECOVERYIMAGE_TARGET := $(PRODUCT_OUT)/recovery.img
endif
endif
endif
```

> **结论**：只有在 `BUILDING_RECOVERY_IMAGE=true` 且非 recovery-as-boot 且非 recovery-to-vendor-boot 时，才构建独立的 `recovery.img`。

### 4.2 Recovery Root 目录准备

**文件**: `build/make/core/Makefile:2468-2503`

这是 recovery 构建中最复杂的步骤。目标变量是 `INTERNAL_RECOVERY_RAMDISK_FILES_TIMESTAMP`，它的时间戳更新会触发后续 ramdisk 重建。

**依赖项**：
- `$(MKBOOTFS)` — cpio 打包工具
- `$(COMPRESSION_COMMAND_DEPS)` — 压缩工具（gzip/lz4）
- `$(INTERNAL_ROOT_FILES)` — 基础 root 文件系统
- `$(INSTALLED_RAMDISK_TARGET)` — 基础 ramdisk
- `$(INTERNAL_RECOVERYIMAGE_FILES)` — recovery 专用模块（安装在 `TARGET_RECOVERY_OUT` 下的模块）
- `$(recovery_sepolicy)` — recovery SELinux 策略文件
- `$(INSTALLED_RECOVERY_BUILD_PROP_TARGET)` — recovery build prop
- `$(recovery_resource_deps)` — recovery 资源文件（图片、字体等）
- `$(recovery_fstab)` — recovery fstab 文件

**执行步骤**（按顺序）：

```bash
# 1. 创建 recovery 输出目录
mkdir -p $(TARGET_RECOVERY_OUT)
mkdir -p $(TARGET_RECOVERY_ROOT_OUT)/sdcard $(TARGET_RECOVERY_ROOT_OUT)/tmp

# 2. 复制基础 ramdisk 作为 recovery ramdisk 的起点
#    使用 rsync 排除 recovery 专用的 SELinux 文件
rsync -a --exclude=sdcard $(IGNORE_RECOVERY_SEPOLICY) $(IGNORE_CACHE_LINK) \
    $(TARGET_ROOT_OUT) $(TARGET_RECOVERY_OUT)

# 3. 修改 ramdisk 内容
ln -sf /system/bin/init $(TARGET_RECOVERY_ROOT_OUT)/init

# 4. 移除非 recovery 的 init*.rc 文件，只保留 init.recovery*.rc
find $(TARGET_RECOVERY_ROOT_OUT) -maxdepth 1 -name 'init*.rc' -type f \
    -not -name "init.recovery.*.rc" | xargs rm -f
cp $(TARGET_ROOT_OUT)/init.recovery.*.rc $(TARGET_RECOVERY_ROOT_OUT)/ 2>/dev/null || true

# 5. 复制 recovery UI 资源（图标、字体、文本图片等）
mkdir -p $(TARGET_RECOVERY_ROOT_OUT)/res
rm -rf $(TARGET_RECOVERY_ROOT_OUT)/res/*
cp -rf $(recovery_resources_common)/* $(TARGET_RECOVERY_ROOT_OUT)/res
# 复制生成的文本图片（installing_text.png, erasing_text.png 等）
cp -rf $(recovery_text_file) $(TARGET_RECOVERY_ROOT_OUT)/res/images/
# 复制字体
cp -f $(recovery_font) $(TARGET_RECOVERY_ROOT_OUT)/res/images/font.png

# 6. 复制设备私有 recovery 资源
cp -rf $(TARGET_PRIVATE_RES_DIRS) $(TARGET_RECOVERY_ROOT_OUT)/

# 7. 复制 recovery fstab
cp -f $(recovery_fstab) $(TARGET_RECOVERY_ROOT_OUT)/system/etc/recovery.fstab

# 8. 复制 recovery wipe 文件（如果定义了 TARGET_RECOVERY_WIPE）
cp -f $(recovery_wipe) $(TARGET_RECOVERY_ROOT_OUT)/system/etc/recovery.wipe

# 9. 创建 default.prop 符号链接
ln -sf prop.default $(TARGET_RECOVERY_ROOT_OUT)/default.prop

# 10. 执行设备自定义的 recovery image 准备命令（如果有）
$(BOARD_RECOVERY_IMAGE_PREPARE)

# 11. 更新时间戳文件
touch $@
```

**recovery_density 和资源选择**（`Makefile:2191-2220`）：

构建系统根据屏幕密度选择合适的 recovery 资源目录：
- 优先级：`TARGET_SCREEN_DENSITY` > `PRODUCT_AAPT_PREF_CONFIG` > `mdpi`
- 密度桶：`xxxhdpi`（≥560dpi）、`xxhdpi`（≥400dpi）、`xhdpi`（≥280dpi）、`hdpi`（≥200dpi）、`mdpi`
- 如果设备密度目录不存在，回退到 `xhdpi`
- 字体选择：xhdpi 及以上用 `18x32.png`，其他用 `12x22.png`

**recovery 文本图片生成**（`Makefile:2223-2318`）：

当定义了 `TARGET_RECOVERY_UI_SCREEN_WIDTH` 时，使用 `RecoveryImageGenerator.jar` 生成以下文本图片：
- `installing_text.png`
- `installing_security_text.png`
- `erasing_text.png`
- `error_text.png`
- `no_command_text.png`
- `cancel_wipe_data_text.png`
- `factory_data_reset_text.png`
- `try_again_text.png`
- `wipe_data_confirmation_text.png`
- `wipe_data_menu_header_text.png`

使用 `zopflipng` 进行 PNG 优化压缩。

**recovery build prop 生成**（`Makefile:2401-2420`）：

`prop.default` 文件通过合并以下文件生成：
- `$(INSTALLED_BUILD_PROP_TARGET)` — system build.prop
- `$(INSTALLED_VENDOR_BUILD_PROP_TARGET)` — vendor build.prop
- `$(INSTALLED_ODM_BUILD_PROP_TARGET)` — odm build.prop
- `$(INSTALLED_PRODUCT_BUILD_PROP_TARGET)` — product build.prop
- `$(INSTALLED_SYSTEM_EXT_BUILD_PROP_TARGET)` — system_ext build.prop
- 追加 recovery UI 属性（如 `ro.recovery.ui.margin_height` 等）

### 4.3 Recovery Ramdisk 生成

**文件**: `build/make/core/Makefile:2505-2506`

```makefile
recovery_ramdisk := $(PRODUCT_OUT)/ramdisk-recovery.img

$(recovery_ramdisk): $(INTERNAL_RECOVERY_RAMDISK_FILES_TIMESTAMP)
	$(MKBOOTFS) -d $(TARGET_OUT) $(TARGET_RECOVERY_ROOT_OUT) | $(COMPRESSION_COMMAND) > $(recovery_ramdisk)
```

**说明**：
- `MKBOOTFS` 是 `system/core/mkbootfs/mkbootfs.c` 编译出的主机工具
- 将 `TARGET_RECOVERY_ROOT_OUT`（即 `$(PRODUCT_OUT)/recovery/root`）目录打包为 cpio 格式
- 通过管道传给 `COMPRESSION_COMMAND`（gzip 或 lz4）进行压缩
- 输出为 `$(PRODUCT_OUT)/ramdisk-recovery.img`

### 4.4 Recovery Image 打包

**文件**: `build/make/core/Makefile:2508-2564`

#### build-recoveryimage-target 函数（`Makefile:2510-2527`）

```makefile
define build-recoveryimage-target
  # 如果支持 VBOOT，先生成未签名镜像，再签名
  $(if $(filter true,$(PRODUCT_SUPPORTS_VBOOT)), \
    $(MKBOOTIMG) --kernel $(strip $(2)) $(INTERNAL_RECOVERYIMAGE_ARGS) \
                 $(INTERNAL_MKBOOTIMG_VERSION_ARGS) $(BOARD_RECOVERY_MKBOOTIMG_ARGS) \
                 --output $(1).unsigned, \
    # 否则直接生成最终镜像
    $(MKBOOTIMG) --kernel $(strip $(2)) $(INTERNAL_RECOVERYIMAGE_ARGS) \
                 $(INTERNAL_MKBOOTIMG_VERSION_ARGS) \
                 $(BOARD_RECOVERY_MKBOOTIMG_ARGS) --output $(1))
  # VBOOT 签名
  $(if $(filter true,$(PRODUCT_SUPPORTS_VBOOT)), \
    $(VBOOT_SIGNER) ... $(1))
  # 大小校验
  $(if $(filter true,$(BOARD_USES_RECOVERY_AS_BOOT)), \
    $(call assert-max-image-size,$(1),$(call get-hash-image-max-size,$(call get-bootimage-partition-size,$(1),boot))), \
    $(call assert-max-image-size,$(1),$(call get-hash-image-max-size,$(BOARD_RECOVERYIMAGE_PARTITION_SIZE))))
  # AVB 签名
  $(if $(filter true,$(BOARD_AVB_ENABLE)), \
    $(if $(filter true,$(BOARD_USES_RECOVERY_AS_BOOT)), \
      $(AVBTOOL) add_hash_footer --image $(1) ... --partition_name boot ..., \
      $(AVBTOOL) add_hash_footer --image $(1) ... --partition_name recovery ...))
endef
```

#### mkbootimg 参数组装

**`INTERNAL_RECOVERYIMAGE_ARGS`**（`Makefile:2434-2463`）：

```makefile
INTERNAL_RECOVERYIMAGE_ARGS := --ramdisk $(recovery_ramdisk)
```

在非 GKI recovery-as-boot 模式下，追加以下参数：
- `--second $(INSTALLED_2NDBOOTLOADER_TARGET)` — 第二阶段 bootloader
- `--cmdline "$(INTERNAL_KERNEL_CMDLINE)"` — 内核命令行（如果未排除 kernel）
- `--base $(BOARD_KERNEL_BASE)` — 内核基址
- `--pagesize $(BOARD_KERNEL_PAGESIZE)` — 页大小
- `--recovery_dtbo $(BOARD_PREBUILT_RECOVERY_DTBOIMAGE)` 或 `$(BOARD_PREBUILT_DTBOIMAGE)` — DTBO
- `--recovery_acpio $(BOARD_RECOVERY_ACPIO)` — ACPIO
- `--dtb $(INSTALLED_DTBIMAGE_TARGET)` — DTB

**`BOARD_RECOVERY_MKBOOTIMG_ARGS`**（Khamas 设备配置）：

来自 `device/khadas/common/modules/make_boot.mk:61-63`（非 A/B，非 Virtual AB）：
```makefile
BOARD_RECOVERY_MKBOOTIMG_ARGS ?= --second $(TARGET_PREBUILT_RESOURCE) \
    --header_version 2 \
    --cmdline "$(BOARD_KERNEL_CMDLINE) $(ROCKCHIP_ANDROID_BOOT_CMDLINE)"
```

> **注意**：Khadas 设备的 recovery 始终使用 header v2，即使在 boot 使用 v3/v4 时也是如此。

#### 构建规则（`Makefile:2562-2564`）

```makefile
$(INSTALLED_RECOVERYIMAGE_TARGET): $(recoveryimage-deps)
	$(call build-recoveryimage-target, $@, \
	  $(if $(filter true, $(BOARD_EXCLUDE_KERNEL_FROM_RECOVERY_IMAGE)),, $(recovery_kernel)))
```

#### 依赖列表（`Makefile:2529-2548`）

```makefile
recoveryimage-deps := $(MKBOOTIMG) $(recovery_ramdisk) $(recovery_kernel)

# VBOOT 支持
ifeq (true,$(PRODUCT_SUPPORTS_VBOOT))
  recoveryimage-deps += $(VBOOT_SIGNER)
endif

# AVB 支持
ifeq (true,$(BOARD_AVB_ENABLE))
  recoveryimage-deps += $(AVBTOOL) $(BOARD_AVB_BOOT_KEY_PATH)
endif

# DTBO
ifdef BOARD_INCLUDE_RECOVERY_DTBO
  ifdef BOARD_PREBUILT_RECOVERY_DTBOIMAGE
    recoveryimage-deps += $(BOARD_PREBUILT_RECOVERY_DTBOIMAGE)
  else
    recoveryimage-deps += $(BOARD_PREBUILT_DTBOIMAGE)
  endif
endif

# ACPIO
ifdef BOARD_INCLUDE_RECOVERY_ACPIO
  recoveryimage-deps += $(BOARD_RECOVERY_ACPIO)
endif

# DTB
ifdef BOARD_INCLUDE_DTB_IN_BOOTIMG
  recoveryimage-deps += $(INSTALLED_DTBIMAGE_TARGET)
endif
```

#### Make 目标入口（`Makefile:2589-2590`）

```makefile
.PHONY: recoveryimage
recoveryimage: $(INSTALLED_RECOVERYIMAGE_TARGET) $(RECOVERY_RESOURCE_ZIP)
```

### 4.5 AVB 签名

**文件**: `build/make/core/Makefile:2523-2526`

当 `BOARD_AVB_ENABLE=true` 时，在 `build-recoveryimage-target` 中对 recovery.img 进行 AVB 签名：

- **recovery-as-boot 模式**：使用 `--partition_name boot` 和 `INTERNAL_AVB_BOOT_SIGNING_ARGS`
- **独立 recovery.img**：使用 `--partition_name recovery` 和 `INTERNAL_AVB_RECOVERY_SIGNING_ARGS`

AVB recovery 签名参数来自 `device/khadas/common/modules/avb.mk`：
- `BOARD_AVB_RECOVERY_KEY_PATH` — recovery AVB 签名密钥
- `BOARD_AVB_RECOVERY_ALGORITHM` — 签名算法
- `BOARD_AVB_RECOVERY_ROLLBACK_INDEX` — 回滚索引
- `BOARD_AVB_RECOVERY_ADD_HASH_FOOTER_ARGS` — 额外 hash footer 参数

**Khadas AVB 配置**（`make_boot.mk:64-66`）：
```makefile
ifeq ($(BOARD_AVB_ENABLE), true)
BOARD_USES_FULL_RECOVERY_IMAGE := true
endif
```

> 当 AVB 启用时，设置 `BOARD_USES_FULL_RECOVERY_IMAGE := true`，意味着不做 boot-recovery diff patch，而是在 system 分区存放完整 recovery.img 副本。

### 4.6 Recovery Patch 生成（非 A/B）

**文件**: `build/make/core/Makefile:3250-3277`

在非 A/B 模式下，如果同时构建了 boot.img 和 recovery.img，且 `BOARD_USES_FULL_RECOVERY_IMAGE` 不为 true，则生成 `recovery_from_boot.p` 补丁：

```makefile
ifneq ($(INSTALLED_BOOTIMAGE_TARGET),)
ifneq ($(INSTALLED_RECOVERYIMAGE_TARGET),)
ifneq ($(BOARD_USES_FULL_RECOVERY_IMAGE),true)
  # 选择 diff 工具：包含 DTBO/ACPIO 时用 bsdiff，否则用 imgdiff
  ifneq (,$(filter true,$(BOARD_INCLUDE_RECOVERY_DTBO) $(BOARD_INCLUDE_RECOVERY_ACPIO)))
    diff_tool := $(HOST_OUT_EXECUTABLES)/bsdiff
  else
    diff_tool := $(HOST_OUT_EXECUTABLES)/imgdiff
  endif
  RECOVERY_FROM_BOOT_PATCH := $(intermediates)/recovery_from_boot.p
  $(RECOVERY_FROM_BOOT_PATCH): \
      $(INSTALLED_RECOVERYIMAGE_TARGET) \
      $(firstword $(INSTALLED_BOOTIMAGE_TARGET)) \
      $(diff_tool)
	$(PRIVATE_DIFF_TOOL) $(firstword $(INSTALLED_BOOTIMAGE_TARGET)) \
	    $(INSTALLED_RECOVERYIMAGE_TARGET) $@
else
  # full recovery image 模式：直接使用 recovery.img
  RECOVERY_FROM_BOOT_PATCH := $(INSTALLED_RECOVERYIMAGE_TARGET)
endif
endif
endif
```

**recovery-resource.dat**（`Makefile:2362-2370`）：

传统非 A/B OTA 中，`recovery-resource.dat` 包含 recovery 的 res 目录资源，用于配合 `recovery_from_boot.p` 补丁。在以下任一条件满足时不生成：
- `BOARD_USES_FULL_RECOVERY_IMAGE = true`（Khadas AVB 模式）
- `BOARD_USES_RECOVERY_AS_BOOT = true`
- `BOARD_INCLUDE_RECOVERY_DTBO = true`（Khadas 默认）
- `BOARD_INCLUDE_RECOVERY_ACPIO = true`
- `BOARD_MOVE_RECOVERY_RESOURCES_TO_VENDOR_BOOT = true`

**OTA 中的 install-recovery.sh 生成**（`Makefile:6160-6164`）：

```makefile
ifeq ($(TARGET_OTA_ALLOW_NON_AB),true)
ifneq ($(INSTALLED_RECOVERYIMAGE_TARGET),)
	$(hide) PATH=$(INTERNAL_USERIMAGES_BINARY_PATHS):$$PATH MKBOOTIMG=$(MKBOOTIMG) \
	    $(MAKE_RECOVERY_PATCH) $(zip_root) $(zip_root)
endif
endif
```

`MAKE_RECOVERY_PATCH` 工具（`build/make/tools/releasetools/make_recovery_patch.py`）生成：
- `install-recovery.sh` — 安装脚本
- `recovery-from-boot.p` — 补丁文件（或 full recovery.img 的引用）

### 4.7 Target-files 打包

**文件**: `build/make/core/Makefile:5870-5915`

在 `BUILT_TARGET_FILES_PACKAGE` 规则中，recovery 组件被打包到 target-files zip：

```bash
# 当存在 recovery image（独立或 recovery-as-boot 或 recovery-to-vendor-boot）时
ifneq (,$(INSTALLED_RECOVERYIMAGE_TARGET)$(filter true,$(BOARD_USES_RECOVERY_AS_BOOT))$(filter true,$(BOARD_MOVE_RECOVERY_RESOURCES_TO_VENDOR_BOOT)))
  # 1. 创建 RECOVERY 目录
  mkdir -p $(zip_root)/RECOVERY

  # 2. 复制 recovery ramdisk（如果不是 vendor_boot 中的 recovery ramdisk fragment）
  ifneq (true,$(BOARD_INCLUDE_RECOVERY_RAMDISK_IN_VENDOR_BOOT))
    $(call package_files-copy-root, \
        $(TARGET_RECOVERY_ROOT_OUT),$(zip_root)/RECOVERY/RAMDISK)
  endif

  # 3. 复制 recovery kernel（如果不是 recovery-as-boot 且未排除 kernel）
  ifneq (true,$(BOARD_EXCLUDE_KERNEL_FROM_RECOVERY_IMAGE))
    cp $(firstword $(INSTALLED_KERNEL_TARGET)) $(zip_root)/RECOVERY/kernel
  endif

  # 4. 复制 second bootloader（非 vendor_boot 模式）
  ifdef INSTALLED_2NDBOOTLOADER_TARGET
    cp $(INSTALLED_2NDBOOTLOADER_TARGET) $(zip_root)/RECOVERY/second
  endif

  # 5. 复制 DTBO
  ifdef BOARD_INCLUDE_RECOVERY_DTBO
    cp $(BOARD_PREBUILT_DTBOIMAGE) $(zip_root)/RECOVERY/recovery_dtbo
  endif

  # 6. 复制 ACPIO
  ifdef BOARD_INCLUDE_RECOVERY_ACPIO
    cp $(BOARD_RECOVERY_ACPIO) $(zip_root)/RECOVERY/recovery_acpio
  endif

  # 7. 复制 DTB
  ifdef INSTALLED_DTBIMAGE_TARGET
    cp $(INSTALLED_DTBIMAGE_TARGET) $(zip_root)/RECOVERY/dtb
  endif

  # 8. 写入 cmdline, base, pagesize
  echo "$(INTERNAL_KERNEL_CMDLINE)" > $(zip_root)/RECOVERY/cmdline
  echo "$(BOARD_KERNEL_BASE)" > $(zip_root)/RECOVERY/base
  echo "$(BOARD_KERNEL_PAGESIZE)" > $(zip_root)/RECOVERY/pagesize
endif
```

**misc_info.txt 中的 recovery 信息**（`Makefile:5339-5350`）：

```makefile
ifeq ($(INSTALLED_RECOVERYIMAGE_TARGET),)
  echo "no_recovery=true" >> $(misc_info_target)
endif
  echo "recovery_size=$(BOARD_RECOVERYIMAGE_PARTITION_SIZE)" >> $(misc_info_target)
```

---

## 5. Recovery 二进制及依赖模块构建

### Recovery 主二进制

**文件**: `bootable/recovery/Android.bp`

```
recovery (cc_binary, recovery: true)
├── recovery_main.cpp
├── librecovery (cc_library_static)
│   ├── recovery.cpp
│   ├── librecovery_ui_ext (cc_library_shared)
│   │   ├── $(TARGET_RECOVERY_UI_LIB) (cc_library_static)
│   │   │   ├── librecovery_ui_default (默认)
│   │   │   └── librecovery_ui_$(TARGET_PRODUCT) (Khadas 自定义)
│   │   └── librecovery_ui.recovery
│   ├── librecovery_fastboot
│   ├── libinstall (install/Android.bp)
│   ├── libminadbd (minadbd/Android.bp)
│   ├── libotautil (otautil/Android.bp)
│   └── librecovery_utils (recovery_utils/Android.bp)
├── libbootloader_message (bootloader_message/Android.bp)
├── libminui (minui/Android.bp)
└── ...
```

**关键配置**（`bootable/recovery/Android.bp`）：

```
cc_defaults {
    name: "recovery_defaults",
    cflags: ["-DRECOVERY_API_VERSION=3", ...]
}

cc_binary {
    name: "recovery",
    recovery: true,              // 安装到 recovery 分区
    srcs: ["recovery_main.cpp"],
    ...
}
```

### Khadas 自定义 Recovery UI

**文件**: `device/khadas/common/recovery/Android.mk`

```makefile
LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_C_INCLUDES += bootable/recovery
LOCAL_SRC_FILES := recovery_ui.cpp
LOCAL_MODULE := librecovery_ui_$(TARGET_PRODUCT)
include $(BUILD_STATIC_LIBRARY)
```

该库被 `librecovery_ui_ext`（在 `bootable/recovery/Android.mk` 中定义）通过 `TARGET_RECOVERY_UI_LIB` 引入。

### Recovery 依赖模块包

**文件**: `bootable/recovery/Android.mk:57-86`

```
recovery_deps (phony package)
├── mkfs.erofs.recovery
├── dump.erofs.recovery
├── fsck.erofs.recovery
├── tune2fs.recovery
├── recovery-persist
├── recovery-refresh (仅当无 cache 分区时)
├── make_f2fs.recovery (如果使用 F2FS)
├── fsck.f2fs.recovery (如果使用 F2FS)
└── sload_f2fs.recovery (如果使用 F2FS)
```

### Khamas Recovery 模块包

**文件**: `device/khadas/common/modules/recovery.mk`

**非 A/B 模式**：
```makefile
PRODUCT_PACKAGES += applypatch
```

**A/B 模式**：
```makefile
PRODUCT_PACKAGES += \
    update_engine \
    update_verifier \
    update_engine_sideload \
    bootctrl.rk30board.recovery \
    android.hardware.boot@1.2-impl-rockchip.recovery \
    ...
```

### Recovery 分区安装的 HAL 服务

**文件**: `device/khadas/common/device.mk:311-312`

```makefile
android.hardware.fastboot-service.rockchip_recovery
android.hardware.boot-service.default_recovery
```

---

## 6. 设备特定配置（Khadas/Rockchip）

### 6.1 BoardConfig 配置

**文件**: `device/khadas/common/BoardConfig.mk:172-189`

```makefile
TARGET_ROCHCHIP_RECOVERY ?= true
BOARD_HAS_FLIPPED_SCREEN ?= false
RECOVERY_AUTO_USB_UPDATE ?= false
TARGET_RECOVERY_PIXEL_FORMAT := "RGBX_8888"
TARGET_ROCKCHIP_PCBATEST ?= true
TARGET_USES_MKE2FS ?= true
RECOVERY_BOARD_ID ?= false
```

### 6.2 Recovery 分区大小

**文件**: `device/khadas/common/build/rockchip/Partitions.mk:54,74`

```makefile
# 从 parameter.txt 解析
BOARD_RECOVERYIMAGE_PARTITION_SIZE := $(shell python device/khadas/common/get_partition_size.py \
    $(TARGET_DEVICE_DIR)/parameter.txt recovery)
# 默认值
BOARD_RECOVERYIMAGE_PARTITION_SIZE ?= 100663296   # 96MB
```

### 6.3 Recovery Boot Header 配置

**文件**: `device/khadas/common/modules/make_boot.mk:55-71`

```makefile
# Recovery 始终使用 header v2
BOARD_RECOVERY_MKBOOTIMG_ARGS ?= --second $(TARGET_PREBUILT_RESOURCE) \
    --header_version 2 \
    --cmdline "$(BOARD_KERNEL_CMDLINE) $(ROCKCHIP_ANDROID_BOOT_CMDLINE)"

# AVB 启用时使用 full recovery image
ifeq ($(BOARD_AVB_ENABLE), true)
BOARD_USES_FULL_RECOVERY_IMAGE := true
endif

# 包含 DTBO 和 DTB
BOARD_INCLUDE_RECOVERY_DTBO ?= true
BOARD_INCLUDE_DTB_IN_BOOTIMG ?= true
```

### 6.4 Recovery FSTAB 生成

**文件**: `device/khadas/common/build/rockchip/RebuildFstab.mk:112`

```makefile
TARGET_RECOVERY_FSTAB := $(intermediates)/fstab.$(TARGET_BOARD_HARDWARE)
```

非 A/B 模式：
```makefile
fstab_recovery := "/dev/block/by-name/recovery /recovery emmc defaults defaults"
```

A/B 模式：
```makefile
fstab_recovery := none
```

### 6.5 GKI 模式 Recovery 配置

**文件**: `device/khadas/common/modules/gki_common.mk:47-54`

```makefile
ifeq ($(BOARD_USES_AB_IMAGE),true)
  # A/B + GKI: recovery 资源移入 vendor_boot，recovery.img 不含 kernel
  BOARD_EXCLUDE_KERNEL_FROM_RECOVERY_IMAGE := true
  BOARD_MOVE_RECOVERY_RESOURCES_TO_VENDOR_BOOT := true
else
  # 非 A/B + GKI: 构建独立 recovery.img
  PRODUCT_BUILD_RECOVERY_IMAGE := true
  BOARD_EXCLUDE_KERNEL_FROM_RECOVERY_IMAGE :=
endif
```

### 6.6 GKI Recovery 内核模块

**文件**: `mkcombinedroot/res/recovery_gki.mk`

```makefile
BOARD_RECOVERY_KERNEL_MODULES_LOAD := $(strip $(shell cat $(KERNEL_GKI_DIR)/res/vendor_ramdisk_modules.load))
BOARD_RECOVERY_KERNEL_MODULES := $(addprefix $(KERNEL_DRIVERS_PATH)/, \
    $(notdir $(BOARD_RECOVERY_KERNEL_MODULES_LOAD)))
```

从 `mkcombinedroot/res/vendor_ramdisk_modules.load`（206 个 KO 模块）读取 recovery 需要加载的内核模块列表。

### 6.7 A/B 模式 Recovery 配置

**文件**: `device/khadas/common/BoardConfig_AB.mk:17-27`

```makefile
AB_OTA_UPDATER := true
TARGET_NO_RECOVERY := true
BOARD_USES_RECOVERY_AS_BOOT := true
# GKI 模式下清空（recovery 移入 vendor_boot）
ifeq ($(BOARD_BUILD_GKI),true)
BOARD_USES_RECOVERY_AS_BOOT :=
endif
```

### 6.8 AVB Recovery 签名配置

**文件**: `device/khadas/common/modules/avb.mk:58-96`

```makefile
BOARD_AVB_RECOVERY_ADD_HASH_FOOTER_ARGS := --public_key_metadata $(BOARD_AVB_METADATA_BIN_PATH)
BOARD_AVB_RECOVERY_KEY_PATH := ...
BOARD_AVB_RECOVERY_ALGORITHM := ...
BOARD_AVB_RECOVERY_ROLLBACK_INDEX := ...
BOARD_AVB_RECOVERY_ROLLBACK_INDEX_LOCATION := ...
```

---

## 7. 工具链说明

| 工具 | 源码位置 | 作用 |
|------|----------|------|
| `mkbootfs` | `system/core/mkbootfs/mkbootfs.c` | 将目录树打包为 cpio 格式（生成 ramdisk-recovery.img） |
| `mkbootimg` | `system/core/mkbootimg/` | 将 kernel + ramdisk + 其他组件打包为 boot/recovery 镜像 |
| `avbtool` | `external/avb/avbtool.py` | AVB 签名工具 |
| `imgdiff` | `build/make/tools/releasetools/imgdiff.py` | 生成 boot-recovery 差分补丁（imgdiff 格式） |
| `bsdiff` | `external/bsdiff/` | 生成 boot-recovery 差分补丁（bsdiff 格式，用于含 DTBO 的场景） |
| `make_recovery_patch` | `build/make/tools/releasetools/make_recovery_patch.py` | 生成 install-recovery.sh 和 recovery-from-boot.p |
| `zopflipng` | `external/zopfli/` | PNG 优化压缩（用于 recovery 文本图片） |
| `RecoveryImageGenerator.jar` | `bootable/recovery/tools/recovery_l10n/` | 生成 recovery 背景文本图片 |
| `repack_bootimg` | `mkcombinedroot/bin/repack_bootimg` | GKI 模式下重新打包 vendor_boot.img |
| `mkcombinedroot/bin/mkbootfs` | `mkcombinedroot/bin/mkbootfs` | GKI 模式下的 mkbootfs 工具 |

---

## 8. 完整构建流程图

```
                        ┌─────────────────────────────────────┐
                        │     board_config.mk (行 494-510)    │
                        │   决定 BUILDING_RECOVERY_IMAGE      │
                        └──────────────┬──────────────────────┘
                                       │
                                       ▼
                        ┌─────────────────────────────────────┐
                        │   Makefile (行 187-200)             │
                        │   决定 INSTALLED_RECOVERYIMAGE_TARGET│
                        │   = $(PRODUCT_OUT)/recovery.img     │
                        └──────────────┬──────────────────────┘
                                       │
                                       ▼
              ┌────────────────────────────────────────────────────┐
              │  Recovery Root 目录准备 (Makefile:2468-2503)       │
              │                                                    │
              │  1. 创建 recovery 输出目录                          │
              │  2. rsync 复制基础 root → recovery root             │
              │  3. 创建 init 符号链接 → /system/bin/init           │
              │  4. 清理非 recovery 的 init*.rc                     │
              │  5. 复制 recovery UI 资源 (图标/字体/文本图片)       │
              │  6. 复制设备私有资源 (TARGET_PRIVATE_RES_DIRS)      │
              │  7. 复制 recovery.fstab                             │
              │  8. 复制 recovery.wipe (如果有)                     │
              │  9. 创建 default.prop 符号链接                       │
              │ 10. 执行 BOARD_RECOVERY_IMAGE_PREPARE              │
              │ 11. touch 时间戳文件                                 │
              │                                                    │
              │  依赖:                                             │
              │  - 基础 ramdisk (INTERNAL_ROOT_FILES)              │
              │  - recovery 模块 (INTERNAL_RECOVERYIMAGE_FILES)    │
              │  - recovery SELinux 策略                            │
              │  - recovery build prop                              │
              │  - recovery 资源 (recovery_resource_deps)           │
              │  - recovery fstab                                   │
              └────────────────────┬───────────────────────────────┘
                                   │
                                   ▼
              ┌────────────────────────────────────────────────────┐
              │  Recovery Ramdisk 生成 (Makefile:2505-2506)        │
              │                                                    │
              │  mkbootfs -d $(TARGET_OUT) $(TARGET_RECOVERY_ROOT) │
              │    | $(COMPRESSION_COMMAND) > ramdisk-recovery.img │
              │                                                    │
              │  输出: $(PRODUCT_OUT)/ramdisk-recovery.img          │
              └────────────────────┬───────────────────────────────┘
                                   │
                                   ▼
              ┌────────────────────────────────────────────────────┐
              │  Recovery Image 打包 (Makefile:2510-2564)          │
              │                                                    │
              │  mkbootimg                                         │
              │    --kernel     $(recovery_kernel)                 │
              │    --ramdisk    $(recovery_ramdisk)                │
              │    --second     $(TARGET_PREBUILT_RESOURCE)  [RK]  │
              │    --header_version 2                        [RK]  │
              │    --cmdline    "..."                        [RK]  │
              │    --recovery_dtbo  $(BOARD_PREBUILT_DTBOIMAGE)    │
              │    --dtb        $(INSTALLED_DTBIMAGE_TARGET)       │
              │    --output     $(PRODUCT_OUT)/recovery.img        │
              │                                                    │
              │  [RK] = Khadas/Rockchip 特定参数                    │
              └────────────────────┬───────────────────────────────┘
                                   │
                                   ▼
              ┌────────────────────────────────────────────────────┐
              │  AVB 签名 (如果 BOARD_AVB_ENABLE=true)              │
              │                                                    │
              │  avbtool add_hash_footer                           │
              │    --image      $(PRODUCT_OUT)/recovery.img        │
              │    --partition_name recovery                       │
              │    --partition_size $(BOARD_RECOVERYIMAGE_PARTITION_SIZE)│
              │    $(INTERNAL_AVB_RECOVERY_SIGNING_ARGS)           │
              │    $(BOARD_AVB_RECOVERY_ADD_HASH_FOOTER_ARGS)      │
              └────────────────────┬───────────────────────────────┘
                                   │
                                   ▼
              ┌────────────────────────────────────────────────────┐
              │  大小校验                                          │
              │  assert-max-image-size recovery.img                │
              │    vs BOARD_RECOVERYIMAGE_PARTITION_SIZE            │
              └────────────────────┬───────────────────────────────┘
                                   │
                                   ▼
              ┌────────────────────────────────────────────────────┐
              │  Recovery Patch (非 A/B, 非 FULL_RECOVERY_IMAGE)   │
              │  (Makefile:3250-3277)                              │
              │                                                    │
              │  如果 BOARD_USES_FULL_RECOVERY_IMAGE=true:          │
              │    RECOVERY_FROM_BOOT_PATCH = recovery.img (完整)  │
              │  否则:                                             │
              │    bsdiff/imgdiff boot.img recovery.img → .p       │
              │    + recovery-resource.dat (如果需要)               │
              └────────────────────┬───────────────────────────────┘
                                   │
                                   ▼
              ┌────────────────────────────────────────────────────┐
              │  Target-files 打包 (Makefile:5870-5915)            │
              │                                                    │
              │  打包到 $(zip_root)/RECOVERY/:                      │
              │    RAMDISK/     — recovery root 目录                │
              │    kernel        — recovery kernel                  │
              │    second        — resource.img (Khadas)            │
              │    recovery_dtbo — DTBO 镜像                        │
              │    dtb           — DTB 镜像                         │
              │    cmdline       — 内核命令行                       │
              │    base          — 内核基址                         │
              │    pagesize      — 页大小                           │
              └────────────────────┬───────────────────────────────┘
                                   │
                                   ▼
              ┌────────────────────────────────────────────────────┐
              │  install-recovery.sh 生成 (非 A/B OTA)              │
              │  (Makefile:6160-6164)                              │
              │                                                    │
              │  make_recovery_patch.py → install-recovery.sh      │
              │  + recovery-from-boot.p (或完整 recovery.img)      │
              └────────────────────────────────────────────────────┘
```

---

## 9. 附录：关键变量速查表

### 构建决策变量

| 变量 | 来源 | 说明 |
|------|------|------|
| `BUILDING_RECOVERY_IMAGE` | `board_config.mk:495` | 是否构建 recovery 相关内容 |
| `INSTALLED_RECOVERYIMAGE_TARGET` | `Makefile:197` | recovery.img 输出路径（空表示不构建独立镜像） |
| `BOARD_USES_RECOVERY_AS_BOOT` | `BoardConfig_AB.mk:24` | recovery 合入 boot.img |
| `BOARD_MOVE_RECOVERY_RESOURCES_TO_VENDOR_BOOT` | `gki_common.mk:50` | recovery 合入 vendor_boot.img |
| `BOARD_EXCLUDE_KERNEL_FROM_RECOVERY_IMAGE` | `gki_common.mk:48` | recovery.img 不含 kernel |
| `BOARD_USES_FULL_RECOVERY_IMAGE` | `make_boot.mk:65` | system 分区存完整 recovery.img（不做 patch） |
| `TARGET_NO_RECOVERY` | `BoardConfig_AB.mk:18` | 完全不构建 recovery |
| `PRODUCT_BUILD_RECOVERY_IMAGE` | `gki_common.mk:52` | 强制构建 recovery |

### Recovery 镜像组成变量

| 变量 | 来源 | 说明 |
|------|------|------|
| `recovery_kernel` | `Makefile:2187` | `$(firstword $(INSTALLED_KERNEL_TARGET))` |
| `recovery_ramdisk` | `Makefile:2188` | `$(PRODUCT_OUT)/ramdisk-recovery.img` |
| `recovery_resources_common` | `Makefile:2189` | `bootable/recovery/res[-density]` |
| `recovery_font` | `Makefile:2217/2219` | `18x32.png` 或 `12x22.png` |
| `recovery_fstab` | `Makefile:2329` | `$(TARGET_RECOVERY_FSTAB)` |
| `recovery_wipe` | `Makefile:2337` | `$(TARGET_RECOVERY_WIPE)` |
| `recovery_density` | `Makefile:2194` | 屏幕密度桶 |
| `recovery_sepolicy` | `Makefile:2164` | recovery SELinux 策略文件列表 |
| `TARGET_RECOVERY_ROOT_OUT` | `envsetup.mk` | `$(PRODUCT_OUT)/recovery/root` |
| `TARGET_RECOVERY_OUT` | `envsetup.mk` | `$(PRODUCT_OUT)/recovery` |

### mkbootimg 参数变量

| 变量 | 来源 | 说明 |
|------|------|------|
| `INTERNAL_RECOVERYIMAGE_ARGS` | `Makefile:2434` | `--ramdisk`, `--cmdline`, `--base`, `--pagesize`, `--recovery_dtbo`, `--dtb` 等 |
| `BOARD_RECOVERY_MKBOOTIMG_ARGS` | `make_boot.mk:61` | `--second $(TARGET_PREBUILT_RESOURCE) --header_version 2 --cmdline "..."` |
| `BOARD_INCLUDE_RECOVERY_DTBO` | `make_boot.mk:70` | `true`（Khadas 默认） |
| `BOARD_INCLUDE_DTB_IN_BOOTIMG` | `make_boot.mk:71` | `true`（Khadas 默认） |
| `BOARD_RECOVERYIMAGE_PARTITION_SIZE` | `Partitions.mk:54` | 从 parameter.txt 解析，默认 96MB |

### Recovery 模块变量

| 变量 | 来源 | 说明 |
|------|------|------|
| `RECOVERY_API_VERSION` | `Android.mk:18` | `3` |
| `RECOVERY_FSTAB_VERSION` | `Android.mk:19` | `2` |
| `TARGET_RECOVERY_UI_LIB` | `Android.mk:24` | `librecovery_ui_default` 或设备自定义 |
| `TARGET_RECOVERY_PIXEL_FORMAT` | `BoardConfig.mk:183` | `"RGBX_8888"` |
| `TARGET_RECOVERY_FSTAB` | `RebuildFstab.mk:112` | `$(intermediates)/fstab.$(TARGET_BOARD_HARDWARE)` |

---

> **文档生成时间**: 2026-09-12
> **代码版本**: Khadas Android 14 (Rockchip RK3588)
> **分析范围**: `build/make/core/`, `bootable/recovery/`, `device/khadas/`, `mkcombinedroot/`, `build/make/tools/releasetools/`
