#include "main.h"
/**
 * reverse_array - reverses the elements of an array
 * @a: integer array to be reserved
 * @n: length of array a
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, b;

	n = n - 1;
	while (i < n)
	{
		b = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = b;
		i++;
		n--;
	}
}

