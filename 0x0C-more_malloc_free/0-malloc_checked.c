#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - return a function that allocates
 * using malloc
 * @b: unsigned int
 *
 * Return: pointer or NULL
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}

