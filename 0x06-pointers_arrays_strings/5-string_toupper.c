#include "main.h"
/**
 * string_toupper - changes all lowercase chars to uppercase
 * @p: The string will be modified
 * Return: char
 */

char *string_toupper(char *p)
{
	int i = 0;

	while (p[i])
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] -= 32;
		}

		i++;
	}
	return (p);
}

