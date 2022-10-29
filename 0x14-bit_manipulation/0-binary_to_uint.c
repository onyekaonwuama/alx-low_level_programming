#include "main.h"

/**
 * binary_to_uint - converts a binary number to an  unsigned int
 *
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	int len, i;
	int val = 1;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	i = (len - 1);
	for (; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			count += val;
		val *= 2;
	}

	return (count);
}
