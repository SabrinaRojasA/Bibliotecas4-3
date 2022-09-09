/*
 ============================================================================
Ejercicio 4-3: Realizar un programa que permita la carga de temperaturas en Celsius y
Fahrenheit, validando las temperaturas ingresadas estén entre el punto de congelación y de
ebullición del agua para cada tipo de escala. Las validaciones se hacen en una biblioteca. Las
funciones de conversión de Fahrenheit a Celsius y de Celsius a Fahrenheit se hacen en otra.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "validar.h"
#include "conversor.h"
#include "menu.h"


int main(void)
{
	setbuf(stdout, NULL);

	int menu;
	float temperatura;
	float conversor;

	menu = desplegarMenu();

	printf("\nIngrese la temperatura: ");
	scanf("%f", &temperatura);

	if(menu == 1)
	{
		validarCelsius(temperatura);
		conversor = convertirAfahrenheit(temperatura);

		printf(" \n%.2f Grados Celsius son %.2f Grados Fahrenheit. ", temperatura, conversor);
	}
	else
	{
		validarFahrenheit(temperatura);

		conversor = convertirAcelsius(temperatura);

		printf(" \n%.2f Grados Fahrenheit son %.2f Grados Celsius. ", temperatura, conversor);
	}

	return EXIT_SUCCESS;
}





