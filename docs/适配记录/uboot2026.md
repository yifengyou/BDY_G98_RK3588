# uboot v2026适配

## u-boot-rockchip.bin是什么，怎么生成的？

u-boot-rockchip.bin 是一个面向 Rockchip 平台的完整启动固件容器（All-in-One Binary）。它包含了芯片从 BootROM 启动到加载 Linux 内核所需的所有前置固件，具体包括：

* idbloader.img：包含 DDR 初始化程序（TPL/External TPL）和二级引导程序（SPL）。
* u-boot.itb：U-Boot 主程序（U-Boot Proper）、ARM Trusted Firmware (ATF/BL31)、TEE 安全固件以及 U-Boot 设备树（DTB）打包而成的 FIT 镜像。

u-boot-rockchip.bin 的生成不再依赖传统的 Makefile 脚本拼接，而是完全交由 U-Boot 内置的 Binman 镜像打包工具来实现。Binman 通过解析设备树文件 arch/arm/dts/rockchip-u-boot.dtsi 中的节点描述，自动完成多组件的格式化、偏移量对齐和拼接工作。

为了确保 BootROM 能够正确寻址，U-Boot 主镜像会被放置在 CONFIG_SPL_PAD_TO 指定的偏移量处（通常与 SPL 的最大限制大小对齐）。simple-bin 节点中定义的 pad-byte = <0xff> 确保了 IDBLoader 与主镜像之间的空隙被 0xff 填充，这完全符合 NAND Flash / NOR Flash 擦除后的默认物理状态。

u-boot-rockchip-spi.bin：专为 SPI Flash 启动生成，其主镜像偏移量由 CONFIG_SYS_SPI_U_BOOT_OFFS 决定

```shell
    # grep CONFIG_SYS_SPI_U_BOOT_OFFS .config
    CONFIG_SYS_SPI_U_BOOT_OFFS=0x60000
    
    # grep CONFIG_SPL_PAD_TO .config
    CONFIG_SPL_PAD_TO=0x7f8000
    
    # cat  arch/arm/dts/rockchip-u-boot.dtsi   
    // SPDX-License-Identifier: GPL-2.0+
    /*
     * Copyright (C) 2019 Jagan Teki <jagan@amarulasolutions.com>
     */
    
    #include <config.h>
    
    #ifdef CONFIG_ARM64
    #define FIT_ARCH		"arm64"
    #else
    #define FIT_ARCH		"arm"
    #endif
    
    #if defined(CONFIG_SPL_GZIP)
    #define FIT_UBOOT_COMP		"gzip"
    #elif defined(CONFIG_SPL_LZMA)
    #define FIT_UBOOT_COMP		"lzma"
    #else
    #define FIT_UBOOT_COMP		"none"
    #endif
    
    /*
     * SHA256 should be enabled in SPL when signature validation is involved,
     * CRC32 should only be used for basic checksum validation of FIT images.
     */
    #if defined(CONFIG_SPL_FIT_SIGNATURE)
    #if defined(CONFIG_SPL_SHA256)
    #define FIT_HASH_ALGO		"sha256"
    #elif defined(CONFIG_SPL_CRC32)
    #define FIT_HASH_ALGO		"crc32"
    #endif
    #endif
    
    #if defined(CONFIG_SPL_FIT) && (defined(CONFIG_ARM64) || defined(CONFIG_SPL_OPTEE_IMAGE))
    #define HAS_FIT
    #endif
    
    / {
        binman: binman {
            multiple-images;
        };
    };
    
    #ifdef CONFIG_SPL
    &binman {
    #ifdef HAS_FIT
        fit_template: template-1 {
            type = "fit";
    #ifdef CONFIG_ARM64
            description = "FIT image for U-Boot with bl31 (TF-A)";
    #else
            description = "FIT image with OP-TEE";
    #endif
            #address-cells = <1>;
            fit,fdt-list = "of-list";
            fit,external-offset = <CONFIG_FIT_EXTERNAL_OFFSET>;
            fit,align = <512>;
            images {
                u-boot {
                    description = "U-Boot";
                    type = "standalone";
                    os = "u-boot";
                    arch = FIT_ARCH;
                    compression = FIT_UBOOT_COMP;
                    load = <CONFIG_TEXT_BASE>;
                    entry = <CONFIG_TEXT_BASE>;
                    u-boot-nodtb {
                        compress = FIT_UBOOT_COMP;
                    };
    #ifdef FIT_HASH_ALGO
                    hash {
                        algo = FIT_HASH_ALGO;
                    };
    #endif
                };
    
    #ifdef CONFIG_ARM64
                @atf-SEQ {
                    fit,operation = "split-elf";
                    description = "ARM Trusted Firmware";
                    type = "firmware";
                    arch = FIT_ARCH;
                    os = "arm-trusted-firmware";
                    compression = "none";
                    fit,load;
                    fit,entry;
                    fit,data;
    
                    atf-bl31 {
                    };
    #ifdef FIT_HASH_ALGO
                    hash {
                        algo = FIT_HASH_ALGO;
                    };
    #endif
                };
                @tee-SEQ {
                    fit,operation = "split-elf";
                    description = "TEE";
                    type = "tee";
                    arch = FIT_ARCH;
                    os = "tee";
                    compression = "none";
                    fit,load;
                    fit,entry;
                    fit,data;
    
                    tee-os {
                        optional;
                    };
    #ifdef FIT_HASH_ALGO
                    hash {
                        algo = FIT_HASH_ALGO;
                    };
    #endif
                };
    #else /* !CONFIG_ARM64 */
                op-tee {
                    description = "OP-TEE";
                    type = "tee";
                    arch = FIT_ARCH;
                    os = "tee";
                    compression = "none";
                    load = <(CFG_SYS_SDRAM_BASE + 0x8400000)>;
                    entry = <(CFG_SYS_SDRAM_BASE + 0x8400000)>;
    
                    tee-os {
                    };
    #ifdef FIT_HASH_ALGO
                    hash {
                        algo = FIT_HASH_ALGO;
                    };
    #endif
                };
    #endif /* CONFIG_ARM64 */
    
                @fdt-SEQ {
                    description = "fdt-NAME";
                    compression = "none";
                    type = "flat_dt";
    #ifdef FIT_HASH_ALGO
                    hash {
                        algo = FIT_HASH_ALGO;
                    };
    #endif
                };
            };
    
            configurations {
                default = "@config-DEFAULT-SEQ";
                @config-SEQ {
                    description = "NAME.dtb";
                    fdt = "fdt-SEQ";
    #ifdef CONFIG_ARM64
                    fit,firmware = "atf-1", "u-boot";
    #else
                    fit,firmware = "op-tee", "u-boot";
    #endif
                    fit,loadables;
                    fit,compatible;
                };
            };
        };
    #endif /* HAS_FIT */
    
        simple-bin {
            filename = "u-boot-rockchip.bin";
            pad-byte = <0xff>;
    
            mkimage {
                filename = "idbloader.img";
                args = "-n", CONFIG_SYS_SOC, "-T", "rksd";
                multiple-data-files;
    
    #ifdef CONFIG_ROCKCHIP_EXTERNAL_TPL
                rockchip-tpl {
                };
    #elif defined(CONFIG_TPL)
                u-boot-tpl {
                };
    #endif
                u-boot-spl {
                };
            };
    
    #ifdef HAS_FIT
            fit {
                filename = "u-boot.itb";
                insert-template = <&fit_template>;
    #else
            u-boot-img {
    #endif
                offset = <CONFIG_SPL_PAD_TO>;
            };
        };
    
    #ifdef CONFIG_ROCKCHIP_SPI_IMAGE
        simple-bin-spi {
            filename = "u-boot-rockchip-spi.bin";
            pad-byte = <0xff>;
    
            mkimage {
                filename = "idbloader-spi.img";
                args = "-n", CONFIG_SYS_SOC, "-T", "rkspi";
                multiple-data-files;
    
    #ifdef CONFIG_ROCKCHIP_EXTERNAL_TPL
                rockchip-tpl {
                };
    #elif defined(CONFIG_TPL)
                u-boot-tpl {
                };
    #endif
                u-boot-spl {
                };
            };
    
    #ifdef HAS_FIT
            fit {
                insert-template = <&fit_template>;
    #else
            u-boot-img {
    #endif
                /* Sync with u-boot,spl-payload-offset if present */
                offset = <CONFIG_SYS_SPI_U_BOOT_OFFS>;
            };
        };
    #endif /* CONFIG_ROCKCHIP_SPI_IMAGE */
    
    #ifdef CONFIG_ROCKCHIP_MASKROM_IMAGE
        simple-bin-usb471 {
            filename = "u-boot-rockchip-usb471.bin";
    
    #ifdef CONFIG_ROCKCHIP_EXTERNAL_TPL
            rockchip-tpl {
            };
    #elif defined(CONFIG_TPL)
            u-boot-tpl {
                no-write-symbols;
            };
    #endif
        };
    
        simple-bin-usb472 {
            filename = "u-boot-rockchip-usb472.bin";
            pad-byte = <0x00>;
    
            u-boot-spl {
            };
    
            payload {
                type = "section";
                align = <CONFIG_SYS_CACHELINE_SIZE>;
    #ifdef HAS_FIT
            fit {
                insert-template = <&fit_template>;
    #else
            u-boot-img {
    #endif
            };
            };
        };
    #endif /* CONFIG_ROCKCHIP_MASKROM_IMAGE */
    };
    #endif /* CONFIG_SPL */
```

