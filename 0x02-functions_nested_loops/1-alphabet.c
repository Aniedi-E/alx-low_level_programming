#include "main.h"

/**
 * print_alphabet - prints every chararter of the alphabet
 */

void print_alphabet(void)
{
	char idx;


	for (idx = 'a'; idx <= 'z'; idx++)
		_putchar(idx);
	_putchar('\n');
}
