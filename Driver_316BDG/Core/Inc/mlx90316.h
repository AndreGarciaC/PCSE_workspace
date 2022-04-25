/*
 * mlx90316.h
 *
 *  Created on: Apr 21, 2022
 *      Author: andrea
 */

#ifndef INC_MLX90316_H_
#define INC_MLX90316_H_

#include <stdint.h>
#include <stdio.h>

#define START_READ	 0xAA //First byte to initiate communication.
#define START_READ2	 0xFF //Second byte to initiate communication.

enum _csCtrl {
	CS_RESET=0,
	CS_SET};
typedef enum _csCtrl csCtrl_t;

/**
 * Functions prototypes
 */
void mlx90316_Init(void); //add structure of function used by the sensor
double mlx90316_getAngle( uint16_t _sample);
uint8_t mlx90316_isError(uint16_t _sample);


#endif /* INC_MLX90316_H_ */
