/*
 * mlx90316.c
 *
 *  Created on: Apr 21, 2022
 *      Author: Andrea García
 */

#ifndef SRC_MLX90316_C_
#define SRC_MLX90316_C_

#include "mlx90316.h"

static mlx2Board mlx90316_Ctrl;

static uint8_t isError(uint16_t _sample)
{
	_sample = _sample&0x02;//analizo el 2do bit menos significativo
	_sample = _sample>>1;//corro uno para dejar solo segundo bit
	if(_sample==1)
	{
		return 1; //Error
	}
	else if(_sample ==0)
	{
		return 0; //No error
	}
}

static float computeAngle( uint16_t _sample)
{
	float ans;
	ans = (((float)_sample)*360.0)/16383.0;
	return ans;
}

void mlx90316_Init(void)
{
	mlx90316_Ctrl.csMlx(CS_SET); //profe crea estructura
	mlx90316_Ctrl.delay_msMlx(2);
}

float mlx90316_getAngle(uint16_t _sample)
{
	char Rx;
	char spi_buffer[8];
	uint16_t sample;
	mlx90316_Ctrl.csMlx(CS_RESET);
	mlx90316_Ctrl.fTimingMlx(1); //t6
	mlx90316_Ctrl.wspi(STARTCOM_B1);
	mlx90316_Ctrl.wspi(STARTCOM_B2);
	mlx90316_Ctrl.fTimingMlx(6);//t7
	for (uint8_t i=0;i<8;i++)
	{
		mlx90316_Ctrl.rwspi(STARTCOM_B2,Rx);
		spi_buffer[i]=Rx;
		mlx90316_Ctrl.fTimingMlx(3);//t2
	}
	mlx90316_Ctrl.csMlx(CS_SET);
	sample = spi_buffer[1]&0xFF; //por orden de llegada el segundo byte de datos lo trunco a 8 bits contiene el bit menos significativo.
	sample|= (spi_buffer[0]&0xFF) << 8; //tomo el primero y corro a la izquierda contiene el bit más sugnificativo. SOlo uno los dos bytes en uno de 16 bit.
	if(mlx90316_isError(sample)==0)
	{
		sample = sample>>2;
		float angle = (computeAngle(sample));
	}
	else
	{
		float angle = -1.0;
	}
}




#endif /* SRC_MLX90316_C_ */
