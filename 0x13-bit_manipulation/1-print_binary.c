#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: input integer.
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i;
	if (n == 0)
		_putchar(0);

	for (i = (sizeof(long) * 4) - 1; i - 1 >= 0; i--)
	{
		if (n & (1 << i))
			break;
	}
	for (; i >= 0; i--)
		(n & (1 << i)) ? _putchar('1') : _putchar('0');
}
