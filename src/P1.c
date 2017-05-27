/*
 ============================================================================
 Name        : P1.c
 Author      : yo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"

int main(void) {
	uint16_t Suma;
	Suma = sumaint16(2,5);
	puts(Suma); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
