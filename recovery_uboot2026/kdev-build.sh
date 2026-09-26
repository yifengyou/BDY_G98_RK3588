#!/bin/bash

set -xe

WORKDIR=`pwd`
TIMESTAMP=$(date +%Y%m%d)

# clean
rm -rf output
mkdir output

# spi
cd ${WORKDIR}/only-spi
rm -rf uboot-g98_only-spi.img recovery-g98_only-spi.img rk3588_spl_loader_v1.21.114_only-spi.bin
wget -c https://github.com/yifengyou/BDY_G98_RK3588-uboot-mainline/releases/download/bdy-g98-uboot/rk3588_spl_loader_v1.21.114_only-spi.bin
wget -c https://github.com/yifengyou/BDY_G98_RK3588-uboot-mainline/releases/download/bdy-g98-uboot/uboot-g98_only-spi.img
wget -c https://github.com/yifengyou/BDY_G98_RK3588-kernel/releases/download/bdy-g98-recovery/recovery-g98_only-spi.img

zip -r ${WORKDIR}/output/G98-Recovery_ONLY-SPI.zip ./*
cp -a ${WORKDIR}/output/G98-Recovery_ONLY-SPI.zip  ${WORKDIR}/output/G98-Recovery_ONLY-SPI_${TIMESTAMP}.zip

cp ${WORKDIR}/spi_full_disk.img ${WORKDIR}/output/spi_full_disk.img
dd if=uboot-g98_only-spi.img of=${WORKDIR}/output/spi_full_disk.img bs=512 seek=64 conv=notrunc
dd if=recovery-g98_only-spi.img of=${WORKDIR}/output/spi_full_disk.img bs=512 seek=8192 conv=notrunc
cp -a ${WORKDIR}/output/spi_full_disk.img  ${WORKDIR}/output/spi_full_disk_${TIMESTAMP}.img

# emmc
cd ${WORKDIR}/only-emmc
rm -rf uboot-g98_only-emmc.img recovery-g98_only-emmc.img rk3588_spl_loader_v1.21.114_only-emmc.bin
wget -c https://github.com/yifengyou/BDY_G98_RK3588-uboot-mainline/releases/download/bdy-g98-uboot/rk3588_spl_loader_v1.21.114_only-emmc.bin
wget -c https://github.com/yifengyou/BDY_G98_RK3588-uboot-mainline/releases/download/bdy-g98-uboot/uboot-g98_only-emmc.img
wget -c https://github.com/yifengyou/BDY_G98_RK3588-kernel/releases/download/bdy-g98-recovery/recovery-g98_only-emmc.img
zip -r ${WORKDIR}/output/G98-Recovery_ONLY-EMMC.zip ./*
cp -a ${WORKDIR}/output/G98-Recovery_ONLY-EMMC.zip  ${WORKDIR}/output/G98-Recovery_ONLY-EMMC_${TIMESTAMP}.zip

cp ${WORKDIR}/spi_full_disk.img ${WORKDIR}/output/emmc_full_disk.img
dd if=uboot-g98_only-emmc.img    of=${WORKDIR}/output/emmc_full_disk.img bs=512 seek=64 conv=notrunc
dd if=recovery-g98_only-emmc.img of=${WORKDIR}/output/emmc_full_disk.img bs=512 seek=8192 conv=notrunc
cp -a ${WORKDIR}/output/emmc_full_disk.img  ${WORKDIR}/output/emmc_full_disk_${TIMESTAMP}.img

echo "All done!"
