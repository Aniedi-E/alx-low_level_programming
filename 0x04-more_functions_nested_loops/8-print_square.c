#anclude "main.h"

/**
 * print_square - prints square
 * @size: param
 */

void print_square(int size)
{
	int a = 0, b;

	if (size > 0)
	{
		for (; a < size; a++)
		{
			for (b = 0; b < size; b++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
