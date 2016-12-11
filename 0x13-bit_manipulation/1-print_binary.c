#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: input integer.
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, size, first1;

	first1 = 0;
	size = sizeof(unsigned long) * 4;
	for (i = size - 1; i >= 0; i--)
	{
		if (first1 == 1)
			(n & (1 << i)) ? _putchar('1') : _putchar('0');
		else if (n & (1 << i))
		{
			_putchar('1');
			first1 = 1;
		}
	}
}
