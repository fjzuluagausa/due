/* ----------------------------------------------------------------------------
 *         SAM Software Package License 
 * ----------------------------------------------------------------------------
 * Copyright (c) 2011, Atmel Corporation
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the disclaimer below.
 *
 * Atmel's name may not be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * DISCLAIMER: THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ----------------------------------------------------------------------------
 */

#ifndef _SAM3U_USART1_INSTANCE_
#define _SAM3U_USART1_INSTANCE_

/* ========== Register definition for USART1 peripheral ========== */
#ifdef __ASSEMBLY__
#define REG_USART1_CR          (0x40094000U) /**< \brief (USART1) Control Register */
#define REG_USART1_MR          (0x40094004U) /**< \brief (USART1) Mode Register */
#define REG_USART1_IER          (0x40094008U) /**< \brief (USART1) Interrupt Enable Register */
#define REG_USART1_IDR          (0x4009400CU) /**< \brief (USART1) Interrupt Disable Register */
#define REG_USART1_IMR          (0x40094010U) /**< \brief (USART1) Interrupt Mask Register */
#define REG_USART1_CSR          (0x40094014U) /**< \brief (USART1) Channel Status Register */
#define REG_USART1_RHR          (0x40094018U) /**< \brief (USART1) Receiver Holding Register */
#define REG_USART1_THR          (0x4009401CU) /**< \brief (USART1) Transmitter Holding Register */
#define REG_USART1_BRGR          (0x40094020U) /**< \brief (USART1) Baud Rate Generator Register */
#define REG_USART1_RTOR          (0x40094024U) /**< \brief (USART1) Receiver Time-out Register */
#define REG_USART1_TTGR          (0x40094028U) /**< \brief (USART1) Transmitter Timeguard Register */
#define REG_USART1_FIDI          (0x40094040U) /**< \brief (USART1) FI DI Ratio Register */
#define REG_USART1_NER          (0x40094044U) /**< \brief (USART1) Number of Errors Register */
#define REG_USART1_IF          (0x4009404CU) /**< \brief (USART1) IrDA Filter Register */
#define REG_USART1_MAN          (0x40094050U) /**< \brief (USART1) Manchester Encoder Decoder Register */
#define REG_USART1_WPMR          (0x400940E4U) /**< \brief (USART1) Write Protect Mode Register */
#define REG_USART1_WPSR          (0x400940E8U) /**< \brief (USART1) Write Protect Status Register */
#define REG_USART1_RPR          (0x40094100U) /**< \brief (USART1) Receive Pointer Register */
#define REG_USART1_RCR          (0x40094104U) /**< \brief (USART1) Receive Counter Register */
#define REG_USART1_TPR          (0x40094108U) /**< \brief (USART1) Transmit Pointer Register */
#define REG_USART1_TCR          (0x4009410CU) /**< \brief (USART1) Transmit Counter Register */
#define REG_USART1_RNPR          (0x40094110U) /**< \brief (USART1) Receive Next Pointer Register */
#define REG_USART1_RNCR          (0x40094114U) /**< \brief (USART1) Receive Next Counter Register */
#define REG_USART1_TNPR          (0x40094118U) /**< \brief (USART1) Transmit Next Pointer Register */
#define REG_USART1_TNCR          (0x4009411CU) /**< \brief (USART1) Transmit Next Counter Register */
#define REG_USART1_PTCR          (0x40094120U) /**< \brief (USART1) Transfer Control Register */
#define REG_USART1_PTSR          (0x40094124U) /**< \brief (USART1) Transfer Status Register */
#else
#define REG_USART1_CR (*(WoReg*)0x40094000U) /**< \brief (USART1) Control Register */
#define REG_USART1_MR (*(RwReg*)0x40094004U) /**< \brief (USART1) Mode Register */
#define REG_USART1_IER (*(WoReg*)0x40094008U) /**< \brief (USART1) Interrupt Enable Register */
#define REG_USART1_IDR (*(WoReg*)0x4009400CU) /**< \brief (USART1) Interrupt Disable Register */
#define REG_USART1_IMR (*(RoReg*)0x40094010U) /**< \brief (USART1) Interrupt Mask Register */
#define REG_USART1_CSR (*(RoReg*)0x40094014U) /**< \brief (USART1) Channel Status Register */
#define REG_USART1_RHR (*(RoReg*)0x40094018U) /**< \brief (USART1) Receiver Holding Register */
#define REG_USART1_THR (*(WoReg*)0x4009401CU) /**< \brief (USART1) Transmitter Holding Register */
#define REG_USART1_BRGR (*(RwReg*)0x40094020U) /**< \brief (USART1) Baud Rate Generator Register */
#define REG_USART1_RTOR (*(RwReg*)0x40094024U) /**< \brief (USART1) Receiver Time-out Register */
#define REG_USART1_TTGR (*(RwReg*)0x40094028U) /**< \brief (USART1) Transmitter Timeguard Register */
#define REG_USART1_FIDI (*(RwReg*)0x40094040U) /**< \brief (USART1) FI DI Ratio Register */
#define REG_USART1_NER (*(RoReg*)0x40094044U) /**< \brief (USART1) Number of Errors Register */
#define REG_USART1_IF (*(RwReg*)0x4009404CU) /**< \brief (USART1) IrDA Filter Register */
#define REG_USART1_MAN (*(RwReg*)0x40094050U) /**< \brief (USART1) Manchester Encoder Decoder Register */
#define REG_USART1_WPMR (*(RwReg*)0x400940E4U) /**< \brief (USART1) Write Protect Mode Register */
#define REG_USART1_WPSR (*(RoReg*)0x400940E8U) /**< \brief (USART1) Write Protect Status Register */
#define REG_USART1_RPR (*(RwReg*)0x40094100U) /**< \brief (USART1) Receive Pointer Register */
#define REG_USART1_RCR (*(RwReg*)0x40094104U) /**< \brief (USART1) Receive Counter Register */
#define REG_USART1_TPR (*(RwReg*)0x40094108U) /**< \brief (USART1) Transmit Pointer Register */
#define REG_USART1_TCR (*(RwReg*)0x4009410CU) /**< \brief (USART1) Transmit Counter Register */
#define REG_USART1_RNPR (*(RwReg*)0x40094110U) /**< \brief (USART1) Receive Next Pointer Register */
#define REG_USART1_RNCR (*(RwReg*)0x40094114U) /**< \brief (USART1) Receive Next Counter Register */
#define REG_USART1_TNPR (*(RwReg*)0x40094118U) /**< \brief (USART1) Transmit Next Pointer Register */
#define REG_USART1_TNCR (*(RwReg*)0x4009411CU) /**< \brief (USART1) Transmit Next Counter Register */
#define REG_USART1_PTCR (*(WoReg*)0x40094120U) /**< \brief (USART1) Transfer Control Register */
#define REG_USART1_PTSR (*(RoReg*)0x40094124U) /**< \brief (USART1) Transfer Status Register */
#endif /* __ASSEMBLY__ */

#endif /* _SAM3U_USART1_INSTANCE_ */
