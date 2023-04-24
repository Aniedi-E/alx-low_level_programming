#include <stdio.h>

/**
 * main - containing funct
 * Return: 0 when successfull
 */

int main(void)
{
	char idx;

	for (idx = 'z'; idx >= 'a'; idx--)
	{
		putchar(idx);
	}
	putchar('\n');
	return (0);
}
