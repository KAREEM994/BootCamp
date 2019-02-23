/*
 * Keypad.c
 *
 * Created: 2/18/2019 2:52:51 PM
 *  Author: AVE-LAP-095
 */ 
#include "../Includes/Keypad.h"
void Keypad_init(void){
	DIO_SetPinDirection(Keypad_row1,input);
	DIO_WritePin(Keypad_row1,High); /* internal Pull UP */
	DIO_SetPinDirection(Keypad_row2,input);
	DIO_WritePin(Keypad_row2,High); /* internal Pull UP */
	DIO_SetPinDirection(Keypad_row3,input);
	DIO_WritePin(Keypad_row3,High); /* internal Pull UP */
	DIO_SetPinDirection(Keypad_column1,output);
	DIO_SetPinDirection(Keypad_column2,output);
	DIO_SetPinDirection(Keypad_column3,output);
	DIO_WritePin(Keypad_column1,High);
	DIO_WritePin(Keypad_column2,High);
	DIO_WritePin(Keypad_column3,High);

	
	
	
}
uint8 Keypad_getPressedKey(void){

		for(uint8 i = INIT_VALUE;i<Columnums ; i++){
	        DIO_WritePin(Keypad_column1,High);
	        DIO_WritePin(Keypad_column2,High);
	        DIO_WritePin(Keypad_column3,High);
			DIO_WritePin(Keypad_column1+i,Low); 
			for(uint8 j = INIT_VALUE ; j<Rownums ; j++){
					if(!DIO_ReadPin(Keypad_row1+j)){
						return (j*Columnums+One+i) ;
					}

				}
			}
			return OUT_KEYPAD;
	
}