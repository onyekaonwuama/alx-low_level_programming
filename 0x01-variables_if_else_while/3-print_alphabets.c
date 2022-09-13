#include <stdio.h>
/**
* main - prints the alphabet in lowercase, and then in uppercase, followed by a new line.
*
* Return: 0
*/
int main(void)
{
int i, j;
i = 97;
j = 65;
while (i < 123)
{
putchar(i);
i++;
}
while (j < 91)
{
putchar(j);
j++;
}
putchar(10);
return (0);
}
