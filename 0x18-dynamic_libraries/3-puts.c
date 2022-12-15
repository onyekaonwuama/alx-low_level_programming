#include "main.h"
#include <stdio.h>
/**
*_puts - prints a string
*@str: a string
*/
void _puts(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a++)
putchar(str[a]);
putchar('\n');
}
