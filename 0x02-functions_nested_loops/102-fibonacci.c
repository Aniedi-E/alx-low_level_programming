#include <stdio.h>

/**
 * main - something
 * Return: something
 */
int main(void)
{
	long int idx, idx2, idx3, idx4;

	idx2 = 1;

	idx3 = 2;

	for (idx = 1; idx <= 50; ++idx)
	{
		if (idx2 != 20365011074)
		{
			printf("%ld, ", idx2);
		} else
		{
			printf("%ld\n", idx2);
		}
		idx4 = idx2 + idx3;
		idx2 = idx3;
		idx3 = idx4;
	}

	return (0);
}
