/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Motorcomm YT9215S Unmanaged Ethernet Switch Driver
 *
 * Private data structures and function declarations.
 * Copyright (C) 2026
 */

#ifndef _YT9215_H
#define _YT9215_H

#include <linux/types.h>
#include <linux/mutex.h>
#include <linux/gpio/consumer.h>
#include <linux/netdevice.h>
#include <linux/notifier.h>
#include <linux/device.h>
#include <linux/workqueue.h>
#include <linux/switch.h>
#include "yt9215_regs.h"

/* Maximum number of switch units (cascaded chips) */
#define YT9215_MAX_UNITS		2

/* Link-state polling interval (milliseconds) */
#define YT9215_LINK_POLL_MS		2000

/* Default switch MDIO Clause-22 base address */
#define YT9215_DEFAULT_MDIO_ADDR	0x1d

/* Number of user ports (excluding CPU port) */
#define YT9215_USER_PORTS		5

/* Maximum internal PHY ports per chip */
#define YT9215_MAX_INTERNAL_PHYS	8

struct yt9215_priv {
	struct device *dev;
	struct switch_dev swdev;

	/* MDIO / bus access */
	struct mii_bus *host_mii;	/* Host MDIO bus (e.g. mdio0/mdio1) */
	u8 unit_id;			/* Switch ID for cascade (motorcomm,id) */
	u8 base_addr;			/* MDIO Clause-22 address (default 0x1d) */

	/* GPIO reset */
	struct gpio_desc *reset_gpio;

	/* Regmap / lock */
	struct mutex reg_lock;

	/* Chip info */
	u16 chip_id;
	u8 cpu_port;
	u8 num_ports;
	u8 internal_phy_count;
	bool vlan_enabled;
	struct notifier_block netdev_nb;
	bool sw_registered;
	u8 port_map[YT9215_SWCONFIG_PORTS];

	/* Per-port state */
	struct switch_port_link linkbuf[YT9215_SWCONFIG_PORTS];

	struct delayed_work link_work;
	bool port_link[YT9215_SWCONFIG_PORTS];	/* cached per-port link */
	bool link_poll_on;
};

int yt9215_swport(struct yt9215_priv *p, int swconfig_port);

/* ---- Register access layer (yt9215_reg.c) ---- */
int yt9215_reg_write(struct yt9215_priv *p, u32 reg, u32 val);
int yt9215_reg_read(struct yt9215_priv *p, u32 reg, u32 *val);
int yt9215_reg_set(struct yt9215_priv *p, u32 reg, u32 mask, u32 set);

/* Internal PHY access via 0xf0000 indirect controller */
int yt9215_phy_write(struct yt9215_priv *p, u8 phy, u32 reg, u16 val);
int yt9215_phy_read(struct yt9215_priv *p, u8 phy, u32 reg, u16 *val);

/* ---- Board-level init (yt9215_core.c) ---- */
int yt9215_reset(struct yt9215_priv *p);
int yt9215_detect(struct yt9215_priv *p);
int yt9215_phy_init(struct yt9215_priv *p);
int yt9215_switch_init(struct yt9215_priv *p);
int yt9215_set_default_vlan(struct yt9215_priv *p);

/* ---- Link monitor / VLAN carrier sync (yt9215_core.c) ---- */
void yt9215_link_poll_start(struct yt9215_priv *p);
void yt9215_link_poll_stop(struct yt9215_priv *p);
void yt9215_sync_all_vlan_carriers(struct yt9215_priv *p);

/* ---- swconfig ops (yt9215_sw.c) ---- */
extern const struct switch_dev_ops yt9215_sw_ops;

#endif /* _YT9215_H */
