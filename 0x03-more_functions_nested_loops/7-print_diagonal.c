#include "holberton.h"

/**
 * print_diagonal - prints an diagonal line.
 * @n: the number of '\' characters to print.
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
			i = (i - n) + 1;
			while (i < n)
			{
				_putchar(' ');
				i++;
			}
			_putchar('\\');
			_putchar('\n');
			n--;
		}
	}
	else
		_putchar('\n');
}
