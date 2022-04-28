/**
 * @file mlx90316_NUCLEO_port.c
 * @author Andrea García
 * @brief mlx90316_NUCLEO_port.c file in charge of interacting with the NUCLEO F429ZI board and the MLX90316 driver.
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "mlx90316_NUCLEO_port.h"

// Punteros a handlers requeridos para la gestión de comunicación SPI y TIMER.
static SPI_HandleTypeDef* hspi1;
static TIM_HandleTypeDef* htim1;

/**
 * @brief Init_Handler: Define los handlers necesarios para trabajar en otras funciones del presente fichero.
 * 
 * @param hspi Puntero al handler de la comunicación SPI.
 * @param htim Puntero al handler del TIMER.
 */
void Init_Handler(SPI_HandleTypeDef * hspi, TIM_HandleTypeDef * htim)
{
	hspi1=hspi;
	htim1=htim;
}

/**
 * @brief Cs_Nucleo: Function that sets GPIO pin 15 high or low.
 * 
 * @param cs_val State to which the pin will be set.
 */
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

/**
 * @brief 
 * 
 * @param spi_byte 
 */
void W_Spi_Nucleo(uint8_t *spi_byte)
{
	HAL_SPI_Transmit(hspi1,spi_byte,1,100);
}

/**
 * @brief 
 * 
 * @param spi_byte 
 * @param rx 
 */
void WR_Spi_Nucleo(uint8_t* spi_byte, char *rx)
{
	HAL_SPI_TransmitReceive(hspi1,spi_byte,rx,1,100);
}

/**
 * @brief 
 * 
 * @param timing 
 */
void FrameTiming_Nucleo(uint32_t timing)
{
	__HAL_TIM_SET_COUNTER(htim1,0);  // set the counter value a 0
	while (__HAL_TIM_GET_COUNTER(htim1) < timing);  // wait for the counter to reach the us input in the parameter
}

/**
 * @brief 
 * 
 * @param ms 
 */
void Delay_ms_Nucleo(uint32_t ms)
{
	HAL_Delay(ms);
}
