/*
 * mlx90316_NUCLEO_port.h
 *
 *  Created on: Apr 21, 2022
 *      Author: Andrea García
 */

#ifndef INC_MLX90316_NUCLEO_PORT_H_
#define INC_MLX90316_NUCLEO_PORT_H_

#include "mlx90316.h"
#include "stm32f4xx_hal.h"

struct _HW_handlers  {
	SPI_HandleTypeDef hspi;
	TIM_HandleTypeDef htim;
};
typedef struct _HW_handlers nucleo_handlers_t; //

void Init_HW_Nucleo(nucleo_handlers_t handlers);
void Cs_Nucleo(cs_t cs_val);
void W_Spi_Nucleo(uint8_t spi_byte);
void WR_Spi_Nucleo(uint8_t spi_byte, char rx);
void FrameTiming_Nucleo(uint32_t timing);
void Delay_ms_Nucleo(uint32_t ms);

#endif /* INC_MLX90316_NUCLEO_PORT_H_ */
