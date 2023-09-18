#include "main.h"
/**
 * _puts - prints the string followed by a new line
 * @str: The string to be printed
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
