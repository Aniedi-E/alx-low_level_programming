#include <stdio.h>

/**
 * main - something
 * Return:  something
 */

int main(void)
{
	unsigned long int sum1, sum2, sum;
	int idx;

	sum1 = 0;
	sum2 = 0;
	sum = 0;

	for (idx = 0; idx < 1024; ++idx)
	{
		if ((idx % 3) == 0)
		{
			sum1 = sum1 + idx;
		} else if ((idx % 5) == 0)
		{
			sum2 = sum2 + idx;
		}
	}
	sum = sum1 + sum2;
	printf("%lu\n", sum);
	return (0);
}
