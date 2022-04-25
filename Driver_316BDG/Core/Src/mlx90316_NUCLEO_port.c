/*
 * mlx90316_NUCLEO_port.c
 *
 *  Created on: Apr 21, 2022
 *      Author: andrea
 */

#include "mlx90316_NUCLEO_port.h"

const uint8_t H1 = 0xAA;
const uint8_t H2 = 0xFF;

//static void MX_SPI1_Init(void);
//static void MX_SPI1_Init(void)
//{
//
//	/* USER CODE BEGIN SPI1_Init 0 */
//
//	/* USER CODE END SPI1_Init 0 */
//
//	/* USER CODE BEGIN SPI1_Init 1 */
//
//	/* USER CODE END SPI1_Init 1 */
//	/* SPI1 parameter configuration*/
//	hspi1.Instance = SPI1;
//	hspi1.Init.Mode = SPI_MODE_MASTER;
//	hspi1.Init.Direction = SPI_DIRECTION_2LINES;
//	hspi1.Init.DataSize = SPI_DATASIZE_8BIT;
//	hspi1.Init.CLKPolarity = SPI_POLARITY_LOW;
//	hspi1.Init.CLKPhase = SPI_PHASE_1EDGE;
//	hspi1.Init.NSS = SPI_NSS_SOFT;
//	hspi1.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_64;
//	hspi1.Init.FirstBit = SPI_FIRSTBIT_MSB;
//	hspi1.Init.TIMode = SPI_TIMODE_DISABLE;
//	hspi1.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
//	hspi1.Init.CRCPolynomial = 10;
//	if (HAL_SPI_Init(&hspi1) != HAL_OK)
//	{
//		Error_Handler();
//	}
//}

void Cs_Nucleo(csCtrl_t cs_stt)
{
	switch(cs_stt)
	{

	case CS_RESET:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, cs_stt);
		break;
	case CS_SET:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, cs_stt);
		break;

	default:
		;
	}
}

void Spi_Read2Nucleo(void)
{
//	HAL_Init();
//	MX_SPI1_Init();
//	Cs_Nucleo(0);
//	HAL_Delay(2);
//	HAL_SPI_Transmit(&hspi1,(uint8_t *)&H1,1,100);
//	HAL_SPI_Transmit(&hspi1,(uint8_t *)&H2,1,100);
//	for (uint8_t i=0;i<8;i++)
//	{
//		HAL_SPI_Transmit(&hspi1,(uint8_t *)&H2,1,100);
//	}
//	HAL_SPI_Receive(&hspi1,(uint8_t *)&spi_buffer,10,100);
}
