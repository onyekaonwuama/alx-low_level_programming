#include <stdio.h>
/**
*main - prints the alphabet in lowercase, and then in uppercase,
*followed by a new line.
*Return: 0
*/
int main(void)
{
int small, big;
for (small = 'a'; small <= 'z'; small++)
putchar(small);
for (big = 'A'; big <= 'Z'; big++)
putchar(big);
putchar('\n');
return (0);
}
