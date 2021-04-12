/*
 * BibliotecaMenu.h
 *
 *  Created on: 9 abr. 2021
 *      Author: ignacio Guillen
 */

#ifndef BIBLIOTECAMENU_H_
#define BIBLIOTECAMENU_H_


//int mostrarMenu(int punteroMenu);
/*
 * Brief: muestra un menu y le pide al usuar que operacion quiere realizar.
 * Par�metro: recibe como par�metro un puntero.
 * Return: retorna un int si funciona.
 */

int sumar(int* opUno,int* opDos);

int multiplicar(int* opUno,int* opDos);

int restar(int* opUno,int* opDos);

int dividir(int* flagValidez, int* x,int* y);

#endif /* BIBLIOTECAMENU_H_ */