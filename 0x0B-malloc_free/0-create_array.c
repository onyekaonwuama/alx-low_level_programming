#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of characters.
 * @c: character to replace
 * @size: the size of the array to craete
 *
 * Return: ptr to array or null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ptr;

	if (size <= 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
			*(ptr + 1) = c;
	}
	else
	{
		return (NULL);
	}
	return (ptr);
}

