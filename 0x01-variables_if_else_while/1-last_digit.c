#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int number;

	srand(time(0));
	number = rand() - RAND_MAX / 2;

	if ((number % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			number, number % 10);
	}
	else if ((number % 10) < 6 && (number % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			number, number % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
			number, number % 10);
	}

	return (0);

}

