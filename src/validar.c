/*
 * validar.c
 *
 *  Created on: 8 sep. 2022
 *      Author: Lenovo
 */
#include <stdio.h>
#include <stdlib.h>

void validarCelsius (float valorTemperatura)
{
	if(valorTemperatura > 0 && valorTemperatura < 100)
	{
		printf("\nEsta entre el punto de congelacion [0°C] y el punto de ebullicion [100°C]");
	}
	else
	{
		printf("\ERROR. Ingresaste una temperatura que sobrepasa los puntos de ebullicion [0°C] o de congelacion [100°C]");
	}
}

void validarFahrenheit (float valorTemperatura)
{
	if(valorTemperatura > 32 && valorTemperatura < 212)
	{
		printf("\nEsta entre el punto de congelacion [32°F] y el punto de ebullicion [212°F]");
	}
	else
	{
		printf("\nERROR. Ingresaste una temperatura que sobrepasa los puntos de ebullicion [32°F] o de congelacion [212°F]");
	}

}


