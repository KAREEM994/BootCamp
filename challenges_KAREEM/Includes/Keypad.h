/*
 * Keypad.h
 *
 * Created: 2/18/2019 2:52:27 PM
 *  Author: AVE-LAP-095
 */ 


#ifndef KEYPAD_H_
#define KEYPAD_H_
#include "DIO.h"
#include "Keypad_cfg.h"
void Keypad_init(void);
uint8 Keypad_getPressedKey(void);


#endif /* KEYPAD_H_ */