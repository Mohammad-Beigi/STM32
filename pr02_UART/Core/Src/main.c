/*
 * main.c
 *
 *  Created on: May 1, 2025
 *      Author: Mmoha
 */

// Include
#include "stm32f1xx_hal.h"
#include "main.h"

// Function Declaration
void SystemClockConfig(void);
void UART2_Init(void);

// Global Variable


// Main Function
int main(void)
{
	HAL_Init();
	SystemClockConfig();

	return 0;
}

// Function Definitions
void SystemClockConfig(void)
{

}

void UART2_Init()
{

}
