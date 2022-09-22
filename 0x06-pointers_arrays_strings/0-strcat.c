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
	int len = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}

