#include "main.h"
/**
*print_rev - print in reverse a str
*@s:takes a string
*/
void print_rev(char *s)
{
int a = 0;
int b;
while (s[b] != '\0')
b++;
b--;
for (a = b; a >= 0; a--)
putchar(s[a]);
putchar('\n');
}
