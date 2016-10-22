#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: integer to determine size of the square.
 *
 * Return: void
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i, j = size;

		while (size > 0)
		{
			i = j;
			while (i > 0)
			{
				_putchar('#');
				i--;
			}
			_putchar('\n');
			size--;
		}
	}
	else
		_putchar('\n');
}
