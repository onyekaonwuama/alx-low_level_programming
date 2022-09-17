#include "holberton.h"
/**
 *print_line - prints a line of _ n long
 *@n: line length
 *
 *Return: void
 */

void print_line(int n)
{
	int line = 0;

	do {
		_putchar('_');
		line++;
	} while (line < n)
	_putchar('\n')
}

