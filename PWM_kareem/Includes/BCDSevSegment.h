/*
 * BCDSevSegment.h
 *
 * Created: 2/18/2019 12:57:59 PM
 *  Author: AVE-LAP-095
 */ 


#ifndef BCDSEVSEGMENT_H_
#define BCDSEVSEGMENT_H_
#include "DIO.h"
#include "BCDSevSegment_cfg.h"

/*************************/ /* 7segments Functions Definitions */ /*****************************************/
void BCDSevegments_enable (uint8);
void BCDSevegments_disable(uint8);
void BCDSevegments_displayNo(uint8);


 

#endif /* BCDSEVSEGMENT_H_ */