/*
 * utn.h
 *
 *  Created on: 17 abr. 2021
 *      Author: ignac
 */

#ifndef UTN_H_
#define UTN_H_


/*
 * Brief: muestra un menu con 5 opciones y le pide al usuario que operacion quiere realizar.
 * Parámetro retorno: recibe como parámetro un puntero. Recibe [0] para inicializar [1] para terminar.
 * flagFunciona: flag que indica con [1] el exito de los calculos, y [0] si hubo error.
 * flagCalculos: flag que valida si se realizaron los calculos. [1] si se valido, [0] si no.
 * flagOperandos: flag que valida que se ingresaran los dos operandos.
 */
void mostrarMenu(int* retorno);

#endif /* UTN_H_ */
