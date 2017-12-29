/**
 ******************************************************************************
 * @file    main.c
 * @author  Ac6
 * @version V1.0
 * @date    01-December-2013
 * @brief   Default main function.
 ******************************************************************************
 */

#include "stm32f4xx.h"
#include "stm32f4xx_nucleo.h"
#include "stm32f4xx_hal_gpio.h"

//prototypes
void setupHAL();
void ledInit();
void testLEDBlinker();

int main(void) {

	setupHAL();
	ledInit();
	testLEDBlinker();

	for (;;)
		;
}

/*
 * setupHAL
 *
 * This function sets up the main HAL system stuff
 */
void setupHAL() {
	HAL_Init();
}

/*
 * ledInit
 *
 * This function sets up the user LED2
 */
void ledInit() {
	GPIO_InitTypeDef ledAInit;

	ledAInit.Pin = GPIO_PIN_5;
	ledAInit.Mode = GPIO_MODE_OUTPUT_PP;
	ledAInit.Speed = GPIO_SPEED_FREQ_LOW;
	ledAInit.Pull = GPIO_NOPULL;

	__HAL_RCC_GPIOA_CLK_ENABLE(); //why?

	HAL_GPIO_Init(GPIOA, &ledAInit);

}

/*
 * testLEDBLinker
 *
 * blinks the user LED2, call ledInit first
 */
void testLEDBlinker() {
	//loop forever
	while (1) {
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);

		//garbage delay
		for (uint32_t ii = 0; ii < 100000; ii++)
			;
	}
}
