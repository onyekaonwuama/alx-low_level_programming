#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: char
 */
void rev_string(char *s)
{
	char c;
	int i, n;

	for (i = 0; s[i + 1] != '\0'; i++)
	{
		continue;
	}
	n = 1;
	i = 0;
	while (i < n / 2 + 1)
	{
		c = s[i];
		s[i] = s[n - i];
		s[n - i] = c;
		i++;
	}
}

