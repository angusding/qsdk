// Copyright (c) 2014 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _RX_CHAIN_MASK_H_
#define _RX_CHAIN_MASK_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	chain_mask[3:0], reserved_0[31:4]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_RX_CHAIN_MASK 1

struct rx_chain_mask {
    volatile uint32_t chain_mask                      :  4, //[3:0]
                      reserved_0                      : 28; //[31:4]
};

/*

chain_mask
			
			Chain mask to support up to 4 antennas.  <legal: 1-15>

reserved_0
			
			Reserved: Generation should set the consumer shall
			ignore <legal 0>
*/


/* Description		RX_CHAIN_MASK_0_CHAIN_MASK
			
			Chain mask to support up to 4 antennas.  <legal: 1-15>
*/
#define RX_CHAIN_MASK_0_CHAIN_MASK_OFFSET                            0x00000000
#define RX_CHAIN_MASK_0_CHAIN_MASK_LSB                               0
#define RX_CHAIN_MASK_0_CHAIN_MASK_MASK                              0x0000000f

/* Description		RX_CHAIN_MASK_0_RESERVED_0
			
			Reserved: Generation should set the consumer shall
			ignore <legal 0>
*/
#define RX_CHAIN_MASK_0_RESERVED_0_OFFSET                            0x00000000
#define RX_CHAIN_MASK_0_RESERVED_0_LSB                               4
#define RX_CHAIN_MASK_0_RESERVED_0_MASK                              0xfffffff0


#endif // _RX_CHAIN_MASK_H_
