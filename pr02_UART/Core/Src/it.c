/*
 * it.c
 *
 *  Created on: May 1, 2025
 *      Author: Mmoha
 */

void SysTick_Handler (void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();
}
