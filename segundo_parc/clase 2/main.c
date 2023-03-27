/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-24
 *
 * @copyright Copyright (c) 2023
 * busqueda binaria
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define true 1
#define false 0

void burbujazo(int arr[], int tam);

int main()
{
    int arreglo [30];
    srand(time(NULL));
    for (int i = 0; i < 30; i++)
    {
        arreglo[i] = rand() % 100;
        printf("%d, ", arreglo[i]);

    }
    



    return 0;
}

void burbujazo(int arr[], int tam)
{
    int intercambio = false, aux;
    for (int i = 0; i < tam; i++)
    {
        intercambio = false;
        for (int j = 0; j < tam - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
                intercambio = true;
            }
        }
        if(!intercambio)break;
    }
}