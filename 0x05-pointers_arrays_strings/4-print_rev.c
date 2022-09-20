#include "main.h"
#include <stdio.h>
/**
*print_rev - print in reverse a str
*@s:takes a string
*/
void print_rev(char *s)
{
int a = 0;
while (s[a])
{
a++;
}
while (a--)
{
_putchar(s[a]);
}
_putchar('\n')
}
