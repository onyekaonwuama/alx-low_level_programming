#include "main.h"
/**
 * square_root - find square root
 * @i: num
 * @j: increment
 *
 * Return: square rrot val
 */
int square_root(int i, int j)
{
	if (i * i == j)
		return (i);
	else if (i * i > j)
	{
		return (-1);
	}
	else
	{
		return (square_root(i + 1, j));
	}
}
/**
 * _sqrt_recursion - returns square root of a number
 * @n: num
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int a = 1;

	return (square_root(a, n));
}

