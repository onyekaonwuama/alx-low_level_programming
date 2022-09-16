#include "main.h"
/**
 *print_alphabet - entry point
 *Description: longer things about the print_alphabet
 *Return: void
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	do {
		_putchar(alphabet);
		alphabet++;
	} while (alphabet <= 'z');
	_putchar('\n');
}

