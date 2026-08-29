# g98 linux kernel适配记录

## g98 firmware

```shell
root@g98:/# dmesg |grep -i firmware
[    0.000000] psci: PSCIv1.1 detected in firmware.
[    0.964805] arm-scmi arm-scmi.0.auto: SCMI Protocol v2.0 'rockchip:' Firmware version 0x0
[    4.324529] rkgpu_bifrost_csf fb000000.gpu: Capping CSF_FIRMWARE_TIMEOUT to CSF_FIRMWARE_PING_TIMEOUT
[    6.889290] r8169 0002:21:00.0: Unable to load firmware rtl_nic/rtl8125b-2.fw (-2)
[    7.046453] r8169 0003:31:00.0: Unable to load firmware rtl_nic/rtl8125b-2.fw (-2)
root@g98:/# 

```

主要是r8169依赖固件，其他未见


## 通用问题 - r8125 LED灯问题



## 通用问题 - y9215交换机配置

https://www.kernelconfig.io/CONFIG_NET_DSA_YT921X






