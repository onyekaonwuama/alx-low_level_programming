#include "main.h"
/**
 *times_table - entry point
 *@void: is void
 *Return: void
 */
void times_table(void)
{
int row, col, mul, tens, ones;
for (row = 0; row <= 9; row++)
{
for (col = 0; column < 10; col++)
{
mul = row * col;
tens = mul / 10;
ones = mul % 10;
if (col == 0)
{
putchar('0');
}
else if (mul < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(ones + '0');
}
else
_putchar(',');
_putchar(' ');
_putchar(tens + '0');
_putchar(ones + '0');
}
}
_putchar('\n');
}
}
