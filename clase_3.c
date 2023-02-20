/**
 * @file clase2.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-20
 * 
 * @copyright GPL v3
 * 
 */

#include <stdio.h>
#define PI 3.1416 //una constante

int main()
{
    //int edade = 0; //variables locales 
    //static int h=0 // se va a ejecutar pero solo una vez

    float area = 0, radio = 0;

    printf("radio: ");
    scanf("%f",&radio);
    area = PI * radio * radio;
    printf("el area es %0.2f\n",area);
    
    return 0;
}