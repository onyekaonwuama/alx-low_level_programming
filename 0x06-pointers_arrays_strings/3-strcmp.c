#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: diff btw s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (*(s1 + a) && *(s2 + a) && (*(s1 + a) == *(s2 + a)))
		a++;
	return (*(s1 + a) - *(s2 + a));
}

