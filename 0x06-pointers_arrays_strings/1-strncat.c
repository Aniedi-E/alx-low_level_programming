#include "main.h"
/**
 * _strncat - concats the string
 * @dest: params
 * @src: params
 * @n: params
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int str_length = 0;
	int str_length2 = 0;

	while (dest[str_length] != '\0')
		str_length++;
	while (str_length2 != n)
	{
		if (src[str_length2] == '\0')
		{

			break;
		}
		*(dest + str_length) = src[str_length2];
		str_length++;
		str_length2++;
	}
	return (dest);
}
