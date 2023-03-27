/**
 * @file operaciones.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

//inicio de definiciones

// paso de parametros por referencia
int sumaR(int *a, int *b)
{ // el asterisco representa una direccion de menoria
    *a = 8;
    *b = 12;
    return *a + *b;
}
// paso de  parametros por valor
int suma(int a, int b)
{
    a = 8;
    b = 12;
    return a + b;
}

//fin de definiciones 