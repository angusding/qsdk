/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _WLAN_CXM_REG_CSR_H_
#define _WLAN_CXM_REG_CSR_H_


#ifndef __WLAN_CXM_REG_CSR_BASE_ADDRESS
#define __WLAN_CXM_REG_CSR_BASE_ADDRESS (0x43400)
#endif


// 0x0 (UART_DATA)
#define UART_DATA_TX_CSR_LSB                                                   9
#define UART_DATA_TX_CSR_MSB                                                   9
#define UART_DATA_TX_CSR_MASK                                                  0x200
#define UART_DATA_TX_CSR_GET(x)                                                (((x) & UART_DATA_TX_CSR_MASK) >> UART_DATA_TX_CSR_LSB)
#define UART_DATA_TX_CSR_SET(x)                                                (((0 | (x)) << UART_DATA_TX_CSR_LSB) & UART_DATA_TX_CSR_MASK)
#define UART_DATA_TX_CSR_RESET                                                 0x0
#define UART_DATA_RX_CSR_LSB                                                   8
#define UART_DATA_RX_CSR_MSB                                                   8
#define UART_DATA_RX_CSR_MASK                                                  0x100
#define UART_DATA_RX_CSR_GET(x)                                                (((x) & UART_DATA_RX_CSR_MASK) >> UART_DATA_RX_CSR_LSB)
#define UART_DATA_RX_CSR_SET(x)                                                (((0 | (x)) << UART_DATA_RX_CSR_LSB) & UART_DATA_RX_CSR_MASK)
#define UART_DATA_RX_CSR_RESET                                                 0x0
#define UART_DATA_TXRX_DATA_LSB                                                0
#define UART_DATA_TXRX_DATA_MSB                                                7
#define UART_DATA_TXRX_DATA_MASK                                               0xff
#define UART_DATA_TXRX_DATA_GET(x)                                             (((x) & UART_DATA_TXRX_DATA_MASK) >> UART_DATA_TXRX_DATA_LSB)
#define UART_DATA_TXRX_DATA_SET(x)                                             (((0 | (x)) << UART_DATA_TXRX_DATA_LSB) & UART_DATA_TXRX_DATA_MASK)
#define UART_DATA_TXRX_DATA_RESET                                              0x0
#define UART_DATA_ADDRESS                                                      (0x0 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define UART_DATA_RSTMASK                                                      0x3ff
#define UART_DATA_RESET                                                        0x0

// 0x4 (UART_CONTROL)
#define UART_CONTROL_TDM_RX_ENA_LSB                                            4
#define UART_CONTROL_TDM_RX_ENA_MSB                                            4
#define UART_CONTROL_TDM_RX_ENA_MASK                                           0x10
#define UART_CONTROL_TDM_RX_ENA_GET(x)                                         (((x) & UART_CONTROL_TDM_RX_ENA_MASK) >> UART_CONTROL_TDM_RX_ENA_LSB)
#define UART_CONTROL_TDM_RX_ENA_SET(x)                                         (((0 | (x)) << UART_CONTROL_TDM_RX_ENA_LSB) & UART_CONTROL_TDM_RX_ENA_MASK)
#define UART_CONTROL_TDM_RX_ENA_RESET                                          0x0
#define UART_CONTROL_RX_BUSY_LSB                                               3
#define UART_CONTROL_RX_BUSY_MSB                                               3
#define UART_CONTROL_RX_BUSY_MASK                                              0x8
#define UART_CONTROL_RX_BUSY_GET(x)                                            (((x) & UART_CONTROL_RX_BUSY_MASK) >> UART_CONTROL_RX_BUSY_LSB)
#define UART_CONTROL_RX_BUSY_SET(x)                                            (((0 | (x)) << UART_CONTROL_RX_BUSY_LSB) & UART_CONTROL_RX_BUSY_MASK)
#define UART_CONTROL_RX_BUSY_RESET                                             0x0
#define UART_CONTROL_TX_BUSY_LSB                                               2
#define UART_CONTROL_TX_BUSY_MSB                                               2
#define UART_CONTROL_TX_BUSY_MASK                                              0x4
#define UART_CONTROL_TX_BUSY_GET(x)                                            (((x) & UART_CONTROL_TX_BUSY_MASK) >> UART_CONTROL_TX_BUSY_LSB)
#define UART_CONTROL_TX_BUSY_SET(x)                                            (((0 | (x)) << UART_CONTROL_TX_BUSY_LSB) & UART_CONTROL_TX_BUSY_MASK)
#define UART_CONTROL_TX_BUSY_RESET                                             0x0
#define UART_CONTROL_TX_BREAK_LSB                                              1
#define UART_CONTROL_TX_BREAK_MSB                                              1
#define UART_CONTROL_TX_BREAK_MASK                                             0x2
#define UART_CONTROL_TX_BREAK_GET(x)                                           (((x) & UART_CONTROL_TX_BREAK_MASK) >> UART_CONTROL_TX_BREAK_LSB)
#define UART_CONTROL_TX_BREAK_SET(x)                                           (((0 | (x)) << UART_CONTROL_TX_BREAK_LSB) & UART_CONTROL_TX_BREAK_MASK)
#define UART_CONTROL_TX_BREAK_RESET                                            0x0
#define UART_CONTROL_RX_BREAK_LSB                                              0
#define UART_CONTROL_RX_BREAK_MSB                                              0
#define UART_CONTROL_RX_BREAK_MASK                                             0x1
#define UART_CONTROL_RX_BREAK_GET(x)                                           (((x) & UART_CONTROL_RX_BREAK_MASK) >> UART_CONTROL_RX_BREAK_LSB)
#define UART_CONTROL_RX_BREAK_SET(x)                                           (((0 | (x)) << UART_CONTROL_RX_BREAK_LSB) & UART_CONTROL_RX_BREAK_MASK)
#define UART_CONTROL_RX_BREAK_RESET                                            0x0
#define UART_CONTROL_ADDRESS                                                   (0x4 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define UART_CONTROL_RSTMASK                                                   0x1f
#define UART_CONTROL_RESET                                                     0x0

// 0x8 (UART_TX_FIFO1)
#define UART_TX_FIFO1_TX_FIFO_RST_LSB                                          17
#define UART_TX_FIFO1_TX_FIFO_RST_MSB                                          17
#define UART_TX_FIFO1_TX_FIFO_RST_MASK                                         0x20000
#define UART_TX_FIFO1_TX_FIFO_RST_GET(x)                                       (((x) & UART_TX_FIFO1_TX_FIFO_RST_MASK) >> UART_TX_FIFO1_TX_FIFO_RST_LSB)
#define UART_TX_FIFO1_TX_FIFO_RST_SET(x)                                       (((0 | (x)) << UART_TX_FIFO1_TX_FIFO_RST_LSB) & UART_TX_FIFO1_TX_FIFO_RST_MASK)
#define UART_TX_FIFO1_TX_FIFO_RST_RESET                                        0x0
#define UART_TX_FIFO1_DEPTH_LSB                                                8
#define UART_TX_FIFO1_DEPTH_MSB                                                16
#define UART_TX_FIFO1_DEPTH_MASK                                               0x1ff00
#define UART_TX_FIFO1_DEPTH_GET(x)                                             (((x) & UART_TX_FIFO1_DEPTH_MASK) >> UART_TX_FIFO1_DEPTH_LSB)
#define UART_TX_FIFO1_DEPTH_SET(x)                                             (((0 | (x)) << UART_TX_FIFO1_DEPTH_LSB) & UART_TX_FIFO1_DEPTH_MASK)
#define UART_TX_FIFO1_DEPTH_RESET                                              0x0
#define UART_TX_FIFO1_AEPT_THR_LSB                                             0
#define UART_TX_FIFO1_AEPT_THR_MSB                                             7
#define UART_TX_FIFO1_AEPT_THR_MASK                                            0xff
#define UART_TX_FIFO1_AEPT_THR_GET(x)                                          (((x) & UART_TX_FIFO1_AEPT_THR_MASK) >> UART_TX_FIFO1_AEPT_THR_LSB)
#define UART_TX_FIFO1_AEPT_THR_SET(x)                                          (((0 | (x)) << UART_TX_FIFO1_AEPT_THR_LSB) & UART_TX_FIFO1_AEPT_THR_MASK)
#define UART_TX_FIFO1_AEPT_THR_RESET                                           0x0
#define UART_TX_FIFO1_ADDRESS                                                  (0x8 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define UART_TX_FIFO1_RSTMASK                                                  0x3ffff
#define UART_TX_FIFO1_RESET                                                    0x0

// 0xc (UART_TX_FIFO2)
#define UART_TX_FIFO2_RB_CSR_LSB                                               8
#define UART_TX_FIFO2_RB_CSR_MSB                                               8
#define UART_TX_FIFO2_RB_CSR_MASK                                              0x100
#define UART_TX_FIFO2_RB_CSR_GET(x)                                            (((x) & UART_TX_FIFO2_RB_CSR_MASK) >> UART_TX_FIFO2_RB_CSR_LSB)
#define UART_TX_FIFO2_RB_CSR_SET(x)                                            (((0 | (x)) << UART_TX_FIFO2_RB_CSR_LSB) & UART_TX_FIFO2_RB_CSR_MASK)
#define UART_TX_FIFO2_RB_CSR_RESET                                             0x0
#define UART_TX_FIFO2_RB_VAL_LSB                                               0
#define UART_TX_FIFO2_RB_VAL_MSB                                               7
#define UART_TX_FIFO2_RB_VAL_MASK                                              0xff
#define UART_TX_FIFO2_RB_VAL_GET(x)                                            (((x) & UART_TX_FIFO2_RB_VAL_MASK) >> UART_TX_FIFO2_RB_VAL_LSB)
#define UART_TX_FIFO2_RB_VAL_SET(x)                                            (((0 | (x)) << UART_TX_FIFO2_RB_VAL_LSB) & UART_TX_FIFO2_RB_VAL_MASK)
#define UART_TX_FIFO2_RB_VAL_RESET                                             0x0
#define UART_TX_FIFO2_ADDRESS                                                  (0xc + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define UART_TX_FIFO2_RSTMASK                                                  0x1ff
#define UART_TX_FIFO2_RESET                                                    0x0

// 0x10 (UART_RX_FIFO)
#define UART_RX_FIFO_RX_FIFO_RST_LSB                                           17
#define UART_RX_FIFO_RX_FIFO_RST_MSB                                           17
#define UART_RX_FIFO_RX_FIFO_RST_MASK                                          0x20000
#define UART_RX_FIFO_RX_FIFO_RST_GET(x)                                        (((x) & UART_RX_FIFO_RX_FIFO_RST_MASK) >> UART_RX_FIFO_RX_FIFO_RST_LSB)
#define UART_RX_FIFO_RX_FIFO_RST_SET(x)                                        (((0 | (x)) << UART_RX_FIFO_RX_FIFO_RST_LSB) & UART_RX_FIFO_RX_FIFO_RST_MASK)
#define UART_RX_FIFO_RX_FIFO_RST_RESET                                         0x0
#define UART_RX_FIFO_DEPTH_LSB                                                 8
#define UART_RX_FIFO_DEPTH_MSB                                                 16
#define UART_RX_FIFO_DEPTH_MASK                                                0x1ff00
#define UART_RX_FIFO_DEPTH_GET(x)                                              (((x) & UART_RX_FIFO_DEPTH_MASK) >> UART_RX_FIFO_DEPTH_LSB)
#define UART_RX_FIFO_DEPTH_SET(x)                                              (((0 | (x)) << UART_RX_FIFO_DEPTH_LSB) & UART_RX_FIFO_DEPTH_MASK)
#define UART_RX_FIFO_DEPTH_RESET                                               0x0
#define UART_RX_FIFO_AFUL_THR_LSB                                              0
#define UART_RX_FIFO_AFUL_THR_MSB                                              7
#define UART_RX_FIFO_AFUL_THR_MASK                                             0xff
#define UART_RX_FIFO_AFUL_THR_GET(x)                                           (((x) & UART_RX_FIFO_AFUL_THR_MASK) >> UART_RX_FIFO_AFUL_THR_LSB)
#define UART_RX_FIFO_AFUL_THR_SET(x)                                           (((0 | (x)) << UART_RX_FIFO_AFUL_THR_LSB) & UART_RX_FIFO_AFUL_THR_MASK)
#define UART_RX_FIFO_AFUL_THR_RESET                                            0x0
#define UART_RX_FIFO_ADDRESS                                                   (0x10 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define UART_RX_FIFO_RSTMASK                                                   0x3ffff
#define UART_RX_FIFO_RESET                                                     0x0

// 0x14 (UART_CLKDIV)
#define UART_CLKDIV_CLK_SCALE_LSB                                              16
#define UART_CLKDIV_CLK_SCALE_MSB                                              23
#define UART_CLKDIV_CLK_SCALE_MASK                                             0xff0000
#define UART_CLKDIV_CLK_SCALE_GET(x)                                           (((x) & UART_CLKDIV_CLK_SCALE_MASK) >> UART_CLKDIV_CLK_SCALE_LSB)
#define UART_CLKDIV_CLK_SCALE_SET(x)                                           (((0 | (x)) << UART_CLKDIV_CLK_SCALE_LSB) & UART_CLKDIV_CLK_SCALE_MASK)
#define UART_CLKDIV_CLK_SCALE_RESET                                            0x0
#define UART_CLKDIV_CLK_STEP_LSB                                               0
#define UART_CLKDIV_CLK_STEP_MSB                                               15
#define UART_CLKDIV_CLK_STEP_MASK                                              0xffff
#define UART_CLKDIV_CLK_STEP_GET(x)                                            (((x) & UART_CLKDIV_CLK_STEP_MASK) >> UART_CLKDIV_CLK_STEP_LSB)
#define UART_CLKDIV_CLK_STEP_SET(x)                                            (((0 | (x)) << UART_CLKDIV_CLK_STEP_LSB) & UART_CLKDIV_CLK_STEP_MASK)
#define UART_CLKDIV_CLK_STEP_RESET                                             0x1175
#define UART_CLKDIV_ADDRESS                                                    (0x14 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define UART_CLKDIV_RSTMASK                                                    0xffffff
#define UART_CLKDIV_RESET                                                      0x1175

// 0x18 (UART_INT)
#define UART_INT_HOST_INT_LSB                                                  31
#define UART_INT_HOST_INT_MSB                                                  31
#define UART_INT_HOST_INT_MASK                                                 0x80000000
#define UART_INT_HOST_INT_GET(x)                                               (((x) & UART_INT_HOST_INT_MASK) >> UART_INT_HOST_INT_LSB)
#define UART_INT_HOST_INT_SET(x)                                               (((0 | (x)) << UART_INT_HOST_INT_LSB) & UART_INT_HOST_INT_MASK)
#define UART_INT_HOST_INT_RESET                                                0x0
#define UART_INT_TX_ENA_RE_LSB                                                 29
#define UART_INT_TX_ENA_RE_MSB                                                 29
#define UART_INT_TX_ENA_RE_MASK                                                0x20000000
#define UART_INT_TX_ENA_RE_GET(x)                                              (((x) & UART_INT_TX_ENA_RE_MASK) >> UART_INT_TX_ENA_RE_LSB)
#define UART_INT_TX_ENA_RE_SET(x)                                              (((0 | (x)) << UART_INT_TX_ENA_RE_LSB) & UART_INT_TX_ENA_RE_MASK)
#define UART_INT_TX_ENA_RE_RESET                                               0x0
#define UART_INT_DIRECT_MSG_TXED_LSB                                           28
#define UART_INT_DIRECT_MSG_TXED_MSB                                           28
#define UART_INT_DIRECT_MSG_TXED_MASK                                          0x10000000
#define UART_INT_DIRECT_MSG_TXED_GET(x)                                        (((x) & UART_INT_DIRECT_MSG_TXED_MASK) >> UART_INT_DIRECT_MSG_TXED_LSB)
#define UART_INT_DIRECT_MSG_TXED_SET(x)                                        (((0 | (x)) << UART_INT_DIRECT_MSG_TXED_LSB) & UART_INT_DIRECT_MSG_TXED_MASK)
#define UART_INT_DIRECT_MSG_TXED_RESET                                         0x0
#define UART_INT_TCM_NACK_LSB                                                  27
#define UART_INT_TCM_NACK_MSB                                                  27
#define UART_INT_TCM_NACK_MASK                                                 0x8000000
#define UART_INT_TCM_NACK_GET(x)                                               (((x) & UART_INT_TCM_NACK_MASK) >> UART_INT_TCM_NACK_LSB)
#define UART_INT_TCM_NACK_SET(x)                                               (((0 | (x)) << UART_INT_TCM_NACK_LSB) & UART_INT_TCM_NACK_MASK)
#define UART_INT_TCM_NACK_RESET                                                0x0
#define UART_INT_TCM_ACK_LSB                                                   26
#define UART_INT_TCM_ACK_MSB                                                   26
#define UART_INT_TCM_ACK_MASK                                                  0x4000000
#define UART_INT_TCM_ACK_GET(x)                                                (((x) & UART_INT_TCM_ACK_MASK) >> UART_INT_TCM_ACK_LSB)
#define UART_INT_TCM_ACK_SET(x)                                                (((0 | (x)) << UART_INT_TCM_ACK_LSB) & UART_INT_TCM_ACK_MASK)
#define UART_INT_TCM_ACK_RESET                                                 0x0
#define UART_INT_TDM_MISALIGN_LSB                                              25
#define UART_INT_TDM_MISALIGN_MSB                                              25
#define UART_INT_TDM_MISALIGN_MASK                                             0x2000000
#define UART_INT_TDM_MISALIGN_GET(x)                                           (((x) & UART_INT_TDM_MISALIGN_MASK) >> UART_INT_TDM_MISALIGN_LSB)
#define UART_INT_TDM_MISALIGN_SET(x)                                           (((0 | (x)) << UART_INT_TDM_MISALIGN_LSB) & UART_INT_TDM_MISALIGN_MASK)
#define UART_INT_TDM_MISALIGN_RESET                                            0x0
#define UART_INT_TYPE7_MSG_RXED_LSB                                            24
#define UART_INT_TYPE7_MSG_RXED_MSB                                            24
#define UART_INT_TYPE7_MSG_RXED_MASK                                           0x1000000
#define UART_INT_TYPE7_MSG_RXED_GET(x)                                         (((x) & UART_INT_TYPE7_MSG_RXED_MASK) >> UART_INT_TYPE7_MSG_RXED_LSB)
#define UART_INT_TYPE7_MSG_RXED_SET(x)                                         (((0 | (x)) << UART_INT_TYPE7_MSG_RXED_LSB) & UART_INT_TYPE7_MSG_RXED_MASK)
#define UART_INT_TYPE7_MSG_RXED_RESET                                          0x0
#define UART_INT_TYPE6_MSG_RXED_LSB                                            23
#define UART_INT_TYPE6_MSG_RXED_MSB                                            23
#define UART_INT_TYPE6_MSG_RXED_MASK                                           0x800000
#define UART_INT_TYPE6_MSG_RXED_GET(x)                                         (((x) & UART_INT_TYPE6_MSG_RXED_MASK) >> UART_INT_TYPE6_MSG_RXED_LSB)
#define UART_INT_TYPE6_MSG_RXED_SET(x)                                         (((0 | (x)) << UART_INT_TYPE6_MSG_RXED_LSB) & UART_INT_TYPE6_MSG_RXED_MASK)
#define UART_INT_TYPE6_MSG_RXED_RESET                                          0x0
#define UART_INT_TYPE5_MSG_RXED_LSB                                            22
#define UART_INT_TYPE5_MSG_RXED_MSB                                            22
#define UART_INT_TYPE5_MSG_RXED_MASK                                           0x400000
#define UART_INT_TYPE5_MSG_RXED_GET(x)                                         (((x) & UART_INT_TYPE5_MSG_RXED_MASK) >> UART_INT_TYPE5_MSG_RXED_LSB)
#define UART_INT_TYPE5_MSG_RXED_SET(x)                                         (((0 | (x)) << UART_INT_TYPE5_MSG_RXED_LSB) & UART_INT_TYPE5_MSG_RXED_MASK)
#define UART_INT_TYPE5_MSG_RXED_RESET                                          0x0
#define UART_INT_TYPE4_MSG_RXED_LSB                                            21
#define UART_INT_TYPE4_MSG_RXED_MSB                                            21
#define UART_INT_TYPE4_MSG_RXED_MASK                                           0x200000
#define UART_INT_TYPE4_MSG_RXED_GET(x)                                         (((x) & UART_INT_TYPE4_MSG_RXED_MASK) >> UART_INT_TYPE4_MSG_RXED_LSB)
#define UART_INT_TYPE4_MSG_RXED_SET(x)                                         (((0 | (x)) << UART_INT_TYPE4_MSG_RXED_LSB) & UART_INT_TYPE4_MSG_RXED_MASK)
#define UART_INT_TYPE4_MSG_RXED_RESET                                          0x0
#define UART_INT_TYPE3_MSG_RXED_LSB                                            20
#define UART_INT_TYPE3_MSG_RXED_MSB                                            20
#define UART_INT_TYPE3_MSG_RXED_MASK                                           0x100000
#define UART_INT_TYPE3_MSG_RXED_GET(x)                                         (((x) & UART_INT_TYPE3_MSG_RXED_MASK) >> UART_INT_TYPE3_MSG_RXED_LSB)
#define UART_INT_TYPE3_MSG_RXED_SET(x)                                         (((0 | (x)) << UART_INT_TYPE3_MSG_RXED_LSB) & UART_INT_TYPE3_MSG_RXED_MASK)
#define UART_INT_TYPE3_MSG_RXED_RESET                                          0x0
#define UART_INT_TYPE2_MSG_RXED_LSB                                            19
#define UART_INT_TYPE2_MSG_RXED_MSB                                            19
#define UART_INT_TYPE2_MSG_RXED_MASK                                           0x80000
#define UART_INT_TYPE2_MSG_RXED_GET(x)                                         (((x) & UART_INT_TYPE2_MSG_RXED_MASK) >> UART_INT_TYPE2_MSG_RXED_LSB)
#define UART_INT_TYPE2_MSG_RXED_SET(x)                                         (((0 | (x)) << UART_INT_TYPE2_MSG_RXED_LSB) & UART_INT_TYPE2_MSG_RXED_MASK)
#define UART_INT_TYPE2_MSG_RXED_RESET                                          0x0
#define UART_INT_TYPE1_MSG_RXED_LSB                                            18
#define UART_INT_TYPE1_MSG_RXED_MSB                                            18
#define UART_INT_TYPE1_MSG_RXED_MASK                                           0x40000
#define UART_INT_TYPE1_MSG_RXED_GET(x)                                         (((x) & UART_INT_TYPE1_MSG_RXED_MASK) >> UART_INT_TYPE1_MSG_RXED_LSB)
#define UART_INT_TYPE1_MSG_RXED_SET(x)                                         (((0 | (x)) << UART_INT_TYPE1_MSG_RXED_LSB) & UART_INT_TYPE1_MSG_RXED_MASK)
#define UART_INT_TYPE1_MSG_RXED_RESET                                          0x0
#define UART_INT_TYPE0_MSG_RXED_LSB                                            17
#define UART_INT_TYPE0_MSG_RXED_MSB                                            17
#define UART_INT_TYPE0_MSG_RXED_MASK                                           0x20000
#define UART_INT_TYPE0_MSG_RXED_GET(x)                                         (((x) & UART_INT_TYPE0_MSG_RXED_MASK) >> UART_INT_TYPE0_MSG_RXED_LSB)
#define UART_INT_TYPE0_MSG_RXED_SET(x)                                         (((0 | (x)) << UART_INT_TYPE0_MSG_RXED_LSB) & UART_INT_TYPE0_MSG_RXED_MASK)
#define UART_INT_TYPE0_MSG_RXED_RESET                                          0x0
#define UART_INT_CXM_TIMER1_INT_LSB                                            16
#define UART_INT_CXM_TIMER1_INT_MSB                                            16
#define UART_INT_CXM_TIMER1_INT_MASK                                           0x10000
#define UART_INT_CXM_TIMER1_INT_GET(x)                                         (((x) & UART_INT_CXM_TIMER1_INT_MASK) >> UART_INT_CXM_TIMER1_INT_LSB)
#define UART_INT_CXM_TIMER1_INT_SET(x)                                         (((0 | (x)) << UART_INT_CXM_TIMER1_INT_LSB) & UART_INT_CXM_TIMER1_INT_MASK)
#define UART_INT_CXM_TIMER1_INT_RESET                                          0x0
#define UART_INT_CXM_TIMER0_INT_LSB                                            15
#define UART_INT_CXM_TIMER0_INT_MSB                                            15
#define UART_INT_CXM_TIMER0_INT_MASK                                           0x8000
#define UART_INT_CXM_TIMER0_INT_GET(x)                                         (((x) & UART_INT_CXM_TIMER0_INT_MASK) >> UART_INT_CXM_TIMER0_INT_LSB)
#define UART_INT_CXM_TIMER0_INT_SET(x)                                         (((0 | (x)) << UART_INT_CXM_TIMER0_INT_LSB) & UART_INT_CXM_TIMER0_INT_MASK)
#define UART_INT_CXM_TIMER0_INT_RESET                                          0x0
#define UART_INT_MWS_RX_FE_INT_LSB                                             14
#define UART_INT_MWS_RX_FE_INT_MSB                                             14
#define UART_INT_MWS_RX_FE_INT_MASK                                            0x4000
#define UART_INT_MWS_RX_FE_INT_GET(x)                                          (((x) & UART_INT_MWS_RX_FE_INT_MASK) >> UART_INT_MWS_RX_FE_INT_LSB)
#define UART_INT_MWS_RX_FE_INT_SET(x)                                          (((0 | (x)) << UART_INT_MWS_RX_FE_INT_LSB) & UART_INT_MWS_RX_FE_INT_MASK)
#define UART_INT_MWS_RX_FE_INT_RESET                                           0x0
#define UART_INT_MWS_RX_RE_INT_LSB                                             13
#define UART_INT_MWS_RX_RE_INT_MSB                                             13
#define UART_INT_MWS_RX_RE_INT_MASK                                            0x2000
#define UART_INT_MWS_RX_RE_INT_GET(x)                                          (((x) & UART_INT_MWS_RX_RE_INT_MASK) >> UART_INT_MWS_RX_RE_INT_LSB)
#define UART_INT_MWS_RX_RE_INT_SET(x)                                          (((0 | (x)) << UART_INT_MWS_RX_RE_INT_LSB) & UART_INT_MWS_RX_RE_INT_MASK)
#define UART_INT_MWS_RX_RE_INT_RESET                                           0x0
#define UART_INT_MWS_TX_FE_INT_LSB                                             12
#define UART_INT_MWS_TX_FE_INT_MSB                                             12
#define UART_INT_MWS_TX_FE_INT_MASK                                            0x1000
#define UART_INT_MWS_TX_FE_INT_GET(x)                                          (((x) & UART_INT_MWS_TX_FE_INT_MASK) >> UART_INT_MWS_TX_FE_INT_LSB)
#define UART_INT_MWS_TX_FE_INT_SET(x)                                          (((0 | (x)) << UART_INT_MWS_TX_FE_INT_LSB) & UART_INT_MWS_TX_FE_INT_MASK)
#define UART_INT_MWS_TX_FE_INT_RESET                                           0x0
#define UART_INT_MWS_TX_RE_INT_LSB                                             11
#define UART_INT_MWS_TX_RE_INT_MSB                                             11
#define UART_INT_MWS_TX_RE_INT_MASK                                            0x800
#define UART_INT_MWS_TX_RE_INT_GET(x)                                          (((x) & UART_INT_MWS_TX_RE_INT_MASK) >> UART_INT_MWS_TX_RE_INT_LSB)
#define UART_INT_MWS_TX_RE_INT_SET(x)                                          (((0 | (x)) << UART_INT_MWS_TX_RE_INT_LSB) & UART_INT_MWS_TX_RE_INT_MASK)
#define UART_INT_MWS_TX_RE_INT_RESET                                           0x0
#define UART_INT_ACTIVE_FE_INT_LSB                                             10
#define UART_INT_ACTIVE_FE_INT_MSB                                             10
#define UART_INT_ACTIVE_FE_INT_MASK                                            0x400
#define UART_INT_ACTIVE_FE_INT_GET(x)                                          (((x) & UART_INT_ACTIVE_FE_INT_MASK) >> UART_INT_ACTIVE_FE_INT_LSB)
#define UART_INT_ACTIVE_FE_INT_SET(x)                                          (((0 | (x)) << UART_INT_ACTIVE_FE_INT_LSB) & UART_INT_ACTIVE_FE_INT_MASK)
#define UART_INT_ACTIVE_FE_INT_RESET                                           0x0
#define UART_INT_ACTIVE_RE_INT_LSB                                             9
#define UART_INT_ACTIVE_RE_INT_MSB                                             9
#define UART_INT_ACTIVE_RE_INT_MASK                                            0x200
#define UART_INT_ACTIVE_RE_INT_GET(x)                                          (((x) & UART_INT_ACTIVE_RE_INT_MASK) >> UART_INT_ACTIVE_RE_INT_LSB)
#define UART_INT_ACTIVE_RE_INT_SET(x)                                          (((0 | (x)) << UART_INT_ACTIVE_RE_INT_LSB) & UART_INT_ACTIVE_RE_INT_MASK)
#define UART_INT_ACTIVE_RE_INT_RESET                                           0x0
#define UART_INT_FSYNC_RE_INT_LSB                                              8
#define UART_INT_FSYNC_RE_INT_MSB                                              8
#define UART_INT_FSYNC_RE_INT_MASK                                             0x100
#define UART_INT_FSYNC_RE_INT_GET(x)                                           (((x) & UART_INT_FSYNC_RE_INT_MASK) >> UART_INT_FSYNC_RE_INT_LSB)
#define UART_INT_FSYNC_RE_INT_SET(x)                                           (((0 | (x)) << UART_INT_FSYNC_RE_INT_LSB) & UART_INT_FSYNC_RE_INT_MASK)
#define UART_INT_FSYNC_RE_INT_RESET                                            0x0
#define UART_INT_TX_FIFO_OVFL_INT_LSB                                          7
#define UART_INT_TX_FIFO_OVFL_INT_MSB                                          7
#define UART_INT_TX_FIFO_OVFL_INT_MASK                                         0x80
#define UART_INT_TX_FIFO_OVFL_INT_GET(x)                                       (((x) & UART_INT_TX_FIFO_OVFL_INT_MASK) >> UART_INT_TX_FIFO_OVFL_INT_LSB)
#define UART_INT_TX_FIFO_OVFL_INT_SET(x)                                       (((0 | (x)) << UART_INT_TX_FIFO_OVFL_INT_LSB) & UART_INT_TX_FIFO_OVFL_INT_MASK)
#define UART_INT_TX_FIFO_OVFL_INT_RESET                                        0x0
#define UART_INT_TX_FIFO_READY_INT_LSB                                         6
#define UART_INT_TX_FIFO_READY_INT_MSB                                         6
#define UART_INT_TX_FIFO_READY_INT_MASK                                        0x40
#define UART_INT_TX_FIFO_READY_INT_GET(x)                                      (((x) & UART_INT_TX_FIFO_READY_INT_MASK) >> UART_INT_TX_FIFO_READY_INT_LSB)
#define UART_INT_TX_FIFO_READY_INT_SET(x)                                      (((0 | (x)) << UART_INT_TX_FIFO_READY_INT_LSB) & UART_INT_TX_FIFO_READY_INT_MASK)
#define UART_INT_TX_FIFO_READY_INT_RESET                                       0x0
#define UART_INT_RX_FIFO_UDFL_INT_LSB                                          5
#define UART_INT_RX_FIFO_UDFL_INT_MSB                                          5
#define UART_INT_RX_FIFO_UDFL_INT_MASK                                         0x20
#define UART_INT_RX_FIFO_UDFL_INT_GET(x)                                       (((x) & UART_INT_RX_FIFO_UDFL_INT_MASK) >> UART_INT_RX_FIFO_UDFL_INT_LSB)
#define UART_INT_RX_FIFO_UDFL_INT_SET(x)                                       (((0 | (x)) << UART_INT_RX_FIFO_UDFL_INT_LSB) & UART_INT_RX_FIFO_UDFL_INT_MASK)
#define UART_INT_RX_FIFO_UDFL_INT_RESET                                        0x0
#define UART_INT_RX_FIFO_OVFL_INT_LSB                                          4
#define UART_INT_RX_FIFO_OVFL_INT_MSB                                          4
#define UART_INT_RX_FIFO_OVFL_INT_MASK                                         0x10
#define UART_INT_RX_FIFO_OVFL_INT_GET(x)                                       (((x) & UART_INT_RX_FIFO_OVFL_INT_MASK) >> UART_INT_RX_FIFO_OVFL_INT_LSB)
#define UART_INT_RX_FIFO_OVFL_INT_SET(x)                                       (((0 | (x)) << UART_INT_RX_FIFO_OVFL_INT_LSB) & UART_INT_RX_FIFO_OVFL_INT_MASK)
#define UART_INT_RX_FIFO_OVFL_INT_RESET                                        0x0
#define UART_INT_RX_FIFO_READY_INT_LSB                                         3
#define UART_INT_RX_FIFO_READY_INT_MSB                                         3
#define UART_INT_RX_FIFO_READY_INT_MASK                                        0x8
#define UART_INT_RX_FIFO_READY_INT_GET(x)                                      (((x) & UART_INT_RX_FIFO_READY_INT_MASK) >> UART_INT_RX_FIFO_READY_INT_LSB)
#define UART_INT_RX_FIFO_READY_INT_SET(x)                                      (((0 | (x)) << UART_INT_RX_FIFO_READY_INT_LSB) & UART_INT_RX_FIFO_READY_INT_MASK)
#define UART_INT_RX_FIFO_READY_INT_RESET                                       0x0
#define UART_INT_RX_BREAK_OFF_INT_LSB                                          2
#define UART_INT_RX_BREAK_OFF_INT_MSB                                          2
#define UART_INT_RX_BREAK_OFF_INT_MASK                                         0x4
#define UART_INT_RX_BREAK_OFF_INT_GET(x)                                       (((x) & UART_INT_RX_BREAK_OFF_INT_MASK) >> UART_INT_RX_BREAK_OFF_INT_LSB)
#define UART_INT_RX_BREAK_OFF_INT_SET(x)                                       (((0 | (x)) << UART_INT_RX_BREAK_OFF_INT_LSB) & UART_INT_RX_BREAK_OFF_INT_MASK)
#define UART_INT_RX_BREAK_OFF_INT_RESET                                        0x0
#define UART_INT_RX_BREAK_ON_INT_LSB                                           1
#define UART_INT_RX_BREAK_ON_INT_MSB                                           1
#define UART_INT_RX_BREAK_ON_INT_MASK                                          0x2
#define UART_INT_RX_BREAK_ON_INT_GET(x)                                        (((x) & UART_INT_RX_BREAK_ON_INT_MASK) >> UART_INT_RX_BREAK_ON_INT_LSB)
#define UART_INT_RX_BREAK_ON_INT_SET(x)                                        (((0 | (x)) << UART_INT_RX_BREAK_ON_INT_LSB) & UART_INT_RX_BREAK_ON_INT_MASK)
#define UART_INT_RX_BREAK_ON_INT_RESET                                         0x0
#define UART_INT_RX_FRAMING_ERR_INT_LSB                                        0
#define UART_INT_RX_FRAMING_ERR_INT_MSB                                        0
#define UART_INT_RX_FRAMING_ERR_INT_MASK                                       0x1
#define UART_INT_RX_FRAMING_ERR_INT_GET(x)                                     (((x) & UART_INT_RX_FRAMING_ERR_INT_MASK) >> UART_INT_RX_FRAMING_ERR_INT_LSB)
#define UART_INT_RX_FRAMING_ERR_INT_SET(x)                                     (((0 | (x)) << UART_INT_RX_FRAMING_ERR_INT_LSB) & UART_INT_RX_FRAMING_ERR_INT_MASK)
#define UART_INT_RX_FRAMING_ERR_INT_RESET                                      0x0
#define UART_INT_ADDRESS                                                       (0x18 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define UART_INT_RSTMASK                                                       0xbfffffff
#define UART_INT_RESET                                                         0x0

// 0x1c (UART_INT_EN)
#define UART_INT_EN_HOST_INT_EN_LSB                                            31
#define UART_INT_EN_HOST_INT_EN_MSB                                            31
#define UART_INT_EN_HOST_INT_EN_MASK                                           0x80000000
#define UART_INT_EN_HOST_INT_EN_GET(x)                                         (((x) & UART_INT_EN_HOST_INT_EN_MASK) >> UART_INT_EN_HOST_INT_EN_LSB)
#define UART_INT_EN_HOST_INT_EN_SET(x)                                         (((0 | (x)) << UART_INT_EN_HOST_INT_EN_LSB) & UART_INT_EN_HOST_INT_EN_MASK)
#define UART_INT_EN_HOST_INT_EN_RESET                                          0x0
#define UART_INT_EN_TX_ENA_RE_EN_LSB                                           29
#define UART_INT_EN_TX_ENA_RE_EN_MSB                                           29
#define UART_INT_EN_TX_ENA_RE_EN_MASK                                          0x20000000
#define UART_INT_EN_TX_ENA_RE_EN_GET(x)                                        (((x) & UART_INT_EN_TX_ENA_RE_EN_MASK) >> UART_INT_EN_TX_ENA_RE_EN_LSB)
#define UART_INT_EN_TX_ENA_RE_EN_SET(x)                                        (((0 | (x)) << UART_INT_EN_TX_ENA_RE_EN_LSB) & UART_INT_EN_TX_ENA_RE_EN_MASK)
#define UART_INT_EN_TX_ENA_RE_EN_RESET                                         0x0
#define UART_INT_EN_DIRECT_MSG_TXED_EN_LSB                                     28
#define UART_INT_EN_DIRECT_MSG_TXED_EN_MSB                                     28
#define UART_INT_EN_DIRECT_MSG_TXED_EN_MASK                                    0x10000000
#define UART_INT_EN_DIRECT_MSG_TXED_EN_GET(x)                                  (((x) & UART_INT_EN_DIRECT_MSG_TXED_EN_MASK) >> UART_INT_EN_DIRECT_MSG_TXED_EN_LSB)
#define UART_INT_EN_DIRECT_MSG_TXED_EN_SET(x)                                  (((0 | (x)) << UART_INT_EN_DIRECT_MSG_TXED_EN_LSB) & UART_INT_EN_DIRECT_MSG_TXED_EN_MASK)
#define UART_INT_EN_DIRECT_MSG_TXED_EN_RESET                                   0x0
#define UART_INT_EN_TCM_NACK_EN_LSB                                            27
#define UART_INT_EN_TCM_NACK_EN_MSB                                            27
#define UART_INT_EN_TCM_NACK_EN_MASK                                           0x8000000
#define UART_INT_EN_TCM_NACK_EN_GET(x)                                         (((x) & UART_INT_EN_TCM_NACK_EN_MASK) >> UART_INT_EN_TCM_NACK_EN_LSB)
#define UART_INT_EN_TCM_NACK_EN_SET(x)                                         (((0 | (x)) << UART_INT_EN_TCM_NACK_EN_LSB) & UART_INT_EN_TCM_NACK_EN_MASK)
#define UART_INT_EN_TCM_NACK_EN_RESET                                          0x0
#define UART_INT_EN_TCM_ACK_EN_LSB                                             26
#define UART_INT_EN_TCM_ACK_EN_MSB                                             26
#define UART_INT_EN_TCM_ACK_EN_MASK                                            0x4000000
#define UART_INT_EN_TCM_ACK_EN_GET(x)                                          (((x) & UART_INT_EN_TCM_ACK_EN_MASK) >> UART_INT_EN_TCM_ACK_EN_LSB)
#define UART_INT_EN_TCM_ACK_EN_SET(x)                                          (((0 | (x)) << UART_INT_EN_TCM_ACK_EN_LSB) & UART_INT_EN_TCM_ACK_EN_MASK)
#define UART_INT_EN_TCM_ACK_EN_RESET                                           0x0
#define UART_INT_EN_TDM_MISALIGN_EN_LSB                                        25
#define UART_INT_EN_TDM_MISALIGN_EN_MSB                                        25
#define UART_INT_EN_TDM_MISALIGN_EN_MASK                                       0x2000000
#define UART_INT_EN_TDM_MISALIGN_EN_GET(x)                                     (((x) & UART_INT_EN_TDM_MISALIGN_EN_MASK) >> UART_INT_EN_TDM_MISALIGN_EN_LSB)
#define UART_INT_EN_TDM_MISALIGN_EN_SET(x)                                     (((0 | (x)) << UART_INT_EN_TDM_MISALIGN_EN_LSB) & UART_INT_EN_TDM_MISALIGN_EN_MASK)
#define UART_INT_EN_TDM_MISALIGN_EN_RESET                                      0x0
#define UART_INT_EN_TYPE7_MSG_RXED_EN_LSB                                      24
#define UART_INT_EN_TYPE7_MSG_RXED_EN_MSB                                      24
#define UART_INT_EN_TYPE7_MSG_RXED_EN_MASK                                     0x1000000
#define UART_INT_EN_TYPE7_MSG_RXED_EN_GET(x)                                   (((x) & UART_INT_EN_TYPE7_MSG_RXED_EN_MASK) >> UART_INT_EN_TYPE7_MSG_RXED_EN_LSB)
#define UART_INT_EN_TYPE7_MSG_RXED_EN_SET(x)                                   (((0 | (x)) << UART_INT_EN_TYPE7_MSG_RXED_EN_LSB) & UART_INT_EN_TYPE7_MSG_RXED_EN_MASK)
#define UART_INT_EN_TYPE7_MSG_RXED_EN_RESET                                    0x0
#define UART_INT_EN_TYPE6_MSG_RXED_EN_LSB                                      23
#define UART_INT_EN_TYPE6_MSG_RXED_EN_MSB                                      23
#define UART_INT_EN_TYPE6_MSG_RXED_EN_MASK                                     0x800000
#define UART_INT_EN_TYPE6_MSG_RXED_EN_GET(x)                                   (((x) & UART_INT_EN_TYPE6_MSG_RXED_EN_MASK) >> UART_INT_EN_TYPE6_MSG_RXED_EN_LSB)
#define UART_INT_EN_TYPE6_MSG_RXED_EN_SET(x)                                   (((0 | (x)) << UART_INT_EN_TYPE6_MSG_RXED_EN_LSB) & UART_INT_EN_TYPE6_MSG_RXED_EN_MASK)
#define UART_INT_EN_TYPE6_MSG_RXED_EN_RESET                                    0x0
#define UART_INT_EN_TYPE5_MSG_RXED_EN_LSB                                      22
#define UART_INT_EN_TYPE5_MSG_RXED_EN_MSB                                      22
#define UART_INT_EN_TYPE5_MSG_RXED_EN_MASK                                     0x400000
#define UART_INT_EN_TYPE5_MSG_RXED_EN_GET(x)                                   (((x) & UART_INT_EN_TYPE5_MSG_RXED_EN_MASK) >> UART_INT_EN_TYPE5_MSG_RXED_EN_LSB)
#define UART_INT_EN_TYPE5_MSG_RXED_EN_SET(x)                                   (((0 | (x)) << UART_INT_EN_TYPE5_MSG_RXED_EN_LSB) & UART_INT_EN_TYPE5_MSG_RXED_EN_MASK)
#define UART_INT_EN_TYPE5_MSG_RXED_EN_RESET                                    0x0
#define UART_INT_EN_TYPE4_MSG_RXED_EN_LSB                                      21
#define UART_INT_EN_TYPE4_MSG_RXED_EN_MSB                                      21
#define UART_INT_EN_TYPE4_MSG_RXED_EN_MASK                                     0x200000
#define UART_INT_EN_TYPE4_MSG_RXED_EN_GET(x)                                   (((x) & UART_INT_EN_TYPE4_MSG_RXED_EN_MASK) >> UART_INT_EN_TYPE4_MSG_RXED_EN_LSB)
#define UART_INT_EN_TYPE4_MSG_RXED_EN_SET(x)                                   (((0 | (x)) << UART_INT_EN_TYPE4_MSG_RXED_EN_LSB) & UART_INT_EN_TYPE4_MSG_RXED_EN_MASK)
#define UART_INT_EN_TYPE4_MSG_RXED_EN_RESET                                    0x0
#define UART_INT_EN_TYPE3_MSG_RXED_EN_LSB                                      20
#define UART_INT_EN_TYPE3_MSG_RXED_EN_MSB                                      20
#define UART_INT_EN_TYPE3_MSG_RXED_EN_MASK                                     0x100000
#define UART_INT_EN_TYPE3_MSG_RXED_EN_GET(x)                                   (((x) & UART_INT_EN_TYPE3_MSG_RXED_EN_MASK) >> UART_INT_EN_TYPE3_MSG_RXED_EN_LSB)
#define UART_INT_EN_TYPE3_MSG_RXED_EN_SET(x)                                   (((0 | (x)) << UART_INT_EN_TYPE3_MSG_RXED_EN_LSB) & UART_INT_EN_TYPE3_MSG_RXED_EN_MASK)
#define UART_INT_EN_TYPE3_MSG_RXED_EN_RESET                                    0x0
#define UART_INT_EN_TYPE2_MSG_RXED_EN_LSB                                      19
#define UART_INT_EN_TYPE2_MSG_RXED_EN_MSB                                      19
#define UART_INT_EN_TYPE2_MSG_RXED_EN_MASK                                     0x80000
#define UART_INT_EN_TYPE2_MSG_RXED_EN_GET(x)                                   (((x) & UART_INT_EN_TYPE2_MSG_RXED_EN_MASK) >> UART_INT_EN_TYPE2_MSG_RXED_EN_LSB)
#define UART_INT_EN_TYPE2_MSG_RXED_EN_SET(x)                                   (((0 | (x)) << UART_INT_EN_TYPE2_MSG_RXED_EN_LSB) & UART_INT_EN_TYPE2_MSG_RXED_EN_MASK)
#define UART_INT_EN_TYPE2_MSG_RXED_EN_RESET                                    0x0
#define UART_INT_EN_TYPE1_MSG_RXED_EN_LSB                                      18
#define UART_INT_EN_TYPE1_MSG_RXED_EN_MSB                                      18
#define UART_INT_EN_TYPE1_MSG_RXED_EN_MASK                                     0x40000
#define UART_INT_EN_TYPE1_MSG_RXED_EN_GET(x)                                   (((x) & UART_INT_EN_TYPE1_MSG_RXED_EN_MASK) >> UART_INT_EN_TYPE1_MSG_RXED_EN_LSB)
#define UART_INT_EN_TYPE1_MSG_RXED_EN_SET(x)                                   (((0 | (x)) << UART_INT_EN_TYPE1_MSG_RXED_EN_LSB) & UART_INT_EN_TYPE1_MSG_RXED_EN_MASK)
#define UART_INT_EN_TYPE1_MSG_RXED_EN_RESET                                    0x0
#define UART_INT_EN_TYPE0_MSG_RXED_EN_LSB                                      17
#define UART_INT_EN_TYPE0_MSG_RXED_EN_MSB                                      17
#define UART_INT_EN_TYPE0_MSG_RXED_EN_MASK                                     0x20000
#define UART_INT_EN_TYPE0_MSG_RXED_EN_GET(x)                                   (((x) & UART_INT_EN_TYPE0_MSG_RXED_EN_MASK) >> UART_INT_EN_TYPE0_MSG_RXED_EN_LSB)
#define UART_INT_EN_TYPE0_MSG_RXED_EN_SET(x)                                   (((0 | (x)) << UART_INT_EN_TYPE0_MSG_RXED_EN_LSB) & UART_INT_EN_TYPE0_MSG_RXED_EN_MASK)
#define UART_INT_EN_TYPE0_MSG_RXED_EN_RESET                                    0x0
#define UART_INT_EN_CXM_TIMER1_INT_EN_LSB                                      16
#define UART_INT_EN_CXM_TIMER1_INT_EN_MSB                                      16
#define UART_INT_EN_CXM_TIMER1_INT_EN_MASK                                     0x10000
#define UART_INT_EN_CXM_TIMER1_INT_EN_GET(x)                                   (((x) & UART_INT_EN_CXM_TIMER1_INT_EN_MASK) >> UART_INT_EN_CXM_TIMER1_INT_EN_LSB)
#define UART_INT_EN_CXM_TIMER1_INT_EN_SET(x)                                   (((0 | (x)) << UART_INT_EN_CXM_TIMER1_INT_EN_LSB) & UART_INT_EN_CXM_TIMER1_INT_EN_MASK)
#define UART_INT_EN_CXM_TIMER1_INT_EN_RESET                                    0x0
#define UART_INT_EN_CXM_TIMER0_INT_EN_LSB                                      15
#define UART_INT_EN_CXM_TIMER0_INT_EN_MSB                                      15
#define UART_INT_EN_CXM_TIMER0_INT_EN_MASK                                     0x8000
#define UART_INT_EN_CXM_TIMER0_INT_EN_GET(x)                                   (((x) & UART_INT_EN_CXM_TIMER0_INT_EN_MASK) >> UART_INT_EN_CXM_TIMER0_INT_EN_LSB)
#define UART_INT_EN_CXM_TIMER0_INT_EN_SET(x)                                   (((0 | (x)) << UART_INT_EN_CXM_TIMER0_INT_EN_LSB) & UART_INT_EN_CXM_TIMER0_INT_EN_MASK)
#define UART_INT_EN_CXM_TIMER0_INT_EN_RESET                                    0x0
#define UART_INT_EN_MWS_RX_FE_INT_EN_LSB                                       14
#define UART_INT_EN_MWS_RX_FE_INT_EN_MSB                                       14
#define UART_INT_EN_MWS_RX_FE_INT_EN_MASK                                      0x4000
#define UART_INT_EN_MWS_RX_FE_INT_EN_GET(x)                                    (((x) & UART_INT_EN_MWS_RX_FE_INT_EN_MASK) >> UART_INT_EN_MWS_RX_FE_INT_EN_LSB)
#define UART_INT_EN_MWS_RX_FE_INT_EN_SET(x)                                    (((0 | (x)) << UART_INT_EN_MWS_RX_FE_INT_EN_LSB) & UART_INT_EN_MWS_RX_FE_INT_EN_MASK)
#define UART_INT_EN_MWS_RX_FE_INT_EN_RESET                                     0x0
#define UART_INT_EN_MWS_RX_RE_INT_EN_LSB                                       13
#define UART_INT_EN_MWS_RX_RE_INT_EN_MSB                                       13
#define UART_INT_EN_MWS_RX_RE_INT_EN_MASK                                      0x2000
#define UART_INT_EN_MWS_RX_RE_INT_EN_GET(x)                                    (((x) & UART_INT_EN_MWS_RX_RE_INT_EN_MASK) >> UART_INT_EN_MWS_RX_RE_INT_EN_LSB)
#define UART_INT_EN_MWS_RX_RE_INT_EN_SET(x)                                    (((0 | (x)) << UART_INT_EN_MWS_RX_RE_INT_EN_LSB) & UART_INT_EN_MWS_RX_RE_INT_EN_MASK)
#define UART_INT_EN_MWS_RX_RE_INT_EN_RESET                                     0x0
#define UART_INT_EN_MWS_TX_FE_INT_EN_LSB                                       12
#define UART_INT_EN_MWS_TX_FE_INT_EN_MSB                                       12
#define UART_INT_EN_MWS_TX_FE_INT_EN_MASK                                      0x1000
#define UART_INT_EN_MWS_TX_FE_INT_EN_GET(x)                                    (((x) & UART_INT_EN_MWS_TX_FE_INT_EN_MASK) >> UART_INT_EN_MWS_TX_FE_INT_EN_LSB)
#define UART_INT_EN_MWS_TX_FE_INT_EN_SET(x)                                    (((0 | (x)) << UART_INT_EN_MWS_TX_FE_INT_EN_LSB) & UART_INT_EN_MWS_TX_FE_INT_EN_MASK)
#define UART_INT_EN_MWS_TX_FE_INT_EN_RESET                                     0x0
#define UART_INT_EN_MWS_TX_RE_INT_EN_LSB                                       11
#define UART_INT_EN_MWS_TX_RE_INT_EN_MSB                                       11
#define UART_INT_EN_MWS_TX_RE_INT_EN_MASK                                      0x800
#define UART_INT_EN_MWS_TX_RE_INT_EN_GET(x)                                    (((x) & UART_INT_EN_MWS_TX_RE_INT_EN_MASK) >> UART_INT_EN_MWS_TX_RE_INT_EN_LSB)
#define UART_INT_EN_MWS_TX_RE_INT_EN_SET(x)                                    (((0 | (x)) << UART_INT_EN_MWS_TX_RE_INT_EN_LSB) & UART_INT_EN_MWS_TX_RE_INT_EN_MASK)
#define UART_INT_EN_MWS_TX_RE_INT_EN_RESET                                     0x0
#define UART_INT_EN_ACTIVE_FE_INT_EN_LSB                                       10
#define UART_INT_EN_ACTIVE_FE_INT_EN_MSB                                       10
#define UART_INT_EN_ACTIVE_FE_INT_EN_MASK                                      0x400
#define UART_INT_EN_ACTIVE_FE_INT_EN_GET(x)                                    (((x) & UART_INT_EN_ACTIVE_FE_INT_EN_MASK) >> UART_INT_EN_ACTIVE_FE_INT_EN_LSB)
#define UART_INT_EN_ACTIVE_FE_INT_EN_SET(x)                                    (((0 | (x)) << UART_INT_EN_ACTIVE_FE_INT_EN_LSB) & UART_INT_EN_ACTIVE_FE_INT_EN_MASK)
#define UART_INT_EN_ACTIVE_FE_INT_EN_RESET                                     0x0
#define UART_INT_EN_ACTIVE_RE_INT_EN_LSB                                       9
#define UART_INT_EN_ACTIVE_RE_INT_EN_MSB                                       9
#define UART_INT_EN_ACTIVE_RE_INT_EN_MASK                                      0x200
#define UART_INT_EN_ACTIVE_RE_INT_EN_GET(x)                                    (((x) & UART_INT_EN_ACTIVE_RE_INT_EN_MASK) >> UART_INT_EN_ACTIVE_RE_INT_EN_LSB)
#define UART_INT_EN_ACTIVE_RE_INT_EN_SET(x)                                    (((0 | (x)) << UART_INT_EN_ACTIVE_RE_INT_EN_LSB) & UART_INT_EN_ACTIVE_RE_INT_EN_MASK)
#define UART_INT_EN_ACTIVE_RE_INT_EN_RESET                                     0x0
#define UART_INT_EN_FSYNC_RE_INT_EN_LSB                                        8
#define UART_INT_EN_FSYNC_RE_INT_EN_MSB                                        8
#define UART_INT_EN_FSYNC_RE_INT_EN_MASK                                       0x100
#define UART_INT_EN_FSYNC_RE_INT_EN_GET(x)                                     (((x) & UART_INT_EN_FSYNC_RE_INT_EN_MASK) >> UART_INT_EN_FSYNC_RE_INT_EN_LSB)
#define UART_INT_EN_FSYNC_RE_INT_EN_SET(x)                                     (((0 | (x)) << UART_INT_EN_FSYNC_RE_INT_EN_LSB) & UART_INT_EN_FSYNC_RE_INT_EN_MASK)
#define UART_INT_EN_FSYNC_RE_INT_EN_RESET                                      0x0
#define UART_INT_EN_TX_FIFO_OVFL_INT_EN_LSB                                    7
#define UART_INT_EN_TX_FIFO_OVFL_INT_EN_MSB                                    7
#define UART_INT_EN_TX_FIFO_OVFL_INT_EN_MASK                                   0x80
#define UART_INT_EN_TX_FIFO_OVFL_INT_EN_GET(x)                                 (((x) & UART_INT_EN_TX_FIFO_OVFL_INT_EN_MASK) >> UART_INT_EN_TX_FIFO_OVFL_INT_EN_LSB)
#define UART_INT_EN_TX_FIFO_OVFL_INT_EN_SET(x)                                 (((0 | (x)) << UART_INT_EN_TX_FIFO_OVFL_INT_EN_LSB) & UART_INT_EN_TX_FIFO_OVFL_INT_EN_MASK)
#define UART_INT_EN_TX_FIFO_OVFL_INT_EN_RESET                                  0x0
#define UART_INT_EN_TX_FIFO_READY_INT_EN_LSB                                   6
#define UART_INT_EN_TX_FIFO_READY_INT_EN_MSB                                   6
#define UART_INT_EN_TX_FIFO_READY_INT_EN_MASK                                  0x40
#define UART_INT_EN_TX_FIFO_READY_INT_EN_GET(x)                                (((x) & UART_INT_EN_TX_FIFO_READY_INT_EN_MASK) >> UART_INT_EN_TX_FIFO_READY_INT_EN_LSB)
#define UART_INT_EN_TX_FIFO_READY_INT_EN_SET(x)                                (((0 | (x)) << UART_INT_EN_TX_FIFO_READY_INT_EN_LSB) & UART_INT_EN_TX_FIFO_READY_INT_EN_MASK)
#define UART_INT_EN_TX_FIFO_READY_INT_EN_RESET                                 0x0
#define UART_INT_EN_RX_FIFO_UDFL_INT_EN_LSB                                    5
#define UART_INT_EN_RX_FIFO_UDFL_INT_EN_MSB                                    5
#define UART_INT_EN_RX_FIFO_UDFL_INT_EN_MASK                                   0x20
#define UART_INT_EN_RX_FIFO_UDFL_INT_EN_GET(x)                                 (((x) & UART_INT_EN_RX_FIFO_UDFL_INT_EN_MASK) >> UART_INT_EN_RX_FIFO_UDFL_INT_EN_LSB)
#define UART_INT_EN_RX_FIFO_UDFL_INT_EN_SET(x)                                 (((0 | (x)) << UART_INT_EN_RX_FIFO_UDFL_INT_EN_LSB) & UART_INT_EN_RX_FIFO_UDFL_INT_EN_MASK)
#define UART_INT_EN_RX_FIFO_UDFL_INT_EN_RESET                                  0x0
#define UART_INT_EN_RX_FIFO_OVFL_INT_EN_LSB                                    4
#define UART_INT_EN_RX_FIFO_OVFL_INT_EN_MSB                                    4
#define UART_INT_EN_RX_FIFO_OVFL_INT_EN_MASK                                   0x10
#define UART_INT_EN_RX_FIFO_OVFL_INT_EN_GET(x)                                 (((x) & UART_INT_EN_RX_FIFO_OVFL_INT_EN_MASK) >> UART_INT_EN_RX_FIFO_OVFL_INT_EN_LSB)
#define UART_INT_EN_RX_FIFO_OVFL_INT_EN_SET(x)                                 (((0 | (x)) << UART_INT_EN_RX_FIFO_OVFL_INT_EN_LSB) & UART_INT_EN_RX_FIFO_OVFL_INT_EN_MASK)
#define UART_INT_EN_RX_FIFO_OVFL_INT_EN_RESET                                  0x0
#define UART_INT_EN_RX_FIFO_READY_INT_EN_LSB                                   3
#define UART_INT_EN_RX_FIFO_READY_INT_EN_MSB                                   3
#define UART_INT_EN_RX_FIFO_READY_INT_EN_MASK                                  0x8
#define UART_INT_EN_RX_FIFO_READY_INT_EN_GET(x)                                (((x) & UART_INT_EN_RX_FIFO_READY_INT_EN_MASK) >> UART_INT_EN_RX_FIFO_READY_INT_EN_LSB)
#define UART_INT_EN_RX_FIFO_READY_INT_EN_SET(x)                                (((0 | (x)) << UART_INT_EN_RX_FIFO_READY_INT_EN_LSB) & UART_INT_EN_RX_FIFO_READY_INT_EN_MASK)
#define UART_INT_EN_RX_FIFO_READY_INT_EN_RESET                                 0x0
#define UART_INT_EN_RX_BREAK_OFF_INT_EN_LSB                                    2
#define UART_INT_EN_RX_BREAK_OFF_INT_EN_MSB                                    2
#define UART_INT_EN_RX_BREAK_OFF_INT_EN_MASK                                   0x4
#define UART_INT_EN_RX_BREAK_OFF_INT_EN_GET(x)                                 (((x) & UART_INT_EN_RX_BREAK_OFF_INT_EN_MASK) >> UART_INT_EN_RX_BREAK_OFF_INT_EN_LSB)
#define UART_INT_EN_RX_BREAK_OFF_INT_EN_SET(x)                                 (((0 | (x)) << UART_INT_EN_RX_BREAK_OFF_INT_EN_LSB) & UART_INT_EN_RX_BREAK_OFF_INT_EN_MASK)
#define UART_INT_EN_RX_BREAK_OFF_INT_EN_RESET                                  0x0
#define UART_INT_EN_RX_BREAK_ON_INT_EN_LSB                                     1
#define UART_INT_EN_RX_BREAK_ON_INT_EN_MSB                                     1
#define UART_INT_EN_RX_BREAK_ON_INT_EN_MASK                                    0x2
#define UART_INT_EN_RX_BREAK_ON_INT_EN_GET(x)                                  (((x) & UART_INT_EN_RX_BREAK_ON_INT_EN_MASK) >> UART_INT_EN_RX_BREAK_ON_INT_EN_LSB)
#define UART_INT_EN_RX_BREAK_ON_INT_EN_SET(x)                                  (((0 | (x)) << UART_INT_EN_RX_BREAK_ON_INT_EN_LSB) & UART_INT_EN_RX_BREAK_ON_INT_EN_MASK)
#define UART_INT_EN_RX_BREAK_ON_INT_EN_RESET                                   0x0
#define UART_INT_EN_RX_FRAMING_ERR_INT_EN_LSB                                  0
#define UART_INT_EN_RX_FRAMING_ERR_INT_EN_MSB                                  0
#define UART_INT_EN_RX_FRAMING_ERR_INT_EN_MASK                                 0x1
#define UART_INT_EN_RX_FRAMING_ERR_INT_EN_GET(x)                               (((x) & UART_INT_EN_RX_FRAMING_ERR_INT_EN_MASK) >> UART_INT_EN_RX_FRAMING_ERR_INT_EN_LSB)
#define UART_INT_EN_RX_FRAMING_ERR_INT_EN_SET(x)                               (((0 | (x)) << UART_INT_EN_RX_FRAMING_ERR_INT_EN_LSB) & UART_INT_EN_RX_FRAMING_ERR_INT_EN_MASK)
#define UART_INT_EN_RX_FRAMING_ERR_INT_EN_RESET                                0x0
#define UART_INT_EN_ADDRESS                                                    (0x1c + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define UART_INT_EN_RSTMASK                                                    0xbfffffff
#define UART_INT_EN_RESET                                                      0x0

// 0x20 (WB_CNT_FSYNC_RE)
#define WB_CNT_FSYNC_RE_VAL_LSB                                                0
#define WB_CNT_FSYNC_RE_VAL_MSB                                                31
#define WB_CNT_FSYNC_RE_VAL_MASK                                               0xffffffff
#define WB_CNT_FSYNC_RE_VAL_GET(x)                                             (((x) & WB_CNT_FSYNC_RE_VAL_MASK) >> WB_CNT_FSYNC_RE_VAL_LSB)
#define WB_CNT_FSYNC_RE_VAL_SET(x)                                             (((0 | (x)) << WB_CNT_FSYNC_RE_VAL_LSB) & WB_CNT_FSYNC_RE_VAL_MASK)
#define WB_CNT_FSYNC_RE_VAL_RESET                                              0x0
#define WB_CNT_FSYNC_RE_ADDRESS                                                (0x20 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define WB_CNT_FSYNC_RE_RSTMASK                                                0xffffffff
#define WB_CNT_FSYNC_RE_RESET                                                  0x0

// 0x24 (WB_CNT_ACTIVE_RE)
#define WB_CNT_ACTIVE_RE_VAL_LSB                                               0
#define WB_CNT_ACTIVE_RE_VAL_MSB                                               31
#define WB_CNT_ACTIVE_RE_VAL_MASK                                              0xffffffff
#define WB_CNT_ACTIVE_RE_VAL_GET(x)                                            (((x) & WB_CNT_ACTIVE_RE_VAL_MASK) >> WB_CNT_ACTIVE_RE_VAL_LSB)
#define WB_CNT_ACTIVE_RE_VAL_SET(x)                                            (((0 | (x)) << WB_CNT_ACTIVE_RE_VAL_LSB) & WB_CNT_ACTIVE_RE_VAL_MASK)
#define WB_CNT_ACTIVE_RE_VAL_RESET                                             0x0
#define WB_CNT_ACTIVE_RE_ADDRESS                                               (0x24 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define WB_CNT_ACTIVE_RE_RSTMASK                                               0xffffffff
#define WB_CNT_ACTIVE_RE_RESET                                                 0x0

// 0x28 (WB_CNT_ACTIVE_FE)
#define WB_CNT_ACTIVE_FE_VAL_LSB                                               0
#define WB_CNT_ACTIVE_FE_VAL_MSB                                               31
#define WB_CNT_ACTIVE_FE_VAL_MASK                                              0xffffffff
#define WB_CNT_ACTIVE_FE_VAL_GET(x)                                            (((x) & WB_CNT_ACTIVE_FE_VAL_MASK) >> WB_CNT_ACTIVE_FE_VAL_LSB)
#define WB_CNT_ACTIVE_FE_VAL_SET(x)                                            (((0 | (x)) << WB_CNT_ACTIVE_FE_VAL_LSB) & WB_CNT_ACTIVE_FE_VAL_MASK)
#define WB_CNT_ACTIVE_FE_VAL_RESET                                             0x0
#define WB_CNT_ACTIVE_FE_ADDRESS                                               (0x28 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define WB_CNT_ACTIVE_FE_RSTMASK                                               0xffffffff
#define WB_CNT_ACTIVE_FE_RESET                                                 0x0

// 0x2c (WB_CNT_MWS_TX_RE)
#define WB_CNT_MWS_TX_RE_VAL_LSB                                               0
#define WB_CNT_MWS_TX_RE_VAL_MSB                                               31
#define WB_CNT_MWS_TX_RE_VAL_MASK                                              0xffffffff
#define WB_CNT_MWS_TX_RE_VAL_GET(x)                                            (((x) & WB_CNT_MWS_TX_RE_VAL_MASK) >> WB_CNT_MWS_TX_RE_VAL_LSB)
#define WB_CNT_MWS_TX_RE_VAL_SET(x)                                            (((0 | (x)) << WB_CNT_MWS_TX_RE_VAL_LSB) & WB_CNT_MWS_TX_RE_VAL_MASK)
#define WB_CNT_MWS_TX_RE_VAL_RESET                                             0x0
#define WB_CNT_MWS_TX_RE_ADDRESS                                               (0x2c + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define WB_CNT_MWS_TX_RE_RSTMASK                                               0xffffffff
#define WB_CNT_MWS_TX_RE_RESET                                                 0x0

// 0x30 (WB_CNT_MWS_TX_FE)
#define WB_CNT_MWS_TX_FE_VAL_LSB                                               0
#define WB_CNT_MWS_TX_FE_VAL_MSB                                               31
#define WB_CNT_MWS_TX_FE_VAL_MASK                                              0xffffffff
#define WB_CNT_MWS_TX_FE_VAL_GET(x)                                            (((x) & WB_CNT_MWS_TX_FE_VAL_MASK) >> WB_CNT_MWS_TX_FE_VAL_LSB)
#define WB_CNT_MWS_TX_FE_VAL_SET(x)                                            (((0 | (x)) << WB_CNT_MWS_TX_FE_VAL_LSB) & WB_CNT_MWS_TX_FE_VAL_MASK)
#define WB_CNT_MWS_TX_FE_VAL_RESET                                             0x0
#define WB_CNT_MWS_TX_FE_ADDRESS                                               (0x30 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define WB_CNT_MWS_TX_FE_RSTMASK                                               0xffffffff
#define WB_CNT_MWS_TX_FE_RESET                                                 0x0

// 0x34 (WB_CNT_MWS_RX_RE)
#define WB_CNT_MWS_RX_RE_VAL_LSB                                               0
#define WB_CNT_MWS_RX_RE_VAL_MSB                                               31
#define WB_CNT_MWS_RX_RE_VAL_MASK                                              0xffffffff
#define WB_CNT_MWS_RX_RE_VAL_GET(x)                                            (((x) & WB_CNT_MWS_RX_RE_VAL_MASK) >> WB_CNT_MWS_RX_RE_VAL_LSB)
#define WB_CNT_MWS_RX_RE_VAL_SET(x)                                            (((0 | (x)) << WB_CNT_MWS_RX_RE_VAL_LSB) & WB_CNT_MWS_RX_RE_VAL_MASK)
#define WB_CNT_MWS_RX_RE_VAL_RESET                                             0x0
#define WB_CNT_MWS_RX_RE_ADDRESS                                               (0x34 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define WB_CNT_MWS_RX_RE_RSTMASK                                               0xffffffff
#define WB_CNT_MWS_RX_RE_RESET                                                 0x0

// 0x38 (WB_CNT_MWS_RX_FE)
#define WB_CNT_MWS_RX_FE_VAL_LSB                                               0
#define WB_CNT_MWS_RX_FE_VAL_MSB                                               31
#define WB_CNT_MWS_RX_FE_VAL_MASK                                              0xffffffff
#define WB_CNT_MWS_RX_FE_VAL_GET(x)                                            (((x) & WB_CNT_MWS_RX_FE_VAL_MASK) >> WB_CNT_MWS_RX_FE_VAL_LSB)
#define WB_CNT_MWS_RX_FE_VAL_SET(x)                                            (((0 | (x)) << WB_CNT_MWS_RX_FE_VAL_LSB) & WB_CNT_MWS_RX_FE_VAL_MASK)
#define WB_CNT_MWS_RX_FE_VAL_RESET                                             0x0
#define WB_CNT_MWS_RX_FE_ADDRESS                                               (0x38 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define WB_CNT_MWS_RX_FE_RSTMASK                                               0xffffffff
#define WB_CNT_MWS_RX_FE_RESET                                                 0x0

// 0x3c (WB_CNT_RX_TYPE7)
#define WB_CNT_RX_TYPE7_VAL_LSB                                                0
#define WB_CNT_RX_TYPE7_VAL_MSB                                                31
#define WB_CNT_RX_TYPE7_VAL_MASK                                               0xffffffff
#define WB_CNT_RX_TYPE7_VAL_GET(x)                                             (((x) & WB_CNT_RX_TYPE7_VAL_MASK) >> WB_CNT_RX_TYPE7_VAL_LSB)
#define WB_CNT_RX_TYPE7_VAL_SET(x)                                             (((0 | (x)) << WB_CNT_RX_TYPE7_VAL_LSB) & WB_CNT_RX_TYPE7_VAL_MASK)
#define WB_CNT_RX_TYPE7_VAL_RESET                                              0x0
#define WB_CNT_RX_TYPE7_ADDRESS                                                (0x3c + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define WB_CNT_RX_TYPE7_RSTMASK                                                0xffffffff
#define WB_CNT_RX_TYPE7_RESET                                                  0x0

// 0x40 (WB_CNT_RX_TYPE6)
#define WB_CNT_RX_TYPE6_VAL_LSB                                                0
#define WB_CNT_RX_TYPE6_VAL_MSB                                                31
#define WB_CNT_RX_TYPE6_VAL_MASK                                               0xffffffff
#define WB_CNT_RX_TYPE6_VAL_GET(x)                                             (((x) & WB_CNT_RX_TYPE6_VAL_MASK) >> WB_CNT_RX_TYPE6_VAL_LSB)
#define WB_CNT_RX_TYPE6_VAL_SET(x)                                             (((0 | (x)) << WB_CNT_RX_TYPE6_VAL_LSB) & WB_CNT_RX_TYPE6_VAL_MASK)
#define WB_CNT_RX_TYPE6_VAL_RESET                                              0x0
#define WB_CNT_RX_TYPE6_ADDRESS                                                (0x40 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define WB_CNT_RX_TYPE6_RSTMASK                                                0xffffffff
#define WB_CNT_RX_TYPE6_RESET                                                  0x0

// 0x44 (WB_CNT_RX_TYPE5)
#define WB_CNT_RX_TYPE5_VAL_LSB                                                0
#define WB_CNT_RX_TYPE5_VAL_MSB                                                31
#define WB_CNT_RX_TYPE5_VAL_MASK                                               0xffffffff
#define WB_CNT_RX_TYPE5_VAL_GET(x)                                             (((x) & WB_CNT_RX_TYPE5_VAL_MASK) >> WB_CNT_RX_TYPE5_VAL_LSB)
#define WB_CNT_RX_TYPE5_VAL_SET(x)                                             (((0 | (x)) << WB_CNT_RX_TYPE5_VAL_LSB) & WB_CNT_RX_TYPE5_VAL_MASK)
#define WB_CNT_RX_TYPE5_VAL_RESET                                              0x0
#define WB_CNT_RX_TYPE5_ADDRESS                                                (0x44 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define WB_CNT_RX_TYPE5_RSTMASK                                                0xffffffff
#define WB_CNT_RX_TYPE5_RESET                                                  0x0

// 0x48 (WB_CNT_RX_TYPE4)
#define WB_CNT_RX_TYPE4_VAL_LSB                                                0
#define WB_CNT_RX_TYPE4_VAL_MSB                                                31
#define WB_CNT_RX_TYPE4_VAL_MASK                                               0xffffffff
#define WB_CNT_RX_TYPE4_VAL_GET(x)                                             (((x) & WB_CNT_RX_TYPE4_VAL_MASK) >> WB_CNT_RX_TYPE4_VAL_LSB)
#define WB_CNT_RX_TYPE4_VAL_SET(x)                                             (((0 | (x)) << WB_CNT_RX_TYPE4_VAL_LSB) & WB_CNT_RX_TYPE4_VAL_MASK)
#define WB_CNT_RX_TYPE4_VAL_RESET                                              0x0
#define WB_CNT_RX_TYPE4_ADDRESS                                                (0x48 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define WB_CNT_RX_TYPE4_RSTMASK                                                0xffffffff
#define WB_CNT_RX_TYPE4_RESET                                                  0x0

// 0x4c (WB_CNT_RX_TYPE3)
#define WB_CNT_RX_TYPE3_VAL_LSB                                                0
#define WB_CNT_RX_TYPE3_VAL_MSB                                                31
#define WB_CNT_RX_TYPE3_VAL_MASK                                               0xffffffff
#define WB_CNT_RX_TYPE3_VAL_GET(x)                                             (((x) & WB_CNT_RX_TYPE3_VAL_MASK) >> WB_CNT_RX_TYPE3_VAL_LSB)
#define WB_CNT_RX_TYPE3_VAL_SET(x)                                             (((0 | (x)) << WB_CNT_RX_TYPE3_VAL_LSB) & WB_CNT_RX_TYPE3_VAL_MASK)
#define WB_CNT_RX_TYPE3_VAL_RESET                                              0x0
#define WB_CNT_RX_TYPE3_ADDRESS                                                (0x4c + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define WB_CNT_RX_TYPE3_RSTMASK                                                0xffffffff
#define WB_CNT_RX_TYPE3_RESET                                                  0x0

// 0x50 (WB_CNT_RX_TYPE2)
#define WB_CNT_RX_TYPE2_VAL_LSB                                                0
#define WB_CNT_RX_TYPE2_VAL_MSB                                                31
#define WB_CNT_RX_TYPE2_VAL_MASK                                               0xffffffff
#define WB_CNT_RX_TYPE2_VAL_GET(x)                                             (((x) & WB_CNT_RX_TYPE2_VAL_MASK) >> WB_CNT_RX_TYPE2_VAL_LSB)
#define WB_CNT_RX_TYPE2_VAL_SET(x)                                             (((0 | (x)) << WB_CNT_RX_TYPE2_VAL_LSB) & WB_CNT_RX_TYPE2_VAL_MASK)
#define WB_CNT_RX_TYPE2_VAL_RESET                                              0x0
#define WB_CNT_RX_TYPE2_ADDRESS                                                (0x50 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define WB_CNT_RX_TYPE2_RSTMASK                                                0xffffffff
#define WB_CNT_RX_TYPE2_RESET                                                  0x0

// 0x54 (WB_CNT_RX_TYPE1)
#define WB_CNT_RX_TYPE1_VAL_LSB                                                0
#define WB_CNT_RX_TYPE1_VAL_MSB                                                31
#define WB_CNT_RX_TYPE1_VAL_MASK                                               0xffffffff
#define WB_CNT_RX_TYPE1_VAL_GET(x)                                             (((x) & WB_CNT_RX_TYPE1_VAL_MASK) >> WB_CNT_RX_TYPE1_VAL_LSB)
#define WB_CNT_RX_TYPE1_VAL_SET(x)                                             (((0 | (x)) << WB_CNT_RX_TYPE1_VAL_LSB) & WB_CNT_RX_TYPE1_VAL_MASK)
#define WB_CNT_RX_TYPE1_VAL_RESET                                              0x0
#define WB_CNT_RX_TYPE1_ADDRESS                                                (0x54 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define WB_CNT_RX_TYPE1_RSTMASK                                                0xffffffff
#define WB_CNT_RX_TYPE1_RESET                                                  0x0

// 0x58 (WB_CNT_RX_TYPE0)
#define WB_CNT_RX_TYPE0_VAL_LSB                                                0
#define WB_CNT_RX_TYPE0_VAL_MSB                                                31
#define WB_CNT_RX_TYPE0_VAL_MASK                                               0xffffffff
#define WB_CNT_RX_TYPE0_VAL_GET(x)                                             (((x) & WB_CNT_RX_TYPE0_VAL_MASK) >> WB_CNT_RX_TYPE0_VAL_LSB)
#define WB_CNT_RX_TYPE0_VAL_SET(x)                                             (((0 | (x)) << WB_CNT_RX_TYPE0_VAL_LSB) & WB_CNT_RX_TYPE0_VAL_MASK)
#define WB_CNT_RX_TYPE0_VAL_RESET                                              0x0
#define WB_CNT_RX_TYPE0_ADDRESS                                                (0x58 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define WB_CNT_RX_TYPE0_RSTMASK                                                0xffffffff
#define WB_CNT_RX_TYPE0_RESET                                                  0x0

// 0x5c (RX_CXM_MSG_CONTENT1)
#define RX_CXM_MSG_CONTENT1_TYPE3_LSB                                          24
#define RX_CXM_MSG_CONTENT1_TYPE3_MSB                                          31
#define RX_CXM_MSG_CONTENT1_TYPE3_MASK                                         0xff000000
#define RX_CXM_MSG_CONTENT1_TYPE3_GET(x)                                       (((x) & RX_CXM_MSG_CONTENT1_TYPE3_MASK) >> RX_CXM_MSG_CONTENT1_TYPE3_LSB)
#define RX_CXM_MSG_CONTENT1_TYPE3_SET(x)                                       (((0 | (x)) << RX_CXM_MSG_CONTENT1_TYPE3_LSB) & RX_CXM_MSG_CONTENT1_TYPE3_MASK)
#define RX_CXM_MSG_CONTENT1_TYPE3_RESET                                        0x0
#define RX_CXM_MSG_CONTENT1_TYPE2_LSB                                          16
#define RX_CXM_MSG_CONTENT1_TYPE2_MSB                                          23
#define RX_CXM_MSG_CONTENT1_TYPE2_MASK                                         0xff0000
#define RX_CXM_MSG_CONTENT1_TYPE2_GET(x)                                       (((x) & RX_CXM_MSG_CONTENT1_TYPE2_MASK) >> RX_CXM_MSG_CONTENT1_TYPE2_LSB)
#define RX_CXM_MSG_CONTENT1_TYPE2_SET(x)                                       (((0 | (x)) << RX_CXM_MSG_CONTENT1_TYPE2_LSB) & RX_CXM_MSG_CONTENT1_TYPE2_MASK)
#define RX_CXM_MSG_CONTENT1_TYPE2_RESET                                        0x0
#define RX_CXM_MSG_CONTENT1_TYPE1_LSB                                          8
#define RX_CXM_MSG_CONTENT1_TYPE1_MSB                                          15
#define RX_CXM_MSG_CONTENT1_TYPE1_MASK                                         0xff00
#define RX_CXM_MSG_CONTENT1_TYPE1_GET(x)                                       (((x) & RX_CXM_MSG_CONTENT1_TYPE1_MASK) >> RX_CXM_MSG_CONTENT1_TYPE1_LSB)
#define RX_CXM_MSG_CONTENT1_TYPE1_SET(x)                                       (((0 | (x)) << RX_CXM_MSG_CONTENT1_TYPE1_LSB) & RX_CXM_MSG_CONTENT1_TYPE1_MASK)
#define RX_CXM_MSG_CONTENT1_TYPE1_RESET                                        0x0
#define RX_CXM_MSG_CONTENT1_TYPE0_LSB                                          0
#define RX_CXM_MSG_CONTENT1_TYPE0_MSB                                          7
#define RX_CXM_MSG_CONTENT1_TYPE0_MASK                                         0xff
#define RX_CXM_MSG_CONTENT1_TYPE0_GET(x)                                       (((x) & RX_CXM_MSG_CONTENT1_TYPE0_MASK) >> RX_CXM_MSG_CONTENT1_TYPE0_LSB)
#define RX_CXM_MSG_CONTENT1_TYPE0_SET(x)                                       (((0 | (x)) << RX_CXM_MSG_CONTENT1_TYPE0_LSB) & RX_CXM_MSG_CONTENT1_TYPE0_MASK)
#define RX_CXM_MSG_CONTENT1_TYPE0_RESET                                        0x0
#define RX_CXM_MSG_CONTENT1_ADDRESS                                            (0x5c + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define RX_CXM_MSG_CONTENT1_RSTMASK                                            0xffffffff
#define RX_CXM_MSG_CONTENT1_RESET                                              0x0

// 0x60 (RX_CXM_MSG_CONTENT2)
#define RX_CXM_MSG_CONTENT2_TYPE7_LSB                                          24
#define RX_CXM_MSG_CONTENT2_TYPE7_MSB                                          31
#define RX_CXM_MSG_CONTENT2_TYPE7_MASK                                         0xff000000
#define RX_CXM_MSG_CONTENT2_TYPE7_GET(x)                                       (((x) & RX_CXM_MSG_CONTENT2_TYPE7_MASK) >> RX_CXM_MSG_CONTENT2_TYPE7_LSB)
#define RX_CXM_MSG_CONTENT2_TYPE7_SET(x)                                       (((0 | (x)) << RX_CXM_MSG_CONTENT2_TYPE7_LSB) & RX_CXM_MSG_CONTENT2_TYPE7_MASK)
#define RX_CXM_MSG_CONTENT2_TYPE7_RESET                                        0x0
#define RX_CXM_MSG_CONTENT2_TYPE6_LSB                                          16
#define RX_CXM_MSG_CONTENT2_TYPE6_MSB                                          23
#define RX_CXM_MSG_CONTENT2_TYPE6_MASK                                         0xff0000
#define RX_CXM_MSG_CONTENT2_TYPE6_GET(x)                                       (((x) & RX_CXM_MSG_CONTENT2_TYPE6_MASK) >> RX_CXM_MSG_CONTENT2_TYPE6_LSB)
#define RX_CXM_MSG_CONTENT2_TYPE6_SET(x)                                       (((0 | (x)) << RX_CXM_MSG_CONTENT2_TYPE6_LSB) & RX_CXM_MSG_CONTENT2_TYPE6_MASK)
#define RX_CXM_MSG_CONTENT2_TYPE6_RESET                                        0x0
#define RX_CXM_MSG_CONTENT2_TYPE5_LSB                                          8
#define RX_CXM_MSG_CONTENT2_TYPE5_MSB                                          15
#define RX_CXM_MSG_CONTENT2_TYPE5_MASK                                         0xff00
#define RX_CXM_MSG_CONTENT2_TYPE5_GET(x)                                       (((x) & RX_CXM_MSG_CONTENT2_TYPE5_MASK) >> RX_CXM_MSG_CONTENT2_TYPE5_LSB)
#define RX_CXM_MSG_CONTENT2_TYPE5_SET(x)                                       (((0 | (x)) << RX_CXM_MSG_CONTENT2_TYPE5_LSB) & RX_CXM_MSG_CONTENT2_TYPE5_MASK)
#define RX_CXM_MSG_CONTENT2_TYPE5_RESET                                        0x0
#define RX_CXM_MSG_CONTENT2_TYPE4_LSB                                          0
#define RX_CXM_MSG_CONTENT2_TYPE4_MSB                                          7
#define RX_CXM_MSG_CONTENT2_TYPE4_MASK                                         0xff
#define RX_CXM_MSG_CONTENT2_TYPE4_GET(x)                                       (((x) & RX_CXM_MSG_CONTENT2_TYPE4_MASK) >> RX_CXM_MSG_CONTENT2_TYPE4_LSB)
#define RX_CXM_MSG_CONTENT2_TYPE4_SET(x)                                       (((0 | (x)) << RX_CXM_MSG_CONTENT2_TYPE4_LSB) & RX_CXM_MSG_CONTENT2_TYPE4_MASK)
#define RX_CXM_MSG_CONTENT2_TYPE4_RESET                                        0x0
#define RX_CXM_MSG_CONTENT2_ADDRESS                                            (0x60 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define RX_CXM_MSG_CONTENT2_RSTMASK                                            0xffffffff
#define RX_CXM_MSG_CONTENT2_RESET                                              0x0

// 0x64 (CXM_CTRL1)
#define CXM_CTRL1_RX_PRI_LSB                                                   31
#define CXM_CTRL1_RX_PRI_MSB                                                   31
#define CXM_CTRL1_RX_PRI_MASK                                                  0x80000000
#define CXM_CTRL1_RX_PRI_GET(x)                                                (((x) & CXM_CTRL1_RX_PRI_MASK) >> CXM_CTRL1_RX_PRI_LSB)
#define CXM_CTRL1_RX_PRI_SET(x)                                                (((0 | (x)) << CXM_CTRL1_RX_PRI_LSB) & CXM_CTRL1_RX_PRI_MASK)
#define CXM_CTRL1_RX_PRI_RESET                                                 0x0
#define CXM_CTRL1_RX_PRI_ORIDE_VAL_LSB                                         30
#define CXM_CTRL1_RX_PRI_ORIDE_VAL_MSB                                         30
#define CXM_CTRL1_RX_PRI_ORIDE_VAL_MASK                                        0x40000000
#define CXM_CTRL1_RX_PRI_ORIDE_VAL_GET(x)                                      (((x) & CXM_CTRL1_RX_PRI_ORIDE_VAL_MASK) >> CXM_CTRL1_RX_PRI_ORIDE_VAL_LSB)
#define CXM_CTRL1_RX_PRI_ORIDE_VAL_SET(x)                                      (((0 | (x)) << CXM_CTRL1_RX_PRI_ORIDE_VAL_LSB) & CXM_CTRL1_RX_PRI_ORIDE_VAL_MASK)
#define CXM_CTRL1_RX_PRI_ORIDE_VAL_RESET                                       0x0
#define CXM_CTRL1_RX_PRI_ORIDE_ENA_LSB                                         29
#define CXM_CTRL1_RX_PRI_ORIDE_ENA_MSB                                         29
#define CXM_CTRL1_RX_PRI_ORIDE_ENA_MASK                                        0x20000000
#define CXM_CTRL1_RX_PRI_ORIDE_ENA_GET(x)                                      (((x) & CXM_CTRL1_RX_PRI_ORIDE_ENA_MASK) >> CXM_CTRL1_RX_PRI_ORIDE_ENA_LSB)
#define CXM_CTRL1_RX_PRI_ORIDE_ENA_SET(x)                                      (((0 | (x)) << CXM_CTRL1_RX_PRI_ORIDE_ENA_LSB) & CXM_CTRL1_RX_PRI_ORIDE_ENA_MASK)
#define CXM_CTRL1_RX_PRI_ORIDE_ENA_RESET                                       0x0
#define CXM_CTRL1_RX_PRI_VAL2_LSB                                              27
#define CXM_CTRL1_RX_PRI_VAL2_MSB                                              27
#define CXM_CTRL1_RX_PRI_VAL2_MASK                                             0x8000000
#define CXM_CTRL1_RX_PRI_VAL2_GET(x)                                           (((x) & CXM_CTRL1_RX_PRI_VAL2_MASK) >> CXM_CTRL1_RX_PRI_VAL2_LSB)
#define CXM_CTRL1_RX_PRI_VAL2_SET(x)                                           (((0 | (x)) << CXM_CTRL1_RX_PRI_VAL2_LSB) & CXM_CTRL1_RX_PRI_VAL2_MASK)
#define CXM_CTRL1_RX_PRI_VAL2_RESET                                            0x0
#define CXM_CTRL1_RX_PRI_VAL1_LSB                                              26
#define CXM_CTRL1_RX_PRI_VAL1_MSB                                              26
#define CXM_CTRL1_RX_PRI_VAL1_MASK                                             0x4000000
#define CXM_CTRL1_RX_PRI_VAL1_GET(x)                                           (((x) & CXM_CTRL1_RX_PRI_VAL1_MASK) >> CXM_CTRL1_RX_PRI_VAL1_LSB)
#define CXM_CTRL1_RX_PRI_VAL1_SET(x)                                           (((0 | (x)) << CXM_CTRL1_RX_PRI_VAL1_LSB) & CXM_CTRL1_RX_PRI_VAL1_MASK)
#define CXM_CTRL1_RX_PRI_VAL1_RESET                                            0x0
#define CXM_CTRL1_RX_PRI_ENA2_LSB                                              25
#define CXM_CTRL1_RX_PRI_ENA2_MSB                                              25
#define CXM_CTRL1_RX_PRI_ENA2_MASK                                             0x2000000
#define CXM_CTRL1_RX_PRI_ENA2_GET(x)                                           (((x) & CXM_CTRL1_RX_PRI_ENA2_MASK) >> CXM_CTRL1_RX_PRI_ENA2_LSB)
#define CXM_CTRL1_RX_PRI_ENA2_SET(x)                                           (((0 | (x)) << CXM_CTRL1_RX_PRI_ENA2_LSB) & CXM_CTRL1_RX_PRI_ENA2_MASK)
#define CXM_CTRL1_RX_PRI_ENA2_RESET                                            0x0
#define CXM_CTRL1_RX_PRI_ENA1_LSB                                              24
#define CXM_CTRL1_RX_PRI_ENA1_MSB                                              24
#define CXM_CTRL1_RX_PRI_ENA1_MASK                                             0x1000000
#define CXM_CTRL1_RX_PRI_ENA1_GET(x)                                           (((x) & CXM_CTRL1_RX_PRI_ENA1_MASK) >> CXM_CTRL1_RX_PRI_ENA1_LSB)
#define CXM_CTRL1_RX_PRI_ENA1_SET(x)                                           (((0 | (x)) << CXM_CTRL1_RX_PRI_ENA1_LSB) & CXM_CTRL1_RX_PRI_ENA1_MASK)
#define CXM_CTRL1_RX_PRI_ENA1_RESET                                            0x0
#define CXM_CTRL1_RX_GRANT_LSB                                                 23
#define CXM_CTRL1_RX_GRANT_MSB                                                 23
#define CXM_CTRL1_RX_GRANT_MASK                                                0x800000
#define CXM_CTRL1_RX_GRANT_GET(x)                                              (((x) & CXM_CTRL1_RX_GRANT_MASK) >> CXM_CTRL1_RX_GRANT_LSB)
#define CXM_CTRL1_RX_GRANT_SET(x)                                              (((0 | (x)) << CXM_CTRL1_RX_GRANT_LSB) & CXM_CTRL1_RX_GRANT_MASK)
#define CXM_CTRL1_RX_GRANT_RESET                                               0x0
#define CXM_CTRL1_RX_GRANT_BM_LSB                                              22
#define CXM_CTRL1_RX_GRANT_BM_MSB                                              22
#define CXM_CTRL1_RX_GRANT_BM_MASK                                             0x400000
#define CXM_CTRL1_RX_GRANT_BM_GET(x)                                           (((x) & CXM_CTRL1_RX_GRANT_BM_MASK) >> CXM_CTRL1_RX_GRANT_BM_LSB)
#define CXM_CTRL1_RX_GRANT_BM_SET(x)                                           (((0 | (x)) << CXM_CTRL1_RX_GRANT_BM_LSB) & CXM_CTRL1_RX_GRANT_BM_MASK)
#define CXM_CTRL1_RX_GRANT_BM_RESET                                            0x0
#define CXM_CTRL1_RX_GRANT_SEL_LSB                                             20
#define CXM_CTRL1_RX_GRANT_SEL_MSB                                             21
#define CXM_CTRL1_RX_GRANT_SEL_MASK                                            0x300000
#define CXM_CTRL1_RX_GRANT_SEL_GET(x)                                          (((x) & CXM_CTRL1_RX_GRANT_SEL_MASK) >> CXM_CTRL1_RX_GRANT_SEL_LSB)
#define CXM_CTRL1_RX_GRANT_SEL_SET(x)                                          (((0 | (x)) << CXM_CTRL1_RX_GRANT_SEL_LSB) & CXM_CTRL1_RX_GRANT_SEL_MASK)
#define CXM_CTRL1_RX_GRANT_SEL_RESET                                           0x0
#define CXM_CTRL1_RX_GRANT_ORIDE_VAL_LSB                                       19
#define CXM_CTRL1_RX_GRANT_ORIDE_VAL_MSB                                       19
#define CXM_CTRL1_RX_GRANT_ORIDE_VAL_MASK                                      0x80000
#define CXM_CTRL1_RX_GRANT_ORIDE_VAL_GET(x)                                    (((x) & CXM_CTRL1_RX_GRANT_ORIDE_VAL_MASK) >> CXM_CTRL1_RX_GRANT_ORIDE_VAL_LSB)
#define CXM_CTRL1_RX_GRANT_ORIDE_VAL_SET(x)                                    (((0 | (x)) << CXM_CTRL1_RX_GRANT_ORIDE_VAL_LSB) & CXM_CTRL1_RX_GRANT_ORIDE_VAL_MASK)
#define CXM_CTRL1_RX_GRANT_ORIDE_VAL_RESET                                     0x0
#define CXM_CTRL1_RX_GRANT_ORIDE_ENA_LSB                                       18
#define CXM_CTRL1_RX_GRANT_ORIDE_ENA_MSB                                       18
#define CXM_CTRL1_RX_GRANT_ORIDE_ENA_MASK                                      0x40000
#define CXM_CTRL1_RX_GRANT_ORIDE_ENA_GET(x)                                    (((x) & CXM_CTRL1_RX_GRANT_ORIDE_ENA_MASK) >> CXM_CTRL1_RX_GRANT_ORIDE_ENA_LSB)
#define CXM_CTRL1_RX_GRANT_ORIDE_ENA_SET(x)                                    (((0 | (x)) << CXM_CTRL1_RX_GRANT_ORIDE_ENA_LSB) & CXM_CTRL1_RX_GRANT_ORIDE_ENA_MASK)
#define CXM_CTRL1_RX_GRANT_ORIDE_ENA_RESET                                     0x0
#define CXM_CTRL1_RX_GRANT_VAL2_LSB                                            16
#define CXM_CTRL1_RX_GRANT_VAL2_MSB                                            16
#define CXM_CTRL1_RX_GRANT_VAL2_MASK                                           0x10000
#define CXM_CTRL1_RX_GRANT_VAL2_GET(x)                                         (((x) & CXM_CTRL1_RX_GRANT_VAL2_MASK) >> CXM_CTRL1_RX_GRANT_VAL2_LSB)
#define CXM_CTRL1_RX_GRANT_VAL2_SET(x)                                         (((0 | (x)) << CXM_CTRL1_RX_GRANT_VAL2_LSB) & CXM_CTRL1_RX_GRANT_VAL2_MASK)
#define CXM_CTRL1_RX_GRANT_VAL2_RESET                                          0x0
#define CXM_CTRL1_RX_GRANT_VAL1_LSB                                            15
#define CXM_CTRL1_RX_GRANT_VAL1_MSB                                            15
#define CXM_CTRL1_RX_GRANT_VAL1_MASK                                           0x8000
#define CXM_CTRL1_RX_GRANT_VAL1_GET(x)                                         (((x) & CXM_CTRL1_RX_GRANT_VAL1_MASK) >> CXM_CTRL1_RX_GRANT_VAL1_LSB)
#define CXM_CTRL1_RX_GRANT_VAL1_SET(x)                                         (((0 | (x)) << CXM_CTRL1_RX_GRANT_VAL1_LSB) & CXM_CTRL1_RX_GRANT_VAL1_MASK)
#define CXM_CTRL1_RX_GRANT_VAL1_RESET                                          0x0
#define CXM_CTRL1_RX_GRANT_ENA2_LSB                                            14
#define CXM_CTRL1_RX_GRANT_ENA2_MSB                                            14
#define CXM_CTRL1_RX_GRANT_ENA2_MASK                                           0x4000
#define CXM_CTRL1_RX_GRANT_ENA2_GET(x)                                         (((x) & CXM_CTRL1_RX_GRANT_ENA2_MASK) >> CXM_CTRL1_RX_GRANT_ENA2_LSB)
#define CXM_CTRL1_RX_GRANT_ENA2_SET(x)                                         (((0 | (x)) << CXM_CTRL1_RX_GRANT_ENA2_LSB) & CXM_CTRL1_RX_GRANT_ENA2_MASK)
#define CXM_CTRL1_RX_GRANT_ENA2_RESET                                          0x0
#define CXM_CTRL1_RX_GRANT_ENA1_LSB                                            13
#define CXM_CTRL1_RX_GRANT_ENA1_MSB                                            13
#define CXM_CTRL1_RX_GRANT_ENA1_MASK                                           0x2000
#define CXM_CTRL1_RX_GRANT_ENA1_GET(x)                                         (((x) & CXM_CTRL1_RX_GRANT_ENA1_MASK) >> CXM_CTRL1_RX_GRANT_ENA1_LSB)
#define CXM_CTRL1_RX_GRANT_ENA1_SET(x)                                         (((0 | (x)) << CXM_CTRL1_RX_GRANT_ENA1_LSB) & CXM_CTRL1_RX_GRANT_ENA1_MASK)
#define CXM_CTRL1_RX_GRANT_ENA1_RESET                                          0x0
#define CXM_CTRL1_TX_GRANT_LSB                                                 12
#define CXM_CTRL1_TX_GRANT_MSB                                                 12
#define CXM_CTRL1_TX_GRANT_MASK                                                0x1000
#define CXM_CTRL1_TX_GRANT_GET(x)                                              (((x) & CXM_CTRL1_TX_GRANT_MASK) >> CXM_CTRL1_TX_GRANT_LSB)
#define CXM_CTRL1_TX_GRANT_SET(x)                                              (((0 | (x)) << CXM_CTRL1_TX_GRANT_LSB) & CXM_CTRL1_TX_GRANT_MASK)
#define CXM_CTRL1_TX_GRANT_RESET                                               0x0
#define CXM_CTRL1_TX_GRANT_BM_LSB                                              11
#define CXM_CTRL1_TX_GRANT_BM_MSB                                              11
#define CXM_CTRL1_TX_GRANT_BM_MASK                                             0x800
#define CXM_CTRL1_TX_GRANT_BM_GET(x)                                           (((x) & CXM_CTRL1_TX_GRANT_BM_MASK) >> CXM_CTRL1_TX_GRANT_BM_LSB)
#define CXM_CTRL1_TX_GRANT_BM_SET(x)                                           (((0 | (x)) << CXM_CTRL1_TX_GRANT_BM_LSB) & CXM_CTRL1_TX_GRANT_BM_MASK)
#define CXM_CTRL1_TX_GRANT_BM_RESET                                            0x0
#define CXM_CTRL1_TX_GRANT_SEL_LSB                                             9
#define CXM_CTRL1_TX_GRANT_SEL_MSB                                             10
#define CXM_CTRL1_TX_GRANT_SEL_MASK                                            0x600
#define CXM_CTRL1_TX_GRANT_SEL_GET(x)                                          (((x) & CXM_CTRL1_TX_GRANT_SEL_MASK) >> CXM_CTRL1_TX_GRANT_SEL_LSB)
#define CXM_CTRL1_TX_GRANT_SEL_SET(x)                                          (((0 | (x)) << CXM_CTRL1_TX_GRANT_SEL_LSB) & CXM_CTRL1_TX_GRANT_SEL_MASK)
#define CXM_CTRL1_TX_GRANT_SEL_RESET                                           0x0
#define CXM_CTRL1_TX_GRANT_ORIDE_VAL_LSB                                       8
#define CXM_CTRL1_TX_GRANT_ORIDE_VAL_MSB                                       8
#define CXM_CTRL1_TX_GRANT_ORIDE_VAL_MASK                                      0x100
#define CXM_CTRL1_TX_GRANT_ORIDE_VAL_GET(x)                                    (((x) & CXM_CTRL1_TX_GRANT_ORIDE_VAL_MASK) >> CXM_CTRL1_TX_GRANT_ORIDE_VAL_LSB)
#define CXM_CTRL1_TX_GRANT_ORIDE_VAL_SET(x)                                    (((0 | (x)) << CXM_CTRL1_TX_GRANT_ORIDE_VAL_LSB) & CXM_CTRL1_TX_GRANT_ORIDE_VAL_MASK)
#define CXM_CTRL1_TX_GRANT_ORIDE_VAL_RESET                                     0x0
#define CXM_CTRL1_TX_GRANT_ORIDE_ENA_LSB                                       7
#define CXM_CTRL1_TX_GRANT_ORIDE_ENA_MSB                                       7
#define CXM_CTRL1_TX_GRANT_ORIDE_ENA_MASK                                      0x80
#define CXM_CTRL1_TX_GRANT_ORIDE_ENA_GET(x)                                    (((x) & CXM_CTRL1_TX_GRANT_ORIDE_ENA_MASK) >> CXM_CTRL1_TX_GRANT_ORIDE_ENA_LSB)
#define CXM_CTRL1_TX_GRANT_ORIDE_ENA_SET(x)                                    (((0 | (x)) << CXM_CTRL1_TX_GRANT_ORIDE_ENA_LSB) & CXM_CTRL1_TX_GRANT_ORIDE_ENA_MASK)
#define CXM_CTRL1_TX_GRANT_ORIDE_ENA_RESET                                     0x0
#define CXM_CTRL1_TX_GRANT_VAL2_LSB                                            5
#define CXM_CTRL1_TX_GRANT_VAL2_MSB                                            5
#define CXM_CTRL1_TX_GRANT_VAL2_MASK                                           0x20
#define CXM_CTRL1_TX_GRANT_VAL2_GET(x)                                         (((x) & CXM_CTRL1_TX_GRANT_VAL2_MASK) >> CXM_CTRL1_TX_GRANT_VAL2_LSB)
#define CXM_CTRL1_TX_GRANT_VAL2_SET(x)                                         (((0 | (x)) << CXM_CTRL1_TX_GRANT_VAL2_LSB) & CXM_CTRL1_TX_GRANT_VAL2_MASK)
#define CXM_CTRL1_TX_GRANT_VAL2_RESET                                          0x0
#define CXM_CTRL1_TX_GRANT_VAL1_LSB                                            4
#define CXM_CTRL1_TX_GRANT_VAL1_MSB                                            4
#define CXM_CTRL1_TX_GRANT_VAL1_MASK                                           0x10
#define CXM_CTRL1_TX_GRANT_VAL1_GET(x)                                         (((x) & CXM_CTRL1_TX_GRANT_VAL1_MASK) >> CXM_CTRL1_TX_GRANT_VAL1_LSB)
#define CXM_CTRL1_TX_GRANT_VAL1_SET(x)                                         (((0 | (x)) << CXM_CTRL1_TX_GRANT_VAL1_LSB) & CXM_CTRL1_TX_GRANT_VAL1_MASK)
#define CXM_CTRL1_TX_GRANT_VAL1_RESET                                          0x0
#define CXM_CTRL1_TX_GRANT_ENA2_LSB                                            3
#define CXM_CTRL1_TX_GRANT_ENA2_MSB                                            3
#define CXM_CTRL1_TX_GRANT_ENA2_MASK                                           0x8
#define CXM_CTRL1_TX_GRANT_ENA2_GET(x)                                         (((x) & CXM_CTRL1_TX_GRANT_ENA2_MASK) >> CXM_CTRL1_TX_GRANT_ENA2_LSB)
#define CXM_CTRL1_TX_GRANT_ENA2_SET(x)                                         (((0 | (x)) << CXM_CTRL1_TX_GRANT_ENA2_LSB) & CXM_CTRL1_TX_GRANT_ENA2_MASK)
#define CXM_CTRL1_TX_GRANT_ENA2_RESET                                          0x0
#define CXM_CTRL1_TX_GRANT_ENA1_LSB                                            2
#define CXM_CTRL1_TX_GRANT_ENA1_MSB                                            2
#define CXM_CTRL1_TX_GRANT_ENA1_MASK                                           0x4
#define CXM_CTRL1_TX_GRANT_ENA1_GET(x)                                         (((x) & CXM_CTRL1_TX_GRANT_ENA1_MASK) >> CXM_CTRL1_TX_GRANT_ENA1_LSB)
#define CXM_CTRL1_TX_GRANT_ENA1_SET(x)                                         (((0 | (x)) << CXM_CTRL1_TX_GRANT_ENA1_LSB) & CXM_CTRL1_TX_GRANT_ENA1_MASK)
#define CXM_CTRL1_TX_GRANT_ENA1_RESET                                          0x0
#define CXM_CTRL1_INF_3W_SEL_LSB                                               0
#define CXM_CTRL1_INF_3W_SEL_MSB                                               0
#define CXM_CTRL1_INF_3W_SEL_MASK                                              0x1
#define CXM_CTRL1_INF_3W_SEL_GET(x)                                            (((x) & CXM_CTRL1_INF_3W_SEL_MASK) >> CXM_CTRL1_INF_3W_SEL_LSB)
#define CXM_CTRL1_INF_3W_SEL_SET(x)                                            (((0 | (x)) << CXM_CTRL1_INF_3W_SEL_LSB) & CXM_CTRL1_INF_3W_SEL_MASK)
#define CXM_CTRL1_INF_3W_SEL_RESET                                             0x1
#define CXM_CTRL1_ADDRESS                                                      (0x64 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define CXM_CTRL1_RSTMASK                                                      0xeffdffbd
#define CXM_CTRL1_RESET                                                        0x1

// 0x68 (CXM_CTRL2)
#define CXM_CTRL2_TOUT_VAL_LSB                                                 0
#define CXM_CTRL2_TOUT_VAL_MSB                                                 31
#define CXM_CTRL2_TOUT_VAL_MASK                                                0xffffffff
#define CXM_CTRL2_TOUT_VAL_GET(x)                                              (((x) & CXM_CTRL2_TOUT_VAL_MASK) >> CXM_CTRL2_TOUT_VAL_LSB)
#define CXM_CTRL2_TOUT_VAL_SET(x)                                              (((0 | (x)) << CXM_CTRL2_TOUT_VAL_LSB) & CXM_CTRL2_TOUT_VAL_MASK)
#define CXM_CTRL2_TOUT_VAL_RESET                                               0x4b2
#define CXM_CTRL2_ADDRESS                                                      (0x68 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define CXM_CTRL2_RSTMASK                                                      0xffffffff
#define CXM_CTRL2_RESET                                                        0x4b2

// 0x6c (CXM_CTRL3)
#define CXM_CTRL3_RST_UART_LSB                                                 16
#define CXM_CTRL3_RST_UART_MSB                                                 16
#define CXM_CTRL3_RST_UART_MASK                                                0x10000
#define CXM_CTRL3_RST_UART_GET(x)                                              (((x) & CXM_CTRL3_RST_UART_MASK) >> CXM_CTRL3_RST_UART_LSB)
#define CXM_CTRL3_RST_UART_SET(x)                                              (((0 | (x)) << CXM_CTRL3_RST_UART_LSB) & CXM_CTRL3_RST_UART_MASK)
#define CXM_CTRL3_RST_UART_RESET                                               0x0
#define CXM_CTRL3_DIRECT_MSG_CONTENT_LSB                                       8
#define CXM_CTRL3_DIRECT_MSG_CONTENT_MSB                                       15
#define CXM_CTRL3_DIRECT_MSG_CONTENT_MASK                                      0xff00
#define CXM_CTRL3_DIRECT_MSG_CONTENT_GET(x)                                    (((x) & CXM_CTRL3_DIRECT_MSG_CONTENT_MASK) >> CXM_CTRL3_DIRECT_MSG_CONTENT_LSB)
#define CXM_CTRL3_DIRECT_MSG_CONTENT_SET(x)                                    (((0 | (x)) << CXM_CTRL3_DIRECT_MSG_CONTENT_LSB) & CXM_CTRL3_DIRECT_MSG_CONTENT_MASK)
#define CXM_CTRL3_DIRECT_MSG_CONTENT_RESET                                     0x0
#define CXM_CTRL3_TIMER1_INT_CTRL_LSB                                          4
#define CXM_CTRL3_TIMER1_INT_CTRL_MSB                                          4
#define CXM_CTRL3_TIMER1_INT_CTRL_MASK                                         0x10
#define CXM_CTRL3_TIMER1_INT_CTRL_GET(x)                                       (((x) & CXM_CTRL3_TIMER1_INT_CTRL_MASK) >> CXM_CTRL3_TIMER1_INT_CTRL_LSB)
#define CXM_CTRL3_TIMER1_INT_CTRL_SET(x)                                       (((0 | (x)) << CXM_CTRL3_TIMER1_INT_CTRL_LSB) & CXM_CTRL3_TIMER1_INT_CTRL_MASK)
#define CXM_CTRL3_TIMER1_INT_CTRL_RESET                                        0x0
#define CXM_CTRL3_TIMER0_INT_CTRL_LSB                                          3
#define CXM_CTRL3_TIMER0_INT_CTRL_MSB                                          3
#define CXM_CTRL3_TIMER0_INT_CTRL_MASK                                         0x8
#define CXM_CTRL3_TIMER0_INT_CTRL_GET(x)                                       (((x) & CXM_CTRL3_TIMER0_INT_CTRL_MASK) >> CXM_CTRL3_TIMER0_INT_CTRL_LSB)
#define CXM_CTRL3_TIMER0_INT_CTRL_SET(x)                                       (((0 | (x)) << CXM_CTRL3_TIMER0_INT_CTRL_LSB) & CXM_CTRL3_TIMER0_INT_CTRL_MASK)
#define CXM_CTRL3_TIMER0_INT_CTRL_RESET                                        0x0
#define CXM_CTRL3_DIRECT_MSG_TX_LSB                                            2
#define CXM_CTRL3_DIRECT_MSG_TX_MSB                                            2
#define CXM_CTRL3_DIRECT_MSG_TX_MASK                                           0x4
#define CXM_CTRL3_DIRECT_MSG_TX_GET(x)                                         (((x) & CXM_CTRL3_DIRECT_MSG_TX_MASK) >> CXM_CTRL3_DIRECT_MSG_TX_LSB)
#define CXM_CTRL3_DIRECT_MSG_TX_SET(x)                                         (((0 | (x)) << CXM_CTRL3_DIRECT_MSG_TX_LSB) & CXM_CTRL3_DIRECT_MSG_TX_MASK)
#define CXM_CTRL3_DIRECT_MSG_TX_RESET                                          0x0
#define CXM_CTRL3_WAKEUP_CLR_RTSM_DAT_LSB                                      1
#define CXM_CTRL3_WAKEUP_CLR_RTSM_DAT_MSB                                      1
#define CXM_CTRL3_WAKEUP_CLR_RTSM_DAT_MASK                                     0x2
#define CXM_CTRL3_WAKEUP_CLR_RTSM_DAT_GET(x)                                   (((x) & CXM_CTRL3_WAKEUP_CLR_RTSM_DAT_MASK) >> CXM_CTRL3_WAKEUP_CLR_RTSM_DAT_LSB)
#define CXM_CTRL3_WAKEUP_CLR_RTSM_DAT_SET(x)                                   (((0 | (x)) << CXM_CTRL3_WAKEUP_CLR_RTSM_DAT_LSB) & CXM_CTRL3_WAKEUP_CLR_RTSM_DAT_MASK)
#define CXM_CTRL3_WAKEUP_CLR_RTSM_DAT_RESET                                    0x1
#define CXM_CTRL3_TX_MSG_ENA_LSB                                               0
#define CXM_CTRL3_TX_MSG_ENA_MSB                                               0
#define CXM_CTRL3_TX_MSG_ENA_MASK                                              0x1
#define CXM_CTRL3_TX_MSG_ENA_GET(x)                                            (((x) & CXM_CTRL3_TX_MSG_ENA_MASK) >> CXM_CTRL3_TX_MSG_ENA_LSB)
#define CXM_CTRL3_TX_MSG_ENA_SET(x)                                            (((0 | (x)) << CXM_CTRL3_TX_MSG_ENA_LSB) & CXM_CTRL3_TX_MSG_ENA_MASK)
#define CXM_CTRL3_TX_MSG_ENA_RESET                                             0x1
#define CXM_CTRL3_ADDRESS                                                      (0x6c + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define CXM_CTRL3_RSTMASK                                                      0x1ff1f
#define CXM_CTRL3_RESET                                                        0x3

// 0x70 (CXM_CTRL4)
#define CXM_CTRL4_BT_RX_PRI_LSB                                                6
#define CXM_CTRL4_BT_RX_PRI_MSB                                                6
#define CXM_CTRL4_BT_RX_PRI_MASK                                               0x40
#define CXM_CTRL4_BT_RX_PRI_GET(x)                                             (((x) & CXM_CTRL4_BT_RX_PRI_MASK) >> CXM_CTRL4_BT_RX_PRI_LSB)
#define CXM_CTRL4_BT_RX_PRI_SET(x)                                             (((0 | (x)) << CXM_CTRL4_BT_RX_PRI_LSB) & CXM_CTRL4_BT_RX_PRI_MASK)
#define CXM_CTRL4_BT_RX_PRI_RESET                                              0x0
#define CXM_CTRL4_BT_RX_PRI_ORIDE_VAL_LSB                                      5
#define CXM_CTRL4_BT_RX_PRI_ORIDE_VAL_MSB                                      5
#define CXM_CTRL4_BT_RX_PRI_ORIDE_VAL_MASK                                     0x20
#define CXM_CTRL4_BT_RX_PRI_ORIDE_VAL_GET(x)                                   (((x) & CXM_CTRL4_BT_RX_PRI_ORIDE_VAL_MASK) >> CXM_CTRL4_BT_RX_PRI_ORIDE_VAL_LSB)
#define CXM_CTRL4_BT_RX_PRI_ORIDE_VAL_SET(x)                                   (((0 | (x)) << CXM_CTRL4_BT_RX_PRI_ORIDE_VAL_LSB) & CXM_CTRL4_BT_RX_PRI_ORIDE_VAL_MASK)
#define CXM_CTRL4_BT_RX_PRI_ORIDE_VAL_RESET                                    0x0
#define CXM_CTRL4_BT_RX_PRI_ORIDE_ENA_LSB                                      4
#define CXM_CTRL4_BT_RX_PRI_ORIDE_ENA_MSB                                      4
#define CXM_CTRL4_BT_RX_PRI_ORIDE_ENA_MASK                                     0x10
#define CXM_CTRL4_BT_RX_PRI_ORIDE_ENA_GET(x)                                   (((x) & CXM_CTRL4_BT_RX_PRI_ORIDE_ENA_MASK) >> CXM_CTRL4_BT_RX_PRI_ORIDE_ENA_LSB)
#define CXM_CTRL4_BT_RX_PRI_ORIDE_ENA_SET(x)                                   (((0 | (x)) << CXM_CTRL4_BT_RX_PRI_ORIDE_ENA_LSB) & CXM_CTRL4_BT_RX_PRI_ORIDE_ENA_MASK)
#define CXM_CTRL4_BT_RX_PRI_ORIDE_ENA_RESET                                    0x0
#define CXM_CTRL4_BT_RX_PRI_VAL2_LSB                                           3
#define CXM_CTRL4_BT_RX_PRI_VAL2_MSB                                           3
#define CXM_CTRL4_BT_RX_PRI_VAL2_MASK                                          0x8
#define CXM_CTRL4_BT_RX_PRI_VAL2_GET(x)                                        (((x) & CXM_CTRL4_BT_RX_PRI_VAL2_MASK) >> CXM_CTRL4_BT_RX_PRI_VAL2_LSB)
#define CXM_CTRL4_BT_RX_PRI_VAL2_SET(x)                                        (((0 | (x)) << CXM_CTRL4_BT_RX_PRI_VAL2_LSB) & CXM_CTRL4_BT_RX_PRI_VAL2_MASK)
#define CXM_CTRL4_BT_RX_PRI_VAL2_RESET                                         0x0
#define CXM_CTRL4_BT_RX_PRI_VAL1_LSB                                           2
#define CXM_CTRL4_BT_RX_PRI_VAL1_MSB                                           2
#define CXM_CTRL4_BT_RX_PRI_VAL1_MASK                                          0x4
#define CXM_CTRL4_BT_RX_PRI_VAL1_GET(x)                                        (((x) & CXM_CTRL4_BT_RX_PRI_VAL1_MASK) >> CXM_CTRL4_BT_RX_PRI_VAL1_LSB)
#define CXM_CTRL4_BT_RX_PRI_VAL1_SET(x)                                        (((0 | (x)) << CXM_CTRL4_BT_RX_PRI_VAL1_LSB) & CXM_CTRL4_BT_RX_PRI_VAL1_MASK)
#define CXM_CTRL4_BT_RX_PRI_VAL1_RESET                                         0x0
#define CXM_CTRL4_BT_RX_PRI_ENA2_LSB                                           1
#define CXM_CTRL4_BT_RX_PRI_ENA2_MSB                                           1
#define CXM_CTRL4_BT_RX_PRI_ENA2_MASK                                          0x2
#define CXM_CTRL4_BT_RX_PRI_ENA2_GET(x)                                        (((x) & CXM_CTRL4_BT_RX_PRI_ENA2_MASK) >> CXM_CTRL4_BT_RX_PRI_ENA2_LSB)
#define CXM_CTRL4_BT_RX_PRI_ENA2_SET(x)                                        (((0 | (x)) << CXM_CTRL4_BT_RX_PRI_ENA2_LSB) & CXM_CTRL4_BT_RX_PRI_ENA2_MASK)
#define CXM_CTRL4_BT_RX_PRI_ENA2_RESET                                         0x0
#define CXM_CTRL4_BT_RX_PRI_ENA1_LSB                                           0
#define CXM_CTRL4_BT_RX_PRI_ENA1_MSB                                           0
#define CXM_CTRL4_BT_RX_PRI_ENA1_MASK                                          0x1
#define CXM_CTRL4_BT_RX_PRI_ENA1_GET(x)                                        (((x) & CXM_CTRL4_BT_RX_PRI_ENA1_MASK) >> CXM_CTRL4_BT_RX_PRI_ENA1_LSB)
#define CXM_CTRL4_BT_RX_PRI_ENA1_SET(x)                                        (((0 | (x)) << CXM_CTRL4_BT_RX_PRI_ENA1_LSB) & CXM_CTRL4_BT_RX_PRI_ENA1_MASK)
#define CXM_CTRL4_BT_RX_PRI_ENA1_RESET                                         0x0
#define CXM_CTRL4_ADDRESS                                                      (0x70 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define CXM_CTRL4_RSTMASK                                                      0x7f
#define CXM_CTRL4_RESET                                                        0x0

// 0x74 (TIMER0_INT_START)
#define TIMER0_INT_START_VAL_LSB                                               0
#define TIMER0_INT_START_VAL_MSB                                               31
#define TIMER0_INT_START_VAL_MASK                                              0xffffffff
#define TIMER0_INT_START_VAL_GET(x)                                            (((x) & TIMER0_INT_START_VAL_MASK) >> TIMER0_INT_START_VAL_LSB)
#define TIMER0_INT_START_VAL_SET(x)                                            (((0 | (x)) << TIMER0_INT_START_VAL_LSB) & TIMER0_INT_START_VAL_MASK)
#define TIMER0_INT_START_VAL_RESET                                             0x0
#define TIMER0_INT_START_ADDRESS                                               (0x74 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define TIMER0_INT_START_RSTMASK                                               0xffffffff
#define TIMER0_INT_START_RESET                                                 0x0

// 0x78 (TIMER0_INT_PERIOD)
#define TIMER0_INT_PERIOD_VAL_LSB                                              0
#define TIMER0_INT_PERIOD_VAL_MSB                                              31
#define TIMER0_INT_PERIOD_VAL_MASK                                             0xffffffff
#define TIMER0_INT_PERIOD_VAL_GET(x)                                           (((x) & TIMER0_INT_PERIOD_VAL_MASK) >> TIMER0_INT_PERIOD_VAL_LSB)
#define TIMER0_INT_PERIOD_VAL_SET(x)                                           (((0 | (x)) << TIMER0_INT_PERIOD_VAL_LSB) & TIMER0_INT_PERIOD_VAL_MASK)
#define TIMER0_INT_PERIOD_VAL_RESET                                            0x0
#define TIMER0_INT_PERIOD_ADDRESS                                              (0x78 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define TIMER0_INT_PERIOD_RSTMASK                                              0xffffffff
#define TIMER0_INT_PERIOD_RESET                                                0x0

// 0x7c (TIMER1_INT_START)
#define TIMER1_INT_START_VAL_LSB                                               0
#define TIMER1_INT_START_VAL_MSB                                               31
#define TIMER1_INT_START_VAL_MASK                                              0xffffffff
#define TIMER1_INT_START_VAL_GET(x)                                            (((x) & TIMER1_INT_START_VAL_MASK) >> TIMER1_INT_START_VAL_LSB)
#define TIMER1_INT_START_VAL_SET(x)                                            (((0 | (x)) << TIMER1_INT_START_VAL_LSB) & TIMER1_INT_START_VAL_MASK)
#define TIMER1_INT_START_VAL_RESET                                             0x0
#define TIMER1_INT_START_ADDRESS                                               (0x7c + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define TIMER1_INT_START_RSTMASK                                               0xffffffff
#define TIMER1_INT_START_RESET                                                 0x0

// 0x80 (TIMER1_INT_PERIOD)
#define TIMER1_INT_PERIOD_VAL_LSB                                              0
#define TIMER1_INT_PERIOD_VAL_MSB                                              31
#define TIMER1_INT_PERIOD_VAL_MASK                                             0xffffffff
#define TIMER1_INT_PERIOD_VAL_GET(x)                                           (((x) & TIMER1_INT_PERIOD_VAL_MASK) >> TIMER1_INT_PERIOD_VAL_LSB)
#define TIMER1_INT_PERIOD_VAL_SET(x)                                           (((0 | (x)) << TIMER1_INT_PERIOD_VAL_LSB) & TIMER1_INT_PERIOD_VAL_MASK)
#define TIMER1_INT_PERIOD_VAL_RESET                                            0x0
#define TIMER1_INT_PERIOD_ADDRESS                                              (0x80 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define TIMER1_INT_PERIOD_RSTMASK                                              0xffffffff
#define TIMER1_INT_PERIOD_RESET                                                0x0

// 0x84 (TX_GRANT_THR1)
#define TX_GRANT_THR1_VAL_LSB                                                  0
#define TX_GRANT_THR1_VAL_MSB                                                  31
#define TX_GRANT_THR1_VAL_MASK                                                 0xffffffff
#define TX_GRANT_THR1_VAL_GET(x)                                               (((x) & TX_GRANT_THR1_VAL_MASK) >> TX_GRANT_THR1_VAL_LSB)
#define TX_GRANT_THR1_VAL_SET(x)                                               (((0 | (x)) << TX_GRANT_THR1_VAL_LSB) & TX_GRANT_THR1_VAL_MASK)
#define TX_GRANT_THR1_VAL_RESET                                                0x0
#define TX_GRANT_THR1_ADDRESS                                                  (0x84 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define TX_GRANT_THR1_RSTMASK                                                  0xffffffff
#define TX_GRANT_THR1_RESET                                                    0x0

// 0x88 (TX_GRANT_THR2)
#define TX_GRANT_THR2_VAL_LSB                                                  0
#define TX_GRANT_THR2_VAL_MSB                                                  31
#define TX_GRANT_THR2_VAL_MASK                                                 0xffffffff
#define TX_GRANT_THR2_VAL_GET(x)                                               (((x) & TX_GRANT_THR2_VAL_MASK) >> TX_GRANT_THR2_VAL_LSB)
#define TX_GRANT_THR2_VAL_SET(x)                                               (((0 | (x)) << TX_GRANT_THR2_VAL_LSB) & TX_GRANT_THR2_VAL_MASK)
#define TX_GRANT_THR2_VAL_RESET                                                0x0
#define TX_GRANT_THR2_ADDRESS                                                  (0x88 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define TX_GRANT_THR2_RSTMASK                                                  0xffffffff
#define TX_GRANT_THR2_RESET                                                    0x0

// 0x8c (RX_GRANT_THR1)
#define RX_GRANT_THR1_VAL_LSB                                                  0
#define RX_GRANT_THR1_VAL_MSB                                                  31
#define RX_GRANT_THR1_VAL_MASK                                                 0xffffffff
#define RX_GRANT_THR1_VAL_GET(x)                                               (((x) & RX_GRANT_THR1_VAL_MASK) >> RX_GRANT_THR1_VAL_LSB)
#define RX_GRANT_THR1_VAL_SET(x)                                               (((0 | (x)) << RX_GRANT_THR1_VAL_LSB) & RX_GRANT_THR1_VAL_MASK)
#define RX_GRANT_THR1_VAL_RESET                                                0x0
#define RX_GRANT_THR1_ADDRESS                                                  (0x8c + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define RX_GRANT_THR1_RSTMASK                                                  0xffffffff
#define RX_GRANT_THR1_RESET                                                    0x0

// 0x90 (RX_GRANT_THR2)
#define RX_GRANT_THR2_VAL_LSB                                                  0
#define RX_GRANT_THR2_VAL_MSB                                                  31
#define RX_GRANT_THR2_VAL_MASK                                                 0xffffffff
#define RX_GRANT_THR2_VAL_GET(x)                                               (((x) & RX_GRANT_THR2_VAL_MASK) >> RX_GRANT_THR2_VAL_LSB)
#define RX_GRANT_THR2_VAL_SET(x)                                               (((0 | (x)) << RX_GRANT_THR2_VAL_LSB) & RX_GRANT_THR2_VAL_MASK)
#define RX_GRANT_THR2_VAL_RESET                                                0x0
#define RX_GRANT_THR2_ADDRESS                                                  (0x90 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define RX_GRANT_THR2_RSTMASK                                                  0xffffffff
#define RX_GRANT_THR2_RESET                                                    0x0

// 0x94 (RX_PRI_THR1)
#define RX_PRI_THR1_VAL_LSB                                                    0
#define RX_PRI_THR1_VAL_MSB                                                    31
#define RX_PRI_THR1_VAL_MASK                                                   0xffffffff
#define RX_PRI_THR1_VAL_GET(x)                                                 (((x) & RX_PRI_THR1_VAL_MASK) >> RX_PRI_THR1_VAL_LSB)
#define RX_PRI_THR1_VAL_SET(x)                                                 (((0 | (x)) << RX_PRI_THR1_VAL_LSB) & RX_PRI_THR1_VAL_MASK)
#define RX_PRI_THR1_VAL_RESET                                                  0x0
#define RX_PRI_THR1_ADDRESS                                                    (0x94 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define RX_PRI_THR1_RSTMASK                                                    0xffffffff
#define RX_PRI_THR1_RESET                                                      0x0

// 0x98 (RX_PRI_THR2)
#define RX_PRI_THR2_VAL_LSB                                                    0
#define RX_PRI_THR2_VAL_MSB                                                    31
#define RX_PRI_THR2_VAL_MASK                                                   0xffffffff
#define RX_PRI_THR2_VAL_GET(x)                                                 (((x) & RX_PRI_THR2_VAL_MASK) >> RX_PRI_THR2_VAL_LSB)
#define RX_PRI_THR2_VAL_SET(x)                                                 (((0 | (x)) << RX_PRI_THR2_VAL_LSB) & RX_PRI_THR2_VAL_MASK)
#define RX_PRI_THR2_VAL_RESET                                                  0x0
#define RX_PRI_THR2_ADDRESS                                                    (0x98 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define RX_PRI_THR2_RSTMASK                                                    0xffffffff
#define RX_PRI_THR2_RESET                                                      0x0

// 0x9c (BT_RX_PRI_THR1)
#define BT_RX_PRI_THR1_VAL_LSB                                                 0
#define BT_RX_PRI_THR1_VAL_MSB                                                 31
#define BT_RX_PRI_THR1_VAL_MASK                                                0xffffffff
#define BT_RX_PRI_THR1_VAL_GET(x)                                              (((x) & BT_RX_PRI_THR1_VAL_MASK) >> BT_RX_PRI_THR1_VAL_LSB)
#define BT_RX_PRI_THR1_VAL_SET(x)                                              (((0 | (x)) << BT_RX_PRI_THR1_VAL_LSB) & BT_RX_PRI_THR1_VAL_MASK)
#define BT_RX_PRI_THR1_VAL_RESET                                               0x0
#define BT_RX_PRI_THR1_ADDRESS                                                 (0x9c + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define BT_RX_PRI_THR1_RSTMASK                                                 0xffffffff
#define BT_RX_PRI_THR1_RESET                                                   0x0

// 0xa0 (BT_RX_PRI_THR2)
#define BT_RX_PRI_THR2_VAL_LSB                                                 0
#define BT_RX_PRI_THR2_VAL_MSB                                                 31
#define BT_RX_PRI_THR2_VAL_MASK                                                0xffffffff
#define BT_RX_PRI_THR2_VAL_GET(x)                                              (((x) & BT_RX_PRI_THR2_VAL_MASK) >> BT_RX_PRI_THR2_VAL_LSB)
#define BT_RX_PRI_THR2_VAL_SET(x)                                              (((0 | (x)) << BT_RX_PRI_THR2_VAL_LSB) & BT_RX_PRI_THR2_VAL_MASK)
#define BT_RX_PRI_THR2_VAL_RESET                                               0x0
#define BT_RX_PRI_THR2_ADDRESS                                                 (0xa0 + __WLAN_CXM_REG_CSR_BASE_ADDRESS)
#define BT_RX_PRI_THR2_RSTMASK                                                 0xffffffff
#define BT_RX_PRI_THR2_RESET                                                   0x0



#endif /* _WLAN_CXM_REG_CSR_H_ */
