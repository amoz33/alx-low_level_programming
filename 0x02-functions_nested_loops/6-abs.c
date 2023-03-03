#include <stdio.h>
#include "main.h"

/**
 * _abs - function that computes the absolute value
 * of an integer
 *
 * @t: The integer to be computed
 *
 * Return: Always 0 (success)
 */

int _abs(int t)
{
	if (t >= 0)
		return (t);
	else
		return (-t);
}
