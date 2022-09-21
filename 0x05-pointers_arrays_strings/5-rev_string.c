#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: char
 */
void rev_string(char *s)
{
	int i = 0, j, end, len;
	char temp;

	len = strlen(s);
	end = len - 1;

	while (i < end)
	{
		temp = s[i];
		s[end] = s[i];
		s[i] = temp;
		i++;
		end--;
	}
	_putchar(s);
	return 0;
}

