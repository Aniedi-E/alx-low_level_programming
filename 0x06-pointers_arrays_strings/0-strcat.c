#include "main.h"
/**
 * _strcat - concats the string
 * @dest: params
 * @src: params
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int str_length = 0;
	int str_length2 = 0;

	while (dest[str_length] != '\0')
		str_length++;
	while (src[str_length2] != '\0')
	{
		*(dest + str_length) = src[str_length2];
		str_length++;
		str_length2++;
	}
	return (dest);
}
