#include "main.h"

/**
 * print_line - prints line
 * @n: param
 */

void print_line(int n)
{
	int num = 1;

	while (num <= n)
	{
		_putchar(95);
		num++;
	}
	_putchar('\n');
}
