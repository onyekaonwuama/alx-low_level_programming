#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a new string
 * which is a duplicate of the string str.
 * @str: String to be copied.
 *
 * Return: Pointer to the array or NULL.
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	ptr = malloc(sizeof(char) * (len + 1));

	if (str != NULL)
	{
		for (i = 0; str[i]; i++)
			ptr[i] = str[i];
		ptr[i] = '\0';
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}

