#include "holberton.h"

/**
 * print_numbers - print numbers 0-9.
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
