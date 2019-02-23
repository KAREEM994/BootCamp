/*
 * LCD.h
 *
 * Created: 2/19/2019 11:44:04 AM
 *  Author: AVE-LAP-095
 */ 


#ifndef LCD_H_
#define LCD_H_
#include "DIO.h"
#include "LCD_cfg.h"

void LCD_init(void);
void LCD_sendCommand(uint8);
void LCD_displayChar(uint8);
void LCD_displayString(uint8*);
void LCD_displayStringRowColumn(uint8 string[],uint8 Row,uint8 Column);
void LCD_clear(void);
void LCD_gotoRowColumn(uint8 row , uint8 column);




#endif /* LCD_H_ */