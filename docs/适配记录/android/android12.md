# android14适配

## 编译报错

```shell
[ 13% 6058/45202] Building dtbo img file out/target/product/kedge2/obj/FAKE/rockchip_dtbo_intermediates/rebuild-dtbo.img.
create image file: out/target/product/kedge2/obj/FAKE/rockchip_dtbo_intermediates/rebuild-dtbo.img...
Total 1 entries.
[ 21% 9927/45202] //packages/wallpapers/LivePicker:LiveWallpapersPicker aapt2 compile packages/wallpapers/LivePicker/res [common]
FAILED: out/soong/.intermediates/packages/wallpapers/LivePicker/LiveWallpapersPicker/android_common/aapt2/packages/wallpapers/LivePicker/res/drawable_btn_colored_background.xml.flat out/soong/.intermediates/packages/wallpapers/LivePicker/LiveWallpapersPicker/android_common/aapt2/packages/wallpapers/LivePicker/res/drawable_btn_transparent.xml.flat out/soong/.intermediates/packages/wallpapers/LivePicker/LiveWallpapersPicker/android_common/aapt2/packages/wallpapers/LivePicker/res/drawable_btn_transparent_background.xml.flat out/soong/.intermediates/packages/wallpapers/LivePicker/LiveWallpapersPicker/android_common/aapt2/packages/wallpapers/LivePicker/res/drawable_gradient_background.9.png.flat out/soong/.intermediates/packages/wallpapers/LivePicker/LiveWallpapersPicker/android_common/aapt2/packages/wallpapers/LivePicker/res/drawable_ic_arrow_back_white_24dp.xml.flat out/soong/.intermediates/packages/wallpapers/LivePicker/LiveWallpapersPicker/android_common/aapt2/packages/wallpapers/LivePicker/res/drawable_ic_delete_white_24dp.xml.flat out/soong/.intermediates/packages/wallpapers/LivePicker/LiveWallpapersPicker/android_common/aapt2/packages/wallpapers/LivePicker/res/drawable-hdpi_livewallpaper_placeholder.png.flat out/soong/.intermediates/packages/wallpapers/LivePicker/LiveWallpapersPicker/android_common/aapt2/packages/wallpapers/LivePicker/res/drawable-hdpi_wallpaper_picker_preview.png.flat out/soong/.intermediates/packages/wallpapers/LivePicker/LiveWallpapersPicker/android_common/aapt2/packages/wallpapers/LivePicker/res/drawable-mdpi_livewallpaper_placeholder.png.flat out/soong/.intermediates/packages/wallpapers/LivePicker/LiveWallpapersPicker/android_common/aapt2/packages/wallpapers/LivePicker/res/drawable-mdpi_wallpaper_picker_preview.png.flat out/soong/.intermediates/packages/wallpapers/LivePicker/LiveWallpapersPicker/android_common/aapt2/packages/wallpapers/LivePicker/res/drawable-sw600dp_ic_device.xml.flat
out/soong/host/linux-x86/bin/aapt2 compile -o out/soong/.intermediates/packages/wallpapers/LivePicker/LiveWallpapersPicker/android_common/aapt2/packages/wallpapers/LivePicker/res --pseudo-localize packages/wallpapers/LivePicker/res/drawable/btn_colored_background.xml packages/wallpapers/LivePicker/res/drawable/btn_transparent.xml packages/wallpapers/LivePicker/res/drawable/btn_transparent_background.xml packages/wallpapers/LivePicker/res/drawable/gradient_background.9.png packages/wallpapers/LivePicker/res/drawable/ic_arrow_back_white_24dp.xml packages/wallpapers/LivePicker/res/drawable/ic_delete_white_24dp.xml packages/wallpapers/LivePicker/res/drawable-hdpi/livewallpaper_placeholder.png packages/wallpapers/LivePicker/res/drawable-hdpi/wallpaper_picker_preview.png packages/wallpapers/LivePicker/res/drawable-mdpi/livewallpaper_placeholder.png packages/wallpapers/LivePicker/res/drawable-mdpi/wallpaper_picker_preview.png packages/wallpapers/LivePicker/res/drawable-sw600dp/ic_device.xml
packages/wallpapers/LivePicker/res/drawable/ic_delete_white_24dp.xml:1: error: no element found.
packages/wallpapers/LivePicker/res/drawable/ic_delete_white_24dp.xml: error: file failed to compile.
02:16:26 ninja failed with: exit status 1

  #### failed to build some targets (01:31 (mm:ss)) ####
```

目标仓库的ref有问题，修改为正确的才行。修改到default.xml中




















