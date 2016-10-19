#include "holberton.h"
#include <stdio.h>

/**
 *
 *
 *
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
