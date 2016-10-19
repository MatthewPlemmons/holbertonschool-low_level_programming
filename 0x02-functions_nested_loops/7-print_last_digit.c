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
