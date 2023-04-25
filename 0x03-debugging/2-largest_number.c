#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int most_large;

	if (a >= b && a >= c)
	{
		most_large = a;
	}
	else if (b >= a && b >= c)
	{
		most_large = b;
	}
	else
	{
		most_large = c;
	}

	return (most_large);
}
