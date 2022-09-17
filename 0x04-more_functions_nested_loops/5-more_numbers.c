#include "main.h"
/**
 * more_numbers - function outputs digits 0-14 ten times
 * Return: 0
 */

void more_numbers(void)
{
	int num, column;

	for (column = 0; column <= 9; column++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
		_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}

