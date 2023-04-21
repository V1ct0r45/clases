#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funcion.h"

int main()
{
    int a =0, b= 0,c=0;
    printf("escriba a y b\n");
    scanf("%d",&a);
    scanf("%d",&b);
    c=mul(a,b);
    printf("%d\n",c);
    return 0;
}
