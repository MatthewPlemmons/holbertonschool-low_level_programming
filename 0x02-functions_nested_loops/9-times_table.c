#include "holberton.h"

/**
 *
 *
 *
 */
void times_table(void)
{
	int line, column, r;

	line = 0;
	while (line < 10)
	{
		column = 0;
		while (column < 10)
		{
			r = line * column;
		        _putchar();
			column++
		}
		line++
	}
}
