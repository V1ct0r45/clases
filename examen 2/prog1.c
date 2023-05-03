/**
 * @file prog1.c
 * @author Ramirez Aguilar Victor Saul (victors.ramireza@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-03
 * 
 * @copyright GPL V3
 * 
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * @brief funcion para eliminar un numero seleccionado del arreglo
 * 
 * @param arr  arreglo generado aleatoriamente
 * @param size tamaño del arreglo
 * @param n    numero seleccionado
 */
void eliminar(int *arr, int *size, int *n);

/**
 * @brief imprime el arreglo generado 
 * 
 * @param arr arreglo 
 * @param size tamaño del arreglo 
 */
void imprimir(int *arr, int *size);

int main() {
  int *alea, i, n, size = 8;

  alea = malloc(sizeof(int) * 8);
 
  srand(time(NULL));
  for (i = 0; i < size; i++) {
    alea[i] = rand() % 20 + 1;
  }

  
  imprimir(alea, &size);

  
  printf("que numero desea eliminar:");
  scanf("%d",&n);

  
  eliminar(alea, &size, &n);

  
  imprimir(alea, &size);

  free(alea);
  return 0;
}


void eliminar(int *arr, int *size, int *n){
  for(int i = 0; i < *size; i++){
    if(arr[i] == *n){
      for(int j = i; j < *(size - 1); j++){
        arr[j] = arr[j+1];
      }
      (*size)--;
      break;
    }

  }
}

    
void imprimir(int *arr, int *size){
  
  printf("Arreglo: [");
  for (int i = 0; i < *size; i++) {
    printf("%d", arr[i]);
    if (i != *size - 1) {
      printf(", ");
    }
  }
  printf("]\n");
}