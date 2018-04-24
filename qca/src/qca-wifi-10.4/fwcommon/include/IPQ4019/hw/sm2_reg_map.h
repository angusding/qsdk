/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _PHY_SM2_REG_MAP_H_
#define _PHY_SM2_REG_MAP_H_


#ifndef __PHY_SM2_REG_MAP_BASE_ADDRESS
#define __PHY_SM2_REG_MAP_BASE_ADDRESS (0x12600)
#endif


// 0x84 (PHY_BB_SWITCH_TABLE_CHN_B2)
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_B_2_LSB                        10
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_B_2_MSB                        11
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_B_2_MASK                       0xc00
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_B_2_GET(x)                     (((x) & PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_B_2_MASK) >> PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_B_2_LSB)
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_B_2_SET(x)                     (((0 | (x)) << PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_B_2_LSB) & PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_B_2_MASK)
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_B_2_RESET                      0x0
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_RX12_2_LSB                     8
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_RX12_2_MSB                     9
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_RX12_2_MASK                    0x300
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_RX12_2_GET(x)                  (((x) & PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_RX12_2_MASK) >> PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_RX12_2_LSB)
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_RX12_2_SET(x)                  (((0 | (x)) << PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_RX12_2_LSB) & PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_RX12_2_MASK)
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_RX12_2_RESET                   0x0
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_RX1_2_LSB                      6
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_RX1_2_MSB                      7
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_RX1_2_MASK                     0xc0
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_RX1_2_GET(x)                   (((x) & PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_RX1_2_MASK) >> PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_RX1_2_LSB)
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_RX1_2_SET(x)                   (((0 | (x)) << PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_RX1_2_LSB) & PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_RX1_2_MASK)
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_RX1_2_RESET                    0x0
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_R_2_LSB                        4
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_R_2_MSB                        5
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_R_2_MASK                       0x30
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_R_2_GET(x)                     (((x) & PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_R_2_MASK) >> PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_R_2_LSB)
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_R_2_SET(x)                     (((0 | (x)) << PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_R_2_LSB) & PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_R_2_MASK)
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_R_2_RESET                      0x0
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_T_2_LSB                        2
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_T_2_MSB                        3
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_T_2_MASK                       0xc
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_T_2_GET(x)                     (((x) & PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_T_2_MASK) >> PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_T_2_LSB)
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_T_2_SET(x)                     (((0 | (x)) << PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_T_2_LSB) & PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_T_2_MASK)
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_T_2_RESET                      0x0
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_IDLE_2_LSB                     0
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_IDLE_2_MSB                     1
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_IDLE_2_MASK                    0x3
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_IDLE_2_GET(x)                  (((x) & PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_IDLE_2_MASK) >> PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_IDLE_2_LSB)
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_IDLE_2_SET(x)                  (((0 | (x)) << PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_IDLE_2_LSB) & PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_IDLE_2_MASK)
#define PHY_BB_SWITCH_TABLE_CHN_B2_SWITCH_TABLE_IDLE_2_RESET                   0x0
#define PHY_BB_SWITCH_TABLE_CHN_B2_ADDRESS                                     (0x84 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_SWITCH_TABLE_CHN_B2_RSTMASK                                     0xfff
#define PHY_BB_SWITCH_TABLE_CHN_B2_RESET                                       0x0

// 0xd0 (PHY_BB_FCAL_2_B2)
#define PHY_BB_FCAL_2_B2_FLC_CAP_VAL_STATUS_2_LSB                              20
#define PHY_BB_FCAL_2_B2_FLC_CAP_VAL_STATUS_2_MSB                              24
#define PHY_BB_FCAL_2_B2_FLC_CAP_VAL_STATUS_2_MASK                             0x1f00000
#define PHY_BB_FCAL_2_B2_FLC_CAP_VAL_STATUS_2_GET(x)                           (((x) & PHY_BB_FCAL_2_B2_FLC_CAP_VAL_STATUS_2_MASK) >> PHY_BB_FCAL_2_B2_FLC_CAP_VAL_STATUS_2_LSB)
#define PHY_BB_FCAL_2_B2_FLC_CAP_VAL_STATUS_2_SET(x)                           (((0 | (x)) << PHY_BB_FCAL_2_B2_FLC_CAP_VAL_STATUS_2_LSB) & PHY_BB_FCAL_2_B2_FLC_CAP_VAL_STATUS_2_MASK)
#define PHY_BB_FCAL_2_B2_FLC_CAP_VAL_STATUS_2_RESET                            0x0
#define PHY_BB_FCAL_2_B2_FLC_SW_CAP_VAL_2_LSB                                  3
#define PHY_BB_FCAL_2_B2_FLC_SW_CAP_VAL_2_MSB                                  7
#define PHY_BB_FCAL_2_B2_FLC_SW_CAP_VAL_2_MASK                                 0xf8
#define PHY_BB_FCAL_2_B2_FLC_SW_CAP_VAL_2_GET(x)                               (((x) & PHY_BB_FCAL_2_B2_FLC_SW_CAP_VAL_2_MASK) >> PHY_BB_FCAL_2_B2_FLC_SW_CAP_VAL_2_LSB)
#define PHY_BB_FCAL_2_B2_FLC_SW_CAP_VAL_2_SET(x)                               (((0 | (x)) << PHY_BB_FCAL_2_B2_FLC_SW_CAP_VAL_2_LSB) & PHY_BB_FCAL_2_B2_FLC_SW_CAP_VAL_2_MASK)
#define PHY_BB_FCAL_2_B2_FLC_SW_CAP_VAL_2_RESET                                0xf
#define PHY_BB_FCAL_2_B2_ADDRESS                                               (0xd0 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_FCAL_2_B2_RSTMASK                                               0x1f000f8
#define PHY_BB_FCAL_2_B2_RESET                                                 0x78

// 0xd4 (PHY_BB_DFT_TONE_CTRL_B2)
#define PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_FREQ_ANG_2_LSB                        4
#define PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_FREQ_ANG_2_MSB                        12
#define PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_FREQ_ANG_2_MASK                       0x1ff0
#define PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_FREQ_ANG_2_GET(x)                     (((x) & PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_FREQ_ANG_2_MASK) >> PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_FREQ_ANG_2_LSB)
#define PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_FREQ_ANG_2_SET(x)                     (((0 | (x)) << PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_FREQ_ANG_2_LSB) & PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_FREQ_ANG_2_MASK)
#define PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_FREQ_ANG_2_RESET                      0x0
#define PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_AMP_SEL_2_LSB                         2
#define PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_AMP_SEL_2_MSB                         3
#define PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_AMP_SEL_2_MASK                        0xc
#define PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_AMP_SEL_2_GET(x)                      (((x) & PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_AMP_SEL_2_MASK) >> PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_AMP_SEL_2_LSB)
#define PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_AMP_SEL_2_SET(x)                      (((0 | (x)) << PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_AMP_SEL_2_LSB) & PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_AMP_SEL_2_MASK)
#define PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_AMP_SEL_2_RESET                       0x0
#define PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_EN_2_LSB                              0
#define PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_EN_2_MSB                              0
#define PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_EN_2_MASK                             0x1
#define PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_EN_2_GET(x)                           (((x) & PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_EN_2_MASK) >> PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_EN_2_LSB)
#define PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_EN_2_SET(x)                           (((0 | (x)) << PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_EN_2_LSB) & PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_EN_2_MASK)
#define PHY_BB_DFT_TONE_CTRL_B2_DFT_TONE_EN_2_RESET                            0x0
#define PHY_BB_DFT_TONE_CTRL_B2_ADDRESS                                        (0xd4 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_DFT_TONE_CTRL_B2_RSTMASK                                        0x1ffd
#define PHY_BB_DFT_TONE_CTRL_B2_RESET                                          0x0

// 0xdc (PHY_BB_CL_MAP_0_B2)
#define PHY_BB_CL_MAP_0_B2_CL_MAP_0_LSB                                        0
#define PHY_BB_CL_MAP_0_B2_CL_MAP_0_MSB                                        31
#define PHY_BB_CL_MAP_0_B2_CL_MAP_0_MASK                                       0xffffffff
#define PHY_BB_CL_MAP_0_B2_CL_MAP_0_GET(x)                                     (((x) & PHY_BB_CL_MAP_0_B2_CL_MAP_0_MASK) >> PHY_BB_CL_MAP_0_B2_CL_MAP_0_LSB)
#define PHY_BB_CL_MAP_0_B2_CL_MAP_0_SET(x)                                     (((0 | (x)) << PHY_BB_CL_MAP_0_B2_CL_MAP_0_LSB) & PHY_BB_CL_MAP_0_B2_CL_MAP_0_MASK)
#define PHY_BB_CL_MAP_0_B2_CL_MAP_0_RESET                                      0x0
#define PHY_BB_CL_MAP_0_B2_ADDRESS                                             (0xdc + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_MAP_0_B2_RSTMASK                                             0xffffffff
#define PHY_BB_CL_MAP_0_B2_RESET                                               0x0

// 0xe0 (PHY_BB_CL_MAP_1_B2)
#define PHY_BB_CL_MAP_1_B2_CL_MAP_1_LSB                                        0
#define PHY_BB_CL_MAP_1_B2_CL_MAP_1_MSB                                        31
#define PHY_BB_CL_MAP_1_B2_CL_MAP_1_MASK                                       0xffffffff
#define PHY_BB_CL_MAP_1_B2_CL_MAP_1_GET(x)                                     (((x) & PHY_BB_CL_MAP_1_B2_CL_MAP_1_MASK) >> PHY_BB_CL_MAP_1_B2_CL_MAP_1_LSB)
#define PHY_BB_CL_MAP_1_B2_CL_MAP_1_SET(x)                                     (((0 | (x)) << PHY_BB_CL_MAP_1_B2_CL_MAP_1_LSB) & PHY_BB_CL_MAP_1_B2_CL_MAP_1_MASK)
#define PHY_BB_CL_MAP_1_B2_CL_MAP_1_RESET                                      0x0
#define PHY_BB_CL_MAP_1_B2_ADDRESS                                             (0xe0 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_MAP_1_B2_RSTMASK                                             0xffffffff
#define PHY_BB_CL_MAP_1_B2_RESET                                               0x0

// 0xe4 (PHY_BB_CL_MAP_2_B2)
#define PHY_BB_CL_MAP_2_B2_CL_MAP_2_LSB                                        0
#define PHY_BB_CL_MAP_2_B2_CL_MAP_2_MSB                                        31
#define PHY_BB_CL_MAP_2_B2_CL_MAP_2_MASK                                       0xffffffff
#define PHY_BB_CL_MAP_2_B2_CL_MAP_2_GET(x)                                     (((x) & PHY_BB_CL_MAP_2_B2_CL_MAP_2_MASK) >> PHY_BB_CL_MAP_2_B2_CL_MAP_2_LSB)
#define PHY_BB_CL_MAP_2_B2_CL_MAP_2_SET(x)                                     (((0 | (x)) << PHY_BB_CL_MAP_2_B2_CL_MAP_2_LSB) & PHY_BB_CL_MAP_2_B2_CL_MAP_2_MASK)
#define PHY_BB_CL_MAP_2_B2_CL_MAP_2_RESET                                      0x0
#define PHY_BB_CL_MAP_2_B2_ADDRESS                                             (0xe4 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_MAP_2_B2_RSTMASK                                             0xffffffff
#define PHY_BB_CL_MAP_2_B2_RESET                                               0x0

// 0xe8 (PHY_BB_CL_MAP_3_B2)
#define PHY_BB_CL_MAP_3_B2_CL_MAP_3_LSB                                        0
#define PHY_BB_CL_MAP_3_B2_CL_MAP_3_MSB                                        31
#define PHY_BB_CL_MAP_3_B2_CL_MAP_3_MASK                                       0xffffffff
#define PHY_BB_CL_MAP_3_B2_CL_MAP_3_GET(x)                                     (((x) & PHY_BB_CL_MAP_3_B2_CL_MAP_3_MASK) >> PHY_BB_CL_MAP_3_B2_CL_MAP_3_LSB)
#define PHY_BB_CL_MAP_3_B2_CL_MAP_3_SET(x)                                     (((0 | (x)) << PHY_BB_CL_MAP_3_B2_CL_MAP_3_LSB) & PHY_BB_CL_MAP_3_B2_CL_MAP_3_MASK)
#define PHY_BB_CL_MAP_3_B2_CL_MAP_3_RESET                                      0x0
#define PHY_BB_CL_MAP_3_B2_ADDRESS                                             (0xe8 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_MAP_3_B2_RSTMASK                                             0xffffffff
#define PHY_BB_CL_MAP_3_B2_RESET                                               0x0

// 0x100 (PHY_BB_CL_TAB_B2)
#define PHY_BB_CL_TAB_B2_BB_GAIN_LSB                                           27
#define PHY_BB_CL_TAB_B2_BB_GAIN_MSB                                           30
#define PHY_BB_CL_TAB_B2_BB_GAIN_MASK                                          0x78000000
#define PHY_BB_CL_TAB_B2_BB_GAIN_GET(x)                                        (((x) & PHY_BB_CL_TAB_B2_BB_GAIN_MASK) >> PHY_BB_CL_TAB_B2_BB_GAIN_LSB)
#define PHY_BB_CL_TAB_B2_BB_GAIN_SET(x)                                        (((0 | (x)) << PHY_BB_CL_TAB_B2_BB_GAIN_LSB) & PHY_BB_CL_TAB_B2_BB_GAIN_MASK)
#define PHY_BB_CL_TAB_B2_BB_GAIN_RESET                                         0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_LSB                                  16
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_MSB                                  26
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_MASK                                 0x7ff0000
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_GET(x)                               (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_SET(x)                               (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_RESET                                0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_LSB                                  5
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_MSB                                  15
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_MASK                                 0xffe0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_GET(x)                               (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_SET(x)                               (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_RESET                                0x0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_LSB                                       0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_MSB                                       4
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_MASK                                      0x1f
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_GET(x)                                    (((x) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_MASK) >> PHY_BB_CL_TAB_B2_CL_GAIN_MOD_LSB)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_SET(x)                                    (((0 | (x)) << PHY_BB_CL_TAB_B2_CL_GAIN_MOD_LSB) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_MASK)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_RESET                                     0x0
#define PHY_BB_CL_TAB_B2_ADDRESS                                               (0x100 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_TAB_B2_RSTMASK                                               0x7fffffff
#define PHY_BB_CL_TAB_B2_RESET                                                 0x0

// 0x100 (PHY_BB_CL_TAB_B2_0)
#define PHY_BB_CL_TAB_B2_BB_GAIN_0_LSB                                         27
#define PHY_BB_CL_TAB_B2_BB_GAIN_0_MSB                                         30
#define PHY_BB_CL_TAB_B2_BB_GAIN_0_MASK                                        0x78000000
#define PHY_BB_CL_TAB_B2_BB_GAIN_0_GET(x)                                      (((x) & PHY_BB_CL_TAB_B2_BB_GAIN_0_MASK) >> PHY_BB_CL_TAB_B2_BB_GAIN_0_LSB)
#define PHY_BB_CL_TAB_B2_BB_GAIN_0_SET(x)                                      (((0 | (x)) << PHY_BB_CL_TAB_B2_BB_GAIN_0_LSB) & PHY_BB_CL_TAB_B2_BB_GAIN_0_MASK)
#define PHY_BB_CL_TAB_B2_BB_GAIN_0_RESET                                       0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_0_LSB                                16
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_0_MSB                                26
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_0_MASK                               0x7ff0000
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_0_GET(x)                             (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_0_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_0_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_0_SET(x)                             (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_0_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_0_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_0_RESET                              0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_0_LSB                                5
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_0_MSB                                15
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_0_MASK                               0xffe0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_0_GET(x)                             (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_0_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_0_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_0_SET(x)                             (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_0_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_0_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_0_RESET                              0x0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_0_LSB                                     0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_0_MSB                                     4
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_0_MASK                                    0x1f
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_0_GET(x)                                  (((x) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_0_MASK) >> PHY_BB_CL_TAB_B2_CL_GAIN_MOD_0_LSB)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_0_SET(x)                                  (((0 | (x)) << PHY_BB_CL_TAB_B2_CL_GAIN_MOD_0_LSB) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_0_MASK)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_0_RESET                                   0x0
#define PHY_BB_CL_TAB_B2_0_ADDRESS                                             (0x100 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_TAB_B2_0_RSTMASK                                             0x7fffffff
#define PHY_BB_CL_TAB_B2_0_RESET                                               0x0

// 0x104 (PHY_BB_CL_TAB_B2_1)
#define PHY_BB_CL_TAB_B2_BB_GAIN_1_LSB                                         27
#define PHY_BB_CL_TAB_B2_BB_GAIN_1_MSB                                         30
#define PHY_BB_CL_TAB_B2_BB_GAIN_1_MASK                                        0x78000000
#define PHY_BB_CL_TAB_B2_BB_GAIN_1_GET(x)                                      (((x) & PHY_BB_CL_TAB_B2_BB_GAIN_1_MASK) >> PHY_BB_CL_TAB_B2_BB_GAIN_1_LSB)
#define PHY_BB_CL_TAB_B2_BB_GAIN_1_SET(x)                                      (((0 | (x)) << PHY_BB_CL_TAB_B2_BB_GAIN_1_LSB) & PHY_BB_CL_TAB_B2_BB_GAIN_1_MASK)
#define PHY_BB_CL_TAB_B2_BB_GAIN_1_RESET                                       0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_1_LSB                                16
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_1_MSB                                26
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_1_MASK                               0x7ff0000
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_1_GET(x)                             (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_1_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_1_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_1_SET(x)                             (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_1_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_1_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_1_RESET                              0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_1_LSB                                5
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_1_MSB                                15
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_1_MASK                               0xffe0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_1_GET(x)                             (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_1_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_1_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_1_SET(x)                             (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_1_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_1_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_1_RESET                              0x0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_1_LSB                                     0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_1_MSB                                     4
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_1_MASK                                    0x1f
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_1_GET(x)                                  (((x) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_1_MASK) >> PHY_BB_CL_TAB_B2_CL_GAIN_MOD_1_LSB)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_1_SET(x)                                  (((0 | (x)) << PHY_BB_CL_TAB_B2_CL_GAIN_MOD_1_LSB) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_1_MASK)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_1_RESET                                   0x0
#define PHY_BB_CL_TAB_B2_1_ADDRESS                                             (0x104 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_TAB_B2_1_RSTMASK                                             0x7fffffff
#define PHY_BB_CL_TAB_B2_1_RESET                                               0x0

// 0x108 (PHY_BB_CL_TAB_B2_2)
#define PHY_BB_CL_TAB_B2_BB_GAIN_2_LSB                                         27
#define PHY_BB_CL_TAB_B2_BB_GAIN_2_MSB                                         30
#define PHY_BB_CL_TAB_B2_BB_GAIN_2_MASK                                        0x78000000
#define PHY_BB_CL_TAB_B2_BB_GAIN_2_GET(x)                                      (((x) & PHY_BB_CL_TAB_B2_BB_GAIN_2_MASK) >> PHY_BB_CL_TAB_B2_BB_GAIN_2_LSB)
#define PHY_BB_CL_TAB_B2_BB_GAIN_2_SET(x)                                      (((0 | (x)) << PHY_BB_CL_TAB_B2_BB_GAIN_2_LSB) & PHY_BB_CL_TAB_B2_BB_GAIN_2_MASK)
#define PHY_BB_CL_TAB_B2_BB_GAIN_2_RESET                                       0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_2_LSB                                16
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_2_MSB                                26
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_2_MASK                               0x7ff0000
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_2_GET(x)                             (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_2_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_2_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_2_SET(x)                             (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_2_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_2_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_2_RESET                              0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_2_LSB                                5
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_2_MSB                                15
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_2_MASK                               0xffe0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_2_GET(x)                             (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_2_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_2_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_2_SET(x)                             (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_2_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_2_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_2_RESET                              0x0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_2_LSB                                     0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_2_MSB                                     4
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_2_MASK                                    0x1f
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_2_GET(x)                                  (((x) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_2_MASK) >> PHY_BB_CL_TAB_B2_CL_GAIN_MOD_2_LSB)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_2_SET(x)                                  (((0 | (x)) << PHY_BB_CL_TAB_B2_CL_GAIN_MOD_2_LSB) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_2_MASK)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_2_RESET                                   0x0
#define PHY_BB_CL_TAB_B2_2_ADDRESS                                             (0x108 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_TAB_B2_2_RSTMASK                                             0x7fffffff
#define PHY_BB_CL_TAB_B2_2_RESET                                               0x0

// 0x10c (PHY_BB_CL_TAB_B2_3)
#define PHY_BB_CL_TAB_B2_BB_GAIN_3_LSB                                         27
#define PHY_BB_CL_TAB_B2_BB_GAIN_3_MSB                                         30
#define PHY_BB_CL_TAB_B2_BB_GAIN_3_MASK                                        0x78000000
#define PHY_BB_CL_TAB_B2_BB_GAIN_3_GET(x)                                      (((x) & PHY_BB_CL_TAB_B2_BB_GAIN_3_MASK) >> PHY_BB_CL_TAB_B2_BB_GAIN_3_LSB)
#define PHY_BB_CL_TAB_B2_BB_GAIN_3_SET(x)                                      (((0 | (x)) << PHY_BB_CL_TAB_B2_BB_GAIN_3_LSB) & PHY_BB_CL_TAB_B2_BB_GAIN_3_MASK)
#define PHY_BB_CL_TAB_B2_BB_GAIN_3_RESET                                       0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_3_LSB                                16
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_3_MSB                                26
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_3_MASK                               0x7ff0000
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_3_GET(x)                             (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_3_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_3_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_3_SET(x)                             (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_3_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_3_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_3_RESET                              0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_3_LSB                                5
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_3_MSB                                15
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_3_MASK                               0xffe0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_3_GET(x)                             (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_3_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_3_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_3_SET(x)                             (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_3_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_3_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_3_RESET                              0x0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_3_LSB                                     0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_3_MSB                                     4
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_3_MASK                                    0x1f
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_3_GET(x)                                  (((x) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_3_MASK) >> PHY_BB_CL_TAB_B2_CL_GAIN_MOD_3_LSB)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_3_SET(x)                                  (((0 | (x)) << PHY_BB_CL_TAB_B2_CL_GAIN_MOD_3_LSB) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_3_MASK)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_3_RESET                                   0x0
#define PHY_BB_CL_TAB_B2_3_ADDRESS                                             (0x10c + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_TAB_B2_3_RSTMASK                                             0x7fffffff
#define PHY_BB_CL_TAB_B2_3_RESET                                               0x0

// 0x110 (PHY_BB_CL_TAB_B2_4)
#define PHY_BB_CL_TAB_B2_BB_GAIN_4_LSB                                         27
#define PHY_BB_CL_TAB_B2_BB_GAIN_4_MSB                                         30
#define PHY_BB_CL_TAB_B2_BB_GAIN_4_MASK                                        0x78000000
#define PHY_BB_CL_TAB_B2_BB_GAIN_4_GET(x)                                      (((x) & PHY_BB_CL_TAB_B2_BB_GAIN_4_MASK) >> PHY_BB_CL_TAB_B2_BB_GAIN_4_LSB)
#define PHY_BB_CL_TAB_B2_BB_GAIN_4_SET(x)                                      (((0 | (x)) << PHY_BB_CL_TAB_B2_BB_GAIN_4_LSB) & PHY_BB_CL_TAB_B2_BB_GAIN_4_MASK)
#define PHY_BB_CL_TAB_B2_BB_GAIN_4_RESET                                       0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_4_LSB                                16
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_4_MSB                                26
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_4_MASK                               0x7ff0000
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_4_GET(x)                             (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_4_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_4_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_4_SET(x)                             (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_4_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_4_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_4_RESET                              0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_4_LSB                                5
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_4_MSB                                15
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_4_MASK                               0xffe0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_4_GET(x)                             (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_4_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_4_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_4_SET(x)                             (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_4_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_4_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_4_RESET                              0x0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_4_LSB                                     0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_4_MSB                                     4
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_4_MASK                                    0x1f
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_4_GET(x)                                  (((x) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_4_MASK) >> PHY_BB_CL_TAB_B2_CL_GAIN_MOD_4_LSB)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_4_SET(x)                                  (((0 | (x)) << PHY_BB_CL_TAB_B2_CL_GAIN_MOD_4_LSB) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_4_MASK)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_4_RESET                                   0x0
#define PHY_BB_CL_TAB_B2_4_ADDRESS                                             (0x110 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_TAB_B2_4_RSTMASK                                             0x7fffffff
#define PHY_BB_CL_TAB_B2_4_RESET                                               0x0

// 0x114 (PHY_BB_CL_TAB_B2_5)
#define PHY_BB_CL_TAB_B2_BB_GAIN_5_LSB                                         27
#define PHY_BB_CL_TAB_B2_BB_GAIN_5_MSB                                         30
#define PHY_BB_CL_TAB_B2_BB_GAIN_5_MASK                                        0x78000000
#define PHY_BB_CL_TAB_B2_BB_GAIN_5_GET(x)                                      (((x) & PHY_BB_CL_TAB_B2_BB_GAIN_5_MASK) >> PHY_BB_CL_TAB_B2_BB_GAIN_5_LSB)
#define PHY_BB_CL_TAB_B2_BB_GAIN_5_SET(x)                                      (((0 | (x)) << PHY_BB_CL_TAB_B2_BB_GAIN_5_LSB) & PHY_BB_CL_TAB_B2_BB_GAIN_5_MASK)
#define PHY_BB_CL_TAB_B2_BB_GAIN_5_RESET                                       0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_5_LSB                                16
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_5_MSB                                26
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_5_MASK                               0x7ff0000
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_5_GET(x)                             (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_5_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_5_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_5_SET(x)                             (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_5_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_5_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_5_RESET                              0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_5_LSB                                5
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_5_MSB                                15
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_5_MASK                               0xffe0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_5_GET(x)                             (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_5_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_5_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_5_SET(x)                             (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_5_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_5_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_5_RESET                              0x0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_5_LSB                                     0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_5_MSB                                     4
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_5_MASK                                    0x1f
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_5_GET(x)                                  (((x) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_5_MASK) >> PHY_BB_CL_TAB_B2_CL_GAIN_MOD_5_LSB)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_5_SET(x)                                  (((0 | (x)) << PHY_BB_CL_TAB_B2_CL_GAIN_MOD_5_LSB) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_5_MASK)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_5_RESET                                   0x0
#define PHY_BB_CL_TAB_B2_5_ADDRESS                                             (0x114 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_TAB_B2_5_RSTMASK                                             0x7fffffff
#define PHY_BB_CL_TAB_B2_5_RESET                                               0x0

// 0x118 (PHY_BB_CL_TAB_B2_6)
#define PHY_BB_CL_TAB_B2_BB_GAIN_6_LSB                                         27
#define PHY_BB_CL_TAB_B2_BB_GAIN_6_MSB                                         30
#define PHY_BB_CL_TAB_B2_BB_GAIN_6_MASK                                        0x78000000
#define PHY_BB_CL_TAB_B2_BB_GAIN_6_GET(x)                                      (((x) & PHY_BB_CL_TAB_B2_BB_GAIN_6_MASK) >> PHY_BB_CL_TAB_B2_BB_GAIN_6_LSB)
#define PHY_BB_CL_TAB_B2_BB_GAIN_6_SET(x)                                      (((0 | (x)) << PHY_BB_CL_TAB_B2_BB_GAIN_6_LSB) & PHY_BB_CL_TAB_B2_BB_GAIN_6_MASK)
#define PHY_BB_CL_TAB_B2_BB_GAIN_6_RESET                                       0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_6_LSB                                16
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_6_MSB                                26
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_6_MASK                               0x7ff0000
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_6_GET(x)                             (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_6_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_6_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_6_SET(x)                             (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_6_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_6_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_6_RESET                              0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_6_LSB                                5
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_6_MSB                                15
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_6_MASK                               0xffe0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_6_GET(x)                             (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_6_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_6_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_6_SET(x)                             (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_6_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_6_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_6_RESET                              0x0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_6_LSB                                     0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_6_MSB                                     4
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_6_MASK                                    0x1f
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_6_GET(x)                                  (((x) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_6_MASK) >> PHY_BB_CL_TAB_B2_CL_GAIN_MOD_6_LSB)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_6_SET(x)                                  (((0 | (x)) << PHY_BB_CL_TAB_B2_CL_GAIN_MOD_6_LSB) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_6_MASK)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_6_RESET                                   0x0
#define PHY_BB_CL_TAB_B2_6_ADDRESS                                             (0x118 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_TAB_B2_6_RSTMASK                                             0x7fffffff
#define PHY_BB_CL_TAB_B2_6_RESET                                               0x0

// 0x11c (PHY_BB_CL_TAB_B2_7)
#define PHY_BB_CL_TAB_B2_BB_GAIN_7_LSB                                         27
#define PHY_BB_CL_TAB_B2_BB_GAIN_7_MSB                                         30
#define PHY_BB_CL_TAB_B2_BB_GAIN_7_MASK                                        0x78000000
#define PHY_BB_CL_TAB_B2_BB_GAIN_7_GET(x)                                      (((x) & PHY_BB_CL_TAB_B2_BB_GAIN_7_MASK) >> PHY_BB_CL_TAB_B2_BB_GAIN_7_LSB)
#define PHY_BB_CL_TAB_B2_BB_GAIN_7_SET(x)                                      (((0 | (x)) << PHY_BB_CL_TAB_B2_BB_GAIN_7_LSB) & PHY_BB_CL_TAB_B2_BB_GAIN_7_MASK)
#define PHY_BB_CL_TAB_B2_BB_GAIN_7_RESET                                       0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_7_LSB                                16
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_7_MSB                                26
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_7_MASK                               0x7ff0000
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_7_GET(x)                             (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_7_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_7_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_7_SET(x)                             (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_7_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_7_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_7_RESET                              0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_7_LSB                                5
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_7_MSB                                15
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_7_MASK                               0xffe0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_7_GET(x)                             (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_7_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_7_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_7_SET(x)                             (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_7_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_7_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_7_RESET                              0x0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_7_LSB                                     0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_7_MSB                                     4
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_7_MASK                                    0x1f
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_7_GET(x)                                  (((x) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_7_MASK) >> PHY_BB_CL_TAB_B2_CL_GAIN_MOD_7_LSB)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_7_SET(x)                                  (((0 | (x)) << PHY_BB_CL_TAB_B2_CL_GAIN_MOD_7_LSB) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_7_MASK)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_7_RESET                                   0x0
#define PHY_BB_CL_TAB_B2_7_ADDRESS                                             (0x11c + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_TAB_B2_7_RSTMASK                                             0x7fffffff
#define PHY_BB_CL_TAB_B2_7_RESET                                               0x0

// 0x120 (PHY_BB_CL_TAB_B2_8)
#define PHY_BB_CL_TAB_B2_BB_GAIN_8_LSB                                         27
#define PHY_BB_CL_TAB_B2_BB_GAIN_8_MSB                                         30
#define PHY_BB_CL_TAB_B2_BB_GAIN_8_MASK                                        0x78000000
#define PHY_BB_CL_TAB_B2_BB_GAIN_8_GET(x)                                      (((x) & PHY_BB_CL_TAB_B2_BB_GAIN_8_MASK) >> PHY_BB_CL_TAB_B2_BB_GAIN_8_LSB)
#define PHY_BB_CL_TAB_B2_BB_GAIN_8_SET(x)                                      (((0 | (x)) << PHY_BB_CL_TAB_B2_BB_GAIN_8_LSB) & PHY_BB_CL_TAB_B2_BB_GAIN_8_MASK)
#define PHY_BB_CL_TAB_B2_BB_GAIN_8_RESET                                       0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_8_LSB                                16
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_8_MSB                                26
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_8_MASK                               0x7ff0000
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_8_GET(x)                             (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_8_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_8_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_8_SET(x)                             (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_8_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_8_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_8_RESET                              0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_8_LSB                                5
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_8_MSB                                15
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_8_MASK                               0xffe0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_8_GET(x)                             (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_8_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_8_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_8_SET(x)                             (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_8_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_8_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_8_RESET                              0x0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_8_LSB                                     0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_8_MSB                                     4
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_8_MASK                                    0x1f
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_8_GET(x)                                  (((x) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_8_MASK) >> PHY_BB_CL_TAB_B2_CL_GAIN_MOD_8_LSB)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_8_SET(x)                                  (((0 | (x)) << PHY_BB_CL_TAB_B2_CL_GAIN_MOD_8_LSB) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_8_MASK)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_8_RESET                                   0x0
#define PHY_BB_CL_TAB_B2_8_ADDRESS                                             (0x120 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_TAB_B2_8_RSTMASK                                             0x7fffffff
#define PHY_BB_CL_TAB_B2_8_RESET                                               0x0

// 0x124 (PHY_BB_CL_TAB_B2_9)
#define PHY_BB_CL_TAB_B2_BB_GAIN_9_LSB                                         27
#define PHY_BB_CL_TAB_B2_BB_GAIN_9_MSB                                         30
#define PHY_BB_CL_TAB_B2_BB_GAIN_9_MASK                                        0x78000000
#define PHY_BB_CL_TAB_B2_BB_GAIN_9_GET(x)                                      (((x) & PHY_BB_CL_TAB_B2_BB_GAIN_9_MASK) >> PHY_BB_CL_TAB_B2_BB_GAIN_9_LSB)
#define PHY_BB_CL_TAB_B2_BB_GAIN_9_SET(x)                                      (((0 | (x)) << PHY_BB_CL_TAB_B2_BB_GAIN_9_LSB) & PHY_BB_CL_TAB_B2_BB_GAIN_9_MASK)
#define PHY_BB_CL_TAB_B2_BB_GAIN_9_RESET                                       0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_9_LSB                                16
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_9_MSB                                26
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_9_MASK                               0x7ff0000
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_9_GET(x)                             (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_9_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_9_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_9_SET(x)                             (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_9_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_9_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_9_RESET                              0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_9_LSB                                5
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_9_MSB                                15
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_9_MASK                               0xffe0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_9_GET(x)                             (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_9_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_9_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_9_SET(x)                             (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_9_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_9_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_9_RESET                              0x0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_9_LSB                                     0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_9_MSB                                     4
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_9_MASK                                    0x1f
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_9_GET(x)                                  (((x) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_9_MASK) >> PHY_BB_CL_TAB_B2_CL_GAIN_MOD_9_LSB)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_9_SET(x)                                  (((0 | (x)) << PHY_BB_CL_TAB_B2_CL_GAIN_MOD_9_LSB) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_9_MASK)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_9_RESET                                   0x0
#define PHY_BB_CL_TAB_B2_9_ADDRESS                                             (0x124 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_TAB_B2_9_RSTMASK                                             0x7fffffff
#define PHY_BB_CL_TAB_B2_9_RESET                                               0x0

// 0x128 (PHY_BB_CL_TAB_B2_10)
#define PHY_BB_CL_TAB_B2_BB_GAIN_10_LSB                                        27
#define PHY_BB_CL_TAB_B2_BB_GAIN_10_MSB                                        30
#define PHY_BB_CL_TAB_B2_BB_GAIN_10_MASK                                       0x78000000
#define PHY_BB_CL_TAB_B2_BB_GAIN_10_GET(x)                                     (((x) & PHY_BB_CL_TAB_B2_BB_GAIN_10_MASK) >> PHY_BB_CL_TAB_B2_BB_GAIN_10_LSB)
#define PHY_BB_CL_TAB_B2_BB_GAIN_10_SET(x)                                     (((0 | (x)) << PHY_BB_CL_TAB_B2_BB_GAIN_10_LSB) & PHY_BB_CL_TAB_B2_BB_GAIN_10_MASK)
#define PHY_BB_CL_TAB_B2_BB_GAIN_10_RESET                                      0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_10_LSB                               16
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_10_MSB                               26
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_10_MASK                              0x7ff0000
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_10_GET(x)                            (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_10_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_10_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_10_SET(x)                            (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_10_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_10_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_10_RESET                             0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_10_LSB                               5
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_10_MSB                               15
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_10_MASK                              0xffe0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_10_GET(x)                            (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_10_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_10_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_10_SET(x)                            (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_10_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_10_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_10_RESET                             0x0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_10_LSB                                    0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_10_MSB                                    4
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_10_MASK                                   0x1f
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_10_GET(x)                                 (((x) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_10_MASK) >> PHY_BB_CL_TAB_B2_CL_GAIN_MOD_10_LSB)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_10_SET(x)                                 (((0 | (x)) << PHY_BB_CL_TAB_B2_CL_GAIN_MOD_10_LSB) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_10_MASK)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_10_RESET                                  0x0
#define PHY_BB_CL_TAB_B2_10_ADDRESS                                            (0x128 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_TAB_B2_10_RSTMASK                                            0x7fffffff
#define PHY_BB_CL_TAB_B2_10_RESET                                              0x0

// 0x12c (PHY_BB_CL_TAB_B2_11)
#define PHY_BB_CL_TAB_B2_BB_GAIN_11_LSB                                        27
#define PHY_BB_CL_TAB_B2_BB_GAIN_11_MSB                                        30
#define PHY_BB_CL_TAB_B2_BB_GAIN_11_MASK                                       0x78000000
#define PHY_BB_CL_TAB_B2_BB_GAIN_11_GET(x)                                     (((x) & PHY_BB_CL_TAB_B2_BB_GAIN_11_MASK) >> PHY_BB_CL_TAB_B2_BB_GAIN_11_LSB)
#define PHY_BB_CL_TAB_B2_BB_GAIN_11_SET(x)                                     (((0 | (x)) << PHY_BB_CL_TAB_B2_BB_GAIN_11_LSB) & PHY_BB_CL_TAB_B2_BB_GAIN_11_MASK)
#define PHY_BB_CL_TAB_B2_BB_GAIN_11_RESET                                      0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_11_LSB                               16
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_11_MSB                               26
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_11_MASK                              0x7ff0000
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_11_GET(x)                            (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_11_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_11_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_11_SET(x)                            (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_11_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_11_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_11_RESET                             0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_11_LSB                               5
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_11_MSB                               15
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_11_MASK                              0xffe0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_11_GET(x)                            (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_11_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_11_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_11_SET(x)                            (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_11_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_11_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_11_RESET                             0x0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_11_LSB                                    0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_11_MSB                                    4
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_11_MASK                                   0x1f
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_11_GET(x)                                 (((x) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_11_MASK) >> PHY_BB_CL_TAB_B2_CL_GAIN_MOD_11_LSB)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_11_SET(x)                                 (((0 | (x)) << PHY_BB_CL_TAB_B2_CL_GAIN_MOD_11_LSB) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_11_MASK)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_11_RESET                                  0x0
#define PHY_BB_CL_TAB_B2_11_ADDRESS                                            (0x12c + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_TAB_B2_11_RSTMASK                                            0x7fffffff
#define PHY_BB_CL_TAB_B2_11_RESET                                              0x0

// 0x130 (PHY_BB_CL_TAB_B2_12)
#define PHY_BB_CL_TAB_B2_BB_GAIN_12_LSB                                        27
#define PHY_BB_CL_TAB_B2_BB_GAIN_12_MSB                                        30
#define PHY_BB_CL_TAB_B2_BB_GAIN_12_MASK                                       0x78000000
#define PHY_BB_CL_TAB_B2_BB_GAIN_12_GET(x)                                     (((x) & PHY_BB_CL_TAB_B2_BB_GAIN_12_MASK) >> PHY_BB_CL_TAB_B2_BB_GAIN_12_LSB)
#define PHY_BB_CL_TAB_B2_BB_GAIN_12_SET(x)                                     (((0 | (x)) << PHY_BB_CL_TAB_B2_BB_GAIN_12_LSB) & PHY_BB_CL_TAB_B2_BB_GAIN_12_MASK)
#define PHY_BB_CL_TAB_B2_BB_GAIN_12_RESET                                      0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_12_LSB                               16
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_12_MSB                               26
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_12_MASK                              0x7ff0000
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_12_GET(x)                            (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_12_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_12_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_12_SET(x)                            (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_12_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_12_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_12_RESET                             0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_12_LSB                               5
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_12_MSB                               15
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_12_MASK                              0xffe0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_12_GET(x)                            (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_12_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_12_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_12_SET(x)                            (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_12_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_12_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_12_RESET                             0x0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_12_LSB                                    0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_12_MSB                                    4
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_12_MASK                                   0x1f
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_12_GET(x)                                 (((x) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_12_MASK) >> PHY_BB_CL_TAB_B2_CL_GAIN_MOD_12_LSB)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_12_SET(x)                                 (((0 | (x)) << PHY_BB_CL_TAB_B2_CL_GAIN_MOD_12_LSB) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_12_MASK)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_12_RESET                                  0x0
#define PHY_BB_CL_TAB_B2_12_ADDRESS                                            (0x130 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_TAB_B2_12_RSTMASK                                            0x7fffffff
#define PHY_BB_CL_TAB_B2_12_RESET                                              0x0

// 0x134 (PHY_BB_CL_TAB_B2_13)
#define PHY_BB_CL_TAB_B2_BB_GAIN_13_LSB                                        27
#define PHY_BB_CL_TAB_B2_BB_GAIN_13_MSB                                        30
#define PHY_BB_CL_TAB_B2_BB_GAIN_13_MASK                                       0x78000000
#define PHY_BB_CL_TAB_B2_BB_GAIN_13_GET(x)                                     (((x) & PHY_BB_CL_TAB_B2_BB_GAIN_13_MASK) >> PHY_BB_CL_TAB_B2_BB_GAIN_13_LSB)
#define PHY_BB_CL_TAB_B2_BB_GAIN_13_SET(x)                                     (((0 | (x)) << PHY_BB_CL_TAB_B2_BB_GAIN_13_LSB) & PHY_BB_CL_TAB_B2_BB_GAIN_13_MASK)
#define PHY_BB_CL_TAB_B2_BB_GAIN_13_RESET                                      0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_13_LSB                               16
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_13_MSB                               26
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_13_MASK                              0x7ff0000
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_13_GET(x)                            (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_13_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_13_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_13_SET(x)                            (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_13_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_13_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_13_RESET                             0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_13_LSB                               5
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_13_MSB                               15
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_13_MASK                              0xffe0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_13_GET(x)                            (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_13_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_13_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_13_SET(x)                            (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_13_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_13_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_13_RESET                             0x0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_13_LSB                                    0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_13_MSB                                    4
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_13_MASK                                   0x1f
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_13_GET(x)                                 (((x) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_13_MASK) >> PHY_BB_CL_TAB_B2_CL_GAIN_MOD_13_LSB)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_13_SET(x)                                 (((0 | (x)) << PHY_BB_CL_TAB_B2_CL_GAIN_MOD_13_LSB) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_13_MASK)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_13_RESET                                  0x0
#define PHY_BB_CL_TAB_B2_13_ADDRESS                                            (0x134 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_TAB_B2_13_RSTMASK                                            0x7fffffff
#define PHY_BB_CL_TAB_B2_13_RESET                                              0x0

// 0x138 (PHY_BB_CL_TAB_B2_14)
#define PHY_BB_CL_TAB_B2_BB_GAIN_14_LSB                                        27
#define PHY_BB_CL_TAB_B2_BB_GAIN_14_MSB                                        30
#define PHY_BB_CL_TAB_B2_BB_GAIN_14_MASK                                       0x78000000
#define PHY_BB_CL_TAB_B2_BB_GAIN_14_GET(x)                                     (((x) & PHY_BB_CL_TAB_B2_BB_GAIN_14_MASK) >> PHY_BB_CL_TAB_B2_BB_GAIN_14_LSB)
#define PHY_BB_CL_TAB_B2_BB_GAIN_14_SET(x)                                     (((0 | (x)) << PHY_BB_CL_TAB_B2_BB_GAIN_14_LSB) & PHY_BB_CL_TAB_B2_BB_GAIN_14_MASK)
#define PHY_BB_CL_TAB_B2_BB_GAIN_14_RESET                                      0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_14_LSB                               16
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_14_MSB                               26
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_14_MASK                              0x7ff0000
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_14_GET(x)                            (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_14_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_14_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_14_SET(x)                            (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_14_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_14_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_14_RESET                             0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_14_LSB                               5
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_14_MSB                               15
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_14_MASK                              0xffe0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_14_GET(x)                            (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_14_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_14_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_14_SET(x)                            (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_14_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_14_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_14_RESET                             0x0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_14_LSB                                    0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_14_MSB                                    4
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_14_MASK                                   0x1f
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_14_GET(x)                                 (((x) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_14_MASK) >> PHY_BB_CL_TAB_B2_CL_GAIN_MOD_14_LSB)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_14_SET(x)                                 (((0 | (x)) << PHY_BB_CL_TAB_B2_CL_GAIN_MOD_14_LSB) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_14_MASK)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_14_RESET                                  0x0
#define PHY_BB_CL_TAB_B2_14_ADDRESS                                            (0x138 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_TAB_B2_14_RSTMASK                                            0x7fffffff
#define PHY_BB_CL_TAB_B2_14_RESET                                              0x0

// 0x13c (PHY_BB_CL_TAB_B2_15)
#define PHY_BB_CL_TAB_B2_BB_GAIN_15_LSB                                        27
#define PHY_BB_CL_TAB_B2_BB_GAIN_15_MSB                                        30
#define PHY_BB_CL_TAB_B2_BB_GAIN_15_MASK                                       0x78000000
#define PHY_BB_CL_TAB_B2_BB_GAIN_15_GET(x)                                     (((x) & PHY_BB_CL_TAB_B2_BB_GAIN_15_MASK) >> PHY_BB_CL_TAB_B2_BB_GAIN_15_LSB)
#define PHY_BB_CL_TAB_B2_BB_GAIN_15_SET(x)                                     (((0 | (x)) << PHY_BB_CL_TAB_B2_BB_GAIN_15_LSB) & PHY_BB_CL_TAB_B2_BB_GAIN_15_MASK)
#define PHY_BB_CL_TAB_B2_BB_GAIN_15_RESET                                      0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_15_LSB                               16
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_15_MSB                               26
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_15_MASK                              0x7ff0000
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_15_GET(x)                            (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_15_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_15_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_15_SET(x)                            (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_15_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_15_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_I_15_RESET                             0x0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_15_LSB                               5
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_15_MSB                               15
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_15_MASK                              0xffe0
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_15_GET(x)                            (((x) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_15_MASK) >> PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_15_LSB)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_15_SET(x)                            (((0 | (x)) << PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_15_LSB) & PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_15_MASK)
#define PHY_BB_CL_TAB_B2_CARR_LK_DC_ADD_Q_15_RESET                             0x0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_15_LSB                                    0
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_15_MSB                                    4
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_15_MASK                                   0x1f
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_15_GET(x)                                 (((x) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_15_MASK) >> PHY_BB_CL_TAB_B2_CL_GAIN_MOD_15_LSB)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_15_SET(x)                                 (((0 | (x)) << PHY_BB_CL_TAB_B2_CL_GAIN_MOD_15_LSB) & PHY_BB_CL_TAB_B2_CL_GAIN_MOD_15_MASK)
#define PHY_BB_CL_TAB_B2_CL_GAIN_MOD_15_RESET                                  0x0
#define PHY_BB_CL_TAB_B2_15_ADDRESS                                            (0x13c + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CL_TAB_B2_15_RSTMASK                                            0x7fffffff
#define PHY_BB_CL_TAB_B2_15_RESET                                              0x0

// 0x174 (PHY_BB_CHAN_INFO_NOISE_PWR_B2)
#define PHY_BB_CHAN_INFO_NOISE_PWR_B2_CHAN_INFO_FINE_DC_Q_2_LSB                20
#define PHY_BB_CHAN_INFO_NOISE_PWR_B2_CHAN_INFO_FINE_DC_Q_2_MSB                27
#define PHY_BB_CHAN_INFO_NOISE_PWR_B2_CHAN_INFO_FINE_DC_Q_2_MASK               0xff00000
#define PHY_BB_CHAN_INFO_NOISE_PWR_B2_CHAN_INFO_FINE_DC_Q_2_GET(x)             (((x) & PHY_BB_CHAN_INFO_NOISE_PWR_B2_CHAN_INFO_FINE_DC_Q_2_MASK) >> PHY_BB_CHAN_INFO_NOISE_PWR_B2_CHAN_INFO_FINE_DC_Q_2_LSB)
#define PHY_BB_CHAN_INFO_NOISE_PWR_B2_CHAN_INFO_FINE_DC_Q_2_SET(x)             (((0 | (x)) << PHY_BB_CHAN_INFO_NOISE_PWR_B2_CHAN_INFO_FINE_DC_Q_2_LSB) & PHY_BB_CHAN_INFO_NOISE_PWR_B2_CHAN_INFO_FINE_DC_Q_2_MASK)
#define PHY_BB_CHAN_INFO_NOISE_PWR_B2_CHAN_INFO_FINE_DC_Q_2_RESET              0x0
#define PHY_BB_CHAN_INFO_NOISE_PWR_B2_CHAN_INFO_FINE_DC_I_2_LSB                12
#define PHY_BB_CHAN_INFO_NOISE_PWR_B2_CHAN_INFO_FINE_DC_I_2_MSB                19
#define PHY_BB_CHAN_INFO_NOISE_PWR_B2_CHAN_INFO_FINE_DC_I_2_MASK               0xff000
#define PHY_BB_CHAN_INFO_NOISE_PWR_B2_CHAN_INFO_FINE_DC_I_2_GET(x)             (((x) & PHY_BB_CHAN_INFO_NOISE_PWR_B2_CHAN_INFO_FINE_DC_I_2_MASK) >> PHY_BB_CHAN_INFO_NOISE_PWR_B2_CHAN_INFO_FINE_DC_I_2_LSB)
#define PHY_BB_CHAN_INFO_NOISE_PWR_B2_CHAN_INFO_FINE_DC_I_2_SET(x)             (((0 | (x)) << PHY_BB_CHAN_INFO_NOISE_PWR_B2_CHAN_INFO_FINE_DC_I_2_LSB) & PHY_BB_CHAN_INFO_NOISE_PWR_B2_CHAN_INFO_FINE_DC_I_2_MASK)
#define PHY_BB_CHAN_INFO_NOISE_PWR_B2_CHAN_INFO_FINE_DC_I_2_RESET              0x0
#define PHY_BB_CHAN_INFO_NOISE_PWR_B2_ADDRESS                                  (0x174 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CHAN_INFO_NOISE_PWR_B2_RSTMASK                                  0xffff000
#define PHY_BB_CHAN_INFO_NOISE_PWR_B2_RESET                                    0x0

// 0x180 (PHY_BB_CHAN_INFO_GAIN_B2)
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_XATTEN2_SW_2_LSB                    24
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_XATTEN2_SW_2_MSB                    24
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_XATTEN2_SW_2_MASK                   0x1000000
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_XATTEN2_SW_2_GET(x)                 (((x) & PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_XATTEN2_SW_2_MASK) >> PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_XATTEN2_SW_2_LSB)
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_XATTEN2_SW_2_SET(x)                 (((0 | (x)) << PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_XATTEN2_SW_2_LSB) & PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_XATTEN2_SW_2_MASK)
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_XATTEN2_SW_2_RESET                  0x0
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_XATTEN1_SW_2_LSB                    23
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_XATTEN1_SW_2_MSB                    23
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_XATTEN1_SW_2_MASK                   0x800000
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_XATTEN1_SW_2_GET(x)                 (((x) & PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_XATTEN1_SW_2_MASK) >> PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_XATTEN1_SW_2_LSB)
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_XATTEN1_SW_2_SET(x)                 (((0 | (x)) << PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_XATTEN1_SW_2_LSB) & PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_XATTEN1_SW_2_MASK)
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_XATTEN1_SW_2_RESET                  0x0
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_MB_GAIN_2_LSB                       16
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_MB_GAIN_2_MSB                       22
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_MB_GAIN_2_MASK                      0x7f0000
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_MB_GAIN_2_GET(x)                    (((x) & PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_MB_GAIN_2_MASK) >> PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_MB_GAIN_2_LSB)
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_MB_GAIN_2_SET(x)                    (((0 | (x)) << PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_MB_GAIN_2_LSB) & PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_MB_GAIN_2_MASK)
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_MB_GAIN_2_RESET                     0x0
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_RF_GAIN_2_LSB                       8
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_RF_GAIN_2_MSB                       15
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_RF_GAIN_2_MASK                      0xff00
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_RF_GAIN_2_GET(x)                    (((x) & PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_RF_GAIN_2_MASK) >> PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_RF_GAIN_2_LSB)
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_RF_GAIN_2_SET(x)                    (((0 | (x)) << PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_RF_GAIN_2_LSB) & PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_RF_GAIN_2_MASK)
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_RF_GAIN_2_RESET                     0x0
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_RSSI_2_LSB                          0
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_RSSI_2_MSB                          7
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_RSSI_2_MASK                         0xff
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_RSSI_2_GET(x)                       (((x) & PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_RSSI_2_MASK) >> PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_RSSI_2_LSB)
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_RSSI_2_SET(x)                       (((0 | (x)) << PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_RSSI_2_LSB) & PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_RSSI_2_MASK)
#define PHY_BB_CHAN_INFO_GAIN_B2_CHAN_INFO_RSSI_2_RESET                        0x0
#define PHY_BB_CHAN_INFO_GAIN_B2_ADDRESS                                       (0x180 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_CHAN_INFO_GAIN_B2_RSTMASK                                       0x1ffffff
#define PHY_BB_CHAN_INFO_GAIN_B2_RESET                                         0x0

// 0x188 (PHY_BB_NF_DCOFF_B2)
#define PHY_BB_NF_DCOFF_B2_DC_OFF_Q_2_LSB                                      8
#define PHY_BB_NF_DCOFF_B2_DC_OFF_Q_2_MSB                                      15
#define PHY_BB_NF_DCOFF_B2_DC_OFF_Q_2_MASK                                     0xff00
#define PHY_BB_NF_DCOFF_B2_DC_OFF_Q_2_GET(x)                                   (((x) & PHY_BB_NF_DCOFF_B2_DC_OFF_Q_2_MASK) >> PHY_BB_NF_DCOFF_B2_DC_OFF_Q_2_LSB)
#define PHY_BB_NF_DCOFF_B2_DC_OFF_Q_2_SET(x)                                   (((0 | (x)) << PHY_BB_NF_DCOFF_B2_DC_OFF_Q_2_LSB) & PHY_BB_NF_DCOFF_B2_DC_OFF_Q_2_MASK)
#define PHY_BB_NF_DCOFF_B2_DC_OFF_Q_2_RESET                                    0x0
#define PHY_BB_NF_DCOFF_B2_DC_OFF_I_2_LSB                                      0
#define PHY_BB_NF_DCOFF_B2_DC_OFF_I_2_MSB                                      7
#define PHY_BB_NF_DCOFF_B2_DC_OFF_I_2_MASK                                     0xff
#define PHY_BB_NF_DCOFF_B2_DC_OFF_I_2_GET(x)                                   (((x) & PHY_BB_NF_DCOFF_B2_DC_OFF_I_2_MASK) >> PHY_BB_NF_DCOFF_B2_DC_OFF_I_2_LSB)
#define PHY_BB_NF_DCOFF_B2_DC_OFF_I_2_SET(x)                                   (((0 | (x)) << PHY_BB_NF_DCOFF_B2_DC_OFF_I_2_LSB) & PHY_BB_NF_DCOFF_B2_DC_OFF_I_2_MASK)
#define PHY_BB_NF_DCOFF_B2_DC_OFF_I_2_RESET                                    0x0
#define PHY_BB_NF_DCOFF_B2_ADDRESS                                             (0x188 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_NF_DCOFF_B2_RSTMASK                                             0xffff
#define PHY_BB_NF_DCOFF_B2_RESET                                               0x0

// 0x204 (PHY_BB_TPC_4_B2)
#define PHY_BB_TPC_4_B2_PDADC_CLIP_2_CNT_2_LSB                                 8
#define PHY_BB_TPC_4_B2_PDADC_CLIP_2_CNT_2_MSB                                 15
#define PHY_BB_TPC_4_B2_PDADC_CLIP_2_CNT_2_MASK                                0xff00
#define PHY_BB_TPC_4_B2_PDADC_CLIP_2_CNT_2_GET(x)                              (((x) & PHY_BB_TPC_4_B2_PDADC_CLIP_2_CNT_2_MASK) >> PHY_BB_TPC_4_B2_PDADC_CLIP_2_CNT_2_LSB)
#define PHY_BB_TPC_4_B2_PDADC_CLIP_2_CNT_2_SET(x)                              (((0 | (x)) << PHY_BB_TPC_4_B2_PDADC_CLIP_2_CNT_2_LSB) & PHY_BB_TPC_4_B2_PDADC_CLIP_2_CNT_2_MASK)
#define PHY_BB_TPC_4_B2_PDADC_CLIP_2_CNT_2_RESET                               0x0
#define PHY_BB_TPC_4_B2_PDADC_CLIP_1_CNT_2_LSB                                 0
#define PHY_BB_TPC_4_B2_PDADC_CLIP_1_CNT_2_MSB                                 7
#define PHY_BB_TPC_4_B2_PDADC_CLIP_1_CNT_2_MASK                                0xff
#define PHY_BB_TPC_4_B2_PDADC_CLIP_1_CNT_2_GET(x)                              (((x) & PHY_BB_TPC_4_B2_PDADC_CLIP_1_CNT_2_MASK) >> PHY_BB_TPC_4_B2_PDADC_CLIP_1_CNT_2_LSB)
#define PHY_BB_TPC_4_B2_PDADC_CLIP_1_CNT_2_SET(x)                              (((0 | (x)) << PHY_BB_TPC_4_B2_PDADC_CLIP_1_CNT_2_LSB) & PHY_BB_TPC_4_B2_PDADC_CLIP_1_CNT_2_MASK)
#define PHY_BB_TPC_4_B2_PDADC_CLIP_1_CNT_2_RESET                               0x0
#define PHY_BB_TPC_4_B2_ADDRESS                                                (0x204 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_TPC_4_B2_RSTMASK                                                0xffff
#define PHY_BB_TPC_4_B2_RESET                                                  0x0

// 0x220 (PHY_BB_TPC_11_B2)
#define PHY_BB_TPC_11_B2_FORCED_PA_CFG_2_LSB                                   24
#define PHY_BB_TPC_11_B2_FORCED_PA_CFG_2_MSB                                   26
#define PHY_BB_TPC_11_B2_FORCED_PA_CFG_2_MASK                                  0x7000000
#define PHY_BB_TPC_11_B2_FORCED_PA_CFG_2_GET(x)                                (((x) & PHY_BB_TPC_11_B2_FORCED_PA_CFG_2_MASK) >> PHY_BB_TPC_11_B2_FORCED_PA_CFG_2_LSB)
#define PHY_BB_TPC_11_B2_FORCED_PA_CFG_2_SET(x)                                (((0 | (x)) << PHY_BB_TPC_11_B2_FORCED_PA_CFG_2_LSB) & PHY_BB_TPC_11_B2_FORCED_PA_CFG_2_MASK)
#define PHY_BB_TPC_11_B2_FORCED_PA_CFG_2_RESET                                 0x0
#define PHY_BB_TPC_11_B2_FORCED_DAC_GAIN_2_LSB                                 16
#define PHY_BB_TPC_11_B2_FORCED_DAC_GAIN_2_MSB                                 23
#define PHY_BB_TPC_11_B2_FORCED_DAC_GAIN_2_MASK                                0xff0000
#define PHY_BB_TPC_11_B2_FORCED_DAC_GAIN_2_GET(x)                              (((x) & PHY_BB_TPC_11_B2_FORCED_DAC_GAIN_2_MASK) >> PHY_BB_TPC_11_B2_FORCED_DAC_GAIN_2_LSB)
#define PHY_BB_TPC_11_B2_FORCED_DAC_GAIN_2_SET(x)                              (((0 | (x)) << PHY_BB_TPC_11_B2_FORCED_DAC_GAIN_2_LSB) & PHY_BB_TPC_11_B2_FORCED_DAC_GAIN_2_MASK)
#define PHY_BB_TPC_11_B2_FORCED_DAC_GAIN_2_RESET                               0x0
#define PHY_BB_TPC_11_B2_FORCED_TXGAIN_IDX_2_LSB                               10
#define PHY_BB_TPC_11_B2_FORCED_TXGAIN_IDX_2_MSB                               14
#define PHY_BB_TPC_11_B2_FORCED_TXGAIN_IDX_2_MASK                              0x7c00
#define PHY_BB_TPC_11_B2_FORCED_TXGAIN_IDX_2_GET(x)                            (((x) & PHY_BB_TPC_11_B2_FORCED_TXGAIN_IDX_2_MASK) >> PHY_BB_TPC_11_B2_FORCED_TXGAIN_IDX_2_LSB)
#define PHY_BB_TPC_11_B2_FORCED_TXGAIN_IDX_2_SET(x)                            (((0 | (x)) << PHY_BB_TPC_11_B2_FORCED_TXGAIN_IDX_2_LSB) & PHY_BB_TPC_11_B2_FORCED_TXGAIN_IDX_2_MASK)
#define PHY_BB_TPC_11_B2_FORCED_TXGAIN_IDX_2_RESET                             0x0
#define PHY_BB_TPC_11_B2_OLPC_GAIN_DELTA_2_LSB_EXT_LSB                         8
#define PHY_BB_TPC_11_B2_OLPC_GAIN_DELTA_2_LSB_EXT_MSB                         9
#define PHY_BB_TPC_11_B2_OLPC_GAIN_DELTA_2_LSB_EXT_MASK                        0x300
#define PHY_BB_TPC_11_B2_OLPC_GAIN_DELTA_2_LSB_EXT_GET(x)                      (((x) & PHY_BB_TPC_11_B2_OLPC_GAIN_DELTA_2_LSB_EXT_MASK) >> PHY_BB_TPC_11_B2_OLPC_GAIN_DELTA_2_LSB_EXT_LSB)
#define PHY_BB_TPC_11_B2_OLPC_GAIN_DELTA_2_LSB_EXT_SET(x)                      (((0 | (x)) << PHY_BB_TPC_11_B2_OLPC_GAIN_DELTA_2_LSB_EXT_LSB) & PHY_BB_TPC_11_B2_OLPC_GAIN_DELTA_2_LSB_EXT_MASK)
#define PHY_BB_TPC_11_B2_OLPC_GAIN_DELTA_2_LSB_EXT_RESET                       0x0
#define PHY_BB_TPC_11_B2_OLPC_GAIN_DELTA_2_LSB                                 0
#define PHY_BB_TPC_11_B2_OLPC_GAIN_DELTA_2_MSB                                 7
#define PHY_BB_TPC_11_B2_OLPC_GAIN_DELTA_2_MASK                                0xff
#define PHY_BB_TPC_11_B2_OLPC_GAIN_DELTA_2_GET(x)                              (((x) & PHY_BB_TPC_11_B2_OLPC_GAIN_DELTA_2_MASK) >> PHY_BB_TPC_11_B2_OLPC_GAIN_DELTA_2_LSB)
#define PHY_BB_TPC_11_B2_OLPC_GAIN_DELTA_2_SET(x)                              (((0 | (x)) << PHY_BB_TPC_11_B2_OLPC_GAIN_DELTA_2_LSB) & PHY_BB_TPC_11_B2_OLPC_GAIN_DELTA_2_MASK)
#define PHY_BB_TPC_11_B2_OLPC_GAIN_DELTA_2_RESET                               0x0
#define PHY_BB_TPC_11_B2_ADDRESS                                               (0x220 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_TPC_11_B2_RSTMASK                                               0x7ff7fff
#define PHY_BB_TPC_11_B2_RESET                                                 0x0

// 0x224 (PHY_BB_TPC_12_B2)
#define PHY_BB_TPC_12_B2_PDADC_BIAS_2_LSB                                      0
#define PHY_BB_TPC_12_B2_PDADC_BIAS_2_MSB                                      7
#define PHY_BB_TPC_12_B2_PDADC_BIAS_2_MASK                                     0xff
#define PHY_BB_TPC_12_B2_PDADC_BIAS_2_GET(x)                                   (((x) & PHY_BB_TPC_12_B2_PDADC_BIAS_2_MASK) >> PHY_BB_TPC_12_B2_PDADC_BIAS_2_LSB)
#define PHY_BB_TPC_12_B2_PDADC_BIAS_2_SET(x)                                   (((0 | (x)) << PHY_BB_TPC_12_B2_PDADC_BIAS_2_LSB) & PHY_BB_TPC_12_B2_PDADC_BIAS_2_MASK)
#define PHY_BB_TPC_12_B2_PDADC_BIAS_2_RESET                                    0x0
#define PHY_BB_TPC_12_B2_ADDRESS                                               (0x224 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_TPC_12_B2_RSTMASK                                               0xff
#define PHY_BB_TPC_12_B2_RESET                                                 0x0

// 0x240 (PHY_BB_TPC_19_B2)
#define PHY_BB_TPC_19_B2_BT_CLPC_ERR_UPDT_2_LSB                                31
#define PHY_BB_TPC_19_B2_BT_CLPC_ERR_UPDT_2_MSB                                31
#define PHY_BB_TPC_19_B2_BT_CLPC_ERR_UPDT_2_MASK                               0x80000000
#define PHY_BB_TPC_19_B2_BT_CLPC_ERR_UPDT_2_GET(x)                             (((x) & PHY_BB_TPC_19_B2_BT_CLPC_ERR_UPDT_2_MASK) >> PHY_BB_TPC_19_B2_BT_CLPC_ERR_UPDT_2_LSB)
#define PHY_BB_TPC_19_B2_BT_CLPC_ERR_UPDT_2_SET(x)                             (((0 | (x)) << PHY_BB_TPC_19_B2_BT_CLPC_ERR_UPDT_2_LSB) & PHY_BB_TPC_19_B2_BT_CLPC_ERR_UPDT_2_MASK)
#define PHY_BB_TPC_19_B2_BT_CLPC_ERR_UPDT_2_RESET                              0x0
#define PHY_BB_TPC_19_B2_ALPHA_VOLT_2_LSB                                      24
#define PHY_BB_TPC_19_B2_ALPHA_VOLT_2_MSB                                      30
#define PHY_BB_TPC_19_B2_ALPHA_VOLT_2_MASK                                     0x7f000000
#define PHY_BB_TPC_19_B2_ALPHA_VOLT_2_GET(x)                                   (((x) & PHY_BB_TPC_19_B2_ALPHA_VOLT_2_MASK) >> PHY_BB_TPC_19_B2_ALPHA_VOLT_2_LSB)
#define PHY_BB_TPC_19_B2_ALPHA_VOLT_2_SET(x)                                   (((0 | (x)) << PHY_BB_TPC_19_B2_ALPHA_VOLT_2_LSB) & PHY_BB_TPC_19_B2_ALPHA_VOLT_2_MASK)
#define PHY_BB_TPC_19_B2_ALPHA_VOLT_2_RESET                                    0x0
#define PHY_BB_TPC_19_B2_ALPHA_THERM_2_LSB                                     16
#define PHY_BB_TPC_19_B2_ALPHA_THERM_2_MSB                                     23
#define PHY_BB_TPC_19_B2_ALPHA_THERM_2_MASK                                    0xff0000
#define PHY_BB_TPC_19_B2_ALPHA_THERM_2_GET(x)                                  (((x) & PHY_BB_TPC_19_B2_ALPHA_THERM_2_MASK) >> PHY_BB_TPC_19_B2_ALPHA_THERM_2_LSB)
#define PHY_BB_TPC_19_B2_ALPHA_THERM_2_SET(x)                                  (((0 | (x)) << PHY_BB_TPC_19_B2_ALPHA_THERM_2_LSB) & PHY_BB_TPC_19_B2_ALPHA_THERM_2_MASK)
#define PHY_BB_TPC_19_B2_ALPHA_THERM_2_RESET                                   0x0
#define PHY_BB_TPC_19_B2_VOLT_CAL_VALUE_2_LSB                                  8
#define PHY_BB_TPC_19_B2_VOLT_CAL_VALUE_2_MSB                                  15
#define PHY_BB_TPC_19_B2_VOLT_CAL_VALUE_2_MASK                                 0xff00
#define PHY_BB_TPC_19_B2_VOLT_CAL_VALUE_2_GET(x)                               (((x) & PHY_BB_TPC_19_B2_VOLT_CAL_VALUE_2_MASK) >> PHY_BB_TPC_19_B2_VOLT_CAL_VALUE_2_LSB)
#define PHY_BB_TPC_19_B2_VOLT_CAL_VALUE_2_SET(x)                               (((0 | (x)) << PHY_BB_TPC_19_B2_VOLT_CAL_VALUE_2_LSB) & PHY_BB_TPC_19_B2_VOLT_CAL_VALUE_2_MASK)
#define PHY_BB_TPC_19_B2_VOLT_CAL_VALUE_2_RESET                                0x0
#define PHY_BB_TPC_19_B2_THERM_CAL_VALUE_2_LSB                                 0
#define PHY_BB_TPC_19_B2_THERM_CAL_VALUE_2_MSB                                 7
#define PHY_BB_TPC_19_B2_THERM_CAL_VALUE_2_MASK                                0xff
#define PHY_BB_TPC_19_B2_THERM_CAL_VALUE_2_GET(x)                              (((x) & PHY_BB_TPC_19_B2_THERM_CAL_VALUE_2_MASK) >> PHY_BB_TPC_19_B2_THERM_CAL_VALUE_2_LSB)
#define PHY_BB_TPC_19_B2_THERM_CAL_VALUE_2_SET(x)                              (((0 | (x)) << PHY_BB_TPC_19_B2_THERM_CAL_VALUE_2_LSB) & PHY_BB_TPC_19_B2_THERM_CAL_VALUE_2_MASK)
#define PHY_BB_TPC_19_B2_THERM_CAL_VALUE_2_RESET                               0x0
#define PHY_BB_TPC_19_B2_ADDRESS                                               (0x240 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_TPC_19_B2_RSTMASK                                               0xffffffff
#define PHY_BB_TPC_19_B2_RESET                                                 0x0

// 0x248 (PHY_BB_THERM_ADC_1_B2)
#define PHY_BB_THERM_ADC_1_B2_INIT_ATB_SETTING_2_LSB                           16
#define PHY_BB_THERM_ADC_1_B2_INIT_ATB_SETTING_2_MSB                           23
#define PHY_BB_THERM_ADC_1_B2_INIT_ATB_SETTING_2_MASK                          0xff0000
#define PHY_BB_THERM_ADC_1_B2_INIT_ATB_SETTING_2_GET(x)                        (((x) & PHY_BB_THERM_ADC_1_B2_INIT_ATB_SETTING_2_MASK) >> PHY_BB_THERM_ADC_1_B2_INIT_ATB_SETTING_2_LSB)
#define PHY_BB_THERM_ADC_1_B2_INIT_ATB_SETTING_2_SET(x)                        (((0 | (x)) << PHY_BB_THERM_ADC_1_B2_INIT_ATB_SETTING_2_LSB) & PHY_BB_THERM_ADC_1_B2_INIT_ATB_SETTING_2_MASK)
#define PHY_BB_THERM_ADC_1_B2_INIT_ATB_SETTING_2_RESET                         0x0
#define PHY_BB_THERM_ADC_1_B2_INIT_VOLT_SETTING_2_LSB                          8
#define PHY_BB_THERM_ADC_1_B2_INIT_VOLT_SETTING_2_MSB                          15
#define PHY_BB_THERM_ADC_1_B2_INIT_VOLT_SETTING_2_MASK                         0xff00
#define PHY_BB_THERM_ADC_1_B2_INIT_VOLT_SETTING_2_GET(x)                       (((x) & PHY_BB_THERM_ADC_1_B2_INIT_VOLT_SETTING_2_MASK) >> PHY_BB_THERM_ADC_1_B2_INIT_VOLT_SETTING_2_LSB)
#define PHY_BB_THERM_ADC_1_B2_INIT_VOLT_SETTING_2_SET(x)                       (((0 | (x)) << PHY_BB_THERM_ADC_1_B2_INIT_VOLT_SETTING_2_LSB) & PHY_BB_THERM_ADC_1_B2_INIT_VOLT_SETTING_2_MASK)
#define PHY_BB_THERM_ADC_1_B2_INIT_VOLT_SETTING_2_RESET                        0x0
#define PHY_BB_THERM_ADC_1_B2_INIT_THERM_SETTING_2_LSB                         0
#define PHY_BB_THERM_ADC_1_B2_INIT_THERM_SETTING_2_MSB                         7
#define PHY_BB_THERM_ADC_1_B2_INIT_THERM_SETTING_2_MASK                        0xff
#define PHY_BB_THERM_ADC_1_B2_INIT_THERM_SETTING_2_GET(x)                      (((x) & PHY_BB_THERM_ADC_1_B2_INIT_THERM_SETTING_2_MASK) >> PHY_BB_THERM_ADC_1_B2_INIT_THERM_SETTING_2_LSB)
#define PHY_BB_THERM_ADC_1_B2_INIT_THERM_SETTING_2_SET(x)                      (((0 | (x)) << PHY_BB_THERM_ADC_1_B2_INIT_THERM_SETTING_2_LSB) & PHY_BB_THERM_ADC_1_B2_INIT_THERM_SETTING_2_MASK)
#define PHY_BB_THERM_ADC_1_B2_INIT_THERM_SETTING_2_RESET                       0x0
#define PHY_BB_THERM_ADC_1_B2_ADDRESS                                          (0x248 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_THERM_ADC_1_B2_RSTMASK                                          0xffffff
#define PHY_BB_THERM_ADC_1_B2_RESET                                            0x0

// 0x250 (PHY_BB_THERM_ADC_3_B2)
#define PHY_BB_THERM_ADC_3_B2_THERM_ADC_SCALED_GAIN_2_LSB                      8
#define PHY_BB_THERM_ADC_3_B2_THERM_ADC_SCALED_GAIN_2_MSB                      16
#define PHY_BB_THERM_ADC_3_B2_THERM_ADC_SCALED_GAIN_2_MASK                     0x1ff00
#define PHY_BB_THERM_ADC_3_B2_THERM_ADC_SCALED_GAIN_2_GET(x)                   (((x) & PHY_BB_THERM_ADC_3_B2_THERM_ADC_SCALED_GAIN_2_MASK) >> PHY_BB_THERM_ADC_3_B2_THERM_ADC_SCALED_GAIN_2_LSB)
#define PHY_BB_THERM_ADC_3_B2_THERM_ADC_SCALED_GAIN_2_SET(x)                   (((0 | (x)) << PHY_BB_THERM_ADC_3_B2_THERM_ADC_SCALED_GAIN_2_LSB) & PHY_BB_THERM_ADC_3_B2_THERM_ADC_SCALED_GAIN_2_MASK)
#define PHY_BB_THERM_ADC_3_B2_THERM_ADC_SCALED_GAIN_2_RESET                    0x100
#define PHY_BB_THERM_ADC_3_B2_THERM_ADC_OFFSET_2_LSB                           0
#define PHY_BB_THERM_ADC_3_B2_THERM_ADC_OFFSET_2_MSB                           7
#define PHY_BB_THERM_ADC_3_B2_THERM_ADC_OFFSET_2_MASK                          0xff
#define PHY_BB_THERM_ADC_3_B2_THERM_ADC_OFFSET_2_GET(x)                        (((x) & PHY_BB_THERM_ADC_3_B2_THERM_ADC_OFFSET_2_MASK) >> PHY_BB_THERM_ADC_3_B2_THERM_ADC_OFFSET_2_LSB)
#define PHY_BB_THERM_ADC_3_B2_THERM_ADC_OFFSET_2_SET(x)                        (((0 | (x)) << PHY_BB_THERM_ADC_3_B2_THERM_ADC_OFFSET_2_LSB) & PHY_BB_THERM_ADC_3_B2_THERM_ADC_OFFSET_2_MASK)
#define PHY_BB_THERM_ADC_3_B2_THERM_ADC_OFFSET_2_RESET                         0x0
#define PHY_BB_THERM_ADC_3_B2_ADDRESS                                          (0x250 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_THERM_ADC_3_B2_RSTMASK                                          0x1ffff
#define PHY_BB_THERM_ADC_3_B2_RESET                                            0x10000

// 0x254 (PHY_BB_THERM_ADC_4_B2)
#define PHY_BB_THERM_ADC_4_B2_LATEST_ATB_VALUE_2_LSB                           16
#define PHY_BB_THERM_ADC_4_B2_LATEST_ATB_VALUE_2_MSB                           23
#define PHY_BB_THERM_ADC_4_B2_LATEST_ATB_VALUE_2_MASK                          0xff0000
#define PHY_BB_THERM_ADC_4_B2_LATEST_ATB_VALUE_2_GET(x)                        (((x) & PHY_BB_THERM_ADC_4_B2_LATEST_ATB_VALUE_2_MASK) >> PHY_BB_THERM_ADC_4_B2_LATEST_ATB_VALUE_2_LSB)
#define PHY_BB_THERM_ADC_4_B2_LATEST_ATB_VALUE_2_SET(x)                        (((0 | (x)) << PHY_BB_THERM_ADC_4_B2_LATEST_ATB_VALUE_2_LSB) & PHY_BB_THERM_ADC_4_B2_LATEST_ATB_VALUE_2_MASK)
#define PHY_BB_THERM_ADC_4_B2_LATEST_ATB_VALUE_2_RESET                         0x0
#define PHY_BB_THERM_ADC_4_B2_LATEST_VOLT_VALUE_2_LSB                          8
#define PHY_BB_THERM_ADC_4_B2_LATEST_VOLT_VALUE_2_MSB                          15
#define PHY_BB_THERM_ADC_4_B2_LATEST_VOLT_VALUE_2_MASK                         0xff00
#define PHY_BB_THERM_ADC_4_B2_LATEST_VOLT_VALUE_2_GET(x)                       (((x) & PHY_BB_THERM_ADC_4_B2_LATEST_VOLT_VALUE_2_MASK) >> PHY_BB_THERM_ADC_4_B2_LATEST_VOLT_VALUE_2_LSB)
#define PHY_BB_THERM_ADC_4_B2_LATEST_VOLT_VALUE_2_SET(x)                       (((0 | (x)) << PHY_BB_THERM_ADC_4_B2_LATEST_VOLT_VALUE_2_LSB) & PHY_BB_THERM_ADC_4_B2_LATEST_VOLT_VALUE_2_MASK)
#define PHY_BB_THERM_ADC_4_B2_LATEST_VOLT_VALUE_2_RESET                        0x0
#define PHY_BB_THERM_ADC_4_B2_LATEST_THERM_VALUE_2_LSB                         0
#define PHY_BB_THERM_ADC_4_B2_LATEST_THERM_VALUE_2_MSB                         7
#define PHY_BB_THERM_ADC_4_B2_LATEST_THERM_VALUE_2_MASK                        0xff
#define PHY_BB_THERM_ADC_4_B2_LATEST_THERM_VALUE_2_GET(x)                      (((x) & PHY_BB_THERM_ADC_4_B2_LATEST_THERM_VALUE_2_MASK) >> PHY_BB_THERM_ADC_4_B2_LATEST_THERM_VALUE_2_LSB)
#define PHY_BB_THERM_ADC_4_B2_LATEST_THERM_VALUE_2_SET(x)                      (((0 | (x)) << PHY_BB_THERM_ADC_4_B2_LATEST_THERM_VALUE_2_LSB) & PHY_BB_THERM_ADC_4_B2_LATEST_THERM_VALUE_2_MASK)
#define PHY_BB_THERM_ADC_4_B2_LATEST_THERM_VALUE_2_RESET                       0x0
#define PHY_BB_THERM_ADC_4_B2_ADDRESS                                          (0x254 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_THERM_ADC_4_B2_RSTMASK                                          0xffffff
#define PHY_BB_THERM_ADC_4_B2_RESET                                            0x0

// 0x25c (PHY_BB_TPC_STAT_0_B2)
#define PHY_BB_TPC_STAT_0_B2_LATEST_DC_VALUE_2_LSB                             17
#define PHY_BB_TPC_STAT_0_B2_LATEST_DC_VALUE_2_MSB                             25
#define PHY_BB_TPC_STAT_0_B2_LATEST_DC_VALUE_2_MASK                            0x3fe0000
#define PHY_BB_TPC_STAT_0_B2_LATEST_DC_VALUE_2_GET(x)                          (((x) & PHY_BB_TPC_STAT_0_B2_LATEST_DC_VALUE_2_MASK) >> PHY_BB_TPC_STAT_0_B2_LATEST_DC_VALUE_2_LSB)
#define PHY_BB_TPC_STAT_0_B2_LATEST_DC_VALUE_2_SET(x)                          (((0 | (x)) << PHY_BB_TPC_STAT_0_B2_LATEST_DC_VALUE_2_LSB) & PHY_BB_TPC_STAT_0_B2_LATEST_DC_VALUE_2_MASK)
#define PHY_BB_TPC_STAT_0_B2_LATEST_DC_VALUE_2_RESET                           0x0
#define PHY_BB_TPC_STAT_0_B2_PDACC_AVG_OUT_2_LSB                               9
#define PHY_BB_TPC_STAT_0_B2_PDACC_AVG_OUT_2_MSB                               16
#define PHY_BB_TPC_STAT_0_B2_PDACC_AVG_OUT_2_MASK                              0x1fe00
#define PHY_BB_TPC_STAT_0_B2_PDACC_AVG_OUT_2_GET(x)                            (((x) & PHY_BB_TPC_STAT_0_B2_PDACC_AVG_OUT_2_MASK) >> PHY_BB_TPC_STAT_0_B2_PDACC_AVG_OUT_2_LSB)
#define PHY_BB_TPC_STAT_0_B2_PDACC_AVG_OUT_2_SET(x)                            (((0 | (x)) << PHY_BB_TPC_STAT_0_B2_PDACC_AVG_OUT_2_LSB) & PHY_BB_TPC_STAT_0_B2_PDACC_AVG_OUT_2_MASK)
#define PHY_BB_TPC_STAT_0_B2_PDACC_AVG_OUT_2_RESET                             0x0
#define PHY_BB_TPC_STAT_0_B2_MEAS_PWR_OUT_2_LSB                                0
#define PHY_BB_TPC_STAT_0_B2_MEAS_PWR_OUT_2_MSB                                8
#define PHY_BB_TPC_STAT_0_B2_MEAS_PWR_OUT_2_MASK                               0x1ff
#define PHY_BB_TPC_STAT_0_B2_MEAS_PWR_OUT_2_GET(x)                             (((x) & PHY_BB_TPC_STAT_0_B2_MEAS_PWR_OUT_2_MASK) >> PHY_BB_TPC_STAT_0_B2_MEAS_PWR_OUT_2_LSB)
#define PHY_BB_TPC_STAT_0_B2_MEAS_PWR_OUT_2_SET(x)                             (((0 | (x)) << PHY_BB_TPC_STAT_0_B2_MEAS_PWR_OUT_2_LSB) & PHY_BB_TPC_STAT_0_B2_MEAS_PWR_OUT_2_MASK)
#define PHY_BB_TPC_STAT_0_B2_MEAS_PWR_OUT_2_RESET                              0x0
#define PHY_BB_TPC_STAT_0_B2_ADDRESS                                           (0x25c + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_TPC_STAT_0_B2_RSTMASK                                           0x3ffffff
#define PHY_BB_TPC_STAT_0_B2_RESET                                             0x0

// 0x260 (PHY_BB_TPC_STAT_1_B2)
#define PHY_BB_TPC_STAT_1_B2_GAIN_MISS_MID_2_LSB                               16
#define PHY_BB_TPC_STAT_1_B2_GAIN_MISS_MID_2_MSB                               23
#define PHY_BB_TPC_STAT_1_B2_GAIN_MISS_MID_2_MASK                              0xff0000
#define PHY_BB_TPC_STAT_1_B2_GAIN_MISS_MID_2_GET(x)                            (((x) & PHY_BB_TPC_STAT_1_B2_GAIN_MISS_MID_2_MASK) >> PHY_BB_TPC_STAT_1_B2_GAIN_MISS_MID_2_LSB)
#define PHY_BB_TPC_STAT_1_B2_GAIN_MISS_MID_2_SET(x)                            (((0 | (x)) << PHY_BB_TPC_STAT_1_B2_GAIN_MISS_MID_2_LSB) & PHY_BB_TPC_STAT_1_B2_GAIN_MISS_MID_2_MASK)
#define PHY_BB_TPC_STAT_1_B2_GAIN_MISS_MID_2_RESET                             0x0
#define PHY_BB_TPC_STAT_1_B2_GAIN_MISS_HIGH_2_LSB                              8
#define PHY_BB_TPC_STAT_1_B2_GAIN_MISS_HIGH_2_MSB                              15
#define PHY_BB_TPC_STAT_1_B2_GAIN_MISS_HIGH_2_MASK                             0xff00
#define PHY_BB_TPC_STAT_1_B2_GAIN_MISS_HIGH_2_GET(x)                           (((x) & PHY_BB_TPC_STAT_1_B2_GAIN_MISS_HIGH_2_MASK) >> PHY_BB_TPC_STAT_1_B2_GAIN_MISS_HIGH_2_LSB)
#define PHY_BB_TPC_STAT_1_B2_GAIN_MISS_HIGH_2_SET(x)                           (((0 | (x)) << PHY_BB_TPC_STAT_1_B2_GAIN_MISS_HIGH_2_LSB) & PHY_BB_TPC_STAT_1_B2_GAIN_MISS_HIGH_2_MASK)
#define PHY_BB_TPC_STAT_1_B2_GAIN_MISS_HIGH_2_RESET                            0x0
#define PHY_BB_TPC_STAT_1_B2_GAIN_MISS_LOW_2_LSB                               0
#define PHY_BB_TPC_STAT_1_B2_GAIN_MISS_LOW_2_MSB                               7
#define PHY_BB_TPC_STAT_1_B2_GAIN_MISS_LOW_2_MASK                              0xff
#define PHY_BB_TPC_STAT_1_B2_GAIN_MISS_LOW_2_GET(x)                            (((x) & PHY_BB_TPC_STAT_1_B2_GAIN_MISS_LOW_2_MASK) >> PHY_BB_TPC_STAT_1_B2_GAIN_MISS_LOW_2_LSB)
#define PHY_BB_TPC_STAT_1_B2_GAIN_MISS_LOW_2_SET(x)                            (((0 | (x)) << PHY_BB_TPC_STAT_1_B2_GAIN_MISS_LOW_2_LSB) & PHY_BB_TPC_STAT_1_B2_GAIN_MISS_LOW_2_MASK)
#define PHY_BB_TPC_STAT_1_B2_GAIN_MISS_LOW_2_RESET                             0x0
#define PHY_BB_TPC_STAT_1_B2_ADDRESS                                           (0x260 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_TPC_STAT_1_B2_RSTMASK                                           0xffffff
#define PHY_BB_TPC_STAT_1_B2_RESET                                             0x0

// 0x264 (PHY_BB_TPC_STAT_2_B2)
#define PHY_BB_TPC_STAT_2_B2_ANA_SET_NDP_2_LSB                                 18
#define PHY_BB_TPC_STAT_2_B2_ANA_SET_NDP_2_MSB                                 20
#define PHY_BB_TPC_STAT_2_B2_ANA_SET_NDP_2_MASK                                0x1c0000
#define PHY_BB_TPC_STAT_2_B2_ANA_SET_NDP_2_GET(x)                              (((x) & PHY_BB_TPC_STAT_2_B2_ANA_SET_NDP_2_MASK) >> PHY_BB_TPC_STAT_2_B2_ANA_SET_NDP_2_LSB)
#define PHY_BB_TPC_STAT_2_B2_ANA_SET_NDP_2_SET(x)                              (((0 | (x)) << PHY_BB_TPC_STAT_2_B2_ANA_SET_NDP_2_LSB) & PHY_BB_TPC_STAT_2_B2_ANA_SET_NDP_2_MASK)
#define PHY_BB_TPC_STAT_2_B2_ANA_SET_NDP_2_RESET                               0x0
#define PHY_BB_TPC_STAT_2_B2_CLPC_ERR_MU_2_LSB                                 8
#define PHY_BB_TPC_STAT_2_B2_CLPC_ERR_MU_2_MSB                                 17
#define PHY_BB_TPC_STAT_2_B2_CLPC_ERR_MU_2_MASK                                0x3ff00
#define PHY_BB_TPC_STAT_2_B2_CLPC_ERR_MU_2_GET(x)                              (((x) & PHY_BB_TPC_STAT_2_B2_CLPC_ERR_MU_2_MASK) >> PHY_BB_TPC_STAT_2_B2_CLPC_ERR_MU_2_LSB)
#define PHY_BB_TPC_STAT_2_B2_CLPC_ERR_MU_2_SET(x)                              (((0 | (x)) << PHY_BB_TPC_STAT_2_B2_CLPC_ERR_MU_2_LSB) & PHY_BB_TPC_STAT_2_B2_CLPC_ERR_MU_2_MASK)
#define PHY_BB_TPC_STAT_2_B2_CLPC_ERR_MU_2_RESET                               0x0
#define PHY_BB_TPC_STAT_2_B2_DAC_GAIN_NDP_2_LSB                                0
#define PHY_BB_TPC_STAT_2_B2_DAC_GAIN_NDP_2_MSB                                7
#define PHY_BB_TPC_STAT_2_B2_DAC_GAIN_NDP_2_MASK                               0xff
#define PHY_BB_TPC_STAT_2_B2_DAC_GAIN_NDP_2_GET(x)                             (((x) & PHY_BB_TPC_STAT_2_B2_DAC_GAIN_NDP_2_MASK) >> PHY_BB_TPC_STAT_2_B2_DAC_GAIN_NDP_2_LSB)
#define PHY_BB_TPC_STAT_2_B2_DAC_GAIN_NDP_2_SET(x)                             (((0 | (x)) << PHY_BB_TPC_STAT_2_B2_DAC_GAIN_NDP_2_LSB) & PHY_BB_TPC_STAT_2_B2_DAC_GAIN_NDP_2_MASK)
#define PHY_BB_TPC_STAT_2_B2_DAC_GAIN_NDP_2_RESET                              0x0
#define PHY_BB_TPC_STAT_2_B2_ADDRESS                                           (0x264 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_TPC_STAT_2_B2_RSTMASK                                           0x1fffff
#define PHY_BB_TPC_STAT_2_B2_RESET                                             0x0

// 0x274 (PHY_BB_TPC_STAT_3_B2)
#define PHY_BB_TPC_STAT_3_B2_LATEST_GLUT_SET_2_LSB                             18
#define PHY_BB_TPC_STAT_3_B2_LATEST_GLUT_SET_2_MSB                             20
#define PHY_BB_TPC_STAT_3_B2_LATEST_GLUT_SET_2_MASK                            0x1c0000
#define PHY_BB_TPC_STAT_3_B2_LATEST_GLUT_SET_2_GET(x)                          (((x) & PHY_BB_TPC_STAT_3_B2_LATEST_GLUT_SET_2_MASK) >> PHY_BB_TPC_STAT_3_B2_LATEST_GLUT_SET_2_LSB)
#define PHY_BB_TPC_STAT_3_B2_LATEST_GLUT_SET_2_SET(x)                          (((0 | (x)) << PHY_BB_TPC_STAT_3_B2_LATEST_GLUT_SET_2_LSB) & PHY_BB_TPC_STAT_3_B2_LATEST_GLUT_SET_2_MASK)
#define PHY_BB_TPC_STAT_3_B2_LATEST_GLUT_SET_2_RESET                           0x0
#define PHY_BB_TPC_STAT_3_B2_LATEST_CLPC_ERR_2_LSB                             8
#define PHY_BB_TPC_STAT_3_B2_LATEST_CLPC_ERR_2_MSB                             17
#define PHY_BB_TPC_STAT_3_B2_LATEST_CLPC_ERR_2_MASK                            0x3ff00
#define PHY_BB_TPC_STAT_3_B2_LATEST_CLPC_ERR_2_GET(x)                          (((x) & PHY_BB_TPC_STAT_3_B2_LATEST_CLPC_ERR_2_MASK) >> PHY_BB_TPC_STAT_3_B2_LATEST_CLPC_ERR_2_LSB)
#define PHY_BB_TPC_STAT_3_B2_LATEST_CLPC_ERR_2_SET(x)                          (((0 | (x)) << PHY_BB_TPC_STAT_3_B2_LATEST_CLPC_ERR_2_LSB) & PHY_BB_TPC_STAT_3_B2_LATEST_CLPC_ERR_2_MASK)
#define PHY_BB_TPC_STAT_3_B2_LATEST_CLPC_ERR_2_RESET                           0x0
#define PHY_BB_TPC_STAT_3_B2_LATEST_DAC_GAIN_2_LSB                             0
#define PHY_BB_TPC_STAT_3_B2_LATEST_DAC_GAIN_2_MSB                             7
#define PHY_BB_TPC_STAT_3_B2_LATEST_DAC_GAIN_2_MASK                            0xff
#define PHY_BB_TPC_STAT_3_B2_LATEST_DAC_GAIN_2_GET(x)                          (((x) & PHY_BB_TPC_STAT_3_B2_LATEST_DAC_GAIN_2_MASK) >> PHY_BB_TPC_STAT_3_B2_LATEST_DAC_GAIN_2_LSB)
#define PHY_BB_TPC_STAT_3_B2_LATEST_DAC_GAIN_2_SET(x)                          (((0 | (x)) << PHY_BB_TPC_STAT_3_B2_LATEST_DAC_GAIN_2_LSB) & PHY_BB_TPC_STAT_3_B2_LATEST_DAC_GAIN_2_MASK)
#define PHY_BB_TPC_STAT_3_B2_LATEST_DAC_GAIN_2_RESET                           0x0
#define PHY_BB_TPC_STAT_3_B2_ADDRESS                                           (0x274 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_TPC_STAT_3_B2_RSTMASK                                           0x1fffff
#define PHY_BB_TPC_STAT_3_B2_RESET                                             0x0

// 0x384 (PHY_BB_RRT_TABLE_SW_INTF_B2)
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ADDR_OFFSET_2_LSB             5
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ADDR_OFFSET_2_MSB             5
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ADDR_OFFSET_2_MASK            0x20
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ADDR_OFFSET_2_GET(x)          (((x) & PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ADDR_OFFSET_2_MASK) >> PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ADDR_OFFSET_2_LSB)
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ADDR_OFFSET_2_SET(x)          (((0 | (x)) << PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ADDR_OFFSET_2_LSB) & PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ADDR_OFFSET_2_MASK)
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ADDR_OFFSET_2_RESET           0x0
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ADDR_2_LSB                    2
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ADDR_2_MSB                    4
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ADDR_2_MASK                   0x1c
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ADDR_2_GET(x)                 (((x) & PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ADDR_2_MASK) >> PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ADDR_2_LSB)
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ADDR_2_SET(x)                 (((0 | (x)) << PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ADDR_2_LSB) & PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ADDR_2_MASK)
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ADDR_2_RESET                  0x0
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_WRITE_2_LSB                   1
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_WRITE_2_MSB                   1
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_WRITE_2_MASK                  0x2
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_WRITE_2_GET(x)                (((x) & PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_WRITE_2_MASK) >> PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_WRITE_2_LSB)
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_WRITE_2_SET(x)                (((0 | (x)) << PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_WRITE_2_LSB) & PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_WRITE_2_MASK)
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_WRITE_2_RESET                 0x0
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ACCESS_2_LSB                  0
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ACCESS_2_MSB                  0
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ACCESS_2_MASK                 0x1
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ACCESS_2_GET(x)               (((x) & PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ACCESS_2_MASK) >> PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ACCESS_2_LSB)
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ACCESS_2_SET(x)               (((0 | (x)) << PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ACCESS_2_LSB) & PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ACCESS_2_MASK)
#define PHY_BB_RRT_TABLE_SW_INTF_B2_SW_RRT_TABLE_ACCESS_2_RESET                0x0
#define PHY_BB_RRT_TABLE_SW_INTF_B2_ADDRESS                                    (0x384 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_RRT_TABLE_SW_INTF_B2_RSTMASK                                    0x3f
#define PHY_BB_RRT_TABLE_SW_INTF_B2_RESET                                      0x0

// 0x388 (PHY_BB_RRT_TABLE_SW_INTF_1_B2)
#define PHY_BB_RRT_TABLE_SW_INTF_1_B2_SW_RRT_TABLE_DATA_2_LSB                  0
#define PHY_BB_RRT_TABLE_SW_INTF_1_B2_SW_RRT_TABLE_DATA_2_MSB                  31
#define PHY_BB_RRT_TABLE_SW_INTF_1_B2_SW_RRT_TABLE_DATA_2_MASK                 0xffffffff
#define PHY_BB_RRT_TABLE_SW_INTF_1_B2_SW_RRT_TABLE_DATA_2_GET(x)               (((x) & PHY_BB_RRT_TABLE_SW_INTF_1_B2_SW_RRT_TABLE_DATA_2_MASK) >> PHY_BB_RRT_TABLE_SW_INTF_1_B2_SW_RRT_TABLE_DATA_2_LSB)
#define PHY_BB_RRT_TABLE_SW_INTF_1_B2_SW_RRT_TABLE_DATA_2_SET(x)               (((0 | (x)) << PHY_BB_RRT_TABLE_SW_INTF_1_B2_SW_RRT_TABLE_DATA_2_LSB) & PHY_BB_RRT_TABLE_SW_INTF_1_B2_SW_RRT_TABLE_DATA_2_MASK)
#define PHY_BB_RRT_TABLE_SW_INTF_1_B2_SW_RRT_TABLE_DATA_2_RESET                0x0
#define PHY_BB_RRT_TABLE_SW_INTF_1_B2_ADDRESS                                  (0x388 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_RRT_TABLE_SW_INTF_1_B2_RSTMASK                                  0xffffffff
#define PHY_BB_RRT_TABLE_SW_INTF_1_B2_RESET                                    0x0

// 0x48c (PHY_BB_TXIQCAL_STATUS_B2)
#define PHY_BB_TXIQCAL_STATUS_B2_LAST_MEAS_ADDR_2_LSB                          18
#define PHY_BB_TXIQCAL_STATUS_B2_LAST_MEAS_ADDR_2_MSB                          23
#define PHY_BB_TXIQCAL_STATUS_B2_LAST_MEAS_ADDR_2_MASK                         0xfc0000
#define PHY_BB_TXIQCAL_STATUS_B2_LAST_MEAS_ADDR_2_GET(x)                       (((x) & PHY_BB_TXIQCAL_STATUS_B2_LAST_MEAS_ADDR_2_MASK) >> PHY_BB_TXIQCAL_STATUS_B2_LAST_MEAS_ADDR_2_LSB)
#define PHY_BB_TXIQCAL_STATUS_B2_LAST_MEAS_ADDR_2_SET(x)                       (((0 | (x)) << PHY_BB_TXIQCAL_STATUS_B2_LAST_MEAS_ADDR_2_LSB) & PHY_BB_TXIQCAL_STATUS_B2_LAST_MEAS_ADDR_2_MASK)
#define PHY_BB_TXIQCAL_STATUS_B2_LAST_MEAS_ADDR_2_RESET                        0x0
#define PHY_BB_TXIQCAL_STATUS_B2_RX_GAIN_USED_2_LSB                            12
#define PHY_BB_TXIQCAL_STATUS_B2_RX_GAIN_USED_2_MSB                            17
#define PHY_BB_TXIQCAL_STATUS_B2_RX_GAIN_USED_2_MASK                           0x3f000
#define PHY_BB_TXIQCAL_STATUS_B2_RX_GAIN_USED_2_GET(x)                         (((x) & PHY_BB_TXIQCAL_STATUS_B2_RX_GAIN_USED_2_MASK) >> PHY_BB_TXIQCAL_STATUS_B2_RX_GAIN_USED_2_LSB)
#define PHY_BB_TXIQCAL_STATUS_B2_RX_GAIN_USED_2_SET(x)                         (((0 | (x)) << PHY_BB_TXIQCAL_STATUS_B2_RX_GAIN_USED_2_LSB) & PHY_BB_TXIQCAL_STATUS_B2_RX_GAIN_USED_2_MASK)
#define PHY_BB_TXIQCAL_STATUS_B2_RX_GAIN_USED_2_RESET                          0x0
#define PHY_BB_TXIQCAL_STATUS_B2_TONE_GAIN_USED_2_LSB                          6
#define PHY_BB_TXIQCAL_STATUS_B2_TONE_GAIN_USED_2_MSB                          11
#define PHY_BB_TXIQCAL_STATUS_B2_TONE_GAIN_USED_2_MASK                         0xfc0
#define PHY_BB_TXIQCAL_STATUS_B2_TONE_GAIN_USED_2_GET(x)                       (((x) & PHY_BB_TXIQCAL_STATUS_B2_TONE_GAIN_USED_2_MASK) >> PHY_BB_TXIQCAL_STATUS_B2_TONE_GAIN_USED_2_LSB)
#define PHY_BB_TXIQCAL_STATUS_B2_TONE_GAIN_USED_2_SET(x)                       (((0 | (x)) << PHY_BB_TXIQCAL_STATUS_B2_TONE_GAIN_USED_2_LSB) & PHY_BB_TXIQCAL_STATUS_B2_TONE_GAIN_USED_2_MASK)
#define PHY_BB_TXIQCAL_STATUS_B2_TONE_GAIN_USED_2_RESET                        0x0
#define PHY_BB_TXIQCAL_STATUS_B2_CALIBRATED_GAINS_2_LSB                        1
#define PHY_BB_TXIQCAL_STATUS_B2_CALIBRATED_GAINS_2_MSB                        5
#define PHY_BB_TXIQCAL_STATUS_B2_CALIBRATED_GAINS_2_MASK                       0x3e
#define PHY_BB_TXIQCAL_STATUS_B2_CALIBRATED_GAINS_2_GET(x)                     (((x) & PHY_BB_TXIQCAL_STATUS_B2_CALIBRATED_GAINS_2_MASK) >> PHY_BB_TXIQCAL_STATUS_B2_CALIBRATED_GAINS_2_LSB)
#define PHY_BB_TXIQCAL_STATUS_B2_CALIBRATED_GAINS_2_SET(x)                     (((0 | (x)) << PHY_BB_TXIQCAL_STATUS_B2_CALIBRATED_GAINS_2_LSB) & PHY_BB_TXIQCAL_STATUS_B2_CALIBRATED_GAINS_2_MASK)
#define PHY_BB_TXIQCAL_STATUS_B2_CALIBRATED_GAINS_2_RESET                      0x0
#define PHY_BB_TXIQCAL_STATUS_B2_TXIQCAL_FAILED_2_LSB                          0
#define PHY_BB_TXIQCAL_STATUS_B2_TXIQCAL_FAILED_2_MSB                          0
#define PHY_BB_TXIQCAL_STATUS_B2_TXIQCAL_FAILED_2_MASK                         0x1
#define PHY_BB_TXIQCAL_STATUS_B2_TXIQCAL_FAILED_2_GET(x)                       (((x) & PHY_BB_TXIQCAL_STATUS_B2_TXIQCAL_FAILED_2_MASK) >> PHY_BB_TXIQCAL_STATUS_B2_TXIQCAL_FAILED_2_LSB)
#define PHY_BB_TXIQCAL_STATUS_B2_TXIQCAL_FAILED_2_SET(x)                       (((0 | (x)) << PHY_BB_TXIQCAL_STATUS_B2_TXIQCAL_FAILED_2_LSB) & PHY_BB_TXIQCAL_STATUS_B2_TXIQCAL_FAILED_2_MASK)
#define PHY_BB_TXIQCAL_STATUS_B2_TXIQCAL_FAILED_2_RESET                        0x0
#define PHY_BB_TXIQCAL_STATUS_B2_ADDRESS                                       (0x48c + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_TXIQCAL_STATUS_B2_RSTMASK                                       0xffffff
#define PHY_BB_TXIQCAL_STATUS_B2_RESET                                         0x0

// 0x4ac (PHY_BB_RXIQCAL_STATUS_B2)
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_LAST_MEAS_ADDR_2_LSB                  11
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_LAST_MEAS_ADDR_2_MSB                  16
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_LAST_MEAS_ADDR_2_MASK                 0x1f800
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_LAST_MEAS_ADDR_2_GET(x)               (((x) & PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_LAST_MEAS_ADDR_2_MASK) >> PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_LAST_MEAS_ADDR_2_LSB)
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_LAST_MEAS_ADDR_2_SET(x)               (((0 | (x)) << PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_LAST_MEAS_ADDR_2_LSB) & PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_LAST_MEAS_ADDR_2_MASK)
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_LAST_MEAS_ADDR_2_RESET                0x0
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_TXGAIN_IDX_USED_2_LSB                 6
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_TXGAIN_IDX_USED_2_MSB                 10
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_TXGAIN_IDX_USED_2_MASK                0x7c0
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_TXGAIN_IDX_USED_2_GET(x)              (((x) & PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_TXGAIN_IDX_USED_2_MASK) >> PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_TXGAIN_IDX_USED_2_LSB)
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_TXGAIN_IDX_USED_2_SET(x)              (((0 | (x)) << PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_TXGAIN_IDX_USED_2_LSB) & PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_TXGAIN_IDX_USED_2_MASK)
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_TXGAIN_IDX_USED_2_RESET               0x0
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_CALIBRATED_GAINS_2_LSB                1
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_CALIBRATED_GAINS_2_MSB                5
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_CALIBRATED_GAINS_2_MASK               0x3e
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_CALIBRATED_GAINS_2_GET(x)             (((x) & PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_CALIBRATED_GAINS_2_MASK) >> PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_CALIBRATED_GAINS_2_LSB)
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_CALIBRATED_GAINS_2_SET(x)             (((0 | (x)) << PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_CALIBRATED_GAINS_2_LSB) & PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_CALIBRATED_GAINS_2_MASK)
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_CALIBRATED_GAINS_2_RESET              0x0
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_FAILED_2_LSB                          0
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_FAILED_2_MSB                          0
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_FAILED_2_MASK                         0x1
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_FAILED_2_GET(x)                       (((x) & PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_FAILED_2_MASK) >> PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_FAILED_2_LSB)
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_FAILED_2_SET(x)                       (((0 | (x)) << PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_FAILED_2_LSB) & PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_FAILED_2_MASK)
#define PHY_BB_RXIQCAL_STATUS_B2_RXIQCAL_FAILED_2_RESET                        0x0
#define PHY_BB_RXIQCAL_STATUS_B2_ADDRESS                                       (0x4ac + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_RXIQCAL_STATUS_B2_RSTMASK                                       0x1ffff
#define PHY_BB_RXIQCAL_STATUS_B2_RESET                                         0x0

// 0x5f0 (PHY_BB_TABLES_INTF_ADDR_B2)
#define PHY_BB_TABLES_INTF_ADDR_B2_ADDR_AUTO_INCR_2_LSB                        31
#define PHY_BB_TABLES_INTF_ADDR_B2_ADDR_AUTO_INCR_2_MSB                        31
#define PHY_BB_TABLES_INTF_ADDR_B2_ADDR_AUTO_INCR_2_MASK                       0x80000000
#define PHY_BB_TABLES_INTF_ADDR_B2_ADDR_AUTO_INCR_2_GET(x)                     (((x) & PHY_BB_TABLES_INTF_ADDR_B2_ADDR_AUTO_INCR_2_MASK) >> PHY_BB_TABLES_INTF_ADDR_B2_ADDR_AUTO_INCR_2_LSB)
#define PHY_BB_TABLES_INTF_ADDR_B2_ADDR_AUTO_INCR_2_SET(x)                     (((0 | (x)) << PHY_BB_TABLES_INTF_ADDR_B2_ADDR_AUTO_INCR_2_LSB) & PHY_BB_TABLES_INTF_ADDR_B2_ADDR_AUTO_INCR_2_MASK)
#define PHY_BB_TABLES_INTF_ADDR_B2_ADDR_AUTO_INCR_2_RESET                      0x0
#define PHY_BB_TABLES_INTF_ADDR_B2_TABLES_ADDR_2_LSB                           2
#define PHY_BB_TABLES_INTF_ADDR_B2_TABLES_ADDR_2_MSB                           17
#define PHY_BB_TABLES_INTF_ADDR_B2_TABLES_ADDR_2_MASK                          0x3fffc
#define PHY_BB_TABLES_INTF_ADDR_B2_TABLES_ADDR_2_GET(x)                        (((x) & PHY_BB_TABLES_INTF_ADDR_B2_TABLES_ADDR_2_MASK) >> PHY_BB_TABLES_INTF_ADDR_B2_TABLES_ADDR_2_LSB)
#define PHY_BB_TABLES_INTF_ADDR_B2_TABLES_ADDR_2_SET(x)                        (((0 | (x)) << PHY_BB_TABLES_INTF_ADDR_B2_TABLES_ADDR_2_LSB) & PHY_BB_TABLES_INTF_ADDR_B2_TABLES_ADDR_2_MASK)
#define PHY_BB_TABLES_INTF_ADDR_B2_TABLES_ADDR_2_RESET                         0x0
#define PHY_BB_TABLES_INTF_ADDR_B2_ADDRESS                                     (0x5f0 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_TABLES_INTF_ADDR_B2_RSTMASK                                     0x8003fffc
#define PHY_BB_TABLES_INTF_ADDR_B2_RESET                                       0x0

// 0x5f4 (PHY_BB_TABLES_INTF_DATA_B2)
#define PHY_BB_TABLES_INTF_DATA_B2_TABLES_DATA_2_LSB                           0
#define PHY_BB_TABLES_INTF_DATA_B2_TABLES_DATA_2_MSB                           31
#define PHY_BB_TABLES_INTF_DATA_B2_TABLES_DATA_2_MASK                          0xffffffff
#define PHY_BB_TABLES_INTF_DATA_B2_TABLES_DATA_2_GET(x)                        (((x) & PHY_BB_TABLES_INTF_DATA_B2_TABLES_DATA_2_MASK) >> PHY_BB_TABLES_INTF_DATA_B2_TABLES_DATA_2_LSB)
#define PHY_BB_TABLES_INTF_DATA_B2_TABLES_DATA_2_SET(x)                        (((0 | (x)) << PHY_BB_TABLES_INTF_DATA_B2_TABLES_DATA_2_LSB) & PHY_BB_TABLES_INTF_DATA_B2_TABLES_DATA_2_MASK)
#define PHY_BB_TABLES_INTF_DATA_B2_TABLES_DATA_2_RESET                         0x0
#define PHY_BB_TABLES_INTF_DATA_B2_ADDRESS                                     (0x5f4 + __PHY_SM2_REG_MAP_BASE_ADDRESS)
#define PHY_BB_TABLES_INTF_DATA_B2_RSTMASK                                     0xffffffff
#define PHY_BB_TABLES_INTF_DATA_B2_RESET                                       0x0



#endif /* _PHY_SM2_REG_MAP_H_ */
