#include "main.h"
/**
 *print_line - prints a line of _ n long
 *@n: int line length
 *Return: void
 */

void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}

