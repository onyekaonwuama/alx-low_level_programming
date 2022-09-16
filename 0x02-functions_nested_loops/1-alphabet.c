#include "main.h"
/**
 *main - prints all alphabet
 *Return:0
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

