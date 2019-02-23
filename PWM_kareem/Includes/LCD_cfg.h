/*
 * LCD_cfg.h
 *
 * Created: 2/19/2019 11:46:22 AM
 *  Author: AVE-LAP-095
 */ 


#ifndef LCD_CFG_H_
#define LCD_CFG_H_

#define LCD_RS 1U 
#define LCD_RW 2U
#define LCD_E  3U
#define LCD_Data_Port 'A'
#define LCD_4bit_command 0x28
#define LCD_Cursorblinking_command  0x0E
#define LCD_ClearDisplay_command 0x01
#define LCD_shiftCursorRight_command 0x06
#define LCD_CMD_CLEAR 0X01
#define LCD_FIRST_LINE   0X80
#define LCD_SECOND_LINE  0XC0
#define LCD_4BIT_1   0x33
#define LCD_4BIT_2   0x32
#define NUll '\0'

#define LCD_4bit 0U    /* Define LCD with 4 bits Data */
/* #define LCD_8bit 0U */  /* Define LCD with 8 bits Data */  

//#ifdef LCD_4bit
#define LCD_D4 4U  
#define LCD_D5 5U
#define LCD_D6 6U
#define LCD_D7 7U
//#endif

/*#ifdef LCD_8bit
#define LCD_D1
#define LCD_D2
#define LCD_D3
#define LCD_D4
#define LCD_D5
#define LCD_D6
#define LCD_D7
#define LCD_D8
#endif */

#endif /* LCD_CFG_H_ */