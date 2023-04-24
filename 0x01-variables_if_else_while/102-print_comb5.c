#include <stdio.h>

/**
 * main - containg funct
 * Return: Always 0  when Successful
 */

int main(void)
{
	int idx, idx2;

	for (idx = 0; idx < 100; idx++)
	{
		for (idx2 = 0; idx2 < 100; idx2++)
		{
			if (idx < idx2)
			{
				putchar((idx / 10) + 48);
				putchar((idx % 10) + 48);
				putchar(' ');
				putchar((idx2 / 10) + 48);
				putchar((idx2 % 10) + 48);
				if (idx != 98 || idx2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
