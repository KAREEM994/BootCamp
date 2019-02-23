/*
 * LCD.c
 *
 * Created: 2/19/2019 11:42:10 AM
 *  Author: AVE-LAP-095
 */ 
#include "../Includes/LCD.h"
//#include "../Includes/Timer.h"
#define  F_CPU  8000000
#include <util/delay.h>
/***************************************************************************************/
/********************************** Function Definition ********************************/
/***************************************************************************************/
void LCD_sendCommand(uint8 LCD_command){

	    /* delay between  Commands */
		_delay_ms(TWO_MS);
		/* make RS = 0 to send command */
		DIO_WritePin(LCD_RS,Low);
		/* make RW = 0 to send command */
		DIO_WritePin(LCD_RW,Low);
		/* Send Highest Nipple First */
		/*LCD_PORT=(LCD_PORT & 0x0f)|(LCD_command & 0xf0);*/
		DIO_WritePin(LCD_D4,((Get_Bit(LCD_command,BitN4))));
		DIO_WritePin(LCD_D5,((Get_Bit(LCD_command,BitN5))));
		DIO_WritePin(LCD_D6,((Get_Bit(LCD_command,BitN6))));
		DIO_WritePin(LCD_D7,((Get_Bit(LCD_command,BitN7))));
		
		/* send High to Low Pulse for Enable to send First Nipple */
		DIO_WritePin(LCD_E,High);
		_delay_ms(TWO_MS);
		DIO_WritePin(LCD_E,Low);
		_delay_ms(TWO_MS);
		/* Send Lowest Nipple Second */
		/*LCD_PORT=(LCD_PORT & 0x0f)|((LCD_command)<<4);*/
		DIO_WritePin(LCD_D4,((Get_Bit(LCD_command,BitN0))));
		DIO_WritePin(LCD_D5,((Get_Bit(LCD_command,BitN1))));
		DIO_WritePin(LCD_D6,((Get_Bit(LCD_command,BitN2))));
		DIO_WritePin(LCD_D7,((Get_Bit(LCD_command,BitN3))));			
		/* send High to Low Pulse for Enable to send Second Nipple */
		DIO_WritePin(LCD_E,High);
		_delay_ms(TWO_MS);
		DIO_WritePin(LCD_E,Low);
		_delay_ms(TWO_MS);
			
		
		
}

void LCD_init(void){
	/* make Directions of pins as output */
	DIO_SetPinDirection(LCD_RS,output);
	DIO_SetPinDirection(LCD_RW,output);
	DIO_SetPinDirection(LCD_E,output);
	DIO_SetPinDirection(LCD_D4,output);
	DIO_SetPinDirection(LCD_D5,output);
	DIO_SetPinDirection(LCD_D6,output);
	DIO_SetPinDirection(LCD_D7,output);
   /* Wait 15ms for power up */
   _delay_ms(FIFTEEN_MS);
   /* Initialize LCD with 4bits */
   LCD_sendCommand(LCD_4BIT_1);
   _delay_ms(ONE_MS);
   LCD_sendCommand(LCD_4BIT_2);
   _delay_ms(ONE_MS);
   LCD_sendCommand(LCD_4bit_command);
   _delay_ms(ONE_MS);
   LCD_sendCommand(LCD_Cursorblinking_command);
   _delay_ms(ONE_MS);
   LCD_sendCommand(LCD_ClearDisplay_command);
   _delay_ms(ONE_MS);
   LCD_sendCommand(LCD_shiftCursorRight_command);
   _delay_ms(TEN_MS);
  
}

void LCD_displayChar(uint8 data){

	    /* delay between  Commands */	
		_delay_ms(TWO_MS);
		/* make RS = 1 to send Data */
		DIO_WritePin(LCD_RS,High);
		/* make RW = 0 to send Data */
		DIO_WritePin(LCD_RW,Low);
		/* Send Highest Nipple First */
		/*LCD_PORT=(LCD_PORT&0x0f)|(data & 0xF0);*/
		DIO_WritePin(LCD_D4,((Get_Bit(data,BitN4))));
		DIO_WritePin(LCD_D5,((Get_Bit(data,BitN5))));
		DIO_WritePin(LCD_D6,((Get_Bit(data,BitN6))));
		DIO_WritePin(LCD_D7,((Get_Bit(data,BitN7))));
		/* send High to Low Pulse for Enable to send First Nipple */
		DIO_WritePin(LCD_E,High);
		_delay_ms(TWO_MS);
		DIO_WritePin(LCD_E,Low);
		_delay_ms(TWO_MS);
		/* Send Lowest Nipple Second */
		/*LCD_PORT=(LCD_PORT&0x0f)|((data)<<4);*/
		DIO_WritePin(LCD_D4,((Get_Bit(data,BitN0))));
		DIO_WritePin(LCD_D5,((Get_Bit(data,BitN1))));
		DIO_WritePin(LCD_D6,((Get_Bit(data,BitN2))));
		DIO_WritePin(LCD_D7,((Get_Bit(data,BitN3))));
		/* send High to Low Pulse for Enable to send Second Nipple */
		DIO_WritePin(LCD_E,High);
		_delay_ms(TWO_MS);
		DIO_WritePin(LCD_E,Low);			
	
}

void LCD_displayString(uint8* string){
	
	while(*string!=NUll){
		LCD_displayChar(*string);
		string++;
		
	}
}

void LCD_clear(void){
	LCD_sendCommand(LCD_CMD_CLEAR);
}

void LCD_gotoRowColumn(uint8 row , uint8 column){
	if(row==ONE_LINE){
	LCD_sendCommand(LCD_FIRST_LINE+column);
	}
	else if(row==TWO_LINE){
	LCD_sendCommand(LCD_SECOND_LINE+column);	
	}
	_delay_ms(TWO_MS);
}

void LCD_displayStringRowColumn(uint8 string[],uint8 Row,uint8 Column){
	LCD_gotoRowColumn(Row,Column);
	LCD_displayString(string);
}

