#include <stdio.h>

/**
 * main - something
 * Return: something
 */
int main(void)
{
	unsigned long int idx, j, k, j1, j2, k1, k2;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (idx = 1; idx < 91; idx++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	j1 = j / 1000000000;
	j2 = j % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;

	for (idx = 92; idx < 99; ++idx)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}

	printf("\n");

	return (0);
}
