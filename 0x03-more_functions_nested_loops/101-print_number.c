#include "holberton.h"

/**
 * print_number - prints a given integer using only _putchar
 * @n: integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{

	if (n != 0)
	{
		int i, k;
		int a[8];

		k = n;
		if (n < 0)
		{
			k = k * -1;
			_putchar('-');
		}

		i = 0;
		while (k > 0)
		{
			a[i] = k % 10;
			k = k / 10;
			i++;
		}

		while (i > 0)
		{
			_putchar(a[i - 1] + '0');
			i--;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('0');
		_putchar('\n');
	}
}
