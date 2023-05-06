#include "main.h"
/**
 * _puts - pusts to stdout
 * @str: params
 */

void _puts(char *str)
{
	int idx = 0;

	while (str[idx] != '\0')
	{
		_putchar(str[idx]);
		idx++;
	}

	_putchar('\n');
}
