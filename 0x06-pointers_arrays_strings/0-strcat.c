#include "main.h"

/**
 *_strcat - concats two strings
 *@dest: The destination value
 *@src: source value
 *@n:Limit of the concatenation
 *Return: A pointer to the resulting string of dest
 */

char *_strcat(char *dest, char *src, int n)
{
	int length = 0, j = 0;

	while (dest[length])
	{
		length++;
	}

	while (j < n && src[j])
	{
		dest[length] = src[j];
		length++;
		j++;
	}

	dest[length + n + 1] = '\0';

	return (dest);
}

