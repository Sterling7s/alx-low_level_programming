#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements
 * @a: Array name
 * @n: Is the number of elements of the array to be pointed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}