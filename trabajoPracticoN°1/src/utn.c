/*
 * utn.c
 *
 *  Created on: 17 abr. 2021
 *      Author: ignac
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_Calculos.h"

void mostrarMenu(int* retorna)
	{
		setbuf(stdout, NULL);
		//VARIABLES LOCALES
		int opcionMenu= 0;//opciones de menu a elegir.
		//VARIABLES PARA LOS OPERANDOS
		int a=0;
		int b=0;
		//FLAGS
		int flagFunciona=0; //si da 0 entonces hay error, si retorna 1 funciona.
		int flagCalculos=0;//si el valor es 0, entonces no se realizaron los calculos, si es 1 si.
		int flagOperandoA;
		int flagOperandoB;
		int flagOperandos=0;
		//CALCULOS
		int resulSuma;
		int resulResta;
		float resulDiv;
		int resulMult;
		int resulFactorialUno;
		int resulFactorialDos;

		printf("ˇBienvenido a la Calculadora!");
		do{
			printf("\n1)Ingresar primer numero. \n2)Ingresar segundo numero. \n3)Calculos \n4)Informar resultados. \n5)Salir. \n");
			scanf("%d", &opcionMenu);
		switch(opcionMenu)
		{
		case 1:
			printf("ingrese el primer numero:\n");
			scanf("%d", &a);
			flagOperandoA=1;
			break;

		case 2:
			printf("ingrese el segundo numero:\n");
			scanf("%d", &b);
			flagOperandoB=1;
			break;

		case 3:
			flagOperandos= flagOperandoA + flagOperandoB;

			if(flagOperandos==2){
			//VALIDACIONES
			flagFunciona=sumar(a,b,&resulSuma);
			flagFunciona=restar(a,b,&resulResta);
			flagFunciona=multiplicar(a,b,&resulMult);
			flagFunciona=factorial(a,&resulFactorialUno);
			flagFunciona=factorial(b,&resulFactorialDos);
			flagFunciona=dividir(a,b,&resulDiv);

			if(flagFunciona)//Si la variable es 1, entonces las funciones estan bien. Caso contrario dara 0.
				{
					printf("Se han realizado los calculos con exito! \n");
				}else{
					printf("Error en los calculos.Reingresar datos! \n");
				}
			flagCalculos=1;
			}else{
				printf("Error!! Ingrese dos operandos para continuar.\n");
			}
			break;

		case 4:
			if(flagCalculos){
			printf("El resultado de A+B es: %d \n", resulSuma);
			printf("El resultado de A-B es: %d \n", resulResta);
			printf("El resultado de A*B es: %d \n", resulMult);

			if(flagFunciona==0){
				printf("No es posible dividir por cero \n");
			}else{
				printf("El resultado de A/B es: %f \n", resulDiv);
			}
			printf("El factorial de A es: %d \n", resulFactorialUno);
			printf("\n y El factorial de B es: %d \n", resulFactorialDos);
			}else{
				printf("Error!! Seleccione opcion 3 (Calculos) para informar resultados.\n");
			}
			break;

		case 5:
			printf("ˇGracias por utilizar la calculadora!");
			*retorna = 1;
			break;

		default:
			printf("Error.Reingrese una opcion: \n1)Ingresar primer numero. \n2)Ingresar segundo numero. \n3)Calculos \n4)Informar resultados. \n5)Salir.");
			scanf("%d", &opcionMenu);
			}
		}
		while(opcionMenu!=5);
	}
