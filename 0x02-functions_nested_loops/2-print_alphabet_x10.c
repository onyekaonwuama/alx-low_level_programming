#include "main.h"
/**
 *print_alphabet_x10 - entry point
 *Description: print_alphabet ten times
 *Return: void
 */

void print_alphabet_x10(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
	char alphabet = 'a';

	do {
		_putchar(alphabet);
		alphabet++;
	} while (alphabet <= 'z');
	_putchar('\n');
	}
}

