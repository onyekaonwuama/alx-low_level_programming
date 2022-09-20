#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - reverses a string
 * @s: char
 */
void print_rev(char *s)
{
	int a, len;

	len = strlen(s);
	for (a = (len - 1); a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}

