#include <stdio.h>

/**
 * main - containing function
 * Return: 0 when successful
 */

int main(void)
{
	char idx;

	for (idx = 'a'; idx <= 'z'; idx++)
	{
		if (idx != 'q' && idx != 'e')
			putchar(idx);
	}
	putchar('\n');
	return (0);
}
