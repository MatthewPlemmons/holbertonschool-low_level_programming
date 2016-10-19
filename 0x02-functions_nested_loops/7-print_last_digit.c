#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the integer to get the last digit of.
 * Return: 0
 */
int print_last_digit(int n)
{
	int remainder;

	n = _abs(n);
	remainder = n % 10;
	_putchar(remainder + '0');
	return (remainder);
}

/**
 * _abs - prints absolute value of an integer.
 * @n: the integer to get absolute value of.
 * Return: the absolute value of int n.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
