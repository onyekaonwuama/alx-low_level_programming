#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: Width.
 * @height: Height
 *
 * Return: Pointer to the array or NULL.
 */

int **alloc_grid(int width, int height)
{
	int **array, a = 0, b = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (b = 0; b < height; b++)
	{
		array[b] = malloc(sizeof(int) * width);
		if (array[b] == NULL)
		{
			for (b--; b >= 0; b--)
				free(array[b]);
			free(array);
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (a = 0; a < width; a++)
		{
			array[b][a] = 0;
		}
	}
	return (array);
}

