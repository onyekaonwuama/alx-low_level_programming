#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: char
 */
void rev_string(char *s)
{
	int i, end, len;
	char temp;

	len = strlen(s);
	end = len - 1;

	for (i = 0; i < end; i++)
	{
		temp = str[i];
		str[i] = str[end];
		str[end] = temp;
		end--;
		_putchar(str);
	}
	_putchar('\n');
}

