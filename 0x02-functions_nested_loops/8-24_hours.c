#include "holberton.h"
#include <stdio.h>

/**
 * jack_bauer - prints time from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hours, minutes;

	hours = 0;
	while (hours < 24)
	{
		minutes = 0;
		while (minutes < 60)
		{
			if (hours < 10)
			{
				printf("0%d:", hours);
			}
			else
				printf("%d:", hours);

			if (minutes < 10)
			{
				printf("0%d", minutes);
			}
			else
				printf("%d", minutes);

			printf("\n");
			minutes++;
		}
		hours++;
	}
}
