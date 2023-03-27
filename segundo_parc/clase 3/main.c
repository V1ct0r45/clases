/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief  EJEMPLO DE FUNCIONES PASO DE PARAMETROS, punteros
 * @version 0.1
 * @date 2023-03-27
 *
 * @copyright Copyright (c) 2023
 *
 */



#include <stdio.h>
#include "operaciones.h"



//inicio del programa
int main()
{
    int arr[3], a = 5, b = 7, c = sumaR(&a, &b); // el & devuelve el valor de la direccion de menoria

    printf("(%p) - (%p) - (%p)\n", &arr[1], &arr[2], &arr[3]);
    printf("la suma de (%p) %d mas  (%p) %d es igual a %d\n", &a, a, &b, b, c);
    return 0;
}
//fin del programa


