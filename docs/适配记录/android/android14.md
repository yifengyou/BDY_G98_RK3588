# android14适配






```text
=> part list scsi 0

Partition Map for SCSI device 0  --   Partition Type: EFI

Part	Start LBA	End LBA		Name
Attributes
Type GUID
Partition GUID
1	0x00002000	0x00003fff	"security"
attrs:	0x0000000000000000
type:	3e370000-0000-4a39-8000-5332000032ba
guid:	aa370000-0000-4e79-8000-70df00007373
2	0x00004000	0x00005fff	"uboot"
attrs:	0x0000000000000000
type:	b06d0000-0000-476a-8000-5f1e0000554e
guid:	cf5f0000-0000-406b-8000-718b000005f8
3	0x00006000	0x00007fff	"trust"
attrs:	0x0000000000000000
type:	c14b0000-0000-4757-8000-750300006f5f
guid:	86350000-0000-4812-8000-4ba3000055af
4	0x00008000	0x00009fff	"misc"
attrs:	0x0000000000000000
type:	587b0000-0000-421d-8000-6fc800005a55
guid:	b75f0000-0000-4024-8000-100f000017fe
5	0x0000a000	0x0000bfff	"dtbo"
attrs:	0x0000000000000000
type:	5d1d0000-0000-400e-8000-195500002598
guid:	4a760000-0000-4f0e-8000-46b70000334f
6	0x0000c000	0x0000c7ff	"vbmeta"
attrs:	0x0000000000000000
type:	b9430000-0000-4930-8000-329200001290
guid:	27060000-0000-4c6e-8000-678300004609
7	0x0000c800	0x0002c7ff	"boot"
attrs:	0x0000000000000000
type:	52760000-0000-463c-8000-6e67000018a6
guid:	36110000-0000-4119-8000-615b00002194
8	0x0002c800	0x0006c7ff	"recovery"
attrs:	0x0000000000000000
type:	112f0000-0000-4d20-8000-76bc00006140
guid:	600c0000-0000-4517-8000-162700004858
9	0x0006c800	0x0012c7ff	"backup"
attrs:	0x0000000000000000
type:	de5d0000-0000-477e-8000-667900004bc8
guid:	8b5f0000-0000-4021-8000-5ccf000073bd
10	0x0012c800	0x001ec7ff	"cache"
attrs:	0x0000000000000000
type:	a2650000-0000-4d2a-8000-4d8600006aa4
guid:	a0680000-0000-4a29-8000-7e3b00000f2b
11	0x001ec800	0x0020c7ff	"metadata"
attrs:	0x0000000000000000
type:	431c0000-0000-452e-8000-31cb0000043e
guid:	88780000-0000-4b51-8000-385300003d0a
12	0x0020c800	0x0020cbff	"frp"
attrs:	0x0000000000000000
type:	ab4e0000-0000-4948-8000-0730000013fc
guid:	29540000-0000-4b72-8000-3e00000051c2
13	0x0020cc00	0x0020d3ff	"baseparameter"
attrs:	0x0000000000000000
type:	c03a0000-0000-406a-8000-3e9e00004648
guid:	6d350000-0000-4316-8000-3628000054bb
14	0x0020d400	0x008213ff	"super"
attrs:	0x0000000000000000
type:	6c120000-0000-4138-8000-34fb00000089
guid:	3b470000-0000-497d-8000-38b40000025d
15	0x00821400	0x0ee7c26e	"userdata"
attrs:	0x0000000000000000
type:	967f0000-0000-460d-8000-3e3100005626
guid:	7a2d0000-0000-461b-8000-548d00004b11
=>




setenv avb_mode disabled

scsi read ${scriptaddr}  0xc800 0x20000
iminfo ${scriptaddr}
bootm ${scriptaddr}:kernel - ${scriptaddr}:fdt
bootm ${scriptaddr}#conf







```shell
=> part list scsi 0

Partition Map for SCSI device 0  --   Partition Type: EFI

Part	Start LBA	End LBA		Name
Attributes
Type GUID
Partition GUID
1	0x00002000	0x00003fff	"security"
attrs:	0x0000000000000000
type:	3e370000-0000-4a39-8000-5332000032ba
guid:	aa370000-0000-4e79-8000-70df00007373
2	0x00004000	0x00005fff	"uboot"
attrs:	0x0000000000000000
type:	b06d0000-0000-476a-8000-5f1e0000554e
guid:	cf5f0000-0000-406b-8000-718b000005f8
3	0x00006000	0x00007fff	"trust"
attrs:	0x0000000000000000
type:	c14b0000-0000-4757-8000-750300006f5f
guid:	86350000-0000-4812-8000-4ba3000055af
4	0x00008000	0x00009fff	"misc"
attrs:	0x0000000000000000
type:	587b0000-0000-421d-8000-6fc800005a55
guid:	b75f0000-0000-4024-8000-100f000017fe
5	0x0000a000	0x0000bfff	"dtbo"
attrs:	0x0000000000000000
type:	5d1d0000-0000-400e-8000-195500002598
guid:	4a760000-0000-4f0e-8000-46b70000334f
6	0x0000c000	0x0000c7ff	"vbmeta"
attrs:	0x0000000000000000
type:	b9430000-0000-4930-8000-329200001290
guid:	27060000-0000-4c6e-8000-678300004609
7	0x0000c800	0x0002c7ff	"boot"
attrs:	0x0000000000000000
type:	52760000-0000-463c-8000-6e67000018a6
guid:	36110000-0000-4119-8000-615b00002194
8	0x0002c800	0x0006c7ff	"recovery"
attrs:	0x0000000000000000
type:	112f0000-0000-4d20-8000-76bc00006140
guid:	600c0000-0000-4517-8000-162700004858
9	0x0006c800	0x0012c7ff	"backup"
attrs:	0x0000000000000000
type:	de5d0000-0000-477e-8000-667900004bc8
guid:	8b5f0000-0000-4021-8000-5ccf000073bd
10	0x0012c800	0x001ec7ff	"cache"
attrs:	0x0000000000000000
type:	a2650000-0000-4d2a-8000-4d8600006aa4
guid:	a0680000-0000-4a29-8000-7e3b00000f2b
11	0x001ec800	0x0020c7ff	"metadata"
attrs:	0x0000000000000000
type:	431c0000-0000-452e-8000-31cb0000043e
guid:	88780000-0000-4b51-8000-385300003d0a
12	0x0020c800	0x0020cbff	"frp"
attrs:	0x0000000000000000
type:	ab4e0000-0000-4948-8000-0730000013fc
guid:	29540000-0000-4b72-8000-3e00000051c2
13	0x0020cc00	0x0020d3ff	"baseparameter"
attrs:	0x0000000000000000
type:	c03a0000-0000-406a-8000-3e9e00004648
guid:	6d350000-0000-4316-8000-3628000054bb
14	0x0020d400	0x008213ff	"super"
attrs:	0x0000000000000000
type:	6c120000-0000-4138-8000-34fb00000089
guid:	3b470000-0000-497d-8000-38b40000025d
15	0x00821400	0x0ee7c26e	"userdata"
attrs:	0x0000000000000000
type:	967f0000-0000-460d-8000-3e3100005626
guid:	7a2d0000-0000-461b-8000-548d00004b11
=> scsi read ${scriptaddr}  0xc800 0x20000

scsi read: device 0 block # 51200, count 131072 ... 131072 blocks read: OK
=> iminfo ${scriptaddr}

## Checking Image at 00500000 ...
Android image found
kernel size:      241c008
kernel address:   10008000
ramdisk size:     163fe4
ramdisk address: 11000000
second size:      156000
second address:   10f00000
tags address:     10000100
page size:        800
header_version:   2
os_version:       1c000191 (ver: 0.14.0, level: 2025.1)
name:             
cmdline:          console=ttyFIQ0 firmware_class.path=/vendor/etc/firmware init=/init rootwait ro loop.max_part=7 printk.devkmsg=on kvm-arm.mode=none androidboot.console=ttyFIQ0 androidboot.wificountrycode=CN androidboot.hardware=rk30board androidboot.boot_devices=fe2e0000.mmc androidboot.selinux=permissive
recovery dtbo size:    0
recovery dtbo offset:  0
header size:           67c
dtb size:              4602c
dtb addr:              11f00000
=> 
=> bootm ${scriptaddr}
BOOTM: transferring to board Android
DTB: rk-kernel.dtb
HASH(c): OK
Sysmem Error: "KERNEL" (0x003ff800 - 0x0281c200) alloc is overlap with existence "ANDROID" (0x00500000 - 0x02c1d804)

sysmem_dump_all:
    --------------------------------------------------------------------
    memory.rgn[0].addr     = 0x00200000 - 0x08400000 (size: 0x08200000)
    memory.rgn[1].addr     = 0x09400000 - 0xf0000000 (size: 0xe6c00000)

    memory.total	   = 0xeee00000 (3822 MiB. 0 KiB)
    --------------------------------------------------------------------
    allocated.rgn[0].name  = "STACK"  
		    .addr  = 0xeb5f6720 - 0xeb7f6720 (size: 0x00200000)
    allocated.rgn[1].name  = "ANDROID"  
		    .addr  = 0x00500000 - 0x02c1d804 (size: 0x0271d804)
    allocated.rgn[2].name  = "FDT"  
		    .addr  = 0x08300000 - 0x08349204 (size: 0x00049204)


    framework malloc_r     =  32 MiB
    framework malloc_f     = 512 KiB

    allocated.total	   = 0x02966a08 (41 MiB. 410 KiB)
    --------------------------------------------------------------------
    LMB.allocated[0].addr  = 0x00500000 - 0x02c1d804 (size: 0x0271d804)
    LMB.allocated[1].addr  = 0x08300000 - 0x08349204 (size: 0x00049204)
    LMB.allocated[2].addr  = 0xeb5f6720 - 0xeb7f6720 (size: 0x00200000)

    reserved.core.total	   = 0x02966a08 (41 MiB. 410 KiB)
    --------------------------------------------------------------------

board do bootm failed, ret=-1
bootm - boot application image from memory

Usage:
bootm [addr [arg ...]]
    - boot application image stored in memory
	passing arguments 'arg ...'; when booting a Linux kernel,
	'arg' can be the address of an initrd image
	When booting a Linux kernel which requires a flat device-tree
	a third argument is required which is the address of the
	device-tree blob. To boot that kernel without an initrd image,
	use a '-' for the second argument. If you do not pass a third
	a bd_info struct will be passed instead
	
For the new multi component uImage format (FIT) addresses
	must be extended to include component or configuration unit name:
	addr:<subimg_uname> - direct component image specification
	addr#<conf_uname>   - configuration specification
	Use iminfo command to get the list of existing component
	images and configurations.

Sub-commands to do part of the bootm sequence.  The sub-commands must be
issued in the order below (it's ok to not issue all sub-commands):
	start [addr [arg ...]]
	loados  - load OS image
	ramdisk - relocate initrd, set env initrd_start/initrd_end
	fdt     - relocate flat device tree
	cmdline - OS specific command line processing/setup
	bdt     - OS specific bd_t processing
	prep    - OS specific prep before relocation or go
	go      - start OS
=> 

```





```text

=> boot_android scsi 0
ANDROID: reboot reason: "recovery"
Vboot=0, AVB images, AVB verify
No valid android hdr
AVB verify failed
Android boot failed, error -1.
=> scsi read 0x60000000 0xc800 0x10

scsi read: device 0 block # 51200, count 16 ... 16 blocks read: OK
=> md.b 0x60000000 0x40
60000000: 41 4e 44 52 4f 49 44 21 08 c0 41 02 00 80 00 10    ANDROID!..A.....
60000010: e4 3f 16 00 00 00 00 11 00 60 15 00 00 00 f0 10    .?.......`......
60000020: 00 01 00 10 00 08 00 00 02 00 00 00 91 01 00 1c    ................
60000030: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00    ................
=> 

```


## dex_preopt_config.mk:165: error: fopen failed


```text
./resource.img with battery images is ready
/rockchip/android/youyeetoo_YY3588_Android14
[W][2026-09-10T07:32:04+0000][2697576] logParams():267 Process will be UID/EUID=0 in the global user namespace, and will have user root-level access to files
[W][2026-09-10T07:32:04+0000][2697576] logParams():277 Process will be GID/EGID=0 in the global user namespace, and will have group root-level access to files
[W][2026-09-10T07:32:05+0000][2697794] logParams():267 Process will be UID/EUID=0 in the global user namespace, and will have user root-level access to files
[W][2026-09-10T07:32:05+0000][2697794] logParams():277 Process will be GID/EGID=0 in the global user namespace, and will have group root-level access to files
start build android
[W][2026-09-10T07:32:06+0000][2698053] logParams():267 Process will be UID/EUID=0 in the global user namespace, and will have user root-level access to files
[W][2026-09-10T07:32:06+0000][2698053] logParams():277 Process will be GID/EGID=0 in the global user namespace, and will have group root-level access to files
In file included from build/make/core/config.mk:1297:
In file included from build/make/core/soong_config.mk:13:
build/make/core/dex_preopt_config.mk:165: error: fopen failed.
07:32:06 dumpvars failed with: exit status 1

#### failed to build some targets (1 seconds) ####

[W][2026-09-10T07:32:07+0000][2698295] logParams():267 Process will be UID/EUID=0 in the global user namespace, and will have user root-level access to files
[W][2026-09-10T07:32:07+0000][2698295] logParams():277 Process will be GID/EGID=0 in the global user namespace, and will have group root-level access to files
In file included from build/make/core/config.mk:1297:
In file included from build/make/core/soong_config.mk:13:
build/make/core/dex_preopt_config.mk:165: error: fopen failed.
07:32:07 dumpvars failed with: exit status 1

#### failed to build some targets  ####

Build android failed!


```




## 编译失败

```text
    [[deprecated("this polls for 5s, prefer waitForService or checkService")]]
      ^
1 warning generated.
[ 65% 107845/164911] //frameworks/av/media/libmediaplayerservice:libmediaplayerservice clang++ MetadataRetrieverClient.cpp [arm]
FAILED: out/soong/.intermediates/frameworks/av/media/libmediaplayerservice/libmediaplayerservice/android_arm_armv8-a_static_cfi/obj/frameworks/av/media/libmediaplayerservice/MetadataRetrieverClient.o
PWD=/proc/self/cwd prebuilts/clang/host/linux-x86/clang-r487747c/bin/clang++ -c -mthumb -Os -fomit-frame-pointer -DANDROID -DANDROID_12 -fmessage-length=0 -W -Wall -Wno-unused -Winit-self -Wpointer-arith -Wunreachable-code-loop-increment -no-canonical-prefixes -DNDEBUG -UDEBUG -fno-exceptions -Wno-multichar -O2 -g -fdebug-default-version=5 -fno-strict-aliasing -Werror=date-time -Werror=pragma-pack -Werror=pragma-pack-suspicious-include -Werror=string-plus-int -Werror=unreachable-code-loop-increment -Wno-error=deprecated-declarations -D__compiler_offsetof=__builtin_offsetof -faddrsig -fcommon -Werror=int-conversion -Wno-reserved-id-macro -fcolor-diagnostics -Wno-sign-compare -Wno-inconsistent-missing-override -Wno-c99-designator -Wno-gnu-designator -Wno-gnu-folding-constant -Wunguarded-availability -D__ANDROID_UNAVAILABLE_SYMBOLS_ARE_WEAK__ -ffp-contract=off -fdebug-prefix-map=/proc/self/cwd= -ftrivial-auto-var-init=zero -enable-trivial-auto-var-init-zero-knowing-it-will-be-removed-from-clang -Wno-unused-command-line-argument -ffunction-sections -fdata-sections -fno-short-enums -funwind-tables -fstack-protector-strong -Wa,--noexecstack -D_FORTIFY_SOURCE=2 -Wstrict-aliasing=2 -Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Werror=format-security -nostdlibinc -fdebug-info-for-profiling -msoft-float -march=armv8-a -mfloat-abi=softfp -mfpu=neon-fp-armv8  -target armv7a-linux-androideabi10000 -DANDROID_STRICT -fPIC -Wsign-promo -Wimplicit-fallthrough -D_LIBCPP_ENABLE_THREAD_SAFETY_ANNOTATIONS -Wno-gnu-include-next -fvisibility-inlines-hidden  -Iframeworks/av/media/libmediaplayerservice -Iframeworks/av/media/libmediaplayerservice/include -Ivendor/rockchip/hardware/interfaces/rockit/include -Ivendor/rockchip/hardware/interfaces/rockit/include/rt_base -Ivendor/rockchip/hardware/interfaces/rockit/direct/include -Iframeworks/av/media/libstagefright/wifi-display -Iframeworks/av/media/libmediaplayerservice -D__LIBC_API__=10000 -D__LIBM_API__=10000 -D__LIBDL_API__=10000 -Iframeworks/native/headers/media_plugin -Iframeworks/native/headers/media_plugin/media/openmax -Iframeworks/av/media/libstagefright/include -Isystem/core/libcutils/include -Isystem/core/libutils/include -Isystem/libbase/include -Iexternal/fmtlib/include -Isystem/logging/liblog/include -Isystem/core/libprocessgroup/include -Isystem/core/libsystem/include -Iframeworks/av/media/module/foundation/include -Iframeworks/av/media/utils/include -Iframeworks/av/media/libstagefright/rtsp/include -Iframeworks/av/media/libstagefright/webm/include -Iframeworks/av/media/libmediaplayerservice/datasource/include -Iframeworks/av/media/libmediaplayerservice/nuplayer/include -Iframeworks/av/media/libstagefright/timedtext/include -Iframeworks/native/libs/binder/include -Iframeworks/native/libs/binder/ndk/include_cpp -Iout/soong/.intermediates/frameworks/native/libs/binder/libbinder/android_arm_armv8-a_shared/gen/aidl -Iout/soong/.intermediates/frameworks/native/libs/permission/framework-permission-aidl-cpp-source/gen/include -Iexternal/libcxx/include -Iexternal/libcxxabi/include -Isystem/libhidl/base/include -Isystem/libhidl/transport/include -Isystem/libfmq/base -Isystem/libhwbinder/include -Iout/soong/.intermediates/system/libhidl/transport/manager/1.0/android.hidl.manager@1.0_genc++_headers/gen -Iout/soong/.intermediates/system/libhidl/transport/manager/1.1/android.hidl.manager@1.1_genc++_headers/gen -Iout/soong/.intermediates/system/libhidl/transport/manager/1.2/android.hidl.manager@1.2_genc++_headers/gen -Iout/soong/.intermediates/system/libhidl/transport/base/1.0/android.hidl.base@1.0_genc++_headers/gen -Iout/soong/.intermediates/hardware/interfaces/graphics/common/1.0/android.hardware.graphics.common@1.0_genc++_headers/gen -Iout/soong/.intermediates/hardware/interfaces/media/1.0/android.hardware.media@1.0_genc++_headers/gen -Iout/soong/.intermediates/hardware/interfaces/graphics/bufferqueue/1.0/android.hardware.graphics.bufferqueue@1.0_genc++_headers/gen -Iout/soong/.intermediates/hardware/interfaces/graphics/common/1.1/android.hardware.graphics.common@1.1_genc++_headers/gen -Iout/soong/.intermediates/hardware/interfaces/graphics/common/1.2/android.hardware.graphics.common@1.2_genc++_headers/gen -Iout/soong/.intermediates/hardware/interfaces/graphics/bufferqueue/2.0/android.hardware.graphics.bufferqueue@2.0_genc++_headers/gen -Iout/soong/.intermediates/hardware/interfaces/media/bufferpool/2.0/android.hardware.media.bufferpool@2.0_genc++_headers/gen -Iout/soong/.intermediates/hardware/interfaces/media/omx/1.0/android.hardware.media.omx@1.0_genc++_headers/gen -Iout/soong/.intermediates/system/libhidl/transport/safe_union/1.0/android.hidl.safe_union@1.0_genc++_headers/gen -Iout/soong/.intermediates/hardware/interfaces/media/c2/1.0/android.hardware.media.c2@1.0_genc++_headers/gen -Iout/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V2-cpp-source/gen/include -Iout/soong/.intermediates/frameworks/av/av-types-aidl-cpp-source/gen/include -Iframeworks/av/media/libaudioclient/include -Iframeworks/av/media/audioaidlconversion/include -Iframeworks/av/media/liberror/include -Iout/soong/.intermediates/frameworks/av/media/libshmem/shared-file-region-aidl-cpp-source/gen/include -Iout/soong/.intermediates/frameworks/av/media/libaudioclient/audioclient-types-aidl-cpp-source/gen/include -Iframeworks/native/libs/binder/include_activitymanager -Iout/soong/.intermediates/frameworks/native/libs/binder/libactivitymanager_aidl/android_arm_armv8-a_static/gen/aidl -Iframeworks/av/media/libaudiofoundation/include -Isystem/media/audio/include -Iframeworks/av/media/libmediahelper/include -Iout/soong/.intermediates/frameworks/av/media/libaudioclient/effect-aidl-cpp-source/gen/include -Iout/soong/.intermediates/frameworks/av/media/libaudioclient/audioflinger-aidl-cpp-source/gen/include -Iout/soong/.intermediates/frameworks/av/media/libaudioclient/audiopolicy-types-aidl-cpp-source/gen/include -Iout/soong/.intermediates/frameworks/av/media/libaudioclient/capture_state_listener-aidl-cpp-source/gen/include -Iout/soong/.intermediates/frameworks/av/media/libaudioclient/spatializer-aidl-cpp-source/gen/include -Iout/soong/.intermediates/frameworks/av/media/libaudioclient/audiopolicy-aidl-cpp-source/gen/include -Iframeworks/av/media/libmediametrics/include -Iout/soong/.intermediates/frameworks/av/media/libaudioclient/libaudioclient/android_arm_armv8-a_static_cfi/gen/aidl -Iframeworks/av/camera/include -Iframeworks/av/camera/include/camera -Iframeworks/native/libs/gui/include -Isystem/libhidl/transport/token/1.0/utils/include -Ilibnativehelper/include_jni -Iout/soong/.intermediates/frameworks/native/libs/gui/libgui_aidl_static/android_arm_armv8-a_static/gen/aidl -Iout/soong/.intermediates/frameworks/native/libs/gui/sysprop/libLibGuiProperties/android_arm_armv8-a_static_afdo-libgui_lto-thin/gen/sysprop/include -Iout/soong/.intermediates/frameworks/native/libs/gui/libgui_aidl_static/android_arm_armv8-a_static_afdo-libgui_lto-thin/gen/aidl -Iout/soong/.intermediates/frameworks/native/libs/gui/libgui_window_info_static/android_arm_armv8-a_static_afdo-libgui_lto-thin/gen/aidl -Iframeworks/native/opengl/libs/EGL/include -Iframeworks/native/opengl/include -Iframeworks/native/libs/nativewindow/include -Iframeworks/native/libs/nativewindow/include-private -Iframeworks/native/libs/arect/include -Iframeworks/native/libs/nativebase/include -Iframeworks/native/libs/ui/include -Iframeworks/native/libs/ui/include_private -Ihardware/libhardware/include -Ipackages/modules/Bluetooth/system/types -Iframeworks/native/libs/math/include -Iframeworks/native/libs/ui/include_mock -Iframeworks/native/libs/ui/include_types -Iout/soong/.intermediates/hardware/interfaces/graphics/mapper/4.0/android.hardware.graphics.mapper@4.0_genc++_headers/gen -Iframeworks/native/libs/gralloc/types/include -Iframeworks/native/libs/binder/ndk/include_ndk -Iframeworks/native/libs/binder/ndk/include_platform -Iout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common-V2-ndk-source/gen/include -Iout/soong/.intermediates/hardware/interfaces/graphics/common/aidl/android.hardware.graphics.common-V4-ndk-source/gen/include -Iout/soong/.intermediates/frameworks/native/libs/gui/libgui/android_arm_armv8-a_shared/gen/aidl -Isystem/media/camera/include -Iout/soong/.intermediates/frameworks/av/camera/libcamera_client/android_arm_armv8-a_static_cfi/gen/aidl -Iframeworks/av/media/codec2/hal/client/include -Iout/soong/.intermediates/hardware/interfaces/media/c2/1.1/android.hardware.media.c2@1.1_genc++_headers/gen -Iout/soong/.intermediates/hardware/interfaces/media/c2/1.2/android.hardware.media.c2@1.2_genc++_headers/gen -Iframeworks/av/media/codec2/core/include -Iframeworks/av/media/codec2/hal/hidl/1.0/utils/include -Iframeworks/av/media/module/bufferpool/2.0/include -Isystem/libfmq/include -Iframeworks/av/media/codec2/hal/hidl/1.1/utils/include -Iframeworks/av/media/codec2/hal/hidl/1.2/utils/include -Iframeworks/av/media/codec2/vndk/include -Iout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq-V1-ndk-source/gen/include -Iout/soong/.intermediates/hardware/interfaces/media/bufferpool/aidl/android.hardware.media.bufferpool2-V1-ndk-source/gen/include -Isystem/memory/libdmabufheap/include -Isystem/memory/libion/include -Isystem/memory/libion/kernel-headers -Iexternal/boringssl/src/include -Iframeworks/av/media/libdatasource/include -Iframeworks/av/media/ndk/include -Iframeworks/av/drm/libdrmframework/include -Iframeworks/av/drm/common/include -Iframeworks/av/media/libmedia/include -Iout/soong/.intermediates/frameworks/av/services/mediaresourcemanager/resourcemanager_aidl_interface-ndk-source/gen/include -Iframeworks/av/media/libmedia/aidl -Iout/soong/.intermediates/frameworks/av/media/libmedia/libmedia_omx/android_arm_armv8-a_shared_cfi/gen/aidl -Iout/soong/.intermediates/frameworks/av/media/libmedia/libmedia/android_arm_armv8-a_static_cfi/gen/aidl -Iframeworks/av/drm/libmediadrm/include -Iout/soong/.intermediates/hardware/interfaces/drm/1.0/android.hardware.drm@1.0_genc++_headers/gen -Iout/soong/.intermediates/hardware/interfaces/drm/1.1/android.hardware.drm@1.1_genc++_headers/gen -Iout/soong/.intermediates/hardware/interfaces/drm/1.2/android.hardware.drm@1.2_genc++_headers/gen -Iout/soong/.intermediates/hardware/interfaces/drm/1.3/android.hardware.drm@1.3_genc++_headers/gen -Iout/soong/.intermediates/hardware/interfaces/drm/1.4/android.hardware.drm@1.4_genc++_headers/gen -Iframeworks/native/libs/binder/include_batterystats -Iframeworks/native/libs/permission/include -Isystem/memory/libmemunreachable/include -Isystem/netd/include -Iframeworks/native/services/powermanager/include -Iout/soong/.intermediates/hardware/interfaces/power/1.0/android.hardware.power@1.0_genc++_headers/gen -Iout/soong/.intermediates/hardware/interfaces/power/1.1/android.hardware.power@1.1_genc++_headers/gen -Iout/soong/.intermediates/hardware/interfaces/power/1.2/android.hardware.power@1.2_genc++_headers/gen -Iout/soong/.intermediates/hardware/interfaces/power/1.3/android.hardware.power@1.3_genc++_headers/gen -Iout/soong/.intermediates/hardware/interfaces/power/aidl/android.hardware.power-V4-cpp-source/gen/include -Iout/soong/.intermediates/frameworks/native/services/powermanager/libpowermanager/android_arm_armv8-a_shared/gen/aidl -Isystem/libhidl/libhidlmemory/include -Iout/soong/.intermediates/system/libhidl/transport/memory/1.0/android.hidl.memory@1.0_genc++_headers/gen -Iout/soong/.intermediates/system/libhidl/transport/memory/token/1.0/android.hidl.memory.token@1.0_genc++_headers/gen -Iout/soong/.intermediates/system/libhidl/transport/allocator/1.0/android.hidl.allocator@1.0_genc++_headers/gen -Iout/soong/.intermediates/frameworks/native/libs/binder/packagemanager_aidl-cpp-source/gen/include -Ivendor/rockchip/hardware/interfaces/rockit/direct/include -Ibionic/libc/async_safe/include -Ibionic/libc/system_properties/include -Isystem/core/property_service/libpropertyinfoparser/include -isystem bionic/libc/include -isystem bionic/libc/kernel/uapi/asm-arm -isystem bionic/libc/kernel/uapi -isystem bionic/libc/kernel/android/scsi -isystem bionic/libc/kernel/android/uapi -Werror -Wno-error=deprecated-declarations -Wall -flto -fsanitize-cfi-cross-dso -fsanitize-ignorelist=external/compiler-rt/lib/cfi/cfi_blocklist.txt -fvisibility=default -fsanitize=cfi -fsanitize-trap=all -ftrap-function=abort -std=gnu++17 -fno-rtti -Isystem/core/include -Isystem/logging/liblog/include -Isystem/media/audio/include -Ihardware/libhardware/include -Ihardware/libhardware_legacy/include -Ihardware/ril/include -Iframeworks/native/include -Iframeworks/native/opengl/include -Iframeworks/av/include  -Werror=bool-operation -Werror=format-insufficient-args -Werror=implicit-int-float-conversion -Werror=int-in-bool-context -Werror=int-to-pointer-cast -Werror=pointer-to-int-cast -Werror=xor-used-as-pow -Wno-void-pointer-to-enum-cast -Wno-void-pointer-to-int-cast -Wno-pointer-to-int-cast -Werror=fortify-source -Werror=address-of-temporary -Werror=null-dereference -Werror=return-type -Wno-tautological-constant-compare -Wno-tautological-type-limit-compare -Wno-reorder-init-list -Wno-implicit-int-float-conversion -Wno-tautological-overlap-compare -Wno-deprecated-copy -Wno-range-loop-construct -Wno-zero-as-null-pointer-constant -Wno-deprecated-anon-enum-enum-conversion -Wno-pessimizing-move -Wno-non-c-typedef-for-linkage -Wno-align-mismatch -Wno-error=unused-but-set-variable -Wno-error=unused-but-set-parameter -Wno-error=deprecated-builtins -Wno-error=deprecated -Wno-error=single-bit-bitfield-constant-conversion -Wno-error=enum-constexpr-conversion -MD -MF out/soong/.intermediates/frameworks/av/media/libmediaplayerservice/libmediaplayerservice/android_arm_armv8-a_static_cfi/obj/frameworks/av/media/libmediaplayerservice/MetadataRetrieverClient.o.d -o out/soong/.intermediates/frameworks/av/media/libmediaplayerservice/libmediaplayerservice/android_arm_armv8-a_static_cfi/obj/frameworks/av/media/libmediaplayerservice/MetadataRetrieverClient.o frameworks/av/media/libmediaplayerservice/MetadataRetrieverClient.cpp
frameworks/av/media/libmediaplayerservice/MetadataRetrieverClient.cpp:45:10: fatal error: 'RockitMetadataRetriever.h' file not found
#include "RockitMetadataRetriever.h"
         ^~~~~~~~~~~~~~~~~~~~~~~~~~~
1 error generated.
[ 65% 107851/164911] //frameworks/av/media/libmediaplayerservice:libmediaplayerservice clang++ MediaRecorderClient.cpp [arm]
frameworks/av/media/libmediaplayerservice/MediaRecorderClient.cpp:442:19: warning: 'getService' is deprecated: this polls for 5s, prefer waitForService or checkService [-Wdeprecated-declarations]
            ? sm->getService(String16("media.camera")) : sm->checkService(String16("media.camera"));
                  ^
frameworks/native/libs/binder/include/binder/IServiceManager.h:70:7: note: 'getService' has been explicitly marked deprecated here
    [[deprecated("this polls for 5s, prefer waitForService or checkService")]]
      ^
1 warning generated.
[ 65% 107852/164911] //frameworks/av/media/libmediaplayerservice:libmediaplayerservice clang++ MediaPlayerService.cpp [arm]
frameworks/av/media/libmediaplayerservice/MediaPlayerService.cpp:887:30: warning: 'getService' is deprecated: this polls for 5s, prefer waitForService or checkService [-Wdeprecated-declarations]
    sp<IBinder> binder = sm->getService(String16("media.extractor"));
                             ^
frameworks/native/libs/binder/include/binder/IServiceManager.h:70:7: note: 'getService' has been explicitly marked deprecated here
    [[deprecated("this polls for 5s, prefer waitForService or checkService")]]
      ^
1 warning generated.
[ 65% 107853/164911] //frameworks/av/media/libmediaplayerservice:libmediaplayerservice clang++ StagefrightRecorder.cpp [arm]
frameworks/av/media/libmediaplayerservice/StagefrightRecorder.cpp:114:34: warning: 'getService' is deprecated: this polls for 5s, prefer waitForService or checkService [-Wdeprecated-declarations]
        defaultServiceManager()->getService(String16("media.player"));
                                 ^
frameworks/native/libs/binder/include/binder/IServiceManager.h:70:7: note: 'getService' has been explicitly marked deprecated here
    [[deprecated("this polls for 5s, prefer waitForService or checkService")]]
      ^
frameworks/av/media/libmediaplayerservice/StagefrightRecorder.cpp:1257:18: warning: variable 'isMPEG4' set but not used [-Wunused-but-set-variable]
            bool isMPEG4 = true;
                 ^
2 warnings generated.
08:58:01 ninja failed with: exit status 1

#### failed to build some targets (46:32 (mm:ss)) ####

Build android failed!
root@kdev-ubuntu2204:/rockchip/android/youyeetoo_YY3588_Android14# 
root@kdev-ubuntu2204:/rockchip/android/youyeetoo_YY3588_Android14# 
root@kdev-ubuntu2204:/rockchip/android/youyeetoo_YY3588_Android14# find . -name 'RockitMetadataRetriever.h'
./vendor/rockchip/hardware/interfaces/rockit/direct/include/RockitMetadataRetriever.h
root@kdev-ubuntu2204:/rockchip/android/youyeetoo_YY3588_Android14# 

```

移动目录导致软链无效，重新建立软链解决

```shell
root@kdev-ubuntu2204:/rockchip/android/youyeetoo_YY3588_Android14# ls -alh vendor/rockchip/hardware/interfaces/rockit/direct/include/RockitMetadataRetriever.h
lrwxrwxrwx 1 root root 135 Aug 11 08:39 vendor/rockchip/hardware/interfaces/rockit/direct/include/RockitMetadataRetriever.h -> /2T/panbaidu/youyeetoo/android/YY3588_Android14/vendor/rockchip/hardware/interfaces/rockit/direct/include/RockitMetadataRetrieverComm.h
root@kdev-ubuntu2204:/rockchip/android/youyeetoo_YY3588_Android14# ln -svf `pwd`/vendor/rockchip/hardware/interfaces/rockit/direct/include/RockitMetadataRetrieverComm.h  vendor/rockchip/hardware/interfaces/rockit/direct/include/RockitMetadataRetriever.h
'vendor/rockchip/hardware/interfaces/rockit/direct/include/RockitMetadataRetriever.h' -> '/rockchip/android/youyeetoo_YY3588_Android14/vendor/rockchip/hardware/interfaces/rockit/direct/include/RockitMetadataRetrieverComm.h'
root@kdev-ubuntu2204:/rockchip/android/youyeetoo_YY3588_Android14# 
root@kdev-ubuntu2204:/rockchip/android/youyeetoo_YY3588_Android14# ls -alh vendor/rockchip/hardware/interfaces/rockit/direct/include/RockitMetadataRetriever.h
lrwxrwxrwx 1 root root 132 Sep 10 09:02 vendor/rockchip/hardware/interfaces/rockit/direct/include/RockitMetadataRetriever.h -> /rockchip/android/youyeetoo_YY3588_Android14/vendor/rockchip/hardware/interfaces/rockit/direct/include/RockitMetadataRetrieverComm.h
root@kdev-ubuntu2204:/rockchip/android/youyeetoo_YY3588_Android14# 

```


## uboot构建

```shell
# build uboot
if [ "$BUILD_UBOOT" = true ] ; then
echo "start build uboot: $UBOOT_DEFCONFIG"
cd u-boot && make clean &&  make mrproper &&  make distclean && make $UBOOT_DEFCONFIG && ./make.sh && cd -
if [ $? -eq 0 ]; then
    echo "Build uboot ok!"
else
    echo "Build uboot failed!"
    exit 1
fi
fi
```


简化

```shell
#!/bin/bash

set -x

make distclean
make kedge2_defconfig
./make.sh

```




## khadas edge2 android14 uboot 2017

```shell
U-Boot 2017.09-gd41da71c88-240430 # (Sep 10 2026 - 00:31:47 +0000)

Model: Khadas Board
MPIDR: 0x0
PreSerial: 2, raw, 0xfeb50000
DRAM:  16 GiB
Sysmem: init
Relocation Offset: eda0e000
Relocation fdt: eb9fa8e0 - eb9fece0
CR: M/C/I
Using default environment

optee api revision: 2.0
mmc@fe2c0000: 1, mmc@fe2e0000: 0
Bootdev(atags): mmc 0
MMC0: HS400 Enhanced Strobe, 200Mhz
PartType: EFI
// lib/optee_clientApi/OpteeClientRkFs_v2.c
TEEC: Reset area[0] info...
TEEC: Reset area[1] info...
// int init_kernel_dtb(void)
DM: v2
// arch/arm/mach-rockchip/boot_rkimg.c: rockchip_read_dtb_file
cmd:load mmc 0:9 0xa200000  /boot/dtb/rockchip/rk3588s-khadas-edge2.dtb.overlay.env
14 bytes read in 4 ms (2.9 KiB/s)
cmd:env import -t 0xa200000 0x107b4a
Android 14.0, Build 2024.2, v2
// // kdev normal arch/arm/mach-rockchip/boot_mode.c
boot mode: recovery (misc)
RESC: 'recovery', blk@0x000569dc
TEEC: ree_fs_new_open : no such file. /dirf.db
Device is: UNLOCKED
DTB: rk-kernel.dtb
HASH(c): OK
loadEnvFile = 1
usb dr_mode not found
usb dr_mode not found
I2c0 speed: 100000Hz
vsel-gpios- not found!
en-gpios- not found!
vdd_cpu_big0_s0 800000 uV
vsel-gpios- not found!
en-gpios- not found!
vdd_cpu_big1_s0 800000 uV
I2c2 speed: 100000Hz
vsel-gpios- not found!
en-gpios- not found!
vdd_npu_s0 800000 uV
spi2: RK806: 2
ON=0x40, OFF=0x00
vdd_gpu_s0 750000 uV
vdd_cpu_lit_s0 750000 uV
vdd_log_s0 750000 uV
vdd_vdenc_s0 init 750000 uV
vdd_ddr_s0 850000 uV
gpio: pin 130 (gpio 130) value is 1
gpio: pin 100 (gpio 100) value is 1
I2c6 speed: 100000Hz
Error reading the chip: -121
TP05 id=0xffffff87
Error reading the chip: -121
TP10 id=0xffffff87
hlm khadas_mipi_id=0
new TS050 to parse panel init sequence2
get vp0 plane mask:0x5, primary id:2, cursor_plane:-1, from dts
get vp1 plane mask:0xa, primary id:3, cursor_plane:-1, from dts
get vp2 plane mask:0x140, primary id:8, cursor_plane:-1, from dts
get vp3 plane mask:0x280, primary id:9, cursor_plane:-1, from dts
new TS050 to parse panel init sequence2
Model: Khadas Edge2
Minidump: init...
load_bmp_logo cmd ext4load mmc 0:9 0x00000000ebd45010 logo_kernel.bmp 800000...
** File not found logo_kernel.bmp **
rockchip_read_resource_file len 23256...
Rockchip UBOOT DRM driver version: v1.0.1
vp0 have layer nr:2[0 2 ], primary plane: 2
vp1 have layer nr:2[1 3 ], primary plane: 3
vp2 have layer nr:2[6 8 ], primary plane: 8
vp3 have layer nr:2[7 9 ], primary plane: 9
Using display timing dts
dsi@fde20000:  detailed mode clock 152198 kHz, flags[a]
    H: 1080 1184 1188 1315
    V: 1920 1924 1927 1929
bus_format: 100e
VOP update mode to: 1080x1920p60, type: MIPI0 for VP2
VP2 set crtc_clock to 152196KHz
Unsupported bt709f at 10bit csc depth, use bt601f instead
VOP VP2 enable Esmart2[600x600->600x600@240x660] fmt[0] addr[0xedf00000]
final DSI-Link bandwidth: 1014640 Kbps x 4
```




增加补丁

```shell
git log --pretty=format:"%h %an <%ae> %s" --graph
```

```text
> kbi增加适配IMX585 678摄像头。 U-Boot 阶段根据摄像头 ID 动态修改设备树，禁用不匹配的摄像头节点，避免 I2C 地址冲突和错误 probe
* d41da71c88 Xiong Zhang <xiong.zhang@wesion.com> camera: support IMX585ï¼<8c>IMX678

> 屏幕显示相关，i2c命令增加打印，khadas_mipi增加匹配1、2、3、4
* 5520d3d998 Xiong Zhang <xiong.zhang@wesion.com> Import wuming TS101 screen

> 修正 RK3588 PLL 小数分频 K 值的生成和解析方式，去掉原先的“有符号补码/负小数”处理，统一按无符号正小数处理，从而修复 DP 1080p 因时钟 PLL 配置错误而无法工作的问题
* 74adbbd311 Goenjoy Huang <goenjoy@khadas.com> DP: fix 1080p cannot work for dp [1/2]

> 关键：增加tb overlay支持，增加从特定分区读取env、读取dtb overlay
* 887a8bb557 Xiong Zhang <xiong.zhang@wesion.com> Support device tree overlay

> 从emmc特定分区读取文件作为启动logo。自定义logo
* 9764ebede7 Xiong Zhang <xiong.zhang@wesion.com> Support custom startup logo. Path:/vendor/custom

> 屏幕相关，配置全屏显示
* 3b1a5d5f95 Xiong Zhang <xiong.zhang@wesion.com> Resolve the issue of DP display not being able to display in full screen mode

> rockchip_display 屏幕相关，配置默认就是TS050
* 374d98fb62 Xiong Zhang <xiong.zhang@wesion.com> LCD: modify the MIPI screen of the new TS050 by default

> rockchip_display 屏幕相关，修复显示缺陷
* 4c584aa26e Goenjoy Huang <goenjoy@khadas.com> LCD: Fixed the problem of a bright line on the far right side of the old 5-inch screen [1/      2]

> 更新kbi命令，修改do_kbi_init函数，增加i2c初始化，camera初始化等i2c操作
* 40e0328649 Goenjoy Huang <goenjoy@khadas.com> camera: compatible camera with both OS08A10 and IMX415

> 适配屏幕rockchip_panel_ofdata_to_platdata信息读取
* eec4554d1d Goenjoy Huang <goenjoy@khadas.com> LCD: Compatible with old TS050 and new TS050 [1/3]

> mipi不同khadas_mipi_id = 1是TS101 =2则是TS050,调用分支不同 cmd_i2c_set_bus_num
* 86afb97313 Goenjoy Huang <goenjoy@khadas.com> LCD: NEW Compatible with TS050,TS101 and HDMI [1/3]

> rk_board_late_init增加gpio clear 138; gpio set 139; gpio clear 140;
* 076f4c9506 Goenjoy Huang <goenjoy@khadas.com> Edge2: set led initial status as blue on

> 更新cmd/kabi, 增加kbi init
* 67f3af8c97 Goenjoy Huang <goenjoy@khadas.com> kbi: update kbi code

> 修改启动logo khadas_mipi_id == 0不同，logo不同
* a771e4f266 Goenjoy Huang <goenjoy@khadas.com> LOGO: Compatible with TS050 and TS101 [1/2]

> 修改dts增加mipi屏，增加启动参数khadas_mipi_id=%d，修改mipi驱动/video/drm/rockchip_display.c
* 6a745f554b Goenjoy Huang <goenjoy@khadas.com> LCD: Compatible with TS050 and TS101 [1/4]

> 修改mipi驱动 drivers/video/drm/rockchip_display.c
* b49b5029b6 Haylrn Zhao <haylrn.zhao@wesion.com> Edge2: Add edge2 10inch mipi logo rotate 180 degrees

> update模式，配置led灯用于指示
* cbca71d2d7 Haylrn Zhao <haylrn.zhao@wesion.com> Edge2: Change LED state and add run update

> serialno = env_get("usid"); 不清楚做啥
* 5ee7417392 Goenjoy Huang <goenjoy@khadas.com> Edge2: add usid run

> uboot增加reboot_test模式 BOOT_MODE_REBOOT_TEST
* a387bcc786 Jack Zhao <jack.zhao@wesion.com> Edge2: add reboot_test mode

> kbi: fix usid
* 3006af5336 Jack Zhao <jack.zhao@wesion.com> Edge2: kbi: fix usid

> 修改reboot逻辑为 do_reboot_boot_mode
* bb5ea395e1 Jack Zhao <jack.zhao@wesion.com> Edge2: fix the startup priority mode error after restart

> 修改kedge2 设备树i2c6和 新增的 CONFIG_CMD_KHADAS_KBI
* 1969256e07 Goenjoy Huang <goenjoy@khadas.com> Edge2: MCU: modify MCU to i2c2 for edge2-v11 board


> 大补丁，增加了 CONFIG_CMD_KHADAS_KBI，暂时移除
* 7da36fdbcb Jack Zhao <jack.zhao@wesion.com> Edge2: add preliminary support for kbi cmd

> 打开 CONFIG_CMD_I2C
* 7db0034b5a Xiong Zhang <xiong.zhang@wesion.com> Edge2: configs: enble CMD_I2C

> 为了解决sd引导失败，注释掉 cd-gpios = <&gpio0 RK_PA4 GPIO_ACTIVE_HIGH>;
* c587514fd9 Jack Zhao <jack.zhao@wesion.com> arm: dts: Edge2: fix SD firmware startup VCC5v failure

> 增加gpip操作：run_command("gpio set 100", 0);//GPIO3_A4 TYPEC0_PWR_EN ，g98没有必要，删掉
* 4fbe6494cc Goenjoy Huang <goenjoy@khadas.com> Edge2: Enble TYPEC0_PWR_EN pin

> 修改drm相关驱动 dw_mipi_dsi2.c rockchip_panel.c
* fbda14a162 Xiong Zhang <xiong.zhang@wesion.com> LCD: Fix mipi panel reset pin control[1/2]

> 执行 run_command("gpio set 130", 0);//GPIO4_A2 vcc 5v ，g98没有必要，删掉
* 610e36de37 goenjoy <goenjoy@khadas.com> Edge2: set vcc5V

> 修改defconfig，CMD_GPIO, CMD_I2C, CMD_RUN
* 889cd691e7 goenjoy <goenjoy@khadas.com> Edge2: Enble CMD_GPIO, CMD_I2C, CMD_RUN config

> 修改为任意key进入命令行，修改prompt为kedge2，修改默认delay时间为1
* 42d12c3929 goenjoy <goenjoy@khadas.com> Edge2: Fix cannot enter uboot command line mode

> 增加dtb和config
* 62ac86ea66 Xiong Zhang <xiong.zhang@wesion.com> Add Khadas edge2 config (from rk3588_defconfig) and dts (from rk3588-evb.dts)


-----


* e53b21c53e Yifeng Zhao <yifeng.zhao@rock-chips.com> gpt: re-alloc gpt header buffer for ufs device



```

修改点汇总

```shell
# git status
On branch khadas-edge2-android14
Your branch is behind 'github/khadas-edge2-android14' by 31 commits, and can be fast-forwarded.
  (use "git pull" to update your local branch)

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
	new file:   arch/arm/dts/kedge2.dts
	modified:   arch/arm/dts/rk3588-u-boot.dtsi
	modified:   arch/arm/include/asm/arch-rockchip/boot_mode.h
	modified:   arch/arm/mach-rockchip/board.c
	modified:   arch/arm/mach-rockchip/boot_mode.c
	modified:   arch/arm/mach-rockchip/boot_rkimg.c
	modified:   cmd/Kconfig
	modified:   cmd/Makefile
	modified:   cmd/boot.c
	modified:   cmd/i2c.c
	new file:   cmd/kbi.c
	modified:   common/android_bootloader.c
	modified:   common/autoboot.c
	modified:   common/cli.c
	new file:   configs/kedge2_defconfig
	modified:   drivers/clk/rockchip/clk_pll.c
	modified:   drivers/video/drm/dw_mipi_dsi2.c
	modified:   drivers/video/drm/rockchip_display.c
	modified:   drivers/video/drm/rockchip_panel.c
	modified:   drivers/video/drm/rockchip_vop2.c
	modified:   include/boot_rkimg.h
	modified:   include/configs/evb_rk3588.h
	modified:   include/configs/rk3588_common.h

```


```shell
# cat /mnt/boot/dtb/rockchip/rk3588s-khadas-edge2.dtb.overlay.env
fdt_overlays=
```

## uboot 2017 recovery模式检测 - misc分区

```shell
上电 → SPL → U-Boot proper
   │
board_init_r
   │
board_late_init()
   ├─ ① 读 boot mode 寄存器（GRF magic）── 是 RECOVERY magic？──→ 进 recovery 分支
   ├─ ② 读 misc 分区 BCB ── command=="boot-recovery"？──────────→ 进 recovery 分支
   ├─ ③ 检测 recovery 按键（GPIO/ADC）── 按住？────────────────→ 进 recovery 分支
   └─ ④ 检查 env：reboot_mode ── =="recovery"？───────────────→ 进 recovery 分支
   │
main_loop()
   ├─ normal 分支：  bootcmd → 加载 boot.img → booti/bootm → 内核正常启动
   └─ recovery 分支：加载 recovery.img → booti/bootm → 内核带 recovery cmdline
                     （bootargs 通常附加 androidboot.mode=recovery / reboot_mode=recovery）
   └─ （另有 fastboot 分支：do_fastboot()，等待 USB 刷机）
```

khadas 是读取misc.img数据

```shell
# hexdump -C misc.img 
00000000  62 6f 6f 74 2d 72 65 63  6f 76 65 72 79 00 00 00  |boot-recovery...|
00000010  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
*
00000040  72 65 63 6f 76 65 72 79  0a 2d 2d 77 69 70 65 5f  |recovery.--wipe_|
00000050  61 6c 6c 00 00 00 00 00  00 00 00 00 00 00 00 00  |all.............|
00000060  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
*
00004000  62 6f 6f 74 2d 72 65 63  6f 76 65 72 79 00 00 00  |boot-recovery...|
00004010  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
*
00004040  72 65 63 6f 76 65 72 79  0a 2d 2d 77 69 70 65 5f  |recovery.--wipe_|
00004050  61 6c 6c 00 00 00 00 00  00 00 00 00 00 00 00 00  |all.............|
00004060  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
*
0000c000
```

```c
# rg misc_require_recovery
arch/arm/mach-rockchip/boot_mode.c
21:static int misc_require_recovery(u32 bcb_offset, int *bcb_recovery_msg)
67:	misc_require_recovery(bcb_offset, &bcb_recovery_msg);
172:	} else if (misc_require_recovery(bcb_offset, &recovery_msg)) {

arch/arm/mach-rockchip/spl_boot_mode.c
13:static int misc_require_recovery(struct blk_desc *dev_desc, u32 bcb_offset)
62:	} else if (misc_require_recovery(dev_desc, bcb_sector_offset)) {

21  static int misc_require_recovery(u32 bcb_offset, int *bcb_recovery_msg)
  1 {
  2 |---struct bootloader_message *bmsg;
  3 |---struct blk_desc *dev_desc;
  4 |---disk_partition_t part;
  5 |---int cnt, recovery = 0;
  6 
  7 |---dev_desc = rockchip_get_bootdev();
  8 |---if (!dev_desc) {
  9 |---|---printf("dev_desc is NULL!\n");
 10 |---|---goto out;
 11 |---}
 12 
 13 |---if (part_get_info_by_name(dev_desc, PART_MISC, &part) < 0) {
 14 |---|---printf("No misc partition\n");
 15 |---|---goto out;
 16 |---}
 17 
 18 |---cnt = DIV_ROUND_UP(sizeof(struct bootloader_message), dev_desc->blksz);
 19 |---bmsg = memalign(ARCH_DMA_MINALIGN, cnt * dev_desc->blksz);
 20 |---if (blk_dread(dev_desc, part.start + bcb_offset, cnt, bmsg) != cnt) {
 21 |---|---recovery = 0;
 22 |---} else {
 23 |---|---recovery = !strcmp(bmsg->command, "boot-recovery");
 24 |---|---if (bcb_recovery_msg) {
 25 |---|---|---if (!strcmp(bmsg->recovery, "recovery\n--rk_fwupdate\n"))
 26 |---|---|---|---*bcb_recovery_msg = BCB_MSG_RECOVERY_RK_FWUPDATE;
 27 |---|---|---else if (!strcmp(bmsg->recovery, "recovery\n--factory_mode=whole") ||
 28 |---|---|---|--- !strcmp(bmsg->recovery, "recovery\n--factory_mode=small"))
 29 |---|---|---|---*bcb_recovery_msg = BCB_MSG_RECOVERY_PCBA;
 30 |---|---}
 31 |---}
 32 
 33 |---free(bmsg);
 34 out:
 35 |---return recovery;
 36 }

 59  int get_bcb_recovery_msg(void)
  1 {
  2 |---int bcb_recovery_msg = BCB_MSG_RECOVERY_NONE;
  3 #ifdef CONFIG_ANDROID_BOOT_IMAGE
  4 |---u32 bcb_offset = android_bcb_msg_sector_offset();
  5 #else
  6 |---u32 bcb_offset = BCB_MESSAGE_BLK_OFFSET;
  7 #endif
  8 |---misc_require_recovery(bcb_offset, &bcb_recovery_msg);
  9 
 10 |---return bcb_recovery_msg;
 11 }

 386  static void cmdline_handle(void)
   1 {
   2 |---struct blk_desc *dev_desc;
   3 |---int if_type;
   4 |---int devnum;
   5 
   6 |---param_parse_pubkey_fuse_programmed();
   7 
   8 |---dev_desc = rockchip_get_bootdev();
   9 |---if (!dev_desc)
  10 |---|---return;
  11 
  12 |---/*
  13 |--- * 1. From rk356x, the sd/udisk recovery update flag was moved from
  14 |--- *    IDB to Android BCB.
  15 |--- *
  16 |--- * 2. Udisk is init at the late boot_from_udisk(), but
  17 |--- *    rockchip_get_boot_mode() actually only read once,
  18 |--- *    we need to update boot mode according to udisk BCB.
  19 |--- */
  20 |---if_type = dev_desc->if_type;
  21 |---devnum = dev_desc->devnum;
  22 |---if ((if_type == IF_TYPE_MMC && devnum == 1) || (if_type == IF_TYPE_USB)) {
  23 |---|---if (get_bcb_recovery_msg() == BCB_MSG_RECOVERY_RK_FWUPDATE) {
  24 |---|---|---if (if_type == IF_TYPE_MMC && devnum == 1) {
  25 |---|---|---|---env_update("bootargs", "sdfwupdate");
  26 |---|---|---} else if (if_type == IF_TYPE_USB) {
  27 |---|---|---|---env_update("bootargs", "usbfwupdate");
  28 |---|---|---|---env_set("reboot_mode", "recovery-usb");
  29 |---|---|---}
  30 |---|---} else {
  31 |---|---|---if (if_type == IF_TYPE_USB)
  32 |---|---|---|---env_set("reboot_mode", "normal");
  33 |---|---}
  34 |---}
  35 
  36 |---if (rockchip_get_boot_mode() == BOOT_MODE_QUIESCENT)
  37 |---|---env_update("bootargs", "androidboot.quiescent=1 pwm_bl.quiescent=1");
  38 }
```

```c
    打印 boot mode: recovery (misc) 的关键代码在 arch/arm/mach-rockchip/boot_mode.c:172-174
    
     } else if (misc_require_recovery(bcb_offset, &recovery_msg)) { 
         printf("boot mode: recovery (misc) // kdev normal\n");     
         boot_mode[PM] = BOOT_MODE_RECOVERY;
     misc_require_recovery() 函数 (boot_mode.c:21-57) 做了以下事情：
     
     1. 找到 misc 分区（分区名 "misc"）                             
     2. 从 misc 分区读取 struct bootloader_message 结构体           
     3. 判断 bmsg->command 是否等于 "boot-recovery"                 
     
     recovery = !strcmp(bmsg->command, "boot-recovery");  // boot_mode.c:44
     BCB 结构体定义在 include/boot_rkimg.h:27-41：
     struct bootloader_message {
         char command[32];      // <-- 这里存储 "boot-recovery"     
         char status[32]; 
         char recovery[768];    // 如 "recovery\n--wipe_data" 等
         char stage[32];
         char slot_suffix[32];
         char reserved[192];
     };       
```


```text
 阶段 1：U-Boot 启动 → board_late_init()
                         
     board_late_init()                          // arch/arm/mach-rockchip/board.c:454
       ├─ setup_download_mode()                 // board.c:462
       ├─ setup_boot_mode()                     // board.c:483
       │    └─ rockchip_get_boot_mode()         // boot_mode.c:84
       │         ├─ 读 env "reboot_mode" → 不命中
       │         ├─ 读 BOOT_MODE_REG → 不是 loader/dfu/fastboot
       │         └─ misc_require_recovery()     // boot_mode.c:21   
       │              ├─ 找到 misc 分区                             
       │              ├─ blk_dread() 读取 BCB                       
       │              └─ strcmp(bmsg->command, "boot-recovery") == 0 → 返回1
       │         │ 
       │         └─ printf("boot mode: recovery (misc) // kdev normal\n") 
       │         └─ boot_mode[PM] = BOOT_MODE_RECOVERY
       │    
       └─ env_fixup() / cmdline_handle() 等
 
     注意： setup_boot_mode() (boot_mode.c:234) 对 BOOT_MODE_RECOVERY 不做特殊处理（没有 case分支），
     它只是让 rockchip_get_boot_mode() 缓存了 BOOT_MODE_RECOVERY 结果，供后续调用查询。
     
 阶段 2：执行 bootcmd → boot_android
                            
     CONFIG_BOOTCOMMAND 定义在 include/configs/rockchip-common.h:176-180：
                            
     #define RKIMG_BOOTCOMMAND \                                    
         "boot_android ${devtype} ${devnum};"  \                    
         "boot_fit;"                           \                    
         "bootrkp;"                            \                    
         "run distro_bootcmd;"                                      
                            
     优先执行 boot_android：
                            
     boot_android ${devtype} ${devnum}          // cmd/boot_android.c:21                                
       └─ do_boot_android() 
            └─ android_bootloader_boot_flow(dev_desc, load_address) 
                 // common/android_bootloader.c:1218 
     
 阶段 3：android_bootloader_boot_flow() 核心流程            
                        
     android_bootloader_boot_flow()             // android_bootloader.c:1218                            
       │                
       ├─ 1. part_get_info_by_name("misc")     // 找 misc 分区  
       │                
       ├─ 2. android_bootloader_load_and_clear_mode()           
       │      // android_bootloader.c:79                        
       │      ├─ android_bootloader_message_load()  // 读 BCB   
       │      ├─ strcmp("boot-recovery", bcb.command) == 0      
       │      └─ return ANDROID_BOOT_MODE_RECOVERY  // 命中！   
       │                
       ├─ 3. 若 mode == NORMAL，再查 rockchip_get_boot_mode()   
       │      // android_bootloader.c:1246-1248 (Rockchip 扩展) 
       │      if (rockchip_get_boot_mode() == BOOT_MODE_RECOVERY)                                       
       │          mode = ANDROID_BOOT_MODE_RECOVERY;            
       │                
       ├─ 4. switch(mode) → case ANDROID_BOOT_MODE_RECOVERY:    
       │      // android_bootloader.c:1282-1294                 
       │      boot_partname = "recovery"       // 非AB: 用 recovery 分区                                
       │                     = ab_can_find_recovery_part() ? "recovery" : "boot"                        
       │  // AB: 有recovery用recovery，否则用boot               
       │                
       ├─ 5. android_image_load_by_partname(dev_desc, boot_partname, &load_address)                     
       │      // android_bootloader.c:1192-1216                 
       │      ├─ part_get_info_by_name("recovery")              
       │      └─ android_image_load()          // 从 recovery 分区加载 kernel+ramdisk                   
       │                
       ├─ 6. android_assemble_cmdline()        // 组装 bootargs 
       │      // 不添加 "skip_initramfs"，使 recovery ramdisk 生效                                      
       │                
       └─ 7. android_bootloader_boot_kernel(load_address)       
              // android_bootloader.c:295                       
              └─ do_bootm_states(..., BOOTM_STATE_OS_GO)        
                   └─ 跳转内核，进入 recovery 系统  
```



## android recovery镜像生成过程

`recovery.img` 是 Android 系统的恢复模式镜像，用于系统升级、恢复出厂设置等场景。它由以下核心部分组成：

```
recovery.img = kernel + recovery_ramdisk (cpio.gz) + resource.img (second) + dtbo + dtb + boot header
```

在 Khadas Android 14 (Rockchip) 平台中，recovery.img 的构建由 AOSP 构建系统的 `build/make/core/Makefile` 统一调度，设备配置由 `device/khamas/common/` 目录下的多个 `.mk` 文件提供。


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



阶段一、构建决策阶段：

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

阶段二、Recovery Root 目录准备：

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


阶段三、Recovery Ramdisk 生成

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

阶段四：Recovery Image 打包

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


结论：初次生成recovery.img完全依赖android工程结构。如果修改则不用


## android屏蔽日志

```shell

su

echo 0 > /proc/sys/kernel/printk


```

需要root权限，必须先执行su命令切换到root


## bcmdhd crash问题

```shell
console:/ # ls
acct         debug_ramdisk    odm                     sys
apex         dev              odm_dlkm                system
bin          etc              oem                     system_dlkm
bugreports   init             postinstall             system_ext
cache        init.environ.rc  proc                    vendor
config       linkerconfig     product                 vendor_dlkm
d            lost+found       sdcard
data         metadata         second_stage_resources
data_mirror  mnt              storage
console:/ # ip a
1: lo: <LOOPBACK,UP,LOWER_UP> mtu 65536 qdisc noqueue state UNKNOWN group default qlen 1000
    link/loopback 00:00:00:00:00:00 brd 00:00:00:00:00:00
    inet 127.0.0.1/8 scope host lo
       valid_lft forever preferred_lft forever
    inet6 ::1/128 scope host 
       valid_lft forever preferred_lft forever
2: dummy0: <BROADCAST,NOARP,UP,LOWER_UP> mtu 1500 qdisc noqueue state UNKNOWN group default qlen 1000
    link/ether 62:5b:83:69:5e:93 brd ff:ff:ff:ff:ff:ff
    inet6 fe80::605b:83ff:fe69:5e93/64 scope link 
       valid_lft forever preferred_lft forever
3: ifb0: <BROADCAST,NOARP> mtu 1500 qdisc noop state DOWN group default qlen 32
    link/ether 0e:e2:e9:cf:44:10 brd ff:ff:ff:ff:ff:ff
4: ifb1: <BROADCAST,NOARP> mtu 1500 qdisc noop state DOWN group default qlen 32
    link/ether 02:15:e8:09:58:1c brd ff:ff:ff:ff:ff:ff
5: eth0: <BROADCAST,MULTICAST> mtu 1500 qdisc noop state DOWN group default qlen 1000
    link/ether 2e:6e:87:ee:bc:d8 brd ff:ff:ff:ff:ff:ff
6: eth1: <BROADCAST,MULTICAST> mtu 1500 qdisc noop state DOWN group default qlen 1000
    link/ether 06:73:47:fe:f6:84 brd ff:ff:ff:ff:ff:ff
7: ip_vti0@NONE: <NOARP> mtu 1480 qdisc noop state DOWN group default qlen 1000
    link/ipip 0.0.0.0 brd 0.0.0.0
8: ip6_vti0@NONE: <NOARP> mtu 1364 qdisc noop state DOWN group default qlen 1000
    link/tunnel6 :: brd ::
9: sit0@NONE: <NOARP> mtu 1480 qdisc noop state DOWN group default qlen 1000
    link/sit 0.0.0.0 brd 0.0.0.0
10: ip6tnl0@NONE: <NOARP> mtu 1452 qdisc noop state DOWN group default qlen 1000
    link/tunnel6 :: brd ::
console:/ # lsmod
Module                  Size  Used by
bcmdhd               2502656  0 
console:/ # rmmod bcmdhd




```


模块信息，g98没有wifi模块，这些ko都可以移除

```shell
console:/ # modinfo bcmdhd
filename:       /vendor/lib/modules/bcmdhd.ko
license:        GPL and additional rights
alias:          pci:v000014E4d*sv*sd*bc02sc80i*
alias:          pci:v00001E01d*sv*sd*bc02sc80i*
depends:        
name:           bcmdhd
name:           %s in apstamode=%d

name:           
name:           %s

name:           %s or dev not ready

vermagic:       6.1.57 SMP preempt mod_unload modversions aarch64
parmtype:       clm_path:string
parmtype:       info_string:string
console:/ # ls -alh /vendor/lib/modules/
total 10M
drwxr-xr-x 2 root root 4.0K 2026-09-10 00:35 .
drwxr-xr-x 3 root root 4.0K 2026-09-10 00:35 ..
-rw-r--r-- 1 root root 151K 2026-09-10 00:35 aic8800_bsp.ko
-rw-r--r-- 1 root root  10K 2026-09-10 00:35 aic8800_btlpm.ko
-rw-r--r-- 1 root root 772K 2026-09-10 00:35 aic8800_fdrv.ko
-rw-r--r-- 1 root root 5.4M 2026-09-10 00:35 bcmdhd.ko
-rw-r--r-- 1 root root 3.5M 2026-09-10 00:35 cyw88459.ko
-rw-r--r-- 1 root root  374 2026-09-10 00:35 modules.alias
-rw-r--r-- 1 root root  245 2026-09-10 00:35 modules.dep
-rw-r--r-- 1 root root   70 2026-09-10 00:35 modules.load
-rw-r--r-- 1 root root   55 2026-09-10 00:35 modules.softdep

```



## khadas edge2 android14 kernel-6.1


```shell
# git log --pretty=format:"%h %an <%ae> %s" --graph
* 4d99945c7efd Xiong Zhang <xiong.zhang@wesion.com> Optimize IMX415 to 60FPS and OS08A10 to 45FPS
* 5ec72768c39b Xiong Zhang <xiong.zhang@wesion.com> Repair IMX585 three-way display
* 805027699e9e Xiong Zhang <xiong.zhang@wesion.com> Revert "Custom API:Support custom api"
* 70ae81cede0e Xiong Zhang <xiong.zhang@wesion.com> IMX585 IMX678 new pin sequence debugging
* f814295a3135 Xiong Zhang <xiong.zhang@wesion.com> camera: support IMX585，IMX678
* 0e67c43a4e0e Xiong Zhang <xiong.zhang@wesion.com> Import wuming TS101 screen
* 5929acb7effd Xiong Zhang <xiong.zhang@wesion.com> Revert "BT: fix the issue of Bluetooth mouse not being able to wake up the system after system hibernation"
* 74b886da7beb Xiong Zhang <xiong.zhang@wesion.com> Revert "IR: fix the issue of infrared remote control not being able to wake up the system after system hibernation"
* 123f4a8ba195 Goenjoy Huang <goenjoy@khadas.com> sound: fix abnormal headphone sound for commit "sound: fix pop for es8316"
* 094a6fcb682f Goenjoy Huang <goenjoy@khadas.com> DP: fix 1080p cannot work for dp [2/2]
* 8681002812b3 Algea Cao <algea.cao@rock-chips.com> drm/bridge: synopsys: dw-hdmi-qp: Check that necessary hdmi clock is on when hdmi bind
* 734b0ca45a83 Xiong Zhang <xiong.zhang@wesion.com> Adapt to FactoryTest
* 55996b460983 XiaoDong Huang <derrick.huang@rock-chips.com> dt-bindings: suspend: rk3588: add sleep-pin related macros
* 5b109c3433c4 XiaoDong Huang <derrick.huang@rock-chips.com> test-only: rk3588: dts: add sleep-pin config in rockchip_suspend
* 5d81bfbbb3a1 Xiong Zhang <xiong.zhang@wesion.com> Resolve USB power supply issue in User version
* faaec55467ec Xiong Zhang <xiong.zhang@wesion.com> Resolve the issue of incomplete display of the special HDMI resolution list
* c8372cf45f25 william <william.lin@wesion.com> Custom API:Support custom api
* 87ac472359bd Xiong Zhang <xiong.zhang@wesion.com> LCD: modify the MIPI screen of the new TS050 by default
* 6161ae0ffb51 Xiong Zhang <xiong.zhang@wesion.com> Repair the automatic adjustment function of FAN
* a588de400068 Xiong Zhang <xiong.zhang@wesion.com> Modify timed startup exception
* cbcaf9ddf06a Xiong Zhang <xiong.zhang@wesion.com> drm/rockchip: vop2: fix some plane may be lost
* 43b6c9674161 Xiong Zhang <xiong.zhang@wesion.com> Repair kernel error: pc : sysfs_create_file_ns+0x7c/0xb0
* 6f42d931245b Xiong Zhang <xiong.zhang@wesion.com> Repair kernel error: pc : _regulator_put+0x104/0x114
* 6c837b914237 Goenjoy Huang <goenjoy@khadas.com> watchdog: modify enble for enable
* 1692ea94a248 Goenjoy Huang <goenjoy@khadas.com> fan: fix fan speed error
* d6a6456b4aec Goenjoy Huang <goenjoy@khadas.com> USB3.0: fix USB3.0 U-disk cannot work at USB3.0 for plug in and start up [1/2]
* 69d462b1720f Xiong Zhang <xiong.zhang@wesion.com> TP: fix TS050 TP cannot wake up
* 6afbbc0a44b9 Xiong Zhang <xiong.zhang@wesion.com> LCD: Fixed the problem of a bright line on the far right side of the old 5-inch screen [2/2]
* e9092a9c1d36 Xiong Zhang <xiong.zhang@wesion.com> LCD: fix dsi1 reset gpio control
* 8283d911d916 Goenjoy Huang <goenjoy@khadas.com> sound: fix pop for es8316
* aa388f7c1ec8 Goenjoy Huang <goenjoy@khadas.com> watchdog: modify sys/class/khadas/enable to sys/class/khadas_watchdog/enable
* c2786e9cb245 Xiong Zhang <xiong.zhang@wesion.com> Fan: add 5 level control support [1/2]
* 4c326aa130aa Xiong Zhang <xiong.zhang@wesion.com> camera: fix OS08A10 cannot be used
* 440c2e78b4fb Xiong Zhang <xiong.zhang@wesion.com> TP: Repair TS050 touch abnormality
* 345cd23128d5 Xiong Zhang <xiong.zhang@wesion.com> HDMI: add 1024x600 and 1920x510 support
* 6a359c7abcb1 Xiong Zhang <xiong.zhang@wesion.com> dp: add dp out mode store
* 4cc6ec02985d Xiong Zhang <xiong.zhang@wesion.com> BT-mic: fix bt mic cannot work [1/2]
* 35c4915815ee Xiong Zhang <xiong.zhang@wesion.com> LCD: fix the issue of TS050 screen waking up after half an hour of sleep, resulting in screen LCD polarization
* ff137d049ef2 Goenjoy Huang <goenjoy@khadas.com> TP: fix TS050 TP cannot sleep and wake up
* bae6a00d5b7b Goenjoy Huang <goenjoy@khadas.com> dts: rockchip: Edge2: Sound: fix es8316 codes cannot work
* a04911a1a513 Goenjoy Huang <goenjoy@khadas.com> dts: rockchip: Edge2: DP: remove duplicate definitions
* 8fef468440ed Goenjoy Huang <goenjoy@khadas.com> LCD: fix the problem of having a thin and bright line on the right side of the playing video
* 9880f31773c4 Xiong Zhang <xiong.zhang@wesion.com> fix complie error
* 515c969f7d65 Goenjoy Huang <goenjoy@khadas.com> camera: fix the problem of motor noise when OS08a10 is powered on
* b5ab2bc83e7a Goenjoy Huang <goenjoy@khadas.com> camera: fix the issue of three MIPI cameras being connected and cannot open the camera [1/2]
* c4df20b3d977 Goenjoy Huang <goenjoy@khadas.com> dts: rockchip: Edge2: DP: config usb_con (5v 9v 12v)
* 9b475629f1f1 Goenjoy Huang <goenjoy@khadas.com> camera: fix the issue of not being able to open both front and rear cameras simultaneously [1/2]
* 0e21790bceef Xiong Zhang <xiong.zhang@wesion.com> panel-simple: fix code errors
* 67c22d4de5e1 Goenjoy Huang <goenjoy@khadas.com> BT: fix the issue of Bluetooth mouse not being able to wake up the system after system hibernation
* bcc9abb54dd3 Goenjoy Huang <goenjoy@khadas.com> IR: fix the issue of infrared remote control not being able to wake up the system after system hibernation
* eade11805e55 Xiong Zhang <xiong.zhang@wesion.com> camera: Add compatible os08a10 cameras [1/3] hardware/rockchip/camera [2/3] external/camera_engine_rkaiq [3/3]
* bbaf02ff519d Goenjoy Huang <goenjoy@khadas.com> USB: fix usb hs device detect issue
* cf3e9dea2fb6 Goenjoy Huang <goenjoy@khadas.com> LCD: change [HDMI or DP + DSI ] to [HDMI + DP or DSI ] config [1/2] system/core [2/2]
* 0c07269fd941 Goenjoy Huang <goenjoy@khadas.com> dts: rockchip: Edge2: Camera: fix lens-focus of imx415
* ca49fdbee1f9 Xiong Zhang <xiong.zhang@wesion.com> TP: Add TS101 touch screen touch wake-up system
* 91d87e66f302 Xiong Zhang <xiong.zhang@wesion.com> LCD: Compatible with old TS050 and new TS050 [2/3] u-boot [1/3] system/core [3/3]
* 677c911c0cb2 Goenjoy Huang <goenjoy@khadas.com> dts: rockchip: Edge2: Camera: Fix lens-focus of camera2
* 192358d7bd23 Goenjoy Huang <goenjoy@khadas.com> Revert "arm64: dts: rockchip: rk3588-rk806: Raise avdd_0v75_s0 voltage to 0.8375V"
* 896d47783297 Goenjoy Huang <goenjoy@khadas.com> FS: Add exFat file system support[1/3] device/khadas/rk3588 [2/3] external/exfatprogs [3/3]
* d05bbaded6dc Xiong Zhang <xiong.zhang@wesion.com> dts: rockchip: Edge2: dmc: Turn off DDR load frequency conversion and turn on scene frequency conversion
* e149c7eefabb Goenjoy Huang <goenjoy@khadas.com> dts: rockchip: Edge2: Camera: Fix camera2 connot open imx415
* ce1b7a4f5641 Xiong Zhang <xiong.zhang@wesion.com> LCD: NEW Compatible with TS050,TS101 and HDMI [2/3] u-boot [1/3] system/core [3/3]
* eed4f0819e93 Goenjoy Huang <goenjoy@khadas.com> dts: rockchip: Edge2: Mipi lcd: fix 60hz
* cb73a4468e22 Xiong Zhang <xiong.zhang@wesion.com> drivers: rockchip: Edge2: Camera: Fix new imx415
* 25b49885d947 Goenjoy Huang <goenjoy@khadas.com> pogo-pin: add pogo-pin driver
* 8817db1dcba3 Goenjoy Huang <goenjoy@khadas.com> drivers: rockchip: Edge2: led: remove useless code
* 63053d698534 Goenjoy Huang <goenjoy@khadas.com> dts: rockchip: Edge2: LED: set led initial status as blue on
* 8f9ebaedca86 Goenjoy Huang <goenjoy@khadas.com> TP: optimize solution parameters
* 855bfe859e9e Xiong Zhang <xiong.zhang@wesion.com> drivers: rockchip: Edge2: audio: Optimize logic control of headphones and speakers for es8316
* 1cf74f61373c Xiong Zhang <xiong.zhang@wesion.com> Edge2: DMIC: remove pdm0m0_sdi1 and pdm0m0_sdi2 pinctrl config
* a468e76d14e1 Goenjoy Huang <goenjoy@khadas.com> dts: rockchip: Edge2: HDMI: enable hdmi cec
* d7fdf04409b3 Goenjoy Huang <goenjoy@khadas.com> drivers: rockchip: Edge2: fusb302: fix source-pdos and sink-pdos config
* 3d247ae6071b Xiong Zhang <xiong.zhang@wesion.com> usb camera: fix Pulling out the USB camera will cause the camera node to move backward
* e62e0a8b6b51 Goenjoy Huang <goenjoy@khadas.com> LOGO: Compatible with TS050 and TS101 [2/2]
* 89d3c0941909 Xiong Zhang <xiong.zhang@wesion.com> LCD: Compatible with TS050 and TS101 [2/4]
* 6ea39481bd6a Xiong Zhang <xiong.zhang@wesion.com> drivers: rockchip: Edge2: TP: Fix 10inch GT9xx Inaccurate touch
* 32a507d0545e Haylrn Zhao <haylrn.zhao@wesion.com> dts: rockchip: Edge2: LED: Fix led_r to red_led
* d07420fac174 Haylrn Zhao <haylrn.zhao@wesion.com> dts: rockchip: Edge2: logo: Add 10inch mipi
* 3f82782875dd Xiong Zhang <xiong.zhang@wesion.com> drivers: rockchip: Edge2: TP: Added 10inch GT9xx driver support
* 79677831fc6e Xiong Zhang <xiong.zhang@wesion.com> driver: rockchip: Edge2: LED: Add MCU LED multiple registers control
* d3fb494b566b Xiong Zhang <xiong.zhang@wesion.com> driver: rockchip: Edge2: LED: Add MCU LED control
* 8069ab3f43a5 Haylrn Zhao <haylrn.zhao@wesion.com> dts: rockchip: Edge2: DP: Add usb_con (9v-12v)
* 7add002e2427 Haylrn Zhao <haylrn.zhao@wesion.com> dts: rockchip: Edge2: IR: Add khadas remote key value
* 1a84351928e3 Haylrn Zhao <haylrn.zhao@wesion.com> arm64: dts: rockchip: Edge2: DP: fix TypeC interface DP screen does not display
* d7beb1ee467a Goenjoy Huang <goenjoy@khadas.com> Drivers: rockchip: Edge2: Fix HDMI sound
* cb69ec999b83 Xiong Zhang <xiong.zhang@wesion.com> drivers: rockchip: Edge2: RTC: fix RTC drive and fail to set automatic startup on time
* 4aa73a442ace Xiong Zhang <xiong.zhang@wesion.com> Drivers: rockchip: Edge2: TP: Add edt-ft5x06 to wake the device
* 7dae976c9aca Goenjoy Huang <goenjoy@khadas.com> drivers: rockchip: Edge2: Audio: fix es8316 return value error of regmap_read
* ba09c47dd0ff Xiong Zhang <xiong.zhang@wesion.com> drivers: rockchip: Edge2: TP: Add edt-ft5x06 x, Y axis rotation
* 48f79c34edfd Goenjoy Huang <goenjoy@khadas.com> LEDS: fix leds label and LED Trigger off
* 751fb89c018e Goenjoy Huang <goenjoy@khadas.com> LOGO: Change the boot logo to khadas logo
* da07599f7ad8 Jack Zhao <jack.zhao@wesion.com> Edge2: fix startup priority mode error after crash restart
* fcfdde683206 Xiong Zhang <xiong.zhang@wesion.com> Edge2: fix startup priority mode error after restart
* 99323aaded0c Xiong Zhang <xiong.zhang@wesion.com> Edge2: add reboot test mode
* 504f76befadc Xiong Zhang <xiong.zhang@wesion.com> Edge2: add support fan function and sync khadas-mcu code
* 33fd16962c13 Goenjoy Huang <goenjoy@khadas.com> arm64: dts: rockchip: Edge2: enable spi1
* c77275ab2385 Goenjoy Huang <goenjoy@khadas.com> arm64: dts: rockchip: Edge2: add spi flash NOR support
* a58122967b3b Xiong Zhang <xiong.zhang@wesion.com> drivers: rockchip: Edge2: Audio: es8316 add mic2 support
* 0e11a15f5052 Goenjoy Huang <goenjoy@khadas.com> drivers: rockchip: Edge2: Audio: es8316 modify the maximum volume output power
* 733e12effb14 Xiong Zhang <xiong.zhang@wesion.com> drivers: rockchip: Edge2: Audio: change es8316 driver
* 1a955aeecff0 Goenjoy Huang <goenjoy@khadas.com> arm64: dts: Edge2: fix dp no sound [1/2]
* 3b95b2d1fd12 Xiong Zhang <xiong.zhang@wesion.com> audio: fix es8316 is not connected, but the sound card node comes out
* e83188f18606 Goenjoy Huang <goenjoy@khadas.com> Add root function support [4/4]
* a634ca3aeafd Goenjoy Huang <goenjoy@khadas.com> arm64: dts: Edge2: config dp for vp0
* 4e7f1feb0725 Xiong Zhang <xiong.zhang@wesion.com> arm64: dts: Edge2: config for board v11
* 7092777756f0 Xiong Zhang <xiong.zhang@wesion.com> Led: add led off trigger
* ef36ff2ddc25 Goenjoy Huang <goenjoy@khadas.com> arm64: dts: Edge2: fusb302: add 15v,18v,20v voltage output
* fbed53014b4b Xiong Zhang <xiong.zhang@wesion.com> Turn on Bluetooth mic [5/5]
* 368b6d2bf30a Xiong Zhang <xiong.zhang@wesion.com> drivers: rockchip: Edge2: Audio: Add es8316 driver and dts config
* d0dd8e6e05b6 Goenjoy Huang <goenjoy@khadas.com> arm64: dts: Edge2: TF: Fix TFcard config
* fee094cf13e1 Xiong Zhang <xiong.zhang@wesion.com> arm64: dts: Edge2: MIC: Add DMIC config
* 7a0abacb0e37 Xiong Zhang <xiong.zhang@wesion.com> arm64: dts: Edge2: LCD: Add mipi lcd config
* 8c1daff0c24c Xiong Zhang <xiong.zhang@wesion.com> drivers: rockchip: Edge2: LCD: Fix mipi panel reset pin control[2/2]
* 695f3eaacc4d Goenjoy Huang <goenjoy@khadas.com> arm64: dts: Edge2: camera: Add imx415 camera
* c9d7bfd0a473 Goenjoy Huang <goenjoy@khadas.com> arm64: dts: rockchip: Edge2: HDMI: Fix no sound
* 2c5b525f1c30 Xiong Zhang <xiong.zhang@wesion.com> drivers: rockchip: Edge2: RTC: Fix unable to enter deep sleep
* a1e650ad2a49 Xiong Zhang <xiong.zhang@wesion.com> arm64: dts: Edge2: MCU: Add khadas mcu driver
* 728d522acce2 Xiong Zhang <xiong.zhang@wesion.com> drivers: rockchip: Edge2: WATCHDOG: Add khadas watchdog driver
* 8cc6f86ba24d Xiong Zhang <xiong.zhang@wesion.com> drivers: rockchip: Edge2: led: Add khadas RGB led driver
* c79f9e9fd765 Goenjoy Huang <goenjoy@khadas.com> arm64: dts: rockchip: Edge2: KEY: config fun key for home key
* 134f4927f42d Xiong Zhang <xiong.zhang@wesion.com> drivers: rockchip: Edge2: TP: Add khadas TS050 TP
* 971736907a96 Xiong Zhang <xiong.zhang@wesion.com> Fix the error when compiling Edge2 for the first time
* bd87575e9439 Goenjoy Huang <goenjoy@khadas.com> drivers: rockchip: Edge2: gsensor: add kxtj3 driver
* 34a1090c9f45 Goenjoy Huang <goenjoy@khadas.com> arm64: dts: rockchip: Edge2: remove nonexistent configuration
* 9c4a1b7c1823 Goenjoy Huang <goenjoy@khadas.com> arm64: dts: rockchip: Edge2: I2C: Disabled i2c5
* 7c97e0df24ca Goenjoy Huang <goenjoy@khadas.com> arm64: dts: rockchip: Edge2: USB: Fix USB host 3.0
* ab9bca32d779 Goenjoy Huang <goenjoy@khadas.com> arm64: dts: rockchip: Edge2: bt: Fix bt gpio pin and uart [1/2] device/khadas/rk3588 [2/2]
* 580dda6f440c Goenjoy Huang <goenjoy@khadas.com> arm64: dts: rockchip: Edge2: wifi: Fix wifi pcie reset gpio pin
* e0a33f8158e0 Goenjoy Huang <goenjoy@khadas.com> arm64: dts: rockchip: Edge2: RTC: Fix pt7c4363 of RTC
* 35246b7d59c3 Xiong Zhang <xiong.zhang@wesion.com> arm64: dts: rockchip: Edge2: HDMI: Fix HDMI display
* e3b8111aada0 Goenjoy Huang <goenjoy@khadas.com> arm64: dts: rockchip: Edge2: DP: Fix fusb302 and DP display
* 0e9099b70b22 Xiong Zhang <xiong.zhang@wesion.com> arm64: dts: rockchip: Edge2: PMIC: Fix rk806, rk860 and vmmc-supply of sdmmc
* 2c4b173b8c43 Xiong Zhang <xiong.zhang@wesion.com> rk3588s-khadas-edge2.dts copied from rk3588s-evb1-lp4x-v10.dts and rk3588s-evb1-lp4x.dtsi rk3588s-khadas-edge2.dtsi copied from rk3588s-evb.dtsi kedge2_defconfig copied from rockchip_defconfig





* 1066f970fd45 Felix Zeng <felix.zeng@rock-chips.com> driver: rknpu: Update rknpu driver, version: 0.9.7
* f6fe60fe789d Shuangjie Lin <shuangjie.lin@rock-chips.com> arm64: mm: Export dcache_inval_poc/dcache_clean_poc to support rknpu cache invalid/clean
* a046ce3db19b Felix Zeng <felix.zeng@rock-chips.com> driver: rknpu: Add iommu limit IOVA alignment support
* 9b8a1a036ae3 Shuangjie Lin <shuangjie.lin@rock-chips.com> driver: rknpu: add power get/put for drm free memory
* fff8ec3ee904 Algea Cao <algea.cao@rock-chips.com> phy: rockchip-samsung-hdptx-hdmi: Fix phy pll is incorrectly configured when logo is enabled.
* 6b5001711698 Finley Xiao <finley.xiao@rock-chips.com> arm64: dts: rockchip: rk3576: Change opp volt for dmc and vop
* 93b016719a74 Yandong Lin <yandong.lin@rock-chips.com> video: rockchip: mpp: fix enc repeatedlly causeby hw bug for rk3576
* 2dba671ff972 Liang Chen <cl@rock-chips.com> arm64: dts: rockchip: rk3576: set default autocs div to 1 for vop
* ef144bac48c1 Finley Xiao <finley.xiao@rock-chips.com> arm64: dts: rockchip: rk3576: Add vop-bw-dmc-freq for dmc
* 08d0399d3e64 Sandy Huang <hjc@rock-chips.com> drm/rockchip: vop2: add aclk reset mode for iommu reset
* 2900ad1aa3bb Sandy Huang <hjc@rock-chips.com> arm64: dts: rockchip: rk3576: add aclk reset mode to vop opp table
* b1a66448ec76 Huibin Hong <huibin.hong@rock-chips.com> serial: 8250: fix bug rts is inactive when auto flow is enable
* d19a3fdb163f Johnson Ding <johnson.ding@rock-chips.com> video: rockchip: mpp: jpege: fix isr return value incorrect problem
* e905c8733068 Sandy Huang <hjc@rock-chips.com> drm/rockchip: vop2: force select BT601L for r2y when it is yuv overlay
* ff221183c84f Algea Cao <algea.cao@rock-chips.com> drm/rockchip: vop2: Set plane csc yuv path when DCI is enabled
* 90ab78b15e8d Shawn Lin <shawn.lin@rock-chips.com> scsi: ufs: rockchip: Remove UFSHCD_CAP_RPM_AUTOSUSPEND
*   4883c0b965d3 Tao Huang <huangtao@rock-chips.com> Merge commit '698311c7c05651868c543fbfa11075616f303dd4'
|\  
| * 698311c7c056 Sandy Huang <hjc@rock-chips.com> drm/rockchip: vop2: add support vop post CRC
| * be9a609b6e95 Zhang Yubing <yubing.zhang@rock-chips.com> drm/rockchip: dw_hdcp2: describe member of hl_device
| * 5fd3a7a18362 Luo Wei <lw@rock-chips.com> arm64: dts: rockchip: rk3576-vehicle-evb: enable reg check for display
| * 279edce686b1 Luo Wei <lw@rock-chips.com> mfd: display-serdes: detect lock gpio and register to check status
| * 9a010b3e2086 Finley Xiao <finley.xiao@rock-chips.com> arm64: dts: rockchip: rk3576-tablet-v10: Add vop-supply for vop
| * cff460658b81 Finley Xiao <finley.xiao@rock-chips.com> arm64: dts: rockchip: rk3576-evb: Add vop-supply for vop
| * ffec6aa54da6 Finley Xiao <finley.xiao@rock-chips.com> arm64: dts: rockchip: rk3576: Add opp table for vop
| * 4c23385ff2f9 Finley Xiao <finley.xiao@rock-chips.com> arm64: dts: rockchip: rk3576: Raise voltage for ddr and logic
| * d7be04f8ce58 Finley Xiao <finley.xiao@rock-chips.com> arm64: dts: rockchip: rk3576: Add opp-info for opp table
| * 8929e3990978 Finley Xiao <finley.xiao@rock-chips.com> arm64: dts: rockchip: rk3576: Raise voltage for cpu gpu and npu
| * 0dd79cc549e6 Jianwei Fan <jianwei.fan@rock-chips.com> media: i2c: rk628: post process add color bar debug node
| * 6d1aec84596f Wang Panzhenzhuan <randy.wang@rock-chips.com> media: i2c: ov16885: fix kernel-6.1 compile errors
| * 0f15907d0773 Zefa Chen <zefa.chen@rock-chips.com> media: rockchip: vicap add dma_fence to support low latency
| * 08afa04dc434 Cai Wenzhong <cwz@rock-chips.com> media: i2c: maxim: remote: dummy: init_regs using static function
| * 718382dfea95 Damon Ding <damon.ding@rock-chips.com> pwm: rockchip: keep the mode fixed in capture mode although pwm is disabled
| * 40e33abf50db Tao Huang <huangtao@rock-chips.com> drm/rockchip: vop: Fix kernel-doc warnings
| * 952d1e990270 Tao Huang <huangtao@rock-chips.com> drm/rockchip: vop2: Fix kernel-doc warnings
* | 13a49f23a9b8 Zorro Liu <lyx@rock-chips.com> drm/rockchip: ebc_dev: release version v6.05
* | eb5074ec31ae Shengfei Xu <xsf@rock-chips.com> arm64: rockchip_gki.config: enable CONFIG_ROCKCHIP_CHARGER_MANAGER
* | cf9037098703 Tao Huang <huangtao@rock-chips.com> Merge commit '765d26b690cc17eb5751b1b8328416d7b783cbc2'
|\| 
| * 765d26b690cc Cai Wenzhong <cwz@rock-chips.com> media: i2c: maxim: driver version v3.03.00
| * 4d5181c72f7e Cai Wenzhong <cwz@rock-chips.com> media: i2c: maxim: remote: rename sensor module ko, resolve duplicate name issues
| * c8cc4692596d Zhibin Huang <zhibin.huang@rock-chips.com> drm/panel: panel-simple: delete panel-notifier in loader protect
| * 056c54ef38e0 Liang Chen <cl@rock-chips.com> arm64: dts: rockchip: rk3576-eink: enable csu node
| * f343d47d0947 Liang Chen <cl@rock-chips.com> arm64: dts: rockchip: rk3576-tablet: enable csu node
| * 2e23135a1054 Zorro Liu <lyx@rock-chips.com> arm64: dts: rockchip: rk3576-ebook: add hall config for ultra sleep
| * 5c6d5ffd84ef Zorro Liu <lyx@rock-chips.com> input: sensors: hall: mh248: judge wakeup sources for hall sensor
| * 8e0f2bed6950 Zorro Liu <lyx@rock-chips.com> arm64: dts: rockchip: rk3576-ebook: set hall int pull up
| * 21cd7557bd24 Jon Lin <jon.lin@rock-chips.com> mtd: spi-nor: Fix the issue of buffer contamination
| * 75584d57e34d shengfei Xu <xsf@rock-chips.com> power: supply: rockchip-charger-manager: Add config for the charge pump
| * 3819eda0129f Algea Cao <algea.cao@rock-chips.com> drm/bridge: dw-hdmi-qp: Support hdmitx hdcp cts passed
| * 114fefc5269e Algea Cao <algea.cao@rock-chips.com> drm/rockchip: dw_hdmi: Support rk3576 hdcp2.3
| * c1d0507d6745 Zhang Yubing <yubing.zhang@rock-chips.com> drm/rockchip: dw_hdcp2: support rk3576
| * 927fd4ed970c Zefa Chen <zefa.chen@rock-chips.com> media: i2c: ov13850 fixes exposure range
| * 29e7837d1d60 Damon Ding <damon.ding@rock-chips.com> drm/rockchip: vop2: disable rb swap if using eDP in YUV444 output mode
| * db931a7165e4 Sandy Huang <hjc@rock-chips.com> drm/rockchip: dw_hdmi: no need to do crtc_clock div2
| * a269396080e2 Elaine Zhang <zhangqing@rock-chips.com> net: can: rockchip: Fix rockchip_canfd_start_xmit return type for GKI error
| * 70df1f691906 Cai YiWei <cyw@rock-chips.com> media: rockchip: isp: version v2.6.0
| * d0797df5138d Cai YiWei <cyw@rock-chips.com> media: rockchip: isp: update gic and check params for isp39
| * 6128a96972ee Tony Xie <tony.xie@rock-chips.com> arm64: dts: rockchip: rk3576: add csu
* | e0cd2915211b Tao Huang <huangtao@rock-chips.com> Merge commit '5a1ef132deeda7f9d85ff565e0e18b1f2a6e581a'
|\| 
| * 5a1ef132deed David Wu <david.wu@rock-chips.com> arm64: dts: rockchip: rk3576: Enable high speed interfaces use DMA coherent
* | 4c10fa51d770 Tao Huang <huangtao@rock-chips.com> Merge commit '15f661b3f5b9c4ed2a24ea4e9656394ed4c399f4'
|\| 
| * 15f661b3f5b9 Wangqiang Guo <kay.guo@rock-chips.com> media: rockchip: hdmirx: corrected color range/space judgment.




```



## 内核crash问题wakeup_source_register


```shell


[    3.163176][    T1] rga3 fdb60000.rga: Adding to iommu group 2
[    3.163709][    T1] list_add corruption. next->prev should be prev (ffffffc00a134a08), but was 0000000000000000. (next=ffffff81013c6ab8).
[    3.163740][    T1] ------------[ cut here ]------------
[    3.163747][    T1] kernel BUG at lib/list_debug.c:29!
[    3.163755][    T1] Internal error: Oops - BUG: 00000000f2000800 [#1] PREEMPT SMP
[    3.177338][   T74] mmc2: SDHCI controller on fe2e0000.mmc [fe2e0000.mmc] using ADMA
[    3.187720][    T1] Modules linked in:
[    3.187725][    T1] CPU: 2 PID: 1 Comm: swapper/0 Not tainted 6.1.57 #17
[    3.187730][    T1] Hardware name: BDY G98 (DT)
[    3.187732][    T1] pstate: 604000c9 (nZCv daIF +PAN -UAO -TCO -DIT -SSBS BTYPE=--)
[    3.187738][    T1] pc : __list_add_valid+0x9c/0xb8
[    3.190834][    T1] lr : __list_add_valid+0x9c/0xb8
[    3.191264][    T1] sp : ffffffc00a3fb7e0
[    3.191616][    T1] x29: ffffffc00a3fb7e0 x28: 0000000000000000 x27: 0000000000000000
[    3.192311][    T1] x26: 0000000000000000 x25: 0000000000000000 x24: 0000000000000003
[    3.193005][    T1] x23: ffffffc00a134a08 x22: ffffff81013c6ab8 x21: ffffff81042cb010
[    3.193699][    T1] x20: 0000000000000000 x19: ffffff81042cb000 x18: ffffffc00a3d50a8
[    3.194392][    T1] x17: 3830613433316130 x16: ffffffffffffffff x15: 0000000000000004
[    3.195086][    T1] x14: ffffffc009eedc18 x13: 0000000000003fff x12: 0000000000000003
[    3.195780][    T1] x11: 0000000000000003 x10: c0000000ffffbfff x9 : 1159d48749891e00
[    3.196474][    T1] x8 : 1159d48749891e00 x7 : 205b5d3930373336 x6 : 312e33202020205b
[    3.197167][    T1] x5 : ffffffc00a3377c7 x4 : ffffffc00a3fb537 x3 : 0000000000000000
[    3.197861][    T1] x2 : 0000000000000000 x1 : ffffffc00a3fb5a0 x0 : 0000000000000075
[    3.198554][    T1] Call trace:
[    3.198831][    T1]  __list_add_valid+0x9c/0xb8
[    3.199240][    T1]  wakeup_source_register+0x11c/0x158
[    3.199706][    T1]  device_wakeup_enable+0x50/0xc8
[    3.200135][    T1]  rga_drv_probe+0x23c/0x42c
[    3.200533][    T1]  platform_probe+0xa8/0xd0
[    3.200920][    T1]  really_probe+0x174/0x350
[    3.201308][    T1]  __driver_probe_device+0xa0/0x128
[    3.201759][    T1]  driver_probe_device+0x44/0x210
[    3.202190][    T1]  __driver_attach+0xf0/0x1b8
[    3.202598][    T1]  bus_for_each_dev+0x80/0xcc
[    3.203006][    T1]  driver_attach+0x24/0x30
[    3.203393][    T1]  bus_add_driver+0x10c/0x1f8
[    3.203801][    T1]  driver_register+0x78/0x114
[    3.204209][    T1]  __platform_driver_register+0x24/0x30
[    3.204692][    T1]  rga_init+0x6c/0x278
[    3.205048][    T1]  do_one_initcall+0xb4/0x2d4
[    3.205457][    T1]  do_initcall_level+0xa4/0x148
[    3.205876][    T1]  do_initcalls+0x54/0x94
[    3.206251][    T1]  do_basic_setup+0x1c/0x28
[    3.206637][    T1]  kernel_init_freeable+0xe0/0x158
[    3.207077][    T1]  kernel_init+0x20/0x1a0
[    3.207455][    T1]  ret_from_fork+0x10/0x20


然后我将mmc中的 host->ws = wakeup_source_register(NULL, dev_name(&host->class_dev)); 这个调用删掉，现在mmc正常了。但是呢，其他流程中也crash了

[    3.163176][    T1] rga3 fdb60000.rga: Adding to iommu group 2
[    3.163709][    T1] list_add corruption. next->prev should be prev (ffffffc00a134a08), but was 0000000000000000. (next=ffffff81013c6ab8).
[    3.163740][    T1] ------------[ cut here ]------------
[    3.163747][    T1] kernel BUG at lib/list_debug.c:29!
[    3.163755][    T1] Internal error: Oops - BUG: 00000000f2000800 [#1] PREEMPT SMP
[    3.177338][   T74] mmc2: SDHCI controller on fe2e0000.mmc [fe2e0000.mmc] using ADMA
[    3.187720][    T1] Modules linked in:
[    3.187725][    T1] CPU: 2 PID: 1 Comm: swapper/0 Not tainted 6.1.57 #17
[    3.187730][    T1] Hardware name: BDY G98 (DT)
[    3.187732][    T1] pstate: 604000c9 (nZCv daIF +PAN -UAO -TCO -DIT -SSBS BTYPE=--)
[    3.187738][    T1] pc : __list_add_valid+0x9c/0xb8
[    3.190834][    T1] lr : __list_add_valid+0x9c/0xb8
[    3.191264][    T1] sp : ffffffc00a3fb7e0
[    3.191616][    T1] x29: ffffffc00a3fb7e0 x28: 0000000000000000 x27: 0000000000000000
[    3.192311][    T1] x26: 0000000000000000 x25: 0000000000000000 x24: 0000000000000003
[    3.193005][    T1] x23: ffffffc00a134a08 x22: ffffff81013c6ab8 x21: ffffff81042cb010
[    3.193699][    T1] x20: 0000000000000000 x19: ffffff81042cb000 x18: ffffffc00a3d50a8
[    3.194392][    T1] x17: 3830613433316130 x16: ffffffffffffffff x15: 0000000000000004
[    3.195086][    T1] x14: ffffffc009eedc18 x13: 0000000000003fff x12: 0000000000000003
[    3.195780][    T1] x11: 0000000000000003 x10: c0000000ffffbfff x9 : 1159d48749891e00
[    3.196474][    T1] x8 : 1159d48749891e00 x7 : 205b5d3930373336 x6 : 312e33202020205b
[    3.197167][    T1] x5 : ffffffc00a3377c7 x4 : ffffffc00a3fb537 x3 : 0000000000000000
[    3.197861][    T1] x2 : 0000000000000000 x1 : ffffffc00a3fb5a0 x0 : 0000000000000075
[    3.198554][    T1] Call trace:
[    3.198831][    T1]  __list_add_valid+0x9c/0xb8
[    3.199240][    T1]  wakeup_source_register+0x11c/0x158
[    3.199706][    T1]  device_wakeup_enable+0x50/0xc8
[    3.200135][    T1]  rga_drv_probe+0x23c/0x42c
[    3.200533][    T1]  platform_probe+0xa8/0xd0
[    3.200920][    T1]  really_probe+0x174/0x350
[    3.201308][    T1]  __driver_probe_device+0xa0/0x128
[    3.201759][    T1]  driver_probe_device+0x44/0x210
[    3.202190][    T1]  __driver_attach+0xf0/0x1b8
[    3.202598][    T1]  bus_for_each_dev+0x80/0xcc
[    3.203006][    T1]  driver_attach+0x24/0x30
[    3.203393][    T1]  bus_add_driver+0x10c/0x1f8
[    3.203801][    T1]  driver_register+0x78/0x114
[    3.204209][    T1]  __platform_driver_register+0x24/0x30
[    3.204692][    T1]  rga_init+0x6c/0x278
[    3.205048][    T1]  do_one_initcall+0xb4/0x2d4
[    3.205457][    T1]  do_initcall_level+0xa4/0x148
[    3.205876][    T1]  do_initcalls+0x54/0x94
[    3.206251][    T1]  do_basic_setup+0x1c/0x28
[    3.206637][    T1]  kernel_init_freeable+0xe0/0x158
[    3.207077][    T1]  kernel_init+0x20/0x1a0
[    3.207455][    T1]  ret_from_fork+0x10/0x20
```

```text
3.396729 T117 list_add corruption
3.396785 kernel BUG at lib/list_debug.c:29
...
CPU: 2 PID: 117 Comm: kworker/u16:4
Workqueue: events_unbound async_run_entry_fn
...
pc : __list_add_valid+0x9c/0xb8
...
Call trace:
 __list_add_valid
 wakeup_source_register
 mmc_alloc_host
 sdhci_alloc_host
 sdhci_pltfm_init
 dwcmshc_probe
 platform_probe
 really_probe
 __driver_probe_device


```



```text

dwcmshc_probe()
    ↓
sdhci_pltfm_init()
    ↓
sdhci_alloc_host()
    ↓
mmc_alloc_host()
    ↓
wakeup_source_register()
    ↓
list_add()
    ↓
list_add corruption



```

为什么明明 eMMC 启动，Linux 还是初始化 SPI？

这里其实有两个完全不同的 SPI。

SPI #1：RK806 PMIC

日志：
```text

spi spi2.0: ...
rk806 spi2.0: chip id: RK806
rockchip-spi feb20000.spi: probed

```
这个 SPI 是：

```text
feb20000.spi
└── spi2.0
└── rk806single@0

```
也就是 RK806 PMIC 所使用的 SPI 总线。

证据非常明确：

```text
spi spi2.0 ...
rk806 spi2.0: chip id: RK806,ver:0x2, 0x1
rk806 spi2.0: ON: 0x40 OFF:0x0
rockchip-spi feb20000.spi: probed
```

真正触发 BUG_ON 的不是逻辑错误本身，而是 list_debug.c 里的一致性校验失败:
list_add corruration. next->prev should be prev (...), but was 0000000000000000

```text
__list_add_valid
  <- wakeup_source_register // drivers/mmc/core/host.c +555
    <- mmc_alloc_host
      <- sdhci_alloc_host
        <- sdhci_pltfm_init
          <- dwcmshc_probe
            <- platform_probe
              <- ... <- async_run_entry_fn (kworker/u16:4, CPU2)
```


```c
525 struct mmc_host *mmc_alloc_host(int extra, struct device *dev)
  1 {
  2 |---int index;
  3 |---struct mmc_host *host;
  4 |---int alias_id, min_idx, max_idx;
  5 
  6 |---host = kzalloc(sizeof(struct mmc_host) + extra, GFP_KERNEL);
  7 |---if (!host)
  8 |---|---return NULL;
  9 
 10 |---/* scanning will be enabled when we're ready */
 11 |---host->rescan_disable = 1;
 12 
 13 |---alias_id = of_alias_get_id(dev->of_node, "mmc");
 14 |---if (alias_id >= 0) {
 15 |---|---index = alias_id;
 16 |---} else {
 17 |---|---min_idx = mmc_first_nonreserved_index();
 18 |---|---max_idx = 0;
 19 
 20 |---|---index = ida_simple_get(&mmc_host_ida, min_idx, max_idx, GFP_KERNEL);
 21 |---|---if (index < 0) {
 22 |---|---|---kfree(host);
 23 |---|---|---return NULL;
 24 |---|---}
 25 |---}
 26 
 27 |---host->index = index;
 28 
 29 |---dev_set_name(&host->class_dev, "mmc%d", host->index);
 30 |---host->ws = wakeup_source_register(NULL, dev_name(&host->class_dev));
 31 
 32 |---host->parent = dev;
 33 |---host->class_dev.parent = dev;
 34 |---host->class_dev.class = &mmc_host_class;
 35 |---device_initialize(&host->class_dev);
 36 |---device_enable_async_suspend(&host->class_dev);
 37 
 38 |---if (mmc_gpio_alloc(host)) {
 39 |---|---put_device(&host->class_dev);
 40 |---|---return NULL;
 41 |---}
 42 
 43 |---spin_lock_init(&host->lock);
 44 |---init_waitqueue_head(&host->wq);
 45 |---INIT_DELAYED_WORK(&host->detect, mmc_rescan);
 46 |---INIT_WORK(&host->sdio_irq_work, sdio_irq_work);
 47 |---timer_setup(&host->retune_timer, mmc_retune_timer, 0);

```

根因是 dwcmshc 驱动的 PROBE_PREFER_ASYNCHRONOUS 导致多个 MMC 控制器并发 probe 时，wakeup source 全局链表被损坏（大概率是某个 probe 失败路径提前释放了未完全初始化的 host 结构体）。推荐方案一，去掉异步 probe 标记即可

```shell
console:/ # cat /sys/kernel/debug/wakeup_sources
name		active_count	event_count	wakeup_count	expire_count	active_since	total_time	max_time	last_change	prevent_suspend_time
event0      	0		0		0		0		0		0		0		0		0
event1      	0		0		0		0		0		0		0		0		0
event2      	0		0		0		0		0		0		0		0		0
            	12		12		0		0		0		2		0		38114		0
inotify     	2		2		0		0		0		0		0		18646		0
eventpoll   	14		14		0		0		0		0		0		38114		0
[timerfd]   	2		2		0		0		0		3		2		10878		0
[timerfd]   	0		0		0		0		0		0		0		0		0
[timerfd]   	2		2		0		0		0		1		1		46876		0
[timerfd]   	2		2		0		0		0		2		2		24661		0
[timerfd]   	0		0		0		0		0		0		0		0		0
[timerfd]   	0		0		0		0		0		0		0		0		0
eventpoll   	6		6		0		0		0		0		0		46876		0
NETLINK     	622		624		0		0		0		19		1		47693		0
[timerfd]   	0		0		0		0		0		0		0		0		0
eventpoll   	622		622		0		0		0		0		0		47693		0
gpu         	6		6		0		0		0		17410		15718		47196		0
fdc70000.av1d	0		0		0		0		0		0		0		0		0
fdbe0000.rkvenc-core	0		0		0		0		0		0		0		0		0
fdbd0000.rkvenc-core	0		0		0		0		0		0		0		0		0
fdc48100.rkvdec-core	0		0		0		0		0		0		0		0		0
fdc38100.rkvdec-core	0		0		0		0		0		0		0		0		0
fdb90000.jpegd	0		0		0		0		0		0		0		0		0
fdbb0000.iep	0		0		0		0		0		0		0		0		0
fdbac000.jpege-core	0		0		0		0		0		0		0		0		0
fdba8000.jpege-core	0		0		0		0		0		0		0		0		0
fdba4000.jpege-core	0		0		0		0		0		0		0		0		0
fdba0000.jpege-core	0		0		0		0		0		0		0		0		0
fdb50000.vepu	0		0		0		0		0		0		0		0		0
fdb50400.vdpu	0		0		0		0		0		0		0		0		0
fdb51000.avsd-plus	0		0		0		0		0		0		0		0		0
fdb80000.rga	0		0		0		0		0		0		0		0		0
fdb70000.rga	0		0		0		0		0		0		0		0		0
fdb60000.rga	0		0		0		0		0		0		0		0		0
mmc2        	0		0		0		0		0		0		0		0		0
(null)      	0		0		0		0		0		0		0		0		0
cat: /sys/kernel/debug/wakeup_sources: Device or resource busy
```


解决办法：
开启kasan

```text
[   31.980008][   T74] hub 4-0:1.0: 1 port detected
[   31.991874][    T1] ==================================================================
[   31.991908][    T1] BUG: KASAN: use-after-free in __list_del_entry_valid+0x5c/0x11c
[   31.991950][    T1] Read of size 8 at addr ffffff8106ad68b8 by task swapper/0/1
[   31.991976][    T1] 
[   31.991995][    T1] CPU: 4 PID: 1 Comm: swapper/0 Not tainted 6.1.57 #32
[   31.992024][    T1] Hardware name: BDY G98 (DT)
[   31.992044][    T1] Call trace:
[   31.992062][    T1]  dump_backtrace+0xf4/0x114
[   31.992096][    T1]  show_stack+0x18/0x24
[   31.992125][    T1]  dump_stack_lvl+0x6c/0x90
[   31.992154][    T1]  print_report+0x144/0x6a8
[   31.992183][    T1]  kasan_report+0xc4/0x11c
[   31.992211][    T1]  __asan_load8+0xa8/0xac
[   31.992240][    T1]  __list_del_entry_valid+0x5c/0x11c
[   31.992269][    T1]  wakeup_source_unregister+0x34/0xe0
[   31.992298][    T1]  device_wakeup_disable+0x60/0x74
[   31.992324][    T1]  i2c_device_probe+0x314/0x378
[   31.992352][    T1]  really_probe+0x188/0x4d8
[   31.992382][    T1]  __driver_probe_device+0xd8/0x180
[   31.992412][    T1]  driver_probe_device+0x6c/0x1dc
[   31.992442][    T1]  __device_attach_driver+0x1b0/0x1d8
[   31.992473][    T1]  bus_for_each_drv+0xa8/0x108
[   31.992502][    T1]  __device_attach+0x11c/0x190
[   31.992531][    T1]  device_initial_probe+0x14/0x20
[   31.992561][    T1]  bus_probe_device+0x50/0xec
[   31.992589][    T1]  device_add+0x444/0x71c
[   31.992615][    T1]  device_register+0x20/0x30
[   31.992641][    T1]  i2c_new_client_device+0x3b4/0x474
[   31.992668][    T1]  of_i2c_register_devices+0xfc/0x1b8
[   31.992696][    T1]  i2c_register_adapter+0x634/0x7c0
[   31.992723][    T1]  i2c_add_numbered_adapter+0x78/0xb8
[   31.992750][    T1]  rk3x_i2c_probe+0x58c/0x678
[   31.992780][    T1]  platform_probe+0xbc/0xf0
[   31.992807][    T1]  really_probe+0x188/0x4d8
[   31.992836][    T1]  __driver_probe_device+0xd8/0x180
[   31.992866][    T1]  driver_probe_device+0x6c/0x1dc
[   31.992896][    T1]  __driver_attach+0x150/0x26c
[   31.992925][    T1]  bus_for_each_dev+0xa4/0xf8
[   31.992953][    T1]  driver_attach+0x34/0x44
[   31.992982][    T1]  bus_add_driver+0x17c/0x290
[   31.993010][    T1]  driver_register+0xf0/0x1c8
[   31.993035][    T1]  __platform_driver_register+0x40/0x50
[   31.993063][    T1]  rk3x_i2c_driver_init+0x1c/0x28
[   31.993095][    T1]  do_one_initcall+0xe0/0x3b8
[   31.993121][    T1]  do_initcall_level+0xd4/0x1d4
[   31.993150][    T1]  do_initcalls+0x54/0x98
[   31.993177][    T1]  do_basic_setup+0x64/0x78
[   31.993205][    T1]  kernel_init_freeable+0x138/0x1b0
[   31.993233][    T1]  kernel_init+0x20/0x1b0
[   31.993261][    T1]  ret_from_fork+0x10/0x20
[   31.993288][    T1] 
[   31.993304][    T1] Allocated by task 1:
[   31.993324][    T1]  kasan_set_track+0x4c/0x80
[   31.993353][    T1]  kasan_save_alloc_info+0x24/0x30
[   31.993383][    T1]  __kasan_kmalloc+0x9c/0xb4
[   31.993410][    T1]  __kmalloc_node_track_caller+0xcc/0x1e0
[   31.993443][    T1]  devm_kmalloc+0x54/0x104
[   31.993470][    T1]  hym8563_probe+0x78/0x6ec
[   31.993499][    T1]  i2c_device_probe+0x2d4/0x378
[   31.993525][    T1]  really_probe+0x188/0x4d8
[   31.993554][    T1]  __driver_probe_device+0xd8/0x180
[   31.993583][    T1]  driver_probe_device+0x6c/0x1dc
[   31.993613][    T1]  __device_attach_driver+0x1b0/0x1d8
[   31.993643][    T1]  bus_for_each_drv+0xa8/0x108
[   31.993671][    T1]  __device_attach+0x11c/0x190
[   31.993700][    T1]  device_initial_probe+0x14/0x20
[   31.993729][    T1]  bus_probe_device+0x50/0xec
[   31.993757][    T1]  device_add+0x444/0x71c
[   31.993783][    T1]  device_register+0x20/0x30
[   31.993807][    T1]  i2c_new_client_device+0x3b4/0x474
[   31.993834][    T1]  of_i2c_register_devices+0xfc/0x1b8
[   31.993862][    T1]  i2c_register_adapter+0x634/0x7c0
[   31.993889][    T1]  i2c_add_numbered_adapter+0x78/0xb8
[   31.993915][    T1]  rk3x_i2c_probe+0x58c/0x678
[   31.993944][    T1]  platform_probe+0xbc/0xf0
[   31.993969][    T1]  really_probe+0x188/0x4d8
[   31.993998][    T1]  __driver_probe_device+0xd8/0x180
[   31.994028][    T1]  driver_probe_device+0x6c/0x1dc
[   31.994057][    T1]  __driver_attach+0x150/0x26c
[   31.994086][    T1]  bus_for_each_dev+0xa4/0xf8
[   31.994114][    T1]  driver_attach+0x34/0x44
[   31.994142][    T1]  bus_add_driver+0x17c/0x290
[   31.994170][    T1]  driver_register+0xf0/0x1c8
[   31.994195][    T1]  __platform_driver_register+0x40/0x50
[   31.994222][    T1]  rk3x_i2c_driver_init+0x1c/0x28
[   31.994251][    T1]  do_one_initcall+0xe0/0x3b8
[   31.994277][    T1]  do_initcall_level+0xd4/0x1d4
[   31.994305][    T1]  do_initcalls+0x54/0x98
[   31.994331][    T1]  do_basic_setup+0x64/0x78
[   31.994358][    T1]  kernel_init_freeable+0x138/0x1b0
[   31.994387][    T1]  kernel_init+0x20/0x1b0
[   31.994413][    T1]  ret_from_fork+0x10/0x20
[   31.994440][    T1] 
[   31.994456][    T1] Freed by task 1:
[   31.994476][    T1]  kasan_set_track+0x4c/0x80
[   31.994503][    T1]  kasan_save_free_info+0x38/0x5c
[   31.994533][    T1]  ____kasan_slab_free+0x10c/0x15c
[   31.994561][    T1]  __kasan_slab_free+0x18/0x28
[   31.994589][    T1]  slab_free_freelist_hook+0xec/0x1a8
[   31.994617][    T1]  __kmem_cache_free+0x9c/0x1c8
[   31.994643][    T1]  kfree+0x6c/0x114
[   31.994671][    T1]  release_nodes+0xa4/0x18c
[   31.994698][    T1]  devres_release_group+0x11c/0x170
[   31.994726][    T1]  i2c_device_probe+0x2f8/0x378
[   31.994751][    T1]  really_probe+0x188/0x4d8
[   31.994780][    T1]  __driver_probe_device+0xd8/0x180
[   31.994809][    T1]  driver_probe_device+0x6c/0x1dc
[   31.994839][    T1]  __device_attach_driver+0x1b0/0x1d8
[   31.994869][    T1]  bus_for_each_drv+0xa8/0x108
[   31.994897][    T1]  __device_attach+0x11c/0x190
[   31.994926][    T1]  device_initial_probe+0x14/0x20
[   31.994955][    T1]  bus_probe_device+0x50/0xec
[   31.994983][    T1]  device_add+0x444/0x71c
[   31.995009][    T1]  device_register+0x20/0x30
[   31.995034][    T1]  i2c_new_client_device+0x3b4/0x474
[   31.995060][    T1]  of_i2c_register_devices+0xfc/0x1b8
[   31.995088][    T1]  i2c_register_adapter+0x634/0x7c0
[   31.995114][    T1]  i2c_add_numbered_adapter+0x78/0xb8
[   31.995141][    T1]  rk3x_i2c_probe+0x58c/0x678
[   31.995169][    T1]  platform_probe+0xbc/0xf0
[   31.995195][    T1]  really_probe+0x188/0x4d8
[   31.995224][    T1]  __driver_probe_device+0xd8/0x180
[   31.995254][    T1]  driver_probe_device+0x6c/0x1dc
[   31.995283][    T1]  __driver_attach+0x150/0x26c
[   31.995312][    T1]  bus_for_each_dev+0xa4/0xf8
[   31.995340][    T1]  driver_attach+0x34/0x44
[   31.995368][    T1]  bus_add_driver+0x17c/0x290
[   31.995396][    T1]  driver_register+0xf0/0x1c8
[   31.995420][    T1]  __platform_driver_register+0x40/0x50
[   31.995448][    T1]  rk3x_i2c_driver_init+0x1c/0x28
[   31.995477][    T1]  do_one_initcall+0xe0/0x3b8
[   31.995503][    T1]  do_initcall_level+0xd4/0x1d4
[   31.995531][    T1]  do_initcalls+0x54/0x98
[   31.995557][    T1]  do_basic_setup+0x64/0x78
[   31.995584][    T1]  kernel_init_freeable+0x138/0x1b0
[   31.995613][    T1]  kernel_init+0x20/0x1b0
[   31.995639][    T1]  ret_from_fork+0x10/0x20
[   31.995666][    T1] 
[   31.995682][    T1] The buggy address belongs to the object at ffffff8106ad6800
[   31.995682][    T1]  which belongs to the cache kmalloc-512 of size 512
[   31.995710][    T1] The buggy address is located 184 bytes inside of
[   31.995710][    T1]  512-byte region [ffffff8106ad6800, ffffff8106ad6a00)
[   31.995739][    T1] 
[   31.995755][    T1] The buggy address belongs to the physical page:
[   31.995775][    T1] page:0000000085f79df1 refcount:1 mapcount:0 mapping:0000000000000000 index:0x0 pfn:0x106ad0
[   31.995805][    T1] head:0000000085f79df1 order:3 compound_mapcount:0 compound_pincount:0
[   31.995830][    T1] flags: 0x4000000000010200(slab|head|zone=1)
[   31.995863][    T1] raw: 4000000000010200 0000000000000000 dead000000000122 ffffff8100002780
[   31.995892][    T1] raw: 0000000000000000 0000000080200020 00000001ffffffff 0000000000000000
[   31.995914][    T1] page dumped because: kasan: bad access detected
[   31.995933][    T1] 
[   31.995950][    T1] Memory state around the buggy address:
[   31.995971][    T1]  ffffff8106ad6780: fc fc fc fc fc fc fc fc fc fc fc fc fc fc fc fc
[   31.995995][    T1]  ffffff8106ad6800: fa fb fb fb fb fb fb fb fb fb fb fb fb fb fb fb
[   31.996019][    T1] >ffffff8106ad6880: fb fb fb fb fb fb fb fb fb fb fb fb fb fb fb fb
[   31.996040][    T1]                                         ^
[   31.996062][    T1]  ffffff8106ad6900: fb fb fb fb fb fb fb fb fb fb fb fb fb fb fb fb
[   31.996086][    T1]  ffffff8106ad6980: fb fb fb fb fb fb fb fb fb fb fb fb fb fb fb fb
[   31.996107][    T1] ==================================================================
[   31.996126][    T1] Disabling lock debugging due to kernel taint
[   32.005021][    T1] rockchip-mipi-csi2-hw fdd10000.mipi0-csi2-hw: enter mipi csi2 hw probe!
[   32.005570][    T1] rockchip-mipi-csi2-hw fdd10000.mipi0-csi2-hw: probe success, v4l2_dev:mipi0-csi2-hw!
[   32.005739][    T1] rockchip-mipi-csi2-hw fdd20000.mipi1-csi2-hw: enter mipi csi2 hw probe!
[   32.006213][    T1] rockchip-mipi-csi2-hw fdd20000.mipi1-csi2-hw: probe success, v4l2_dev:mipi1-csi2-hw!
[   32.006370][    T1] rockchip-mipi-csi2-hw fdd30000.mipi2-csi2-hw: enter mipi csi2 hw probe!
[   32.006841][    T1] rockchip-mipi-csi2-hw fdd30000.mipi2-csi2-hw: probe success, v4l2_dev:mipi2-csi2-hw!
[   32.006999][    T1] rockchip-mipi-csi2-hw fdd40000.mipi3-csi2-hw: enter mipi csi2 hw probe!
[   32.007489][    T1] rockchip-mipi-csi2-hw fdd40000.mipi3-csi2-hw: probe success, v4l2_dev:mipi3-csi2-hw!
[   32.007650][    T1] rockchip-mipi-csi2-hw fdd50000.mipi4-csi2-hw: enter mipi csi2 hw probe!
[   32.008117][    T1] rockchip-mipi-csi2-hw fdd50000.mipi4-csi2-hw: probe success, v4l2_dev:mipi4-csi2-hw!
[   32.008271][    T1] rockchip-mipi-csi2-hw fdd60000.mipi5-csi2-hw: enter mipi csi2 hw probe!
[   32.008728][    T1] rockchip-mipi-csi2-hw fdd60000.mipi5-csi2-hw: probe success, v4l2_dev:mipi5-csi2-hw!
[   32.018003][    T1] usbcore: registered new interface driver uvcvideo
[   32.020069][    T1] test_power_init: could not find dev node
[   32.021778][    T1] device-mapper: uevent: version 1.0.3
[   32.022671][    T1] device-mapper: ioctl: 4.47.0-ioctl (2022-07-28) initialised: dm-devel@redhat.com
[   32.023371][    T1] Bluetooth: HCI UART driver ver 2.3
[   32.023397][    T1] Bluetooth: HCI UART protocol H4 registered
[   32.026032][    T1] cpu cpu0: bin=0
[   32.026276][    T1] cpu cpu0: leakage=9
[   32.028150][    T1] cpu cpu0: pvtm=1391
[   32.028680][    T1] cpu cpu0: pvtm-volt-sel=0
[   32.032074][    T1] cpu cpu4: bin=0
[   32.032309][    T1] cpu cpu4: leakage=7
[   32.039295][    T1] cpu cpu4: pvtm=1599
[   32.043667][    T1] cpu cpu4: pvtm-volt-sel=1
[   32.047709][    T1] cpu cpu6: bin=0


```

成功捕获错误点，是rtc模块

问题在于：

1. hym8563_probe() 在探测过程中调用了 device_init_wakeup(&client->dev, true)，把 RTC 报警中断注册为唤醒源，dev->power.wakeup 由此持有一个和该驱动私有数据结构生命周期绑定（或指向其内部）的 wakeup source。
2. 之后 hym8563_probe() 在某个后续步骤失败并返回错误（比如 devm_rtc_register_device()、nvmem/clkout 注册失败等），但没有在自己的错误分支里对称地调用 device_init_wakeup(&client->dev, false) 来撤销第1步的唤醒使能。
3. probe 返回失败后，i2c core 先执行 devres_release_group()，把 hym8563 探测期间用 devm_kzalloc/devm_kmalloc 申请的私有结构体整块释放掉。
4. 紧接着 i2c core 又调用 device_wakeup_disable() 去清理第1步注册的唤醒源，但此时 dev->power.wakeup 指向的对象（或与之关联的内存）已经被上一步释放，wakeup_source_unregister() 里的 list_del() 就读到了已释放内存 → KASAN UAF。

简单说：这是一个"唤醒源注册/注销"与"devm 资源释放"之间的时序竞争/资源生命周期不对称问题——驱动在 probe 中途失败时没有自己撤销已经生效的 wakeup 使能，导致核心层的清理顺序（先释放 devm 资源、后处理 wakeup source）踩到了野指针。


修改方法：让 hym8563 自己对称清理

在 drivers/rtc/rtc-hym8563.c 的 hym8563_probe() 中，凡是调用了 device_init_wakeup(&client->dev, true) 之后的失败路径，都要显式撤销：




问题的根因非常明确

```c
struct hym8563 {
    struct i2c_client   *client;
    struct mutex         mutex;
    struct rtc_device   *rtc;
    struct rtc_wkalrm    alarm;
    struct wake_lock     wake_lock;   // ← 关键！
#ifdef CONFIG_COMMON_CLK
    struct clk_hw        clkout_hw;
#endif
};
```

`linux/wakelock.h`（Android 兼容层）里 `struct wake_lock` 是**内嵌**一个 `struct wakeup_source`（不是指针）：
```c
struct wake_lock {
    struct wakeup_source ws;
};
```

而第 834 行：
```c
wake_lock_init(&hym8563->wake_lock, WAKE_LOCK_SUSPEND, "rtc_hym8563");
```
最终会调用 `wakeup_source_add()`：
```c
list_add_rcu(&ws->entry, &wakeup_sources);   // 全局链表！
```

也就是说：**`hym8563->wake_lock.ws.entry` 这个 `list_head` 被链入了内核全局 `wakeup_sources` 链表，而它本身却物理存在于 `devm_kzalloc()` 分配出来的 `hym8563` 结构体内部**（偏移量正好对得上 KASAN 报的 184 字节：`client`指针 + `mutex` + `rtc`指针 + `alarm` 之后差不多就是 `wake_lock` 的位置）。

再看 `hym8563_probe()` 里，从第 834 行 `wake_lock_init()` 之后一路到函数结尾，**几乎每一个失败分支都是直接 `return ret;`**（第 848、859、872 行等），**没有任何一处调用 `wake_lock_destroy()`** 把这个内嵌的 wakeup source 从全局链表摘下来。整个驱动甚至根本没有 `.remove()` 回调。

于是完整的崩溃链条是：

1. `hym8563_probe()` 某一步失败（比如 i2c 读取失败、`devm_rtc_device_register()` 失败），函数 `return` 错误码，**但 `wake_lock.ws.entry` 仍然挂在全局 `wakeup_sources` 链表上**。
2. i2c core 发现 probe 失败，调用 `devres_release_group()`，把整个 `hym8563`（含内嵌的 `wake_lock.ws`）**连内存带链表节点一起释放掉**——这本身就已经是"链表节点还挂在链上就被 free"的 BUG。
3. i2c core 紧接着调用 `device_wakeup_disable()` → `wakeup_source_unregister()` 处理另一个（合法注册的）wakeup source，这个操作会 `list_del`/遍历全局链表，链表里相邻节点正好是刚被释放、但指针还留在链表中的 `hym8563->wake_lock.ws.entry` → **触碰已释放内存 → KASAN UAF**，与报错栈里 `wakeup_source_unregister → __list_del_entry_valid`、以及释放者是 `hym8563_probe` 里的 `devm_kzalloc` 完全吻合。


最稳妥的做法：用 `devm_add_action_or_reset()` 把 `wake_lock_destroy()` 注册为 devm 清理动作，这样**无论 probe 在哪一步失败、也无论以后有没有写 `.remove()`**，devm 释放这块内存之前，一定会先把 `wake_lock` 从全局链表摘除，顺序绝对正确。Patch 结构没问题。现在把修复后的文件交付给你。## 改动说明

**核心修复**（解决 KASAN UAF）：
- 新增 `hym8563_wake_lock_destroy()`，在 `wake_lock_init()` 之后立刻用 `devm_add_action_or_reset()` 挂到 devm 生命周期上。这样不管 probe 后面在哪一行 `return`，devm 释放 `hym8563` 结构体之前，`wake_lock.ws.entry` 一定先从全局 `wakeup_sources` 链表摘除，从根本上消除"链表节点还挂着就被 free"的场景。

**顺带修复**（健壮性，非本次崩溃直因）：
- `device_init_wakeup(&client->dev, true)` 同样配上 `devm_add_action_or_reset(hym8563_wakeup_disable)`，保证 enable/disable 配对，不再依赖 i2c core 的错误路径去兜底。
- `hym8563_init_device()` 的返回值原来被忽略，现在会检查并打印警告（虽不是崩溃原因，但属于明显的疏漏）。

**没有改动但值得注意**：
- 这个驱动完全没有 `.remove()` 回调。以前如果走到 `rmmod`/解绑，`wake_lock` 同样会被 devm 静默释放而不从全局链表摘除——用 `devm_add_action_or_reset` 修复后这个路径也一并被覆盖了，不需要再单独写 `.remove()`。

建议编译后用 `CONFIG_KASAN` 内核，故意让 `i2c_smbus_read_byte_data()` 或 `devm_rtc_device_register()` 失败一次（比如临时改探针让其返回错误），验证不再触发 UAF。



## 执行重启会crash问题


```text
[   19.303339][    T1] xhci-hcd xhci-hcd.3.auto: USB bus 1 deregistered
[   19.504328][    T1] Unable to handle kernel NULL pointer dereference at virtual address 0000000000000000
[   19.505162][    T1] Mem abort info:
[   19.505476][    T1]   ESR = 0x0000000096000005
[   19.505868][    T1]   EC = 0x25: DABT (current EL), IL = 32 bits
[   19.506401][    T1]   SET = 0, FnV = 0
[   19.506752][    T1]   EA = 0, S1PTW = 0
[   19.507101][    T1]   FSC = 0x05: level 1 translation fault
[   19.507591][    T1] Data abort info:
[   19.507914][    T1]   ISV = 0, ISS = 0x00000005
[   19.508315][    T1]   CM = 0, WnR = 0
[   19.508640][    T1] user pgtable: 4k pages, 39-bit VAs, pgdp=00000001038ab000
[   19.509273][    T1] [0000000000000000] pgd=0000000000000000, p4d=0000000000000000, pud=0000000000000000
[   19.510111][    T1] Internal error: Oops: 0000000096000005 [#1] PREEMPT SMP
[   19.510725][    T1] Modules linked in:
[   19.511062][    T1] CPU: 0 PID: 1 Comm: init Not tainted 6.1.57 #14
[   19.511618][    T1] Hardware name: BDY G98 (DT)
[   19.512021][    T1] pstate: 60400009 (nZCv daif +PAN -UAO -TCO -DIT -SSBS BTYPE=--)
[   19.512699][    T1] pc : mcu_reboot_boot_mode+0x38/0xe0
[   19.513176][    T1] lr : kernel_restart+0xcc/0x110
[   19.513605][    T1] sp : ffffffc00a47bc60
[   19.513961][    T1] x29: ffffffc00a47bc80 x28: ffffff8100470000 x27: 0000000000000000
[   19.514655][    T1] x26: 0000000000000000 x25: 0000000000000000 x24: 0000000000000000
[   19.515348][    T1] x23: 0000000040001000 x22: 0000000028121969 x21: 00000000a1b2c3d4
[   19.516041][    T1] x20: 0000000000000000 x19: ffffffc00a47bcd8 x18: ffffffc00a455040
[   19.516736][    T1] x17: 0000f4040044ffff x16: 0000000000000001 x15: 0000000000000010
[   19.517429][    T1] x14: 00000001038ab000 x13: 0000000000000001 x12: 0000000000000001
[   19.518123][    T1] x11: ffffffc009ee5180 x10: 0000000000000018 x9 : 0000000200000000
[   19.518814][    T1] x8 : 0000000000000000 x7 : 000000b2b5593519 x6 : 00000000003033ff
[   19.519506][    T1] x5 : 0000000000000001 x4 : 00000003e3bf92b4 x3 : 0000000000000010
[   19.520198][    T1] x2 : 0000000000000002 x1 : 0000000000000dc0 x0 : ffffff8100470000
[   19.520891][    T1] Call trace:
[   19.521171][    T1]  mcu_reboot_boot_mode+0x38/0xe0
[   19.521612][    T1]  kernel_restart+0xcc/0x110
[   19.522015][    T1]  __arm64_sys_reboot+0x19c/0x268
[   19.522454][    T1]  invoke_syscall+0x40/0x104
[   19.522851][    T1]  el0_svc_common+0xbc/0x168
[   19.523246][    T1]  do_el0_svc+0x1c/0x28
[   19.523606][    T1]  el0_svc+0x1c/0x68
[   19.523946][    T1]  el0t_64_sync_handler+0x68/0xb4
[   19.524382][    T1]  el0t_64_sync+0x164/0x168


```

调用链：

```text

init
 └─ reboot syscall
     └─ kernel_restart()
         └─ mcu_reboot_boot_mode()
             └─ NULL pointer dereference
             
```


解决思路：

```c
diff --git a/drivers/misc/khadas-mcu.c b/drivers/misc/khadas-mcu.c
index 54ae5ac2f545..d621a4298d3c 100644
--- a/drivers/misc/khadas-mcu.c
+++ b/drivers/misc/khadas-mcu.c
@@ -226,6 +226,7 @@ static int mcu_i2c_write_regs(struct i2c_client *client,
 
 int mcu_reboot_boot_mode(void)
 {
+       /*
        int ret;
        u8 sendbuf=0;
        sendbuf =2;
@@ -235,6 +236,7 @@ int mcu_reboot_boot_mode(void)
                printk("write mcu boot control err\r\n");
                return ret;
        }
+       */
        return 0;
 }
 EXPORT_SYMBOL(mcu_reboot_boot_mode);
```


















