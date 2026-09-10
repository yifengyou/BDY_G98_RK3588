# android14适配

## 代码同步问题

```shell
<remote fetch="https://git.khadas.com/" name="gitkhadas" />
...
<project name="android_device_khadas_rk3588" path="device/khadas/rk3588" remote="gitkhadas" revision="fb77780d339ad7044ecb01be4b13271dc1a2be66"/>


https://git.khadas.com/android_device_khadas_rk3588

```

解决办法：

```shell
./repo init -u https://github.com/khadas/android_manifest.git -b khadas-edge2-android13
sed -i 's/fb77780d339ad7044ecb01be4b13271dc1a2be66/khadas-edge2-android13/g' .repo/manifests/default.xml
```










