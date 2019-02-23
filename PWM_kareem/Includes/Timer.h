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


/*************************/ /* Timer 0 and 1 Registers Addresses */ /*****************************************/
#define TCCR0  *((volatile uint8*) 0x53)
#define TCNT0  *((volatile uint8*) 0x52)
#define TIFR  *((volatile uint8*) 0x58)
#define TIMSK *((volatile uint8*) 0x59)
#define OCR0  *((volatile uint8*) 0x5C)
#define TCCR1A *((volatile uint8*) 0x4F)
#define TCCR1B *((volatile uint8*) 0x4E)
#define TCNT1H *((volatile uint8*) 0x4D)
#define TCNT1L *((volatile uint8*) 0x4C)
#define OCR1AH *((volatile uint8*) 0x4B)
#define OCR1AL *((volatile uint8*) 0x4A)
#define OCR1BH *((volatile uint8*) 0x49)
#define OCR1BL *((volatile uint8*) 0x48)
#define ICR1H  *((volatile uint8*) 0x47)
#define ICR1L  *((volatile uint8*) 0x46)

/*************************/ /* Interrupt Registers Addresses */ /*****************************************/
#define SREG   *((volatile uint8*) 0x5F)
 
 /*************************/ /* Timer0 Flag Bits */ /*****************************************/
  #define TOV0 0U
 #define  OCF0 1U 
 #define  TIMER_CNTRL 0b00001011
 #define  TIMER_OCR_VAL 250U
 #define  OCIE0  (1U)
 #define  GINT_EN (7U)
 #define  TIMER0_COMP (10)
 #define  ONESEC  (500U)
 #define PWMOUT  (29U)
 #define TMR1_TOP (0U)
 #define TMR1_LOW (191U)
 #define TOP_VAL (6000U)

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
	
/***************************************************************************************/
/* Description! intialization of timer0                                                */
/* Input      ! Nothing                                                                */
/* Output     ! Nothing                                                                */
/***************************************************************************************/
void timer1_init(uint8 );	




#endif /* TIMER_H_ */