#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* jack_bauer - prints every minute of day
* hour - hour of day 00 - 23
* min - minute of day 00 - 59
* Return: every minute of day
* 2 ints = 8 bytes
*/
void jack_bauer(void)
{
	int hour;
	int min;

	hour = 0;
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
