#include "holberton.h"
#include <stdio.h>

/**
 * jack_bauer - prints time from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hr, min;

	hr = 0;
	while (hr < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(58);
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');

			min++;
		}
		hr++;
	}
}
