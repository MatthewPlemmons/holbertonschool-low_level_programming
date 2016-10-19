#include "holberton.h"

/**
 * _abs - Compute absolute value of an integer.
 * @n: The integer to get absolute value of.
 * Return: 0
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
