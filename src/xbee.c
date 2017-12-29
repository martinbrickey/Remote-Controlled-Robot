/*
 * xbee.c
 *
 *  Created on: Dec 28, 2017
 *      Author: Martin Rickey
 *
 *  This module is for interfacing with the xbee communication device
 */

//includes
#include "xbee.h"
#include "stdlib.h"

//private prototypes
static void xbeeHwInit();
static uint8_t xbeeConnectionInit();

//public functions

/*
 * xbeeInit
 *
 * This function initializes the xbee, it sets up the hardware and initializes the connection
 */
uint8_t xbeeInit(){

	uint8_t rtnVal = EXIT_FAILURE; //value to be returned

	xbeeHwInit();
	rtnVal = xbeeConnectionInit();

	return rtnVal;
}

/*
 * sendChar
 *
 * @param c: this is the charachter to be sent
 *
 * This function transmits a single charachter over the xbee network
 *
 */
void sendChar(char c){

}


//private funcitons
/*
 * xbeeHwInit
 *
 * This funciton sets up the harware uart for talking to the xbee
 *
 */
static void xbeeHwInit(){

}

/*
 * xbeeConnextionInit
 *
 * This function intialises the communications with the xbee
 */
static uint8_t xbeeConnectionInit(){

	return EXIT_SUCCESS;
}

