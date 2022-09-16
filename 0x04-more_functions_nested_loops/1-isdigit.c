#include "main.h"
/**
 *_isdigit - entry point
 *@c: is a char
 *Return: 1 true else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

