#include "main.h"

/**
 * print_times_table - print multiplication table
 * @n: paramenter
 */

void print_times_table(int n)
{
	int idx1, idx2, idx3;

	idx1f (n >= 0 && n < 15)
	{
		for (idx1 = 0; idx1 <= n; idx1++)
		{
			for (idx2 = 0; idx2 <= n; idx2++)
			{
				idx3 = idx1 * idx2;

				if (idx2 == 0)
					_putchar('0');
				else if (idx3 < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(idx3 % 10 + '0');
				}
				else if (idx3 >= 10 && idx3 < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((idx3 / 10) % 10 + '0');
					_putchar(idx3 % 10 + '0');
				}
				else if (idx3 > 99 && idx3 < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(idx3 / 100 + '0');
					_putchar((idx3 / 10) % 10 + '0');
					_putchar(idx3 % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
