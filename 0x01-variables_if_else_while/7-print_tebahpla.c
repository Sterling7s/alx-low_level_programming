#include <stdio.h>
/**
 * main - This program prints letters in reverse
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
