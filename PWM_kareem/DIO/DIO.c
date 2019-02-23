/*
 * DIO.c
 *
 * Created: 2/13/2019 2:46:06 PM
 *  Author: kareem khaled
 */ 
#include "../Includes/DIO.h"
#include "../Includes/DIO_REG.h"


/*************************/ /* DIO Functions Definitions */ /*****************************************/

/***************************************************************************************/
/* Description! Reading from specific pin in DIO ports                                 */
/* Input      ! Pin num                                                                */
/* Output     ! status of pin (High or Low)                                            */
/***************************************************************************************/

uint8 DIO_ReadPin(uint8 PinNum ){
	uint8 bit_num;
	/* PORTA */ 
	if((PinNum>=DIO_PORTA_PIN0) && (PinNum<=DIO_PORTA_PIN7)){
		bit_num = PinNum ;
		return (Get_Bit(PIN_A,bit_num));
	}
	/* PORTB */
	else if((PinNum>=DIO_PORTB_PIN0) && (PinNum<=DIO_PORTB_PIN7)){
		bit_num = PinNum-DIO_PORTB_PIN0 ;
		return (Get_Bit(PIN_B,bit_num));	
	}
	/* PORTC */
	
	else if((PinNum>=DIO_PORTC_PIN0) && (PinNum<=DIO_PORTC_PIN7)){
		bit_num = PinNum-DIO_PORTC_PIN0 ;
		return (Get_Bit(PIN_C,bit_num));			
	}
	/* PORTD */
	else if((PinNum>=DIO_PORTD_PIN0) && (PinNum<=DIO_PORTD_PIN7)){
		bit_num = PinNum-DIO_PORTD_PIN0 ;
		return (Get_Bit(PIN_D,bit_num));	
	}
}


/***************************************************************************************/
/* Description! define if pin will be used as input or output                          */
/* Input      ! pin num , and pin direction (input or output)                          */
/* Output     ! Nothing                                                                */
/***************************************************************************************/

void DIO_SetPinDirection(uint8 PinNum , uint8 PinDirection){
	uint8 bit_num ;
	/* PORTA */
	if((PinNum>=DIO_PORTA_PIN0) && (PinNum<=DIO_PORTA_PIN7)){
		bit_num = PinNum ;
		if(PinDirection){
			Set_Bit(DDR_A,bit_num);
		}
		else{
			Clear_Bit(DDR_A,bit_num);
			
		}
		
	}
	/* PORTB */ 
	else if((PinNum>=DIO_PORTB_PIN0) && (PinNum<=DIO_PORTB_PIN7)){
		bit_num = PinNum-DIO_PORTB_PIN0 ;
		if(PinDirection){
			Set_Bit(DDR_B,bit_num);
		}
		else{
			Clear_Bit(DDR_B,bit_num);
		}
		
		
		
	}
	/* PORTC */ 
	
	else if((PinNum>=DIO_PORTC_PIN0) && (PinNum<=DIO_PORTC_PIN7)){
		bit_num = PinNum-DIO_PORTC_PIN0 ;
		if(PinDirection){
			Set_Bit(DDR_C,bit_num);
		}
		else{
			Clear_Bit(DDR_C,bit_num);
			
		}
		
		
		
		
	}
	/* PORTD */
	else if((PinNum>=DIO_PORTD_PIN0) && (PinNum<=DIO_PORTD_PIN7)){
		bit_num = PinNum-DIO_PORTD_PIN0 ;
		if(PinDirection){
			Set_Bit(DDR_D,bit_num);
		}
		else{
			Clear_Bit(DDR_D,bit_num);
			
		}
	}
	
}

/***************************************************************************************/
/* Description! Writing in specific pin in DIO ports                                   */
/* Input      ! Pin_num , pin value (High or Low)                                      */
/* Output     ! Nothing                                                                */
/***************************************************************************************/

void DIO_WritePin(uint8 PinNum,uint8 PinValue){
	uint8 bit_num ;
	/* PORTA */
	if((PinNum>=DIO_PORTA_PIN0) && (PinNum<=DIO_PORTA_PIN7)){
		bit_num = PinNum ;
		if(PinValue){		
			Set_Bit(PORT_A,bit_num);			
		}
		else{
			Clear_Bit(PORT_A,bit_num);	
		}
	}
	/* PORTB */
	else if((PinNum>=DIO_PORTB_PIN0) && (PinNum<=DIO_PORTB_PIN7)){
		bit_num = PinNum-DIO_PORTB_PIN0 ;
		if(PinValue){
			Set_Bit(PORT_B,bit_num);
		}
		else{
			Clear_Bit(PORT_B,bit_num);	
		}
				
		
		
	}
	/* PORTC */
	
	else if((PinNum>=DIO_PORTC_PIN0) && (PinNum<=DIO_PORTC_PIN7)){
		bit_num = PinNum-DIO_PORTC_PIN0 ;
		if(PinValue){
			Set_Bit(PORT_C,bit_num);
		}
		else{
			Clear_Bit(PORT_C,bit_num);
			
		}
		
	}
	/* PORTD */
	else if((PinNum>=DIO_PORTD_PIN0) && (PinNum<=DIO_PORTD_PIN7)){
		bit_num = PinNum-DIO_PORTD_PIN0 ;
		if(PinValue){
			Set_Bit(PORT_D,bit_num);
		}
		else{
			Clear_Bit(PORT_D,bit_num);
			
		}
		}
}


	
	


