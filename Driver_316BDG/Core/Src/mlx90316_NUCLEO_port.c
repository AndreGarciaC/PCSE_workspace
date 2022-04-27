/*
 * mlx90316_NUCLEO_port.c
 *
 *  Created on: Apr 21, 2022
 *      Author: Andrea García
 */

#include "mlx90316_NUCLEO_port.h"

static nucleo_handlers_t nucleo_hdlrs;

void Init_HW_Nucleo(nucleo_handlers_t handlers)
{
	nucleo_hdlrs.hspi = handlers.hspi;
	nucleo_hdlrs.htim = handlers.htim;
}

void Cs_Nucleo(cs_t cs_val)
{
	switch(cs_val)
	{

	case CS_RESET:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, cs_val);
		break;
	case CS_SET:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, cs_val);
		break;

	default:
		;
	}
}

void W_Spi_Nucleo(uint8_t spi_byte)
{
	HAL_SPI_Transmit(&nucleo_hdlrs.hspi,(uint8_t *)&spi_byte,1,100);
}

void WR_Spi_Nucleo(uint8_t spi_byte, char rx)
{
	HAL_SPI_TransmitReceive(&nucleo_hdlrs.hspi,(uint8_t *)&spi_byte,&rx,1,100);
}

void FrameTiming_Nucleo(uint32_t timing)
{
	__HAL_TIM_SET_COUNTER(&nucleo_hdlrs.htim,0);  // set the counter value a 0
	while (__HAL_TIM_GET_COUNTER(&nucleo_hdlrs.htim) < timing);  // wait for the counter to reach the us input in the parameter
}

void Delay_ms_Nucleo(uint32_t ms)
{
	HAL_Delay(ms);
}
