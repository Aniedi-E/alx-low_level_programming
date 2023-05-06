#include "main.h"

/**
 * more_numbers - prints more numbers
 */

void more_numbers(void)
{
	int num1, num2;

	num1 = 0;

	while (num1 < 10)
	{
		for (num2 = 0; num2 < 15; num2++)
		{
			if (num2 >= 10)
			{
				_putchar((num2 / 10) + 48);
			}
			_putchar((num2 % 10) + 48);
		}

		_putchar('\n');

		num1++;
	}
}
