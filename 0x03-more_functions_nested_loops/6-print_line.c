#include "holberton.h"

/**
 * print_line - prints an underscore n times.
 * @n: the number of underscores to print.
 *
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
