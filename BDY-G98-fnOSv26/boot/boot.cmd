echo "Booting BDY-G98 fnOS universal media (v19 fdtfile, script v5, initramfs v3)"

setenv bootif
setenv bootdev
setenv bootpart

if test -n "${devtype}"; then
  if test "${devtype}" = "mmc"; then
    setenv bootif mmc
  elif test "${devtype}" = "nvme"; then
    setenv bootif nvme
  elif test "${devtype}" = "usb"; then
    setenv bootif usb
  elif test "${devtype}" = "scsi"; then
    setenv bootif scsi
  fi
  if test -n "${bootif}"; then
    setenv bootdev ${devnum}
    setenv bootpart ${distro_bootpart}
  fi
fi

if test -z "${bootpart}"; then
  setenv bootpart 1
fi

# Manual source fallback. Normal v21 bootflow supplies devtype/devnum and skips this.
if test -z "${bootif}"; then
  if mmc dev 0; then
    if load mmc 0:1 ${fdt_addr_r} fnEnv.txt; then
      setenv bootif mmc
      setenv bootdev 0
    fi
  fi
fi
if test -z "${bootif}"; then
  if mmc dev 1; then
    if load mmc 1:1 ${fdt_addr_r} fnEnv.txt; then
      setenv bootif mmc
      setenv bootdev 1
    fi
  fi
fi
if test -z "${bootif}"; then
  nvme scan
  if load nvme 0:1 ${fdt_addr_r} fnEnv.txt; then
    setenv bootif nvme
    setenv bootdev 0
  elif load nvme 1:1 ${fdt_addr_r} fnEnv.txt; then
    setenv bootif nvme
    setenv bootdev 1
  fi
fi
if test -z "${bootif}"; then
  usb start
  if load usb 0:1 ${fdt_addr_r} fnEnv.txt; then
    setenv bootif usb
    setenv bootdev 0
  elif load usb 1:1 ${fdt_addr_r} fnEnv.txt; then
    setenv bootif usb
    setenv bootdev 1
  fi
fi
if test -z "${bootif}"; then
  scsi scan
  if load scsi 0:1 ${fdt_addr_r} fnEnv.txt; then
    setenv bootif scsi
    setenv bootdev 0
  elif load scsi 1:1 ${fdt_addr_r} fnEnv.txt; then
    setenv bootif scsi
    setenv bootdev 1
  fi
fi

if test -z "${bootif}"; then
  echo "No supported fnOS boot media found"
  false
else
  echo "Selected fnOS media: ${bootif} ${bootdev}:${bootpart}"
  setenv rootpart 2
  setenv kernel_ok no

  if load ${bootif} ${bootdev}:${bootpart} ${kernel_addr_r} fnEnv.txt; then
    env import -t ${kernel_addr_r} ${filesize}
  fi
  if test -z "${kernelfile}"; then
    setenv kernelfile vmlinuz-6.18.18-trim
  fi

  # fdtfile normally comes from the U-Boot built-in environment, like the
  # official fnOS NanoPC-T6 flow. Keep a fallback for legacy bootloaders.
  if test -z "${fdtfile}"; then
    setenv fdtfile rockchip/rk3588-bdy-g98.dtb
  fi

  if load ${bootif} ${bootdev}:${bootpart} ${kernel_addr_r} ${kernelfile}; then
    setenv kernel_ok yes
  else
    echo "Failed to load ${kernelfile}; trying the base kernel"
    setenv kernelfile vmlinuz-6.18.18-trim
    if load ${bootif} ${bootdev}:${bootpart} ${kernel_addr_r} ${kernelfile}; then
      setenv kernel_ok yes
    fi
  fi

  if test "${kernel_ok}" = "yes"; then
    if load ${bootif} ${bootdev}:${bootpart} ${ramdisk_addr_r} fnos-universal-initramfs-v3.cpio.gz; then
      setenv initrd_size ${filesize}
      if load ${bootif} ${bootdev}:${bootpart} ${fdt_addr_r} dtb/${fdtfile}; then
        if part uuid ${bootif} ${bootdev}:${rootpart} rootuuid; then
          # Phoenix 2017 has a low CONFIG_SYS_MAXARGS limit. Keep the complete
          # command line as one setenv value so old and current U-Boot agree.
          # tty1 follows the serial console, matching the official T6 console=both path.
          setenv bootargs "root=PARTUUID=${rootuuid} rootwait rw rootfstype=btrfs bdy_bootif=${bootif} bdy_bootdev=${bootdev} bdy_bootpart=${bootpart} console=ttyS2,1500000 console=tty1 earlycon=uart8250,mmio32,0xfeb50000 splash=verbose consoleblank=0 loglevel=7 cma=256M cgroup_enable=cpuset cgroup_memory=1 cgroup_enable=memory panic=30 modprobe.blacklist=yt921x,tag_yt921x"
          echo "Starting fnOS from ${bootif} ${bootdev}, root PARTUUID=${rootuuid}"
          booti ${kernel_addr_r} ${ramdisk_addr_r}:${initrd_size} ${fdt_addr_r}
        else
          echo "Failed to read root partition UUID from ${bootif} ${bootdev}:${rootpart}"
        fi
      else
        echo "Failed to load dtb/${fdtfile}"
      fi
    else
      echo "Failed to load universal initramfs v3"
    fi
  else
    echo "Failed to load a valid fnOS kernel"
  fi

  echo "BDY-G98 universal media boot failed"
  false
fi
