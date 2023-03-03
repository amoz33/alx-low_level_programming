#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alphabelts in lower cases
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
