#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - funtion that prints name
 * @name: name to be printed#
 * @f: pointer to the function
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
