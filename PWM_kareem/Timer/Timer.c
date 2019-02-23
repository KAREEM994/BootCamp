/*
 * Timer.c
 *
 * Created: 2/14/2019 10:03:08 AM
 *  Author: kareem khaled
 */ 

#include "../Includes/Timer.h"
/* flag for counting ms */
uint8 volatile counts_ms =0 ;
extern uint8 volatile change_state ;
/***************************************************************************************/
/********************************** Function Definition ********************************/
/***************************************************************************************/

/***************************************************************************************/
/* Description! intialization of timer0                                                */
/* Input      ! Nothing                                                                */
/* Output     ! Nothing                                                                */
/***************************************************************************************/

void timer0_init(void){	
	/* enable Output Compare Match Interrupt Enable */
	TIMSK |=(ONE<<OCIE0)  ; 	
   /* Load OCR0 Value */
	OCR0=TIMER_OCR_VAL ;
	/* CTC mode , prescalar=64 */
	/* the counter counts 2msec */
	TCCR0=TIMER_CNTRL;
    /* enable Global interrupt */
	SREG=(ONE<<GINT_EN);
	

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
/* Description! timer1 PWM intialization                                               */
/* Input      ! Nothing                                                                */
/* Output     ! Nothing                                                                */
/***************************************************************************************/
void timer1_init(uint8 DutyCycle){
	ICR1H = TOP_VAL>>8;
	ICR1L = TOP_VAL;
	DIO_SetPinDirection(26,output);
	DIO_SetPinDirection(27,output);
	DIO_SetPinDirection(28,output);
	DIO_SetPinDirection(30,output);
	DIO_SetPinDirection(31,output);
	DIO_SetPinDirection(PWMOUT,output);
	OCR1AL = ((DutyCycle * (TOP_VAL+1))/100);
    OCR1AH = ((DutyCycle * (TOP_VAL+1))/100)>>8;
	
	TCCR1A=0b10100010 ;// COM1A NON INVERTED
	TCCR1B=0b00011010; //WGM =MODE5 , CLK=NO SCALAR
	
	
	
}

/***************************************************************************************/
/* Description! timer1 PWM                                                             */
/* Input      ! Nothing                                                                */
/* Output     ! Nothing                                                                */
/***************************************************************************************/

void timer1_pwm(void){

}


/***************************************************************************************/
/* Description! ISR Timer/Counter0 Compare Match                                                           */
/* Input      ! Nothing                                                   */
/* Output     ! Nothing                                                                */
/***************************************************************************************/
void __vector_10 (void){
	/* that means  it has been 2msec */
	counts_ms++;
	/* count_ms increases by ONE if it equals 500 it means ONE sec */
	if (counts_ms>ONESEC)
	{
		/* change the state as it has been 1 sec */
		change_state++;	
		/* reset flag to zero to start count 1 sec again */
		counts_ms=0;
	}
}