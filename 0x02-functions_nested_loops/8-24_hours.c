#include "main.h"
/**
 * jack_bauer - func to print every minute of
 * jack bauer series
 * @void: is void
 * Return: void
 */

void jack_bauer(void)
{
	int hrs, min;

	for (hrs = 00; hrs < 24; hrs++)
	{
		for (min = 00; min < 60; min++)
		{
			if (hrs < 24 && min < 60)
			{
				_putchar((hrs / 10) + '0');
				_putchar((hrs % 10) + '0');
				_putchar(':');
				_putchar((min / 10) + '0');
				_putchar((min % 10) + '0');
				_putchar('\n');
			}
		}
	}
}
