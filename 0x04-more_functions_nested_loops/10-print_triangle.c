#include "main.h"
/**
 * print_triangle - outputs triangle with #
 * @size: is an int
 * Return: 0
 */

void print_triangle(int size)
{
	int row, gap;


	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 0; row < size; row++)
		{
			for  (gap = (size - 1); gap >= 0; gap--)
			{
				if (gap <= row)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

