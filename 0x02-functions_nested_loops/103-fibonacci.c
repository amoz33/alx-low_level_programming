#include <stdio.h>

/**
 * main - Prints the sum of Even fibonacci numbers
 * less than 4000000.
 * Return: Nothing!
 */

int main(void)
{
	int counter = 0;
	long int a = 1;
	long int b = a;
	long int c = a + b;

	while (c < 4000000)
	{
		if (c % 2 == 0)
		{
			counter += c;
		}
		a = b;
		b = c;
		c = a + b;
	}
	printf("%d\n", counter);
	return (0);
}
