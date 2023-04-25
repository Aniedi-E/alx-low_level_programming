#include "main.h"

/**
 * print_alphabet_x10 - print a - z ten times
 */

void print_alphabet_x10(void)
{
	
	int idx;
	char idx2;

	for (idx = 0; idx < 10; idx++)
	{
		for (idx2 = 'a'; idx2 <= 'z'; idx2++)
		{
			_putchar(idx2);
		}
		_putchar('\n');
	}
}
