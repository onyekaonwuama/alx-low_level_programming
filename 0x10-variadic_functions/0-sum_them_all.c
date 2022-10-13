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
	unsigned int i;
	int total;
	va_list argz;

	total = 0;

	if (!n)
		return (0);

	va_start(argz, n);

	for (i = 0; i < n; i++)
		total += va_arg(argz, int);
	va_end(argz);
	return (total);
}
