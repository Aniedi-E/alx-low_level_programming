#include <stdio.h>
/**
 * main - containing function
 * Return: 0 when successful
 */

int main(void)
{
	int idx;
	char idx1;

	for (idx = 48; idx < 58; idx++)
	{
		putchar(idx);
	}
	for (idx1 = 'a'; idx1 <= 'f'; idx1++)
	{
		putchar(idx1);
	}
	putchar('\n');
	return (0);
}
