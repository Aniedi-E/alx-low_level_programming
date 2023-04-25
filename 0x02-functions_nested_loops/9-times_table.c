#include "main.h"

/**
 * times_table - multiplication on 9
 */

void times_table(void)
{
	int idx, idx1, idx2, idx3, idx4;

	for (idx = 0; idx <= 9; idx++)
	{
		for (idx1 = 0; idx1 <= 9; idx1++)
		{
			idx2 = idx * idx1;
			idx3 = idx2 / 10;
			idx4 = idx2 % 10;

			if (idx1 == 0)
			{
				_putchar('0');
			}
			else if (idx2 < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(idx4 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(idx3 + '0');
				_putchar(idx4 + '0');

			}
		}
	_putchar('\n');
	}
}
