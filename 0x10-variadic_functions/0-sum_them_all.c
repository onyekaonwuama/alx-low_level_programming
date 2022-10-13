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

	total = 0;

	if (!n)
		return (0);
	va_list args;

	va_start (args, n);

	for (i = 0; i < n; i++)
		total += va_arg(args, int);
	va_end(args);
	return (total)
}
