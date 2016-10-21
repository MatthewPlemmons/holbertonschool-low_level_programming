#include "holberton.h"

/**
 * more_numbers - prints the numbers 0-14 ten times.
 *
 * Return: void
 */
void more_numbers(void)
{
	char i, n;

	i = 0;
	while (i < 10)
	{
		n = 0;
		while (n < 15)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
			n++;
		}
		_putchar('\n');
		i++;
	}
}
