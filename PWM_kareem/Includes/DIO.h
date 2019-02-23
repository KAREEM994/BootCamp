/*
 * DIO.h
 *
 * Created: 2/13/2019 2:14:41 PM
 *  Author: AVE-LAP-095
 */ 


#ifndef DIO_H_
#define DIO_H_
#include "Types.h"
#include "BitwiseOperations.h"
/************************define some macros*************************************/
#define  DIO_PORTA_PIN0 (0U)
#define  DIO_PORTA_PIN7 (7U)
#define  DIO_PORTB_PIN0 (8U)
#define  DIO_PORTB_PIN7 (15U)
#define  DIO_PORTC_PIN0 (16U)
#define  DIO_PORTC_PIN7 (23U)
#define  DIO_PORTD_PIN0 (24U)
#define  DIO_PORTD_PIN7 (31U)
 

/***************************************************************************************/
/********************************** Function Definition ********************************/
/***************************************************************************************/

/***************************************************************************************/
/* Description! Writing in specific pin in DIO ports                                   */
/* Input      ! Pin_num , pin value (High or Low)                                      */
/* Output     ! Nothing                                                                */
/***************************************************************************************/

void DIO_WritePin(uint8 PinNum,uint8 PinValue);

/***************************************************************************************/
/* Description! Reading from specific pin in DIO ports                                 */
/* Input      ! Pin num                                                                */
/* Output     ! status of pin (High or Low)                                            */
/***************************************************************************************/

uint8 DIO_ReadPin(uint8 PinNum);

/***************************************************************************************/
/* Description! define if pin will be used as input or output                          */
/* Input      ! pin num , and pin direction (input or output)                          */
/* Output     ! Nothing                                                                */
/***************************************************************************************/
void DIO_SetPinDirection(uint8 PinNum,uint8 PinDirection);














#endif /* DIO_H_ */