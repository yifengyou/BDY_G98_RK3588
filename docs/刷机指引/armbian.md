# armbian

## 分区扩容问题

```shell
    # 1. 先备份当前分区表
    sfdisk -d /dev/sda > /root/sda-backup.dump
    
    # 2. 修复 GPT 备份头并将 sda2 扩展到最大
    # 注意：这会将 sda2 的结束扇区设为磁盘末尾
    echo ", +" | sfdisk --no-reread -N 2 /dev/sda
    
    # 3. 通知内核更新分区表
    partprobe /dev/sda
    
    # 4. 如果是 ext4 文件系统，扩展文件系统
    resize2fs /dev/sda2
    # 如果是 xfs，则使用: xfs_growfs /dev/sda2

```



