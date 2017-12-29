/*
 * xbee.h
 *
 *  Created on: Dec 28, 2017
 *      Author: Martin
 */

#ifndef XBEE_H_
#define XBEE_H_

#include "stm32f4xx.h"

uint8_t xbeeInit();
void sendChar(char c);

#endif /* XBEE_H_ */
