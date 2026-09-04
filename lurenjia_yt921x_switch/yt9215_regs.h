/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Motorcomm YT9215S Unmanaged Ethernet Switch Driver
 * Register definitions
 *
 */

#ifndef _YT9215_REGS_H
#define _YT9215_REGS_H

/* ---- Switch global registers (accessed via Clause-22 indirect SMI) ---- */
#define YT9215_CHIP_ID_REG		0x80008	/* Chip ID (YT_SW_ID_9215=0x9002) */
#define YT9215_INTERFACE_CTRL_REG	0x80028	/* Interface control */
#define YT9215_CHIP_MODE_REG		0x80388	/* Chip mode */
#define YT9215_CHIP_INTERFACE_SEL_REG	0x80394	/* Interface selection */
#define YT9215_EXTIF1_MODE_REG		0x80408
#define   EXTIF_MODE_XMII_MODE_OFFSET	29
#define   EXTIF_MODE_XMII_MODE_MASK	(0x7U << 29)  /* unsigned: avoids sign-extend at bit 31 */
#define   EXTIF_MODE_XMII_PORT_EN	BIT(18)
#define   EXTIF_MODE_RGMII		4	/* YT_EXTIF_MODE_RGMII */
#define   CHIP_IFSEL_PORT9_XMII		BIT(0)	/* extif_bit for port 9 (extif_id=1) */

/* Chip ID values */
#define YT9215_CHIP_ID_9215		0x9002
#define YT9215_CHIP_ID_9218		0x9001
#define YT9215_GLOBAL_CTRL1_REG		0x80004
#define   GLOBAL_CTRL1_MIB_EN		BIT(1)

/* PORT_CTRLm (table 11): base 0x80100, stride 4.
 * Field layout (verified against SDK fal_tiger_struct.c port_ctrlm_field[]):
 *   [10] FLOW_LINK_AN  [9] AN_LINK_EN  [8] HALF_FC_EN
 *   [7]  DUPLEX_MODE   [6] RX_FC_EN    [5] TX_FC_EN
 *   [4]  RXMAC_EN      [3] TXMAC_EN    [2:0] SPEED_MODE */
#define YT9215_PORT_CTRL_REG(macid)	(0x80100 + ((macid) * 0x4))
#define   PORT_CTRL_FLOW_LINK_AN	BIT(10)
#define   PORT_CTRL_AN_LINK_EN		BIT(9)
#define   PORT_CTRL_DUPLEX_MODE		BIT(7)
#define   PORT_CTRL_RX_FC_EN		BIT(6)
#define   PORT_CTRL_TX_FC_EN		BIT(5)
#define   PORT_CTRL_RXMAC_EN		BIT(4)
#define   PORT_CTRL_TXMAC_EN		BIT(3)
#define   PORT_CTRL_SPEED_MODE_OFFSET	0
#define   PORT_CTRL_SPEED_MODE_MASK	(0x7 << 0)
#define   PORT_CTRL_SPEED_1000M		2	/* PORT_SPEED_1000M */

/* PORT_STATUSm (table 12): base 0x80200, stride 4 */
#define YT9215_PORT_STATUS_REG(macid)	(0x80200 + ((macid) * 0x4))
#define   PORT_STATUS_LINK		BIT(8)
#define   PORT_STATUS_DUPLEX		BIT(7)
#define   PORT_STATUS_RX_FC		BIT(6)
#define   PORT_STATUS_TX_FC		BIT(5)
#define   PORT_STATUS_SPEED_OFFSET	0
#define   PORT_STATUS_SPEED_MASK	(0x7 << 0)

/* PORT_VLAN_CTRLNm (table 45): base 0x230010, stride 4
 *   DEFAULT_CVID is bits [17:6] (width 12) */
#define YT9215_PORT_VLAN_CTRLN_REG(macid)  (0x230010 + ((macid) * 0x4))
#define   PORT_VLAN_CTRLN_DEFAULT_CVID_OFFSET	6
#define   PORT_VLAN_CTRLN_DEFAULT_CVID_MASK	(0xfff << 6)
#define YT9215_PORT_VLAN_CTRL1N_REG(macid)	(0x230080 + ((macid) * 0x4))
#define   PORT_VLAN_CTRL1N_CTAG_AFT_MASK	(0x3U << 0)
#define   PORT_VLAN_CTRL1N_STAG_AFT_MASK	(0x3U << 2)
#define   VLAN_AFT_ALL				0
#define YT9215_EGR_PORT_VLAN_CTRLN_REG(macid)	(0x100080 + ((macid) * 0x4))
#define   EGR_PORT_VLAN_CTRLN_CTAG_MODE_OFFSET	12
#define   EGR_PORT_VLAN_CTRLN_CTAG_MODE_MASK	(0x7U << 12)
#define   EGR_CTAG_MODE_ENTRY_BASED		5
#define YT9215_TPID_PROFILE0_REG		0x210000	/* ingress TPID profile 0 */
#define YT9215_EGR_TPID_PROFILE0_REG		0x100300	/* egress TPID profile 0 */
#define YT9215_TPID_8100			0x8100

/* PARSER_PORT_CTRLNm: base 0x210010, stride 4 (per MAC). CTAG_TPID_MASK [3:0]
 * is a bitmask of which TPID profiles the port accepts as C-tags. */
#define YT9215_PARSER_PORT_CTRLN_REG(macid)	(0x210010 + ((macid) * 0x4))
#define   PARSER_PORT_CTRLN_CTAG_TPID_MASK_OFFSET	0
#define   PARSER_PORT_CTRLN_CTAG_TPID_MASK_MASK	(0xfU << 0)
#define   PARSER_TPID_PROFILE0			0x1	/* accept TPID profile 0 (0x8100) */

/* EGR_PORT_CTRLNm: base 0x100000, stride 4 (per MAC). CTAG_TPID_SEL [5:4]
 * selects which egress TPID profile is used when adding a C-tag. */
#define YT9215_EGR_PORT_CTRLN_REG(macid)	(0x100000 + ((macid) * 0x4))
#define   EGR_PORT_CTRLN_CTAG_TPID_SEL_OFFSET	4
#define   EGR_PORT_CTRLN_CTAG_TPID_SEL_MASK	(0x3U << 4)
#define   EGR_TPID_PROFILE0			0	/* profile 0 = 0x8100 */

/* L2_VLAN_TBLm (table 187): base 0x188000, stride 8 (2 words/entry), 4096
 *   entries (per VID). PORT_MEMBER_BITMAP is bits [17:7] of word 0 (+0). */
#define YT9215_VLAN_TBL_REG(vid)	(0x188000 + ((vid) * 0x8))
#define   VLAN_TBL_PORT_MEMBER_OFFSET	7	/* word0 (+0) bits [17:7] */
#define   VLAN_TBL_PORT_MEMBER_MASK	(0x7ff << 7)
/* Each entry is 2 words; word1 (+4) holds UNTAG_MEMBER_BITMAP [18:8].
 * The entry latches only when word1 is written (SDK writes both words). */
#define   VLAN_TBL_UNTAG_OFFSET		8
#define   VLAN_TBL_UNTAG_MASK		(0x7ff << 8)

/* L2_PORT_ISOLATION_CTRLNm (table 120): base 0x180294, stride 4 */
#define YT9215_PORT_ISOLATION_REG(macid) (0x180294 + ((macid) * 0x4))
#define   PORT_ISOLATION_MASK_OFFSET	0
#define   PORT_ISOLATION_MASK_WIDTH	11
#define YT9215_SWCONFIG_PORTS	5
#define YT9215_CPU_PORT		4  /* swconfig index of CPU port */

/* Map swconfig port index → internal PHY MDIO address (-1 = no PHY) */
static inline int yt9215_phyaddr(int swconfig_port)
{
	if (swconfig_port >= 0 && swconfig_port <= 3)
		return swconfig_port + 1;  /* ports 0-3 → PHY 1-4 */
	return -1;  /* CPU port has no PHY */
}
#define YT9215_MAX_VLANS	4096

/* ---- Internal PHY indirect access (INT_IF) ---- */
#define YT9215_INT_IF_FRAME_CTRL	0xf0000
#define YT9215_INT_IF_ADDR_CTRL	0xf0004
#define YT9215_INT_IF_DATA_0		0xf0008
#define YT9215_INT_IF_DATA_1		0xf000c

#define INT_IF_OP_WRITE			1
#define INT_IF_OP_READ			2
#define INT_IF_BUSY_WAIT_MAX		10

/* ---- External PHY indirect access (EXT_IF) ---- */
#define YT9215_EXT_IF_FRAME_CTRL	0x6a000
#define YT9215_EXT_IF_ADDR_CTRL	0x6a004
#define YT9215_EXT_IF_DATA_0		0x6a008
#define YT9215_EXT_IF_DATA_1		0x6a00c

/* ---- Global control / operation ---- */
#define YT9215_E_OP_CTRL_0		0xe0000
#define YT9215_E_OP_CTRL_1		0xe0004

/* ---- MIB / statistics (table-based, TODO: extract real addresses) ---- */
/* MIB counters per-port, accessed via indirect registers */
#define YT9215_MIB_BASE		0x90000	/* TODO: verify */
#define YT9215_LED_GLB_CTRL			0xd0000
#define YT9215_LED_CTRL_0_BASE			0xd0004 /* LED0 action, per MAC, stride 4 */
#define YT9215_LED_CTRL_1_BASE			0xd0040 /* LED1 action */
#define YT9215_LED_CTRL_2_BASE			0xd0080 /* LED2 action */
#define YT9215_LED_SERIAL_CTRL			0xd0100
#define YT9215_LED_SERIAL_REMAPPING_BASE	0xd0104

/* LED_GLB_CTRL bitfields */
#define   LED_GLB_MODE_OFFSET			0
#define   LED_GLB_MODE_MASK			(0x3U << 0)
#define   LED_GLB_MODE_SERIAL			2	/* LED_MODE_SERIAL */
#define   LED_GLB_SERIAL_PORT_NUM_OFFSET	13	/* [16:13] serial port count */
#define   LED_GLB_SERIAL_PORT_NUM_MASK		(0xfU << 13)
#define   LED_GLB_SERIAL_PORT_NUM_7		7	/* 7 ports (YT9215_21) */
#define   LED_GLB_ENABLE			BIT(21)	/* global LED enable */

/* LED_SERIAL_CTRL bitfields */
#define   LED_SERIAL_PIN_NUM_MASK		(0x3U << 0)	/* [1:0] ledNum-1 */
#define   LED_SERIAL_PIN_NUM_3			2		/* 3 LED pins */
#define   LED_SERIAL_ACTIVE_MODE_BIT		BIT(4)		/* 1 = active low */
#define   LED_SERIAL_ENABLE_MASK		(0x3U << 24)	/* [25:24] serial enable */

#define   LED_ACTION_10M_ON			BIT(4)		/* 0x0010 link @10M  */
#define   LED_ACTION_100M_ON			BIT(5)		/* 0x0020 link @100M */
#define   LED_ACTION_1000M_ON			BIT(6)		/* 0x0040 link @1000M*/
#define   LED_ACTION_RXACT_BLINK		BIT(9)		/* 0x0200 blink on RX */
#define   LED_ACTION_TXACT_BLINK		BIT(10)		/* 0x0400 blink on TX */
#define   LED_ACTION_ACTIVE_BLINK_INDICATE	BIT(13)		/* 0x2000 CLEAR: lights w/o link */
#define   LED_ACTION_LOOPDETECT_INDICATE	BIT(14)		/* 0x4000 CLEAR: lights w/o link */
#define   LED_ACTION_DISABLE_LINK_TRY		BIT(17)		/* 0x20000 LED0 only */

#define   LED0_ACTION_VALUE							\
	(LED_ACTION_10M_ON | LED_ACTION_100M_ON | LED_ACTION_1000M_ON |	\
	 LED_ACTION_RXACT_BLINK | LED_ACTION_TXACT_BLINK |		\
	 LED_ACTION_DISABLE_LINK_TRY)

#endif /* _YT9215_REGS_H */
