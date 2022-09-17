#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	long int prime = 612852475143;
	long int ans = prime;
	long int div = 2;

	while (ans != div)
	{
		if (ans % div == 0)
		{
			ans = ans / div;
		}
		else
		{
			div++;
		}
	}
	printf("%li\n", ans);

	return (0);
}

