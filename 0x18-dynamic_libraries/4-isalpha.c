#include "main.h"
/**
 * _isalpha - checks input for upper & lowercase
 * @c: c is an ascii character
 * Return: 1 as true else 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}

