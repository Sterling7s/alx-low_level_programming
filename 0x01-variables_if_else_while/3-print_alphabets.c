#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program prints both upper and lower cases
 * Return: 0
 */
int main(void)
{
char Lower = 'a';
char Upper = 'A';

while
	(Lower <= 'z') {
		putchar(Lower);
		Lower++;
	}
while
	(Upper <= 'Z') {
		putchar(Upper);
		Upper++;
	}
putchar('\n');
return (0);
}


