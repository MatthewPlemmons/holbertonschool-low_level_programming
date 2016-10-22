#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: integer to determine size
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j = size;

		while (size > 0)
		{
			i = (j - size) + 1;
			while (i < j)
			{
				_putchar(' ');
				i++;
			}
			while (i >= size)
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
