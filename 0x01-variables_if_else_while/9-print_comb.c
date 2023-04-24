#include <stdio.h>
/**
 * main - containing function
 * Return: 0 when successsful
 */

int main(void)
{
	int idx;

	for (idx = 48; idx < 58; idx++)
	{
		putchar(idx);
		if (idx != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
