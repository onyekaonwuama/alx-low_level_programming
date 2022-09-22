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
	int count = 0, srclen = 0;
	char *temp = dest;

	while (*(src + srclen) != '\0')
		dest++;
	while (*dest)
		dest++;
	if (n > srclen)
		n = srclen;
	while (counter < n)
	{
		*dest++ = *src++;
		counter++;
	}
	*dest = '\0';
	return (temp);
}

