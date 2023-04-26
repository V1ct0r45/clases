/**
 * @file ejer1.c
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
#include <string.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        if (strcmp(argv[i],"-v") == 0);
        printf("eje1.c\nVersion 0.1.0\nDate 23\nauthor yo");
        exit(0);
    }
    
    printf("%d",argc);
    return 0;
}
