/**
 * @file clase_2.c
 * @author Ramirez Aguilar Victor Sau (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main()
{

    //putc('a',stdout);
    //putc('A',stdout); imprime la pantalla la letra a
    //char a;
    //puts("porfavor, presiona una tecla y despues enter:");
    //char cadena[10];
    //fgets(cadena, 10, stdin);
    //puts(cadena);
    int edad;
    int ao;
    int semestre;
    printf("favor de introucir tu edad\n");
    scanf("%d", &edad);
    edad = edad + 20;
    printf("dentro de 20 años vas a tener  %d\n", edad);

    printf ("ahora escirba su semestre en formato AA-S\n");
    scanf("%d-%d",&ao,&semestre);
    printf("ao: %d, semestre %i\n",ao,semestre);
    return 0;
}