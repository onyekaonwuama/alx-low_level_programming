#include "main.h"
/**
 * print_sign - entry point
 * @n: n is an int
 * Return: 1 if +ve, -1 if -ve else 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(45);
		return (0);
	}
	else
	{
		_putchar(48);
		return (-1);
	}
}

