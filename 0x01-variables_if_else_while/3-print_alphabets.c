#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program prints both upper and lower cases
 * Return: 0
 */
int main(void)
{
char c;
char d;
c = 'a';
d = 'A';

while (c <= 'z')
	putchar(c);
	c++;
while (d <= 'Z')
	putchar(d);
	d++;
return (0);
}

