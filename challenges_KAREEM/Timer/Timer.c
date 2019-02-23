/*
 * Timer.c
 *
 * Created: 2/14/2019 10:03:08 AM
 *  Author: kareem khaled
 */ 

#include "../Includes/Timer.h"

/***************************************************************************************/
/********************************** Function Definition ********************************/
/***************************************************************************************/

/***************************************************************************************/
/* Description! intialization of timer0                                                */
/* Input      ! Nothing                                                                */
/* Output     ! Nothing                                                                */
/***************************************************************************************/

void timer0_init(void){	
   /* Load OCR0 Value */
	OCR0=TIMER_OCR_VAL ;
	/* CTC mode , prescalar=64 */
	/* the counter counts 2msec */
	TCCR0=TIMER_CNTRL;
	


}

/***************************************************************************************/
/* Description! timer0 Delay                                                           */
/* Input      ! time in miliseconds                                                    */
/* Output     ! Nothing                                                                */
/***************************************************************************************/

void timer0_delay(uint32 n){
    /* x will be counter for the loop */
	uint32 x = (n/Two) ; 
	for(int i =INIT_VALUE ; i<x ; i++){
    /* check of the flag and wait until it raises */
	while(!(Get_Bit(TIFR,OCF0)));
    /* clear flag */			 
	Set_Bit(TIFR,OCF0); 
	}

}

/***************************************************************************************/
/* Description! timer0 PWM                                                             */
/* Input      ! Nothing                                                                */
/* Output     ! Nothing                                                                */
/***************************************************************************************/

void timer0_pwm(void){
	while(!(Get_Bit(TIFR,TOV0)));	/* check of the flag and wait until it raises */
	Set_Bit(TIFR,OCF0); /* clear flag */		
}