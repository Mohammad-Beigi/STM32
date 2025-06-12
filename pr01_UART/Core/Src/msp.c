/*
 * msp.c
 *
 *  Created on: May 1, 2025
 *      Author: Mmoha
 */

#include "stm32f1xx_hal.h"

void HAL_MspInit(void)
{
	// low level processor specific initialization
	// 1. Set up the priority grouping
	HAL_NVIC_SetPriorityGrouping(NVIC_PRIORITYGROUP_4);

	// 2. Enable the required system exceptions
	SCB->SHCSR = 0x7 << 16;		// usage fault, bus fault, mem fault

	// 3. Configure the priority for the system exceptions
	HAL_NVIC_SetPriority(MemoryManagement_IRQn,0,0);
	HAL_NVIC_SetPriority(BusFault_IRQn,0,0);
	HAL_NVIC_SetPriority(UsageFault_IRQn,0,0);
}
