/*
 * EXTINT.h
 *
 * Created: 2/22/2019 11:24:54 PM
 *  Author: AVE-LAP-095
 */ 


#ifndef EXTINT_H_
#define EXTINT_H_
#include "Types.h"
#include "BitwiseOperations.h"

 /*************************/ /* External interrupt address registers */ /*****************************************/

#define GICR *((volatile uint8*) 0x5B)
#define GIFR *((volatile uint8*) 0x5A)
#define SREG *((volatile uint8*) 0x5F)
#define MCUCR *((volatile uint8*) 0x55)
#define MCUCSR *((volatile uint8*) 0x54)

 /*************************/ /* External interrupt Flag Bits */ /*****************************************/
#define  ISC00  (0U)
#define  ISC01  (1U)
#define  EXT0_PIN  (26U)
#define  EINT0_EN (6U)
#define  STOP_MODE (2U)
 #define  GINT_EN (7U)
/***************************************************************************************/
/********************************** Function Definition ********************************/
/***************************************************************************************/
void ExtInt_init (void) ;



         




#endif /* EXTINT_H_ */