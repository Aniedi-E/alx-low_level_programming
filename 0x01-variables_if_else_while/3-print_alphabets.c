#include <stdio.h>

/**
 * main - containing all code
 * Return: zero when successful
 */

int main(void)
{
	char idx;
	char idx2;

	for (idx = 'a'; idx <= 'z'; idx++)
	{
		putchar(idx);
	}

	for (idx2 = 'A'; idx2 <= 'Z'; idx2++)
	{
		putchar(idx2);
	}
	putchar('\n');
	return (0);
}
