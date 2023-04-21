#include <stdio.h>
int main()
{
    float var=3.1416;
    float *puntero;
    puntero = &var;
    
    printf("%p\n%p\n%f\n",&var,puntero,*puntero);
    return 0;
}
