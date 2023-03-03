#include <stdio.h>
#include "main.h"
/**
 * jack_bauer -  function that prints every minute of the day
 * starting from 00:00 to 23:59
 * Description: Using neste while loops,
 * count up through every minute of the day and print
 */

void jack_bauer(void)
{
	int hour = 0, min;

	while (hour < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hour++;
	}
}
