#include "holberton.h"

/**
 * _pow_recursion - returns value of the y power of x.
 * @x: base integer input.
 * @y: exponent integer input.
 * Return: int, y power of x.
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
