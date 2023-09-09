#include <stdio.h>
/**
 * main - This program prints two digits combination
 * Return: 0
 */
int main(void)
{
	int n, i;

	for (n = 0; n <= 98; n++)
	{
		for (i = n + 1; i <= 98; i++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');

			if (n == 98 && i == 99)
			continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
