#include <stdio.h>

/**
 * main - fizbuzz
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FnumzzBuzz ");
		else if (num % 3 == 0)
			printf("Fnumzz ");
		else if (num % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", num);
	}
	printf("Buzz\n");
	return (0);
}
