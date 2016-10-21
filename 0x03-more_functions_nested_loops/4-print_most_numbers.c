#include "holberton.h"

/**
 * print_most_numbers - prints numbers 0 to 9, omitting 2 and 4.
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i == '2' || i == '4')
		{
			i++;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
