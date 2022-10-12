#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function pointer that points 
 * to other funtion that will print the 
 * name
 *
 * @name: name of the function to print name
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f !=NULL)
		f(name);
}
