#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - function reallocates memory block
 *
 *@ptr: old pointer to the previosly made pointer
 *@old_size: unsigned int
 *@new_size: unsigned int
 *
 * Return: pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	void *mem;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
		{
			free(ptr);
			return (NULL);
		}
		return (mem);
	}
	if (new_size == old_size)
		return (ptr);
	mem = malloc(new_size);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			*((char *) mem + 1) = *((char *) ptr + 1);
		}
	}
	free(ptr);
	return (mem);
}
