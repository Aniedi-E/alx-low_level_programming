#include <stdio.h>
/**
 * main - containing function
 * Return: 0 when successful
 */

int main(void)
{
	int idx;
	int idx1;

	for (idx = 48; idx < 58; idx++)
	{
		for (idx1 = 48; idx1 < 58; idx1++)
		{
			if (idx != idx1 && idx < idx1)
			{
				putchar(idx);
				putchar(idx1);
				if (idx1 == 57 && idx == 56)
				{
					break;

				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
