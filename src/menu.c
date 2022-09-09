/*
 * menu.c
 *
 *  Created on: 8 sep. 2022
 *      Author: Lenovo
 */
#include <stdio.h>
#include <stdlib.h>

int desplegarMenu(void)
{
	int opcion;

	printf("Ingrese la escala de temperatura que va a utilizar:"
			"\n1) Celsius"
			"\n2) Farenheit");
	scanf("%d", &opcion);

	while(opcion != 1 && opcion != 2)
	{
		printf("ERROR. Reingrese la escala de temperatura que va a utilizar:"
				"\n1) Celsius"
				"\n2) Farenheit");
		scanf("%d", &opcion);
	}

	return opcion;
}

