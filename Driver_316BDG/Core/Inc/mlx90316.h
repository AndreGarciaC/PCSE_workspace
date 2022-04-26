/*
 * mlx90316.h
 *
 *  Created on: Apr 21, 2022
 *      Author: Andrea García
 */

#ifndef INC_MLX90316_H_
#define INC_MLX90316_H_

#include <stdint.h>
#include <stdio.h>

#define STARTCOM_B1	 0xAA //First byte to initiate communication.
#define STARTCOM_B2	 0xFF //Second byte to initiate communication.

enum _csLevels {
	CS_RESET=0,
	CS_SET};
typedef enum _csLevels cs_t;

typedef void (*csBoard_t)(cs_t); //funcion con argumento tipo cs_t
typedef void (*wspiBoard_t)(uint8_t); //funcion con argumento tipo cs_t
typedef void (*wrspiBoard_t)(uint8_t, char); //funcion con argumento tipo cs_t
typedef void (*frameTiming_t)(uint32_t); //funcion de delay en microsegundo
typedef void (*delay_ms_t)(uint32_t); //funcion de delay en milisegundos

struct _mlx90316  {
	csBoard_t csMlx;
	wspiBoard_t wspiMlx;
	frameTiming_t fTimingMlx;
	delay_ms_t delay_msMlx;
};
typedef struct _mlx90316 mlx2Board; //

/**
 * Functions prototypes
 */
void mlx90316_Init(void); //add structure of function used by the sensor
float mlx90316_getAngle( uint16_t _sample);


#endif /* INC_MLX90316_H_ */
