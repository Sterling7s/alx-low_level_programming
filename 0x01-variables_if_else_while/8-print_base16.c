#include <stdio.h>
/**
 * main - This program prints both letters and numbers
 * Return: 0
 */
int main(void)
{
	int n;
	char i;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
