/*
 * Bitwise_Operations.h
 *
 * Created: 2/13/2019 10:54:34 AM
 *  Author: kareem khaled
 */ 
#ifndef __BITWISE_OPERATIONS_
#define __BITWISE_OPERATIONS_

#include "Types.h"
/* Macros Definitions */
#define input 0
#define output 1
#define High 1
#define Low  0
#define BitN0 0
#define BitN1 1
#define BitN2 2
#define BitN3 3
#define BitN4 4
#define BitN5 5
#define BitN6 6
#define BitN7 7
#define INIT_VALUE 0U
#define One 1U
#define Two 2U
#define ONE_LINE 1U
#define TWO_LINE 2U
#define Three 3U
#define ONE_MS 1U
#define TWO_MS 2U
#define THREE_MS 2U
#define FOUR_MS 2U
#define TEN_MS  10U
#define FIFTEEN_MS 15U
 
#define Set_Bit(Register,Bit)		((Register)|=(1U<<(uint8)(Bit)))

#define Clear_Bit(Register,Bit)		((Register)&=~(1U<<(uint8)(Bit)))

#define Get_Bit(Register,Bit)		(((Register)>>(uint8)(Bit))&1U)

#define Toggle_Bit(Register,Bit)	((Register)^=(uint8)(1U<<(Bit)))

#endif