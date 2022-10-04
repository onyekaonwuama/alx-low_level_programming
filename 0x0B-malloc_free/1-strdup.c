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
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	;
	i++;
	ptr = malloc(sizeof(char) * i);

	if (ptr != NULL)
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

