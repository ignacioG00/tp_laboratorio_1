/*
 ============================================================================
 Name        : trabajoPracticoN�1.c
 Author      : Guillen ignacio
 Division	 : 1�E
 Copyright   : @GuillenIg00
 Description : Hacer una calculadora. Para ello el programa iniciar� y contar� con un men� de opciones:

1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) �El resultado de A+B es: r�
b) �El resultado de A-B es: r�
c) �El resultado de A/B es: r� o �No es posible dividir por cero�
d) �El resultado de A*B es: r�
e) �El factorial de A es: r1 y El factorial de B es: r2�
5. Salir
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "utn_Calculos.h"
#include "utn.h"


int main(void) {

	int* retorno = 0;

	do{
	mostrarMenu(&retorno);
	}
	while(*retorno!=1);

	return EXIT_SUCCESS;
}






