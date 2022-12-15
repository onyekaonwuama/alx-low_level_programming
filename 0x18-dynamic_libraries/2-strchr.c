#include "main.h"
/**
 * _strchr - finds a chr in a string,
 * @s: str
 * @c: char.
 * Return: the pointer to the first occurrence of the char c.
 */
char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	for (; *(s + a) != '\0'; a++)
		if (*(s + a) == c)
			return (s + a);
	if (*(s + a) == c)
		return (s + a);
	return ('\0');
}
