/*
 * BCDSevSegment.c
 *
 * Created: 2/18/2019 12:58:34 PM
 *  Author: AVE-LAP-095
 */ 
#include "../Includes/BCDSevSegment.h"

void BCDSevegments_enable (uint8 pin_num){
	DIO_SetPinDirection(Enable1,output);
	DIO_SetPinDirection(Enable2,output);
	DIO_SetPinDirection(Enable3,output);
	DIO_SetPinDirection(Enable4,output);
	
	switch (pin_num)
	{
		case 1:
		DIO_WritePin(Enable1,High);
		
		break;
		case 2 :
		DIO_WritePin(Enable2,High);
		
		break;
		case 3 :
		DIO_WritePin(Enable3,High);
		
		break;
		case 4 :
		DIO_WritePin(Enable4,High);
		
		break;
        default:
		break;		
	}
		
}

void BCDSevegments_disable(uint8 pin_num){
	DIO_SetPinDirection(Enable1,output);
	DIO_SetPinDirection(Enable2,output);
	DIO_SetPinDirection(Enable3,output);
	DIO_SetPinDirection(Enable4,output);


	
	switch (pin_num)
	{
		case 1:
		DIO_WritePin(Enable1,Low);
		
		break;
		case 2 :
		DIO_WritePin(Enable2,Low);
		
		break;
		case 3 :
		DIO_WritePin(Enable3,Low);
		
		break;
		case 4 :
		DIO_WritePin(Enable4,Low);
		
		break;
		default:
		break;
	}
		
}

void BCDSevegments_displayNo(uint8 num ){
	DIO_SetPinDirection(seg_A,output);
	DIO_SetPinDirection(seg_B,output);
	DIO_SetPinDirection(seg_C,output);
	DIO_SetPinDirection(seg_D,output);
	switch(num){
		case 0:
		DIO_WritePin(seg_A,Low);
		DIO_WritePin(seg_B,Low);
		DIO_WritePin(seg_C,Low);
		DIO_WritePin(seg_D,Low);
		
		break;
		case 1:
		DIO_WritePin(seg_A,High);
		DIO_WritePin(seg_B,Low);
		DIO_WritePin(seg_C,Low);
		DIO_WritePin(seg_D,Low);
		break;
		case 2:
		DIO_WritePin(seg_A,Low);
		DIO_WritePin(seg_B,High);
		DIO_WritePin(seg_C,Low);
		DIO_WritePin(seg_D,Low);
		break;
		case 3:
		DIO_WritePin(seg_A,High);
		DIO_WritePin(seg_B,High);
		DIO_WritePin(seg_C,Low);
		DIO_WritePin(seg_D,Low);
		break;
		case 4:
		DIO_WritePin(seg_A,Low);
		DIO_WritePin(seg_B,Low);
		DIO_WritePin(seg_C,High);
		DIO_WritePin(seg_D,Low);
		break;
		case 5:
		DIO_WritePin(seg_A,High);
		DIO_WritePin(seg_B,Low);
		DIO_WritePin(seg_C,High);
		DIO_WritePin(seg_D,Low);
		break;
		case 6:
		DIO_WritePin(seg_A,Low);
		DIO_WritePin(seg_B,High);
		DIO_WritePin(seg_C,High);
		DIO_WritePin(seg_D,Low);		
		break;
		case 7:
		DIO_WritePin(seg_A,High);
		DIO_WritePin(seg_B,High);
		DIO_WritePin(seg_C,High);
		DIO_WritePin(seg_D,Low);
		break;
		case 8:
		DIO_WritePin(seg_A,Low);
		DIO_WritePin(seg_B,Low);
		DIO_WritePin(seg_C,Low);
		DIO_WritePin(seg_D,High);
		break;
		case 9:
		DIO_WritePin(seg_A,High);
		DIO_WritePin(seg_B,Low);
		DIO_WritePin(seg_C,Low);
		DIO_WritePin(seg_D,High);
		break;
		default: 
		/* do nothing */
		break;	
	
	}
	
	
}