# nvme

## 物理连接

aigo是靠近cpu的NVME槽位，另一个则是靠近sata口的槽位

| NVMe 设备 | Linux 平台设备名 | DTS 节点 (物理基地址) | APB 寄存器地址 | PCIe Config/MMIO 空间 |
| :--- | :--- | :--- | :--- | :--- |
| nvme0n1 (aigo) | `a40000000.pcie` | `pcie@fe150000` | `0xfe150000` | Config: `0xf0000000` / MMIO: `0x900000000` |
| nvme1n1 (KINGBANK) | `a40400000.pcie` | `pcie@fe160000` | `0xfe160000` | Config: `0xf1000000` / MMIO: `0x940000000` |




## 测试环境

```shell
root@G98:/# lsblk
NAME        MAJ:MIN RM   SIZE RO TYPE MOUNTPOINTS
sda           8:0    0 119.2G  0 disk 
├─sda1        8:1    0   330M  0 part /boot
└─sda2        8:2    0    32G  0 part /
sdb           8:16   1  29.3G  0 disk 
├─sdb1        8:17   1  29.3G  0 part /vol00/DataTraveler_3.0
└─sdb2        8:18   1    32M  0 part /vol00/DataTraveler_3.0_1
zram0       252:0    0   7.8G  0 disk [SWAP]
nvme0n1     259:0    0 119.2G  0 disk /vol00/aigo NVMe SSD P2000
nvme1n1     259:1    0 238.5G  0 disk 
├─nvme1n1p1 259:2    0   330M  0 part /vol00/KINGBANK KP230
└─nvme1n1p2 259:3    0    32G  0 part /vol00/KINGBANK KP230_1
root@G98:/# find /sys -name nvme0n1
/sys/kernel/debug/block/nvme0n1
/sys/class/block/nvme0n1
/sys/devices/platform/a40000000.pcie/pci0000:00/0000:00:00.0/0000:01:00.0/nvme/nvme0/nvme0n1
/sys/fs/ext4/nvme0n1
/sys/block/nvme0n1
root@G98:/# find /sys -name nvme1n1
/sys/kernel/debug/block/nvme1n1
/sys/class/block/nvme1n1
/sys/devices/platform/a40400000.pcie/pci0001:10/0001:10:00.0/0001:11:00.0/nvme/nvme1/nvme1n1
/sys/block/nvme1n1
root@G98:/# lspci -nn
0000:00:00.0 PCI bridge [0604]: Rockchip Electronics Co., Ltd RK3588 [1d87:3588] (rev 01)
0000:01:00.0 Non-Volatile memory controller [0108]: MAXIO Technology (Hangzhou) Ltd. NVMe SSD Controller MAP1202 [1e4b:1202] (rev 01)
0001:10:00.0 PCI bridge [0604]: Rockchip Electronics Co., Ltd RK3588 [1d87:3588] (rev 01)
0001:11:00.0 Non-Volatile memory controller [0108]: MAXIO Technology (Hangzhou) Ltd. NVMe SSD Controller MAP1202 [1e4b:1202] (rev 01)
0002:20:00.0 PCI bridge [0604]: Rockchip Electronics Co., Ltd RK3588 [1d87:3588] (rev 01)
0002:21:00.0 Ethernet controller [0200]: Realtek Semiconductor Co., Ltd. RTL8125 2.5GbE Controller [10ec:8125] (rev 05)
0003:30:00.0 PCI bridge [0604]: Rockchip Electronics Co., Ltd RK3588 [1d87:3588] (rev 01)
0003:31:00.0 Ethernet controller [0200]: Realtek Semiconductor Co., Ltd. RTL8125 2.5GbE Controller [10ec:8125] (rev 05)
root@G98:/# 
```



















---