#include "holberton.h"

/**
 * times_table - print times table.
 *
 * Return: void
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

			if (column != 0)
			{
				_putchar(' ');
			}
			if (r < 10)
			{
				if (column != 0)
				{
					_putchar(' ');
				}
				_putchar(r + '0');
			}
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			if (column != 9)
			{
				_putchar(',');
			}
			column++;

		}
		_putchar('\n');
		line++;
	}
}
