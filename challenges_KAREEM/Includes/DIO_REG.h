/*
 * DIO_REG.h
 *
 * Created: 2/19/2019 4:44:17 PM
 *  Author: AVE-LAP-095
 */ 


#ifndef DIO_REG_H_
#define DIO_REG_H_
/*************************/ /* DIO Registers Addresses */ /*****************************************/

#define PORT_A *((volatile uint8*) 0x3B)
#define PORT_B *((volatile uint8*) 0X38)
#define PORT_C *((volatile uint8*) 0X35)
#define PORT_D *((volatile uint8*) 0X32)

#define DDR_A *((volatile uint8*) 0X3A)
#define DDR_B *((volatile uint8*) 0X37)
#define DDR_C *((volatile uint8*) 0X34)
#define DDR_D *((volatile uint8*) 0X31)

#define PIN_A *((volatile uint8*) 0X39)
#define PIN_B *((volatile uint8*) 0X36)
#define PIN_C *((volatile uint8*) 0X33)
#define PIN_D *((volatile uint8*) 0X30)





#endif /* DIO_REG_H_ */