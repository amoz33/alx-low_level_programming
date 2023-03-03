#include <stdio.h>
#include "main.h"
/**
 * _islower - function that checks for lowercase character
 *
 * @c: character to compare
 *
 * Return: 1 if c is lowercase, 0 otherwise
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
