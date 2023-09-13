#include <stdio.h>
/**
 * main - the main printing function
 * Return: 0
 */

int main(void)
{
	int i = 0;

	long j;
	long k;
	long sum;

	j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
			sum += k;
		j = k - j;
	}
	printf(" %ld", sum);
	return (0);
}
