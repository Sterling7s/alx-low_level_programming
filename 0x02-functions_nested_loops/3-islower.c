#include "main.h"
/**
 * _islower -Entry point
 * Description: function that checks for lowercase character
 * @c: character to check if it lowercase
 * Return: 0-if lowercase, 1-if not
 */
int _islower(int c)
{
	if ((c >= 'a') &&(c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
