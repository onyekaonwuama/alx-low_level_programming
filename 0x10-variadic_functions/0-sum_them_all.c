#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - sums all its parameters.
  * @n: number of parameters.
  * Return: sum of all parameters.
  */

int sum_them_all(const unsigned int n, ...)
{
    int sum = 0, i = 0;
    va_list arg;
    
    if (n <= 0)
        return (0);
    
    va_start(arg, n);
    for (i; i < n; i++)
    {
        sum += va_arg(arg, int);
    }
    va_end(arg);
    
    return (sum);
}
