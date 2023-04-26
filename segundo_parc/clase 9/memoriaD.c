/**
 * @file memoriaD.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int *arr = (int*) malloc(1000*sizeof(int));
    int *arr = (int*) calloc(1000,sizeof(int));
    arr = realloc(arr,2000*sizeof(int));
    if (arr=NULL) 
    {
        printf("No fue posible asignar mas memoria");
    }
    
    for (int i = 0; i < 1000; i++)
    {
        printf("%d ",*(arr+1));
    }
    
    free(arr);
    
    return 0;
}

