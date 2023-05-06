#include "main.h"
/**
 * _strlen - string lenght
 * @s: params
 * Return: int
 */

int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	return (counter);
}
