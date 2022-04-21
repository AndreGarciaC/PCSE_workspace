/*
 * mlx90316.h
 *
 *  Created on: Apr 21, 2022
 *      Author: andrea
 */

#ifndef INC_MLX90316_H_
#define INC_MLX90316_H_

const uint8_t START_READ = 0xAA;
const uint8_t START_READ2 = 0xFF;

enum _csCtrl {
	CS_RESET=0,
	CS_SET};
typedef enum _csCtrl csCtrl_t;

/**
 * typedefs para simplificar la lectura, puntero a funcion
 */
typedef void (*csControl_t)(csCtrl_t);
typedef uint16_t (*spiRead_t)(void);
typedef void (*delayMs_t)(int32_t);


/**
 * Estructura simple con punteros a funciones para separar la capa mas baja del driver
 */

struct _malx90316  {
	csControl_t chip_select_ctrl;
	spiRead_t spi_read_fnc;
	delay1ms_t delay_1ms_func;

};



getpos
isconnected
reset
initdriver

#endif /* INC_MLX90316_H_ */
