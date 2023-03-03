#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - function that prints lower case
 * alphabeth 10 times
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char i;

	char h;

	for (h = 0; h <= 9; h++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
