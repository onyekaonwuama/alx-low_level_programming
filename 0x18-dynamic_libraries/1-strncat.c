#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: The destination value
 *@src: The src value
 *@n: the limit of the concatenation
 *Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0, j = 0;

	while (dest[destlen])
	{
		destlen++;
	}

	while (j < n && src[j])
	{
		dest[destlen] = src[j];
		destlen++;
		j++;
	}

	dest[destlen + n + 1] = '\0';

	return (dest);
}

