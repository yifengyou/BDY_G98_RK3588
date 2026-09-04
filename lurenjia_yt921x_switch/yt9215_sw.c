/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Motorcomm YT9215S — swconfig switch_dev_ops implementation.
 *
 * Implements struct switch_dev_ops callbacks for VLAN management,
 * port link status, statistics, and switch reset.
 */

#include <linux/kernel.h>
#include <linux/err.h>
#include <linux/bitops.h>
#include "yt9215.h"
#include "yt9215_regs.h"

/* vlan_find_dev() for carrier synchronisation (see yt9215_core.c) */
#include <linux/if_vlan.h>

/*
 * VLAN port membership get/set
 */
static int yt9215_get_vlan_ports(struct switch_dev *dev, struct switch_val *val)
{
	struct yt9215_priv *p = container_of(dev, struct yt9215_priv, swdev);
	u32 reg, member;
	int ret;

	ret = yt9215_reg_read(p, YT9215_VLAN_TBL_REG(val->port_vlan), &reg);
	if (ret)
		return ret;

	member = (reg & VLAN_TBL_PORT_MEMBER_MASK) >> VLAN_TBL_PORT_MEMBER_OFFSET;

	val->len = 0;
	for (int i = 0; i < p->num_ports; i++) {
		int swport = yt9215_swport(p, i);

		if (swport >= 0 && (member & BIT(swport))) {
			val->value.ports[val->len].id = i;
			val->value.ports[val->len].flags = 0;
			/* CPU port is tagged by default */
			if (i == p->cpu_port)
				val->value.ports[val->len].flags |=
					BIT(SWITCH_PORT_FLAG_TAGGED);
			val->len++;
		}
	}
	return 0;
}

static int yt9215_set_vlan_ports(struct switch_dev *dev, struct switch_val *val)
{
	struct yt9215_priv *p = container_of(dev, struct yt9215_priv, swdev);
	u32 member = 0, untag = 0;
	u32 reg = YT9215_VLAN_TBL_REG(val->port_vlan);
	int ret;

	for (int i = 0; i < val->len; i++) {
		int swport = yt9215_swport(p, val->value.ports[i].id);

		if (swport < 0)
			continue;
		member |= BIT(swport);
		/* Untagged egress for ports without the TAGGED flag */
		if (!(val->value.ports[i].flags & BIT(SWITCH_PORT_FLAG_TAGGED)))
			untag |= BIT(swport);
	}

	yt9215_reg_write(p, reg, member << VLAN_TBL_PORT_MEMBER_OFFSET);
	ret = yt9215_reg_write(p, reg + 4, untag << VLAN_TBL_UNTAG_OFFSET);

	yt9215_sync_all_vlan_carriers(p);

	return ret;
}

/*
 * PVID (Port VLAN ID)
 */
static int yt9215_get_port_pvid(struct switch_dev *dev, int port, int *pvid)
{
	struct yt9215_priv *p = container_of(dev, struct yt9215_priv, swdev);
	u32 reg;
	int ret;

	ret = yt9215_reg_read(p, YT9215_PORT_VLAN_CTRLN_REG(yt9215_swport(p, port)),
			      &reg);
	if (ret)
		return ret;

	*pvid = (int)((reg & PORT_VLAN_CTRLN_DEFAULT_CVID_MASK) >>
		      PORT_VLAN_CTRLN_DEFAULT_CVID_OFFSET);
	return 0;
}

static int yt9215_set_port_pvid(struct switch_dev *dev, int port, int pvid)
{
	struct yt9215_priv *p = container_of(dev, struct yt9215_priv, swdev);

	return yt9215_reg_set(p, YT9215_PORT_VLAN_CTRLN_REG(yt9215_swport(p, port)),
			      PORT_VLAN_CTRLN_DEFAULT_CVID_MASK,
			      (u32)pvid << PORT_VLAN_CTRLN_DEFAULT_CVID_OFFSET);
}

static int yt9215_get_port_link(struct switch_dev *dev, int port,
				struct switch_port_link *link)
{
	struct yt9215_priv *p = container_of(dev, struct yt9215_priv, swdev);
	int phy = yt9215_phyaddr(port);
	u16 bmsr;
	u32 status, sp;
	int ret;

	if (port == p->cpu_port) {
		/* CPU port (switch port 9, RGMII): read MAC status register */
		u32 status, sp;

		ret = yt9215_reg_read(p,
				YT9215_PORT_STATUS_REG(yt9215_swport(p, port)),
				&status);
		if (ret)
			return ret;
		link->link = !!(status & PORT_STATUS_LINK);
		link->duplex = !!(status & PORT_STATUS_DUPLEX);
		link->tx_flow = !!(status & PORT_STATUS_TX_FC);
		link->rx_flow = !!(status & PORT_STATUS_RX_FC);
		link->aneg = false;
		sp = (status & PORT_STATUS_SPEED_MASK) >>
		     PORT_STATUS_SPEED_OFFSET;
		switch (sp) {
		case 0:  link->speed = SWITCH_PORT_SPEED_10;   break;
		case 1:  link->speed = SWITCH_PORT_SPEED_100;  break;
		case 2:  link->speed = SWITCH_PORT_SPEED_1000; break;
		default: link->speed = SWITCH_PORT_SPEED_1000; break;
		}
		return 0;
	}

	if (phy < 0)
		return -ENODEV;

	/* Read BMSR twice (bit 2 is latching-low) */
	ret = yt9215_phy_read(p, phy, 0x01, &bmsr);
	if (ret)
		return ret;
	ret = yt9215_phy_read(p, phy, 0x01, &bmsr);
	if (ret)
		return ret;
	link->link = !!(bmsr & 0x0004); /* BMSR bit2: link up */
	link->aneg = true;

	if (!link->link) {
		link->speed = SWITCH_PORT_SPEED_UNKNOWN;
		link->duplex = false;
		link->tx_flow = false;
		link->rx_flow = false;
		return 0;
	}

	/* Link is up: read MAC status for negotiated speed/duplex */
	ret = yt9215_reg_read(p,
			YT9215_PORT_STATUS_REG(yt9215_swport(p, port)),
			&status);
	if (ret)
		return ret;
	link->duplex = !!(status & PORT_STATUS_DUPLEX);
	link->tx_flow = !!(status & PORT_STATUS_TX_FC);
	link->rx_flow = !!(status & PORT_STATUS_RX_FC);
	sp = (status & PORT_STATUS_SPEED_MASK) >> PORT_STATUS_SPEED_OFFSET;
	switch (sp) {
		case 0:  
			link->speed = SWITCH_PORT_SPEED_10;   
			break;
		case 1:  
			link->speed = SWITCH_PORT_SPEED_100;  
			break;
		case 2:  
			link->speed = SWITCH_PORT_SPEED_1000; 
			break;
		default: 
			link->speed = SWITCH_PORT_SPEED_UNKNOWN; 
			break;
	}

	return 0;
}

/*
 * Port statistics
 */
static int yt9215_get_port_stats(struct switch_dev *dev, int port,
				 struct switch_port_stats *stats)
{
	struct yt9215_priv *p = container_of(dev, struct yt9215_priv, swdev);

	/* TODO: read MIB counters */
	stats->tx_bytes = 0;
	stats->rx_bytes = 0;
	dev_dbg(p->dev, "port stats not yet implemented\n");
	return 0;
}

/*
 * Apply config — most register writes are immediate; no-op.
 */
static int yt9215_apply_config(struct switch_dev *dev)
{
	return 0;
}

/*
 * Reset the switch
 */
static int yt9215_reset_switch(struct switch_dev *dev)
{
	struct yt9215_priv *p = container_of(dev, struct yt9215_priv, swdev);

	return yt9215_reset(p);
}

static int yt9215_global_enable_vlan_get(struct switch_dev *dev,
					 const struct switch_attr *attr,
					 struct switch_val *val)
{
	struct yt9215_priv *p = container_of(dev, struct yt9215_priv, swdev);

	val->value.i = p->vlan_enabled ? 1 : 0;
	return 0;
}

static int yt9215_global_enable_vlan_set(struct switch_dev *dev,
					 const struct switch_attr *attr,
					 struct switch_val *val)
{
	struct yt9215_priv *p = container_of(dev, struct yt9215_priv, swdev);
	bool en = val->value.i ? true : false;

	if (en == p->vlan_enabled)
		return 0;

	p->vlan_enabled = en;
	if (!en)
		return yt9215_set_default_vlan(p);

	return 0;
}

static const struct switch_attr yt9215_global[] = {
	{
		.type = SWITCH_TYPE_INT,
		.name = "enable_vlan",
		.description = "Enable VLAN processing (0=dumb switch, 1=VLAN aware)",
		.max = 1,
		.set = yt9215_global_enable_vlan_set,
		.get = yt9215_global_enable_vlan_get,
	},
};

const struct switch_dev_ops yt9215_sw_ops = {
	.attr_global = { ARRAY_SIZE(yt9215_global), yt9215_global },
	.attr_port   = { 0, NULL },
	.attr_vlan   = { 0, NULL },

	.get_vlan_ports		= yt9215_get_vlan_ports,
	.set_vlan_ports		= yt9215_set_vlan_ports,
	.get_port_pvid		= yt9215_get_port_pvid,
	.set_port_pvid		= yt9215_set_port_pvid,
	.get_port_link		= yt9215_get_port_link,
	.get_port_stats		= yt9215_get_port_stats,
	.apply_config		= yt9215_apply_config,
	.reset_switch		= yt9215_reset_switch,
	.phy_read16		= NULL,
	.phy_write16		= NULL,
};
