#include <stdio.h>
/**
 * main - A program that prints all three combinations of a digit
 * Return: 0
 */
int main(void)
{
	int n, i, d;

	for (n = 0; n < 8; n++)
	{
		for (i = n + 1; i < 9; i++)
		{
			for (d = i + 1; d < 10; d++)
			{
			putchar((n % 10) + '0');
			putchar((i % 10) + '0');
			putchar((d % 10) + '0');

		if (n == 7 && i == 8 && d == 9)
		continue;
		putchar(',');
		putchar(' ');
			}
		}
	}
putchar('\n');
return (0);
}
