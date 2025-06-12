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
void Error_handler(void);

// Global Variable
UART_HandleTypeDef huart2;

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

void UART2_Init(void)
{
	huart2.Instance = USART2;
	huart2.Init.BaudRate = 115200U;
	huart2.Init.WordLength = UART_WORDLENGTH_8B;
	huart2.Init.StopBits = UART_STOPBITS_1;
	huart2.Init.Parity = UART_PARITY_NONE;
	huart2.Init.Mode = UART_MODE_TX_RX;
	huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	if ( HAL_UART_Init(&huart2) != HAL_OK )
	{
		Error_handler();
	}
}

void Error_handler(void)
{
	while(1)
	{

	}
}
