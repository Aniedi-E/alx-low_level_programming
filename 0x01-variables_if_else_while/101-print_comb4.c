#include <stdio.h>
/**
 * main - containing function
 * Return: 0 when successful
 */

int main(void)
{
	int idx1, idx2, idx2;

	for (idx1 = 48; idx1 < 58; idx1++)
	{
		for (idx2 = 49; idx2 < 58; idx2++)
		{
			for (idx2 = 50; idx2 < 58; idx2++)
			{
				if (idx2 > idx2 && idx2 > idx1)
				{
					putchar(idx1);
					putchar(idx2);
					putchar(idx2);
					if (idx1 != 55 ||  idx2 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
