/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef __REG_TIERED_SM_TABLE_MAP_H__
#define __REG_TIERED_SM_TABLE_MAP_H__

#include "tiered_sm_table_map_macro.h"

struct sm_table_map {
  volatile u_int32_t BB_sm_tables_dummy1;         /*        0x0 - 0x4        */
  volatile unsigned int pad__0[0xbf];             /*        0x4 - 0x300      */
  volatile u_int32_t BB_dc_dac_mem_b0[52];        /*      0x300 - 0x3d0      */
  volatile unsigned int pad__1[0xc];              /*      0x3d0 - 0x400      */
  volatile u_int32_t BB_tpc_txgain_sram[96];      /*      0x400 - 0x580      */
  volatile u_int32_t BB_tpc_plut_sram[256];       /*      0x580 - 0x980      */
  volatile unsigned int pad__2[0x100];            /*      0x980 - 0xd80      */
  volatile u_int32_t BB_tpc_glut_sram[68];        /*      0xd80 - 0xe90      */
  volatile unsigned int pad__3[0x44];             /*      0xe90 - 0xfa0      */
  volatile u_int32_t BB_tpc_alut_sram[64];        /*      0xfa0 - 0x10a0     */
  volatile unsigned int pad__4[0x58];             /*     0x10a0 - 0x1200     */
  volatile u_int32_t BB_rxcal_tx_gain_table_0;    /*     0x1200 - 0x1204     */
  volatile u_int32_t BB_rxcal_tx_gain_table_1;    /*     0x1204 - 0x1208     */
  volatile u_int32_t BB_rxcal_tx_gain_table_2;    /*     0x1208 - 0x120c     */
  volatile u_int32_t BB_rxcal_tx_gain_table_3;    /*     0x120c - 0x1210     */
  volatile u_int32_t BB_rxcal_tx_gain_table_4;    /*     0x1210 - 0x1214     */
  volatile u_int32_t BB_rxcal_tx_gain_table_5;    /*     0x1214 - 0x1218     */
  volatile u_int32_t BB_rxcal_tx_gain_table_6;    /*     0x1218 - 0x121c     */
  volatile u_int32_t BB_rxcal_tx_gain_table_7;    /*     0x121c - 0x1220     */
  volatile u_int32_t BB_rxcal_tx_gain_table_8;    /*     0x1220 - 0x1224     */
  volatile u_int32_t BB_rxcal_tx_gain_table_9;    /*     0x1224 - 0x1228     */
  volatile u_int32_t BB_rxcal_tx_gain_table_10;   /*     0x1228 - 0x122c     */
  volatile u_int32_t BB_rxcal_tx_gain_table_11;   /*     0x122c - 0x1230     */
  volatile u_int32_t BB_rxcal_tx_gain_table_12;   /*     0x1230 - 0x1234     */
  volatile u_int32_t BB_rxcal_tx_gain_table_13;   /*     0x1234 - 0x1238     */
  volatile u_int32_t BB_rxcal_tx_gain_table_14;   /*     0x1238 - 0x123c     */
  volatile u_int32_t BB_rxcal_tx_gain_table_15;   /*     0x123c - 0x1240     */
  volatile u_int32_t BB_rxcal_tx_gain_table_16;   /*     0x1240 - 0x1244     */
  volatile u_int32_t BB_rxcal_tx_gain_table_17;   /*     0x1244 - 0x1248     */
  volatile u_int32_t BB_rxcal_tx_gain_table_18;   /*     0x1248 - 0x124c     */
  volatile u_int32_t BB_rxcal_tx_gain_table_19;   /*     0x124c - 0x1250     */
  volatile u_int32_t BB_rxcal_tx_gain_table_20;   /*     0x1250 - 0x1254     */
  volatile u_int32_t BB_rxcal_tx_gain_table_21;   /*     0x1254 - 0x1258     */
  volatile u_int32_t BB_rxcal_tx_gain_table_22;   /*     0x1258 - 0x125c     */
  volatile u_int32_t BB_rxcal_tx_gain_table_23;   /*     0x125c - 0x1260     */
  volatile u_int32_t BB_rxcal_tx_gain_table_24;   /*     0x1260 - 0x1264     */
  volatile u_int32_t BB_rxcal_tx_gain_table_25;   /*     0x1264 - 0x1268     */
  volatile u_int32_t BB_rxcal_tx_gain_table_26;   /*     0x1268 - 0x126c     */
  volatile u_int32_t BB_rxcal_tx_gain_table_27;   /*     0x126c - 0x1270     */
  volatile u_int32_t BB_rxcal_tx_gain_table_28;   /*     0x1270 - 0x1274     */
  volatile u_int32_t BB_rxcal_tx_gain_table_29;   /*     0x1274 - 0x1278     */
  volatile u_int32_t BB_rxcal_tx_gain_table_30;   /*     0x1278 - 0x127c     */
  volatile u_int32_t BB_rxcal_tx_gain_table_31;   /*     0x127c - 0x1280     */
  volatile u_int32_t BB_rxcal_rx_gain_table_0;    /*     0x1280 - 0x1284     */
  volatile u_int32_t BB_rxcal_rx_gain_table_1;    /*     0x1284 - 0x1288     */
  volatile u_int32_t BB_rxcal_rx_gain_table_2;    /*     0x1288 - 0x128c     */
  volatile u_int32_t BB_rxcal_rx_gain_table_3;    /*     0x128c - 0x1290     */
  volatile u_int32_t BB_rxcal_rx_gain_table_4;    /*     0x1290 - 0x1294     */
  volatile u_int32_t BB_rxcal_rx_gain_table_5;    /*     0x1294 - 0x1298     */
  volatile u_int32_t BB_rxcal_rx_gain_table_6;    /*     0x1298 - 0x129c     */
  volatile u_int32_t BB_rxcal_rx_gain_table_7;    /*     0x129c - 0x12a0     */
  volatile u_int32_t BB_rxcal_rx_gain_table_8;    /*     0x12a0 - 0x12a4     */
  volatile u_int32_t BB_rxcal_rx_gain_table_9;    /*     0x12a4 - 0x12a8     */
  volatile u_int32_t BB_rxcal_rx_gain_table_10;   /*     0x12a8 - 0x12ac     */
  volatile u_int32_t BB_rxcal_rx_gain_table_11;   /*     0x12ac - 0x12b0     */
  volatile u_int32_t BB_rxcal_rx_gain_table_12;   /*     0x12b0 - 0x12b4     */
  volatile u_int32_t BB_rxcal_rx_gain_table_13;   /*     0x12b4 - 0x12b8     */
  volatile u_int32_t BB_rxcal_rx_gain_table_14;   /*     0x12b8 - 0x12bc     */
  volatile u_int32_t BB_rxcal_rx_gain_table_15;   /*     0x12bc - 0x12c0     */
  volatile unsigned int pad__5[0x10];             /*     0x12c0 - 0x1300     */
  volatile u_int32_t BB_sm_hc_preemp_lut[412];    /*     0x1300 - 0x1970     */
  volatile u_int32_t BB_sm_tables_dummy2;         /*     0x1970 - 0x1974     */
};

struct tiered_sm_table_map {
  struct sm_table_map sm_table_map;               /*        0x0 - 0x1974     */
};

#endif /* __REG_TIERED_SM_TABLE_MAP_H__ */
