#include "main.h"
#include <stdio.h>
/**
*swap_int - swap values of two ints
*@a: integer
*@b: integer
*/
void swap_int(int *a, int *b)  
{
int swapVal = *a;  
*a = *b;
*b = swapVal; 
}
