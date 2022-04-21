/*
 * mlx90316_NUCLEO_port.h
 *
 *  Created on: Apr 21, 2022
 *      Author: andrea
 */

#ifndef INC_MLX90316_NUCLEO_PORT_H_
#define INC_MLX90316_NUCLEO_PORT_H_

#include "mlx90316.h"

char spi_buffer[10];
SPI_HandleTypeDef hspi1;

void Cs_Nucleo(csCtrl_t cs_stt);
void Spi_Read2Nucleo(void);

#endif /* INC_MLX90316_NUCLEO_PORT_H_ */
