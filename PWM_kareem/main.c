/*
 * use_story_4.c
 *
 * Created: 2/13/2019 1:56:25 PM
 * Author:  kareem khaled
 */ 



#include "Includes/BCDSevSegment.h"
#include "Includes/Keypad.h"
#include "Includes/LCD.h"
#include "Includes/Timer.h"
#define F_CPU 1000000UL
#include <util/delay.h>
#define led0 12
#define led1 13
#define led2 14
#define led3 15
#define Button0 20 
#define Button1 10 
#define input 0 
#define output 1 
#define High 1
#define Low  0 

int main(void)
{
   /* intialize external interrupt */
   
   DIO_WritePin(26,High);
   DIO_WritePin(27,Low);
   DIO_WritePin(30,High);
   DIO_WritePin(31,Low);
   timer1_init(20);
    while (1) 
    {
	for(uint8 i =0 ; i<100 ; i++ ){		
    timer1_init(i);
    _delay_ms(Two);
	}
	for(uint8 i =100 ; i<0 ; i++ ){		
    timer1_init(i);
    _delay_ms(Two);
	}
	}
		return 0;

}