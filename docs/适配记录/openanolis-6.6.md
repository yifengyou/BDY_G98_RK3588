# OpenAnolis 6.6内核

## 重启奔溃

```shell

[    1.595932] Kernel panic - not syncing: Asynchronous SError Interrupt
[    1.595934] CPU: 5 PID: 1 Comm: swapper/0 Tainted: G   M               6.6.102-kdev #22
[    1.595939] Hardware name: BDY G98 (DT)
[    1.595941] Call trace:
[    1.595943]  dump_backtrace+0x94/0x114
[    1.595950]  show_stack+0x18/0x4c
[    1.595953]  dump_stack_lvl+0x74/0xc0
[    1.595963]  dump_stack+0x18/0x24
[    1.595970]  panic+0x358/0x3c0
[    1.595977]  nmi_panic+0x8c/0x90
[    1.595983]  arm64_serror_panic+0x78/0x88
[    1.595988]  do_serror+0x0/0x50
[    1.595992]  do_serror+0x30/0x50
[    1.595996]  el1h_64_error_handler+0x34/0x4c
[    1.596002]  el1h_64_error+0x78/0x7c
[    1.596006]  rk_iommu_is_stall_active+0x2c/0x58
[    1.596013]  rk_iommu_enable+0x58/0x400
[    1.596020]  rk_iommu_resume+0x28/0x3c
[    1.596026]  pm_generic_runtime_resume+0x2c/0x44
[    1.596034]  __rpm_callback+0x48/0x1d8
[    1.596042]  rpm_callback+0x6c/0x78
[    1.596049]  rpm_resume+0x530/0x750
[    1.596056]  __pm_runtime_resume+0x5c/0xb0
[    1.596063]  pm_runtime_get_suppliers+0x60/0x8c
[    1.596071]  __driver_probe_device+0x54/0x1b0
[    1.596076]  driver_probe_device+0x3c/0x10c
[    1.596079]  __driver_attach+0xf0/0x1f8
[    1.596083]  bus_for_each_dev+0x78/0xd8
[    1.596090]  driver_attach+0x24/0x30
[    1.596093]  bus_add_driver+0x110/0x234
[    1.596101]  driver_register+0x5c/0x124
[    1.596105]  __platform_driver_register+0x28/0x34
[    1.596110]  rknpu_init+0x1c/0x28
[    1.596116]  do_one_initcall+0x44/0x2f0
[    1.596121]  kernel_init_freeable+0x1f0/0x40c
[    1.596130]  kernel_init+0x24/0x1e4
[    1.596135]  ret_from_fork+0x10/0x20
[    1.596141] SMP: stopping secondary CPUs
[    1.596239] Kernel Offset: disabled
[    1.596240] CPU features: 0x1c00,000000e0,01408828,4001720b
[    1.596244] Memory Limit: none


```












