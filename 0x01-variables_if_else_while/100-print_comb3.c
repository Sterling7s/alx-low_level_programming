#include <stdio.h>
/**
 * main - -This program displays all possible combinations of two numbers
 * Return: 0
 */
int main(void)
{
	int n, d;

	for (n = 0; n < 9; n++)

	{
		for (d = n + 1; d < 10; d++)
			{
			putchar((n % 10) + '0');
			putchar((d % 10) + '0');

			if (n == 8 && d == 9)
			continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
