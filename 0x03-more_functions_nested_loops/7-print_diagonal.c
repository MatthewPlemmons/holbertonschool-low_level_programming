#include "holberton.h"

/**
 * print_diagonal - prints an diagonal line.
 * @n: the number of lines to print.
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = n;
		while (n > 0)
		{
			while (((n - i) + 1) < n)
			{
				_putchar(' ');
				i--;
			}
			n--;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
