/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Motorcomm YT9215S Unmanaged Ethernet Switch Driver
 *
 * mdio_driver: matches "motorcomm,yt9215s" as an MDIO device child.
 * Copyright (C) 2026
 */
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/mdio.h>
#include <linux/of.h>
#include <linux/gpio/consumer.h>
#include <linux/delay.h>
#include <linux/slab.h>
#include <linux/phy.h>
#include <linux/bitops.h>
#include <linux/rtnetlink.h>
#include <linux/if_vlan.h>

#include "yt9215.h"
#include "yt9215_regs.h"

static const struct {
	u8 serial_id;
	u8 led_id;
} yt9215_sled21_remap[21] = {
	{9, 0}, {8, 0}, {4, 0}, {3, 0}, {2, 0}, {1, 0}, {0, 0},
	{9, 1}, {8, 1}, {4, 1}, {3, 1}, {2, 1}, {1, 1}, {0, 1},
	{9, 2}, {8, 2}, {4, 2}, {3, 2}, {2, 2}, {1, 2}, {0, 2}
};

static const struct {
	u8 port;
	u8 led_id;
} yt9215_led_remap[21] = {
	{6, 1}, {4, 0}, {5, 1}, {3, 0}, {2, 0}, {1, 0}, {0, 0},
	{6, 0}, {5, 0}, {4, 1}, {3, 1}, {2, 1}, {1, 1}, {0, 1},
	{6, 2}, {5, 2}, {4, 2}, {3, 2}, {2, 2}, {1, 2}, {0, 2}
};

int yt9215_swport(struct yt9215_priv *p, int swconfig_port)
{
	if (swconfig_port < 0 || swconfig_port >= p->num_ports)
		return -1;
	return p->port_map[swconfig_port];
}

/* ---- GPIO reset ---- */
int yt9215_reset(struct yt9215_priv *p)
{
	if (!p->reset_gpio)
		return 0;

	gpiod_set_value_cansleep(p->reset_gpio, 1);
	msleep(10);
	gpiod_set_value_cansleep(p->reset_gpio, 0);
	msleep(50);

	dev_info(p->dev, "chip reset complete\n");
	return 0;
}

/* ---- Chip detection: diagnostic + register-based ---- */
int yt9215_detect(struct yt9215_priv *p)
{
	struct mii_bus *bus = p->host_mii;
	int addr = p->base_addr;
	u32 val;
	u32 chip_id_val = 0;
	int ret, raw;

	dev_info(p->dev, "=== SMI diagnostic start (addr=0x%02x) ===\n",
		 addr);

	/* Test 0: Full MDIO bus scan (all 32 PHY addresses, register 0) */
	dev_info(p->dev, "MDIO bus scan (BMCR reg 0):\n");
	for (raw = 0; raw < 32; raw++) {
		int v = mdiobus_read(bus, raw, MII_BMSR);
		if (v > 0 && v != 0xffff)
			dev_info(p->dev, "  PHY 0x%02x: BMSR=0x%04x <-- device present!\n",
				 raw, v);
	}
	dev_info(p->dev, "MDIO bus scan complete\n");

	/* Test 1: raw Clause-22 MDIO reads (bypass SMI protocol entirely).
	 * This confirms the bus can talk to the switch at all.
	 */
	raw = mdiobus_read(bus, addr, 0x0);  /* ADDR_WRITE slot */
	dev_info(p->dev, "raw mdiobus_read(0x%02x, 0x00)=0x%04x\n", addr, raw);
	raw = mdiobus_read(bus, addr, 0x1);  /* ADDR_READ slot */
	dev_info(p->dev, "raw mdiobus_read(0x%02x, 0x01)=0x%04x\n", addr, raw);
	raw = mdiobus_read(bus, addr, 0x2);  /* DATA_WRITE slot */
	dev_info(p->dev, "raw mdiobus_read(0x%02x, 0x02)=0x%04x\n", addr, raw);
	raw = mdiobus_read(bus, addr, 0x3);  /* DATA_READ slot */
	dev_info(p->dev, "raw mdiobus_read(0x%02x, 0x03)=0x%04x\n", addr, raw);

	/* Test 2: SMI protocol read of CHIP_ID register (0x80008) */
	dev_info(p->dev, "SMI read CHIP_ID (0x80008)...\n");
	ret = yt9215_reg_read(p, YT9215_CHIP_ID_REG, &val);
	if (ret)
		dev_err(p->dev, "SMI read CHIP_ID failed: %d\n", ret);
	else
		dev_info(p->dev, "SMI read CHIP_ID = 0x%08x\n", val);
	chip_id_val = val;	/* preserve before val is reused below */

	/* Test 3: SMI read of 0xd0004 (debug register, should be readable) */
	ret = yt9215_reg_read(p, 0xd0004, &val);
	if (ret)
		dev_err(p->dev, "SMI read 0xd0004 failed: %d\n", ret);
	else
		dev_info(p->dev, "SMI read 0xd0004 = 0x%08x\n", val);

	/* Test 4: SMI write + readback at 0xd0004 */
	dev_info(p->dev, "SMI write 0x680 -> 0xd0004, then readback...\n");
	yt9215_reg_write(p, 0xd0004, 0x680);
	ret = yt9215_reg_read(p, 0xd0004, &val);
	dev_info(p->dev, "SMI readback 0xd0004 = 0x%08x (ret=%d)\n", val, ret);

	/* Test 5: Try alternate PHY address 0x00 (mid29=0 case) */
	dev_info(p->dev, "raw mdiobus_read(0x00, 0x00)=0x%04x (alt PHY addr)\n",
		 mdiobus_read(bus, 0, 0x0));

	/* Test 6: Internal PHY access via INT_IF (0xf0000) — read PHY0 ID1 */
	dev_info(p->dev, "Internal PHY access via INT_IF: read PHY0 ID1...\n");
	{
		u32 addr_ctrl = ((0 & 0x1f) << 21) | ((2 & 0x1f) << 16) | (INT_IF_OP_READ << 2);
		u32 data;
		int i;
		yt9215_reg_write(p, YT9215_INT_IF_ADDR_CTRL, addr_ctrl);
		yt9215_reg_write(p, YT9215_INT_IF_FRAME_CTRL, 1);
		for (i = 0; i < 10; i++) {
			u32 status;
			yt9215_reg_read(p, YT9215_INT_IF_FRAME_CTRL, &status);
			if (!status) {
				yt9215_reg_read(p, YT9215_INT_IF_DATA_1, &data);
				dev_info(p->dev, "PHY0 ID1 via INT_IF = 0x%08x (poll %d)\n", data, i);
				break;
			}
			udelay(1);
		}
	}

	/* Test 7: use DSA driver's exact SMI code (yt921x_reg_mdio_read) */
	dev_info(p->dev, "DSA-style SMI read CHIP_ID (switchid=0)...\n");
	{
		u32 reg_addr, reg_data, dsa_val;
		int dsa_ret;
		mutex_lock_nested(&bus->mdio_lock, MDIO_MUTEX_NESTED);
		reg_addr = (u32)((0 << 2) | 0 | 1); /* ADDR_READ, switchid=0 */
		dsa_ret = __mdiobus_write(bus, addr, reg_addr, (u16)(0x80008 >> 16));
		if (!dsa_ret)
			dsa_ret = __mdiobus_write(bus, addr, reg_addr, (u16)0x80008);
		if (!dsa_ret) {
			reg_data = (u32)((0 << 2) | 2 | 1); /* DATA_READ, switchid=0 */
			dsa_ret = __mdiobus_read(bus, addr, reg_data);
			if (dsa_ret >= 0) {
				dsa_val = (u16)dsa_ret;
				dsa_ret = __mdiobus_read(bus, addr, reg_data);
				if (dsa_ret >= 0)
					dsa_val = (dsa_val << 16) | (u16)dsa_ret;
			}
		}
		mutex_unlock(&bus->mdio_lock);
		dev_info(p->dev, "DSA-style SMI CHIP_ID = 0x%08x (ret=%d)\n",
			 dsa_val, dsa_ret);
	}

	dev_info(p->dev, "=== SMI diagnostic end ===\n");

	/* CHIP_ID (0x80008) holds the ID in the upper 16 bits (0x9002). */
	if (chip_id_val != 0 && chip_id_val != 0xffffffff)
		p->chip_id = (u16)((chip_id_val >> 16) & 0xffff);
	else
		p->chip_id = YT9215_CHIP_ID_9215;

	dev_info(p->dev, "chip_id = 0x%04x (%s)\n", p->chip_id,
		 p->chip_id == YT9215_CHIP_ID_9215 ? "YT9215" :
		 p->chip_id == YT9215_CHIP_ID_9218 ? "YT9218" : "unknown");

	return 0;
}

/* ---- Internal PHY initialisation (port of int_yt861x_init) ---- */
int yt9215_phy_init(struct yt9215_priv *p)
{
	int i, ret, phy_addr;
	u16 reg;

	p->internal_phy_count = 4;  /* swconfig ports 0-3 */

	/* Initialise internal PHYs at MDIO addresses 1-4 */
	for (i = 0; i < YT9215_SWCONFIG_PORTS; i++) {
		phy_addr = yt9215_phyaddr(i);
		if (phy_addr < 0)
			continue;  /* CPU port (swconfig 4) has no PHY */
		if (p->chip_id == YT9215_CHIP_ID_9218) {
			ret = yt9215_phy_read(p, phy_addr, 0x50, &reg);
			if (ret)
				return ret;
			reg &= 0xF3FF;
			yt9215_phy_write(p, phy_addr, 0x50, reg);
		}

		ret = yt9215_phy_read(p, phy_addr, 0x408, &reg);
		if (ret)
			return ret;
		reg &= 0x0FFFE;
		yt9215_phy_write(p, phy_addr, 0x408, reg);

		ret = yt9215_phy_read(p, phy_addr, 0x29, &reg);
		if (ret)
			return ret;
		reg &= ~0x3F;
		reg |= 0x8;
		yt9215_phy_write(p, phy_addr, 0x29, reg);

		ret = yt9215_phy_read(p, phy_addr, 0x3a9, &reg);
		if (ret)
			return ret;
		reg &= ~0x3F;
		reg |= 0x17;
		yt9215_phy_write(p, phy_addr, 0x3a9, reg);

		yt9215_phy_write(p, phy_addr, 0x00, 0x1240);
	}

	dev_info(p->dev, "internal PHYs initialised (PHY addr 1-4)\n");
	return 0;
}

static u8 yt9215_led_port_to_mac(u8 port)
{
	static const u8 mac[7] = { 0, 1, 2, 3, 4, 8, 9 };

	return (port < 7) ? mac[port] : port;
}

static int yt9215_led_serial_remapping_set(struct yt9215_priv *p, int index)
{
	u32 src_mac = yt9215_sled21_remap[index].serial_id;
	u8 slot_led = yt9215_sled21_remap[index].led_id;
	u32 reg = YT9215_LED_SERIAL_REMAPPING_BASE +
		  (2 - slot_led) * 8 + (src_mac / 5) * 4;
	u32 dst_mac = yt9215_led_port_to_mac(yt9215_led_remap[index].port);
	u32 dst_led = yt9215_led_remap[index].led_id;
	u32 shift = (src_mac % 5) * 6;
	u32 mask, val;
	int ret;

	ret = yt9215_reg_read(p, reg, &val);
	if (ret)
		return ret;
	mask = (0xfU << (shift + 2)) | (0x3U << shift);
	val = (val & ~mask) |
	      ((dst_mac & 0xfU) << (shift + 2)) |
	      ((dst_led & 0x3U) << shift);
	return yt9215_reg_write(p, reg, val);
}

static int yt9215_led_init(struct yt9215_priv *p)
{
	u32 val;
	int i, ret;

	/* 1. LED mode = serial; serial port count = 7 (LED_GLB_CTRL[16:13]). */
	ret = yt9215_reg_set(p, YT9215_LED_GLB_CTRL,
			     LED_GLB_MODE_MASK, LED_GLB_MODE_SERIAL);
	if (ret)
		return ret;
	ret = yt9215_reg_set(p, YT9215_LED_GLB_CTRL,
			     LED_GLB_SERIAL_PORT_NUM_MASK,
			     LED_GLB_SERIAL_PORT_NUM_7 <<
			     LED_GLB_SERIAL_PORT_NUM_OFFSET);
	if (ret)
		return ret;

	/* 2. Active mode = low (bit4); serial pin count = 3 LEDs ([1:0]=2). */
	ret = yt9215_reg_set(p, YT9215_LED_SERIAL_CTRL,
			     LED_SERIAL_ACTIVE_MODE_BIT, LED_SERIAL_ACTIVE_MODE_BIT);
	if (ret)
		return ret;
	ret = yt9215_reg_set(p, YT9215_LED_SERIAL_CTRL,
			     LED_SERIAL_PIN_NUM_MASK, LED_SERIAL_PIN_NUM_3);
	if (ret)
		return ret;

	/* 3. Serial LED remapping table (21 slots). */
	for (i = 0; i < 21; i++) {
		ret = yt9215_led_serial_remapping_set(p, i);
		if (ret)
			return ret;
	}

	for (i = 0; i < 10; i++) {
		ret = yt9215_reg_write(p, YT9215_LED_CTRL_0_BASE + i * 4,
				       LED0_ACTION_VALUE);
		if (ret)
			return ret;
	}

	/* 5. Enable the serial LED engine + global LED controller. */
	ret = yt9215_reg_set(p, YT9215_LED_SERIAL_CTRL,
			     LED_SERIAL_ENABLE_MASK, LED_SERIAL_ENABLE_MASK);
	if (ret)
		return ret;
	ret = yt9215_reg_set(p, YT9215_LED_GLB_CTRL,
			     LED_GLB_ENABLE, LED_GLB_ENABLE);
	if (ret)
		return ret;

	yt9215_reg_read(p, YT9215_LED_GLB_CTRL, &val);
	dev_info(p->dev, "LED init: LED_GLB_CTRL=0x%08x\n", val);
	yt9215_reg_read(p, YT9215_LED_SERIAL_CTRL, &val);
	dev_info(p->dev, "LED init: LED_SERIAL_CTRL=0x%08x\n", val);
	/* Read back LED0 action of switch port 1 to confirm the defaults
	 * (loopdetect/active-blink) were cleared. */
	yt9215_reg_read(p, YT9215_LED_CTRL_0_BASE + 1 * 4, &val);
	dev_info(p->dev, "LED init: LED0 action[port1]=0x%08x (expect 0x%08x)\n",
		 val, (u32)LED0_ACTION_VALUE);

	return 0;
}

int yt9215_set_default_vlan(struct yt9215_priv *p)
{
	u32 member = 0, untag = 0;
	int i, mac;

	for (i = 0; i < p->num_ports; i++) {
		mac = yt9215_swport(p, i);
		if (mac < 0)
			continue;
		member |= BIT(mac);
		if (i != p->cpu_port)
			untag |= BIT(mac);
	}

	yt9215_reg_write(p, YT9215_VLAN_TBL_REG(1),
			 member << VLAN_TBL_PORT_MEMBER_OFFSET);
	yt9215_reg_write(p, YT9215_VLAN_TBL_REG(1) + 4,
			 untag << VLAN_TBL_UNTAG_OFFSET);

	for (i = 0; i < p->num_ports; i++) {
		mac = yt9215_swport(p, i);
		if (mac < 0)
			continue;
		yt9215_reg_set(p, YT9215_PORT_VLAN_CTRLN_REG(mac),
			       PORT_VLAN_CTRLN_DEFAULT_CVID_MASK,
			       1 << PORT_VLAN_CTRLN_DEFAULT_CVID_OFFSET);
	}

	return 0;
}

static int yt9215_setup_vlan_mode(struct yt9215_priv *p)
{
	int i, mac, ret;

	ret = yt9215_reg_write(p, YT9215_TPID_PROFILE0_REG, YT9215_TPID_8100);
	if (ret)
		return ret;
	ret = yt9215_reg_write(p, YT9215_EGR_TPID_PROFILE0_REG, YT9215_TPID_8100);
	if (ret)
		return ret;

	for (i = 0; i < p->num_ports; i++) {
		mac = yt9215_swport(p, i);
		if (mac < 0)
			continue;

		/* ingress: recognise TPID profile 0 (0x8100) as a C-tag */
		ret = yt9215_reg_set(p, YT9215_PARSER_PORT_CTRLN_REG(mac),
				     PARSER_PORT_CTRLN_CTAG_TPID_MASK_MASK,
				     PARSER_TPID_PROFILE0);
		if (ret)
			return ret;

		/* ingress admission filter: admit all */
		ret = yt9215_reg_set(p, YT9215_PORT_VLAN_CTRL1N_REG(mac),
				     PORT_VLAN_CTRL1N_CTAG_AFT_MASK |
				     PORT_VLAN_CTRL1N_STAG_AFT_MASK,
				     VLAN_AFT_ALL);
		if (ret)
			return ret;

		/* egress: use TPID profile 0 (0x8100) when adding a C-tag */
		ret = yt9215_reg_set(p, YT9215_EGR_PORT_CTRLN_REG(mac),
				     EGR_PORT_CTRLN_CTAG_TPID_SEL_MASK, 0);
		if (ret)
			return ret;

		/* egress tag mode: entry-based (VLAN table controls tagging) */
		ret = yt9215_reg_set(p, YT9215_EGR_PORT_VLAN_CTRLN_REG(mac),
				     EGR_PORT_VLAN_CTRLN_CTAG_MODE_MASK,
				     (u32)EGR_CTAG_MODE_ENTRY_BASED <<
				     EGR_PORT_VLAN_CTRLN_CTAG_MODE_OFFSET);
		if (ret)
			return ret;
	}

	return 0;
}

/* ---- Switch fabric initialisation ---- */
int yt9215_switch_init(struct yt9215_priv *p)
{
	int i, ret;

	/* Enable MIB counters */
	yt9215_reg_set(p, YT9215_GLOBAL_CTRL1_REG, GLOBAL_CTRL1_MIB_EN,
		       GLOBAL_CTRL1_MIB_EN);

	for (i = 0; i < p->num_ports; i++) {
		if (i == YT9215_CPU_PORT)
			continue;
		yt9215_reg_set(p, YT9215_PORT_CTRL_REG(yt9215_swport(p, i)),
			       PORT_CTRL_FLOW_LINK_AN | PORT_CTRL_AN_LINK_EN |
			       PORT_CTRL_RXMAC_EN | PORT_CTRL_TXMAC_EN,
			       PORT_CTRL_FLOW_LINK_AN | PORT_CTRL_AN_LINK_EN |
			       PORT_CTRL_RXMAC_EN | PORT_CTRL_TXMAC_EN);
	}

	/* 1. Select xMII mode for port 9 (extif_bit=0) */
	yt9215_reg_set(p, YT9215_CHIP_INTERFACE_SEL_REG,
		       CHIP_IFSEL_PORT9_XMII, CHIP_IFSEL_PORT9_XMII);

	/* 2. EXTIF1_MODE: XMII_MODE[31:29]=RGMII(4), XMII_PORT_EN[18]=1 */
	yt9215_reg_set(p, YT9215_EXTIF1_MODE_REG,
		       EXTIF_MODE_XMII_MODE_MASK | EXTIF_MODE_XMII_PORT_EN,
		       ((u32)EXTIF_MODE_RGMII << EXTIF_MODE_XMII_MODE_OFFSET) |
		       EXTIF_MODE_XMII_PORT_EN);

	/* 3. Force CPU port MAC: disable AN, 1000M full-duplex,
	 *    enable RX/TX flow-control and RX/TX MAC. */
	yt9215_reg_set(p, YT9215_PORT_CTRL_REG(yt9215_swport(p, YT9215_CPU_PORT)),
		       PORT_CTRL_FLOW_LINK_AN | PORT_CTRL_AN_LINK_EN |
		       PORT_CTRL_DUPLEX_MODE | PORT_CTRL_RX_FC_EN |
		       PORT_CTRL_TX_FC_EN | PORT_CTRL_RXMAC_EN |
		       PORT_CTRL_TXMAC_EN | PORT_CTRL_SPEED_MODE_MASK,
		       PORT_CTRL_DUPLEX_MODE | PORT_CTRL_RX_FC_EN |
		       PORT_CTRL_TX_FC_EN | PORT_CTRL_RXMAC_EN |
		       PORT_CTRL_TXMAC_EN |
		       (PORT_CTRL_SPEED_1000M << PORT_CTRL_SPEED_MODE_OFFSET));

	p->vlan_enabled = true;
	yt9215_set_default_vlan(p);

	ret = yt9215_setup_vlan_mode(p);
	if (ret)
		return ret;

	/* LED serial controller (BDY-G98 config). Non-fatal on error. */
	ret = yt9215_led_init(p);
	if (ret)
		dev_warn(p->dev, "LED init failed: %d\n", ret);

	dev_info(p->dev, "switch fabric initialised (default VLAN 1)\n");
	return 0;
}

static int yt9215_vlan_carrier_state(struct yt9215_priv *p, u16 vid)
{
	u32 reg, member;
	int i, ret;

	ret = yt9215_reg_read(p, YT9215_VLAN_TBL_REG(vid), &reg);
	if (ret)
		return -1;

	member = (reg & VLAN_TBL_PORT_MEMBER_MASK) >>
		 VLAN_TBL_PORT_MEMBER_OFFSET;
	if (!member)
		return -1;	/* not configured in the switch */

	for (i = 0; i < p->num_ports; i++) {
		int swport = yt9215_swport(p, i);
		u32 status;

		if (swport < 0 || i == p->cpu_port)
			continue;
		if (!(member & BIT(swport)))
			continue;

		if (!yt9215_reg_read(p, YT9215_PORT_STATUS_REG(swport),
				     &status) &&
		    (status & PORT_STATUS_LINK))
			return 1;
	}
	return 0;
}

/* vlan_for_each callback: sync one VLAN sub-interface's carrier. */
static int yt9215_vlan_sync_cb(struct net_device *vlan_dev, int vid, void *arg)
{
	struct yt9215_priv *p = arg;
	int state = yt9215_vlan_carrier_state(p, (u16)vid);

	if (state < 0)
		return 0;	/* not configured in switch; leave untouched */

	if (state)
		netif_carrier_on(vlan_dev);
	else
		netif_carrier_off(vlan_dev);
	return 0;
}

/* Re-evaluate carrier for every 802.1Q sub-interface of the host netdev.
 * Called under RTNL (vlan_for_each requires it). */
void yt9215_sync_all_vlan_carriers(struct yt9215_priv *p)
{
	struct net_device *host = p->swdev.netdev;

	if (!host)
		return;

	rtnl_lock();
	vlan_for_each(host, yt9215_vlan_sync_cb, p);
	rtnl_unlock();
}

static void yt9215_link_poll_work(struct work_struct *work)
{
	struct yt9215_priv *p = container_of(work, struct yt9215_priv,
					     link_work.work);
	bool changed = false;
	int i;

	/* 1. Sample every user port's MAC link status register. */
	for (i = 0; i < p->num_ports; i++) {
		int swport = yt9215_swport(p, i);
		u32 status;
		bool link;
		int ret;

		if (swport < 0 || i == p->cpu_port)
			continue;

		ret = yt9215_reg_read(p, YT9215_PORT_STATUS_REG(swport),
				      &status);
		if (ret)
			continue;
		link = !!(status & PORT_STATUS_LINK);

		if (link != p->port_link[i]) {
			p->port_link[i] = link;
			changed = true;
			dev_info(p->dev, "port %d link %s\n", i,
				 link ? "up" : "down");
		}
	}

	yt9215_sync_all_vlan_carriers(p);

	/* 3. Re-arm. */
	schedule_delayed_work(&p->link_work,
			      msecs_to_jiffies(YT9215_LINK_POLL_MS));
}

void yt9215_link_poll_start(struct yt9215_priv *p)
{
	int i;

	if (p->link_poll_on)
		return;

	for (i = 0; i < p->num_ports; i++) {
		int swport = yt9215_swport(p, i);
		u32 status;

		if (swport < 0 || i == p->cpu_port)
			continue;
		if (!yt9215_reg_read(p, YT9215_PORT_STATUS_REG(swport),
				     &status))
			p->port_link[i] = !!(status & PORT_STATUS_LINK);
	}

	INIT_DELAYED_WORK(&p->link_work, yt9215_link_poll_work);
	p->link_poll_on = true;
	schedule_delayed_work(&p->link_work,
			      msecs_to_jiffies(YT9215_LINK_POLL_MS));
	dev_info(p->dev, "link monitor started (%d ms)\n",
		 YT9215_LINK_POLL_MS);
}

void yt9215_link_poll_stop(struct yt9215_priv *p)
{
	if (!p->link_poll_on)
		return;

	p->link_poll_on = false;
	cancel_delayed_work_sync(&p->link_work);
}

static int yt9215_sw_register(struct yt9215_priv *p, struct net_device *ndev)
{
	int ret;

	if (p->sw_registered)
		return 0;

	p->swdev.alias = ndev->name;
	p->swdev.netdev = ndev;

	ret = register_switch(&p->swdev, ndev);
	if (ret) {
		dev_err(p->dev, "swconfig register failed: %d\n", ret);
		return ret;
	}
	p->sw_registered = true;
	dev_info(p->dev, "registered as %s (netdev=%s, mdio=0x%02x)\n",
		 p->swdev.devname, ndev->name, p->base_addr);

	/* Start link-state polling now that we hold the host netdev. */
	yt9215_link_poll_start(p);
	return 0;
}

static int yt9215_netdev_event(struct notifier_block *nb, unsigned long event,
			       void *ptr)
{
	struct yt9215_priv *p = container_of(nb, struct yt9215_priv, netdev_nb);
	struct net_device *ndev = netdev_notifier_info_to_dev(ptr);

	if (p->sw_registered || event != NETDEV_REGISTER)
		return NOTIFY_DONE;

	if (!p->host_mii || !p->host_mii->parent)
		return NOTIFY_DONE;

	/* The host ethernet controller owns our MDIO bus, hence the netdev's
	 * parent device is the same as the MDIO bus parent device. */
	if (ndev->dev.parent != p->host_mii->parent)
		return NOTIFY_DONE;

	yt9215_sw_register(p, ndev);
	return NOTIFY_DONE;
}

/* ---- mdio_driver probe ---- */
static int yt9215_probe(struct mdio_device *mdiodev)
{
	struct device *dev = &mdiodev->dev;
	u32 cpu_port = YT9215_CPU_PORT;
	u32 num_ports = YT9215_SWCONFIG_PORTS;
	struct yt9215_priv *p;
	u32 map[YT9215_SWCONFIG_PORTS];
	u32 id;
	int ret;

	p = devm_kzalloc(dev, sizeof(*p), GFP_KERNEL);
	if (!p)
		return -ENOMEM;

	p->dev = dev;
	dev_set_drvdata(dev, p);
	mutex_init(&p->reg_lock);

	/* MDIO bus and address from mdiodev */
	p->host_mii = mdiodev->bus;
	p->base_addr = mdiodev->addr;

	/* motorcomm,id */
	if (of_property_read_u32(dev->of_node, "motorcomm,id", &id))
		id = 0;
	p->unit_id = (u8)id;

	/* reset-gpios */
	p->reset_gpio = devm_gpiod_get_optional(dev, "reset", GPIOD_ASIS);
	if (IS_ERR(p->reset_gpio))
		return dev_err_probe(dev, PTR_ERR(p->reset_gpio),
				     "failed to get reset GPIO\n");

	/* Reset */
	ret = yt9215_reset(p);
	if (ret)
		return ret;

	/* Detect */
	ret = yt9215_detect(p);
	if (ret)
		return ret;

	of_property_read_u32(dev->of_node, "motorcomm,cpu-port",
					&cpu_port);
	of_property_read_u32(dev->of_node, "motorcomm,num-ports",
					&num_ports);
	p->cpu_port = (u8)cpu_port;
	p->num_ports = (u8)num_ports;

	if (of_property_read_u32_array(dev->of_node, "motorcomm,port-map",
						map, YT9215_SWCONFIG_PORTS)) {
		return dev_err_probe(dev, -EINVAL,
			"missing/invalid required motorcomm,port-map property\n");
	}
	for (int i = 0; i < YT9215_SWCONFIG_PORTS; i++)
		p->port_map[i] = (u8)map[i];

	/* PHY init */
	ret = yt9215_phy_init(p);
	if (ret)
		return dev_err_probe(dev, ret, "PHY init failed\n");

	/* Switch init */
	ret = yt9215_switch_init(p);
	if (ret)
		return dev_err_probe(dev, ret, "switch init failed\n");

	p->swdev.of_node = dev->of_node;
	p->swdev.name = "yt9215";
	p->swdev.ports = p->num_ports;
	p->swdev.vlans = YT9215_MAX_VLANS;
	p->swdev.cpu_port = p->cpu_port;
	p->swdev.ops = &yt9215_sw_ops;

	p->netdev_nb.notifier_call = yt9215_netdev_event;
	ret = register_netdevice_notifier(&p->netdev_nb);
	if (ret)
		return dev_err_probe(dev, ret,
				     "netdev notifier register failed\n");

	dev_info(dev, "probe done (mdio=0x%02x); swconfig registration deferred to host netdev\n",
		 p->base_addr);
	return 0;
}

static void yt9215_remove(struct mdio_device *mdiodev)
{
	struct yt9215_priv *p = dev_get_drvdata(&mdiodev->dev);

	yt9215_link_poll_stop(p);
	unregister_netdevice_notifier(&p->netdev_nb);
	if (p->sw_registered)
		unregister_switch(&p->swdev);
	dev_info(p->dev, "unregistered\n");
}

static const struct of_device_id yt9215_of_match[] = {
	{ .compatible = "motorcomm,yt9215s" },
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, yt9215_of_match);

static struct mdio_driver yt9215_driver = {
	.mdiodrv = {
		.driver = {
			.name = "yt9215",
			.of_match_table = yt9215_of_match,
		},
	},
	.probe	= yt9215_probe,
	.remove	= yt9215_remove,
};

mdio_module_driver(yt9215_driver);

MODULE_DESCRIPTION("Motorcomm YT9215S unmanaged Ethernet switch driver");
MODULE_AUTHOR("juno@baidxi404629@gmail.com");
MODULE_LICENSE("GPL");
