#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range -  returns a function that creates array of integer
 *
 *@min: int
 *@max: int
 *
 * Return: pointer or NULL
 */

int *array_range(int min, int max)
{
	int *arr;
	int n;
	int i = 0;

	if (min > max)
		return (NULL);

	n = (max - min) + 1;

	arr = malloc(sizeof(int) * n);

	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
