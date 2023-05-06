#include "main.h"

/**
 * cap_string - to upper case
 * @n: param
 * Return: char
 */

char *cap_string(char *n)
{
	int i, counter = 0;
	int separated_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(n + counter) >= 97 && *(n + counter) <= 122)
		*(n + counter) = *(n + counter) - 32;
	counter++;
	while (*(n + counter) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(n + counter) == separated_words[i])
			{
				if ((*(n + (counter + 1)) >= 97) && (*(n + (counter + 1)) <= 122))
					*(n + (counter + 1)) = *(n + (counter + 1)) - 32;
				break;
			}
		}
		counter++;
	}
	return (n);
}
