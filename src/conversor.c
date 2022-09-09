/*
 * conversor.c
 *
 *  Created on: 8 sep. 2022
 *      Author: Lenovo
 */
#include <stdio.h>
#include <stdlib.h>

float convertirAfahrenheit (float valorTemperatura)
{
	float resultadoFahrenheit;

	resultadoFahrenheit = valorTemperatura * 1.8 + 32;

	return resultadoFahrenheit;
}

float convertirAcelsius (float valorTemperatura)
{
	float resultadoCelsius;

	resultadoCelsius = (valorTemperatura-32) / 1.8;

	return resultadoCelsius;

}
