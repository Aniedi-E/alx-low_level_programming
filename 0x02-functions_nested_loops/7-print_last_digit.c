#include "main.h"

/**
 * print_last_digit - outputs the last digit
 * @n: parameter
 * Return: something
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (n < 0)
		x *= -1;

	_putchar(x + '0');

	return (x);
}
