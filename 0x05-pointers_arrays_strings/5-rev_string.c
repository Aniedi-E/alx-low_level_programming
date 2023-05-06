#include "main.h"

/**
 * rev_string - reverse string
 * @s: param
 */

void rev_string(char *s)
{
	int i, str_size, half_str;
	char first_idx, last_idx;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	str_size = i - 1;
	half_str = str_size / 2;
	while (half_str >= 0)
	{
		first_idx = s[str_size - half_str];
		last_idx = s[half_str];
		s[half_str] = first_idx;
		s[str_size - half_str] = last_idx;
		half_str--;
	}
}
