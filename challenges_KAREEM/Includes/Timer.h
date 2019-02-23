/*
 * Timer.h
 *
 * Created: 2/14/2019 9:51:47 AM
 *  Author: kareem khaled
 */ 


#ifndef TIMER_H_
#define TIMER_H_
#include "Types.h"
#include "BitwiseOperations.h"

/* #define CTCMode */
#define PWMMode 0


/*************************/ /* Timer0 Registers Addresses */ /*****************************************/
#define TCCR0  *((volatile uint8*) 0x53)
#define TCNT0  *((volatile uint8*) 0x52)
#define TIFR  *((volatile uint8*) 0x58)
#define TIMSK *((volatile uint8*) 0x59)
 #define OCR0  *((volatile uint8*) 0x5C)
 
 
 /*************************/ /* Timer0 Flag Bits */ /*****************************************/
  #define TOV0 0U
 #define  OCF0 1U 
 #define  TIMER_CNTRL 0b00001011
 #define  TIMER_OCR_VAL 250U

/*************************/ /* Timer0 Functions Declerations */ /*****************************************/

/***************************************************************************************/
/* Description! intialization of timer0                                                */
/* Input      ! Nothing                                                                */
/* Output     ! Nothing                                                                */
/***************************************************************************************/
void timer0_init(void);

/***************************************************************************************/
/* Description! timer0 Delay                                                           */
/* Input      ! time in miliseconds                                                    */
/* Output     ! Nothing                                                                */
/***************************************************************************************/
void timer0_delay(uint32 n);
	
/***************************************************************************************/
/* Description! timer0 pwm                                                             */
/* Input      ! Nothing                                                                */
/* Output     ! Nothing                                                                */
/***************************************************************************************/	
void timer0_pwm(void);	
	

	




#endif /* TIMER_H_ */