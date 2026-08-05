# firmware

## 固件依赖

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
























--