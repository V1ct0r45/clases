/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>
#define false 0
#define true 1

/**
 * @brief 
 * 
 * @param e 
 * @return int 
 */
int Digitos(int e);



int main()
{
    
    printf ("ingrese un numero entero \n");
    scanf("%d",&e);
    printf ("%d",e);

    return 0;
}

int Digitos(int e){
    int d = e,m = 0,cont=0;
    while (d>0)
    {
        d = d/10;
        m = m % 10;
        cont++;
    }
    return cont;
}





