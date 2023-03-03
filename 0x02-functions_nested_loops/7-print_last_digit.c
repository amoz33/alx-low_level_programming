#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function that prints the last digit
 *
 * @n: integer to be accepted
 *
 * Return: value of last digit
 *
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		n = -n;
	ld = n % 10;

	if (ld < 0)
		ld = -ld;

	_putchar(ld + '0');

	return (ld);
}
