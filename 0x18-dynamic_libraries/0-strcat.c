#include "main.h"

/**
 *_strcat - concats two strings
 *@dest: The destination value
 *@src: source value
 *Return: A pointer to the resulting string of dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, c;

	while (dest[len] != '\0')
		len++;

	for (c = 0; src[c] != '\0'; c++, len++)
		dest[len] = src[c];

	return (dest);
}

