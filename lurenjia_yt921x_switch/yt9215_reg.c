/* SPDX-License-Identifier: GPL-2.0 */
#include <linux/delay.h>
#include <linux/err.h>
#include <linux/phy.h>
#include "yt9215.h"
#include "yt9215_regs.h"

#define SMI_SLOT_ADDR_WRITE (0<<1 | 0)
#define SMI_SLOT_ADDR_READ  (0<<1 | 1)
#define SMI_SLOT_DATA_WRITE (1<<1 | 0)
#define SMI_SLOT_DATA_READ  (1<<1 | 1)

static inline u8 __smi_slot(struct yt9215_priv *p, int slot)
{
	return (u8)slot;
}

int yt9215_reg_write(struct yt9215_priv *p, u32 reg, u32 val)
{
	struct mii_bus *bus = p->host_mii;
	int addr = p->base_addr;
	u8 s;
	int ret;

	mutex_lock_nested(&bus->mdio_lock, MDIO_MUTEX_NESTED);

	s = __smi_slot(p, SMI_SLOT_ADDR_WRITE);
	ret = __mdiobus_write(bus, addr, s, (u16)(reg >> 16));
	if (ret) goto out;
	ret = __mdiobus_write(bus, addr, s, (u16)(reg & 0xffff));
	if (ret) goto out;

	s = __smi_slot(p, SMI_SLOT_DATA_WRITE);
	ret = __mdiobus_write(bus, addr, s, (u16)(val >> 16));
	if (ret) goto out;
	ret = __mdiobus_write(bus, addr, s, (u16)(val & 0xffff));

out:
	mutex_unlock(&bus->mdio_lock);
	return ret;
}

int yt9215_reg_read(struct yt9215_priv *p, u32 reg, u32 *val)
{
	struct mii_bus *bus = p->host_mii;
	int addr = p->base_addr;
	u8 s;
	u32 v;
	int res;

	mutex_lock_nested(&bus->mdio_lock, MDIO_MUTEX_NESTED);

	s = __smi_slot(p, SMI_SLOT_ADDR_READ);
	res = __mdiobus_write(bus, addr, s, (u16)(reg >> 16));
	if (res) goto out;
	res = __mdiobus_write(bus, addr, s, (u16)(reg & 0xffff));
	if (res) goto out;

	s = __smi_slot(p, SMI_SLOT_DATA_READ);
	res = __mdiobus_read(bus, addr, s);
	if (res < 0) goto out;
	v = (u16)res;
	res = __mdiobus_read(bus, addr, s);
	if (res < 0) goto out;
	v = (v << 16) | (u16)res;

	*val = v;
	res = 0;
out:
	mutex_unlock(&bus->mdio_lock);
	return res;
}

int yt9215_reg_set(struct yt9215_priv *p, u32 reg, u32 mask, u32 set)
{
	u32 val;
	int ret;
	ret = yt9215_reg_read(p, reg, &val);
	if (ret) return ret;
	val = (val & ~mask) | (set & mask);
	return yt9215_reg_write(p, reg, val);
}

int yt9215_phy_write(struct yt9215_priv *p, u8 phy, u32 reg, u16 val)
{
	u32 addr_ctrl;
	int i, ret;

	if (reg > 0x1f) {
		ret = yt9215_phy_write(p, phy, 0x1e, (u16)reg);
		if (ret) return ret;
		return yt9215_phy_write(p, phy, 0x1f, val);
	}

	addr_ctrl = ((u32)(phy & 0x1f) << 21) |
		    ((u32)(reg & 0x1f) << 16) |
		    (INT_IF_OP_WRITE << 2);

	ret = yt9215_reg_write(p, YT9215_INT_IF_ADDR_CTRL, addr_ctrl);
	if (ret) return ret;
	ret = yt9215_reg_write(p, YT9215_INT_IF_DATA_0, val);
	if (ret) return ret;
	ret = yt9215_reg_write(p, YT9215_INT_IF_FRAME_CTRL, 1);
	if (ret) return ret;

	for (i = 0; i < INT_IF_BUSY_WAIT_MAX; i++) {
		u32 status;
		ret = yt9215_reg_read(p, YT9215_INT_IF_FRAME_CTRL, &status);
		if (ret) return ret;
		if (!status) return 0;
		udelay(1);
	}
	dev_err(p->dev, "PHY write timeout phy=%d reg=0x%04x\n", phy, reg);
	return -ETIMEDOUT;
}

int yt9215_phy_read(struct yt9215_priv *p, u8 phy, u32 reg, u16 *val)
{
	u32 addr_ctrl, data;
	int i, ret;

	if (reg > 0x1f) {
		ret = yt9215_phy_write(p, phy, 0x1e, (u16)reg);
		if (ret) return ret;
		return yt9215_phy_read(p, phy, 0x1f, val);
	}

	addr_ctrl = ((u32)(phy & 0x1f) << 21) |
		    ((u32)(reg & 0x1f) << 16) |
		    (INT_IF_OP_READ << 2);

	ret = yt9215_reg_write(p, YT9215_INT_IF_ADDR_CTRL, addr_ctrl);
	if (ret) return ret;
	ret = yt9215_reg_write(p, YT9215_INT_IF_FRAME_CTRL, 1);
	if (ret) return ret;

	for (i = 0; i < INT_IF_BUSY_WAIT_MAX; i++) {
		u32 status;
		ret = yt9215_reg_read(p, YT9215_INT_IF_FRAME_CTRL, &status);
		if (ret) return ret;
		if (!status) {
			ret = yt9215_reg_read(p, YT9215_INT_IF_DATA_1, &data);
			if (ret) return ret;
			*val = (u16)data;
			return 0;
		}
		udelay(1);
	}
	dev_err(p->dev, "PHY read timeout phy=%d reg=0x%04x\n", phy, reg);
	return -ETIMEDOUT;
}
