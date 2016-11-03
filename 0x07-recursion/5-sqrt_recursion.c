#include "holberton.h"

/**
 * sqrt_find - finds natrual square root.
 * @rt: integer input.
 * @radicand: integer to find square root of.
 * Return: int, square root of radicand.
 * Or -1 if square root can't be determined.
 */

int sqrt_find(int rt, int radicand)
{
	if (radicand < 0 || (rt * rt) > radicand)
		return (-1);
	if (radicand == 0)
		return (0);
	if (rt * rt == radicand)
		return (rt);
	else
		return (sqrt_find(rt + 1, radicand));
}

/**
 * _sqrt_recursion - recursively finds natural square root.
 * @n: integer input for the radicand.
 * Return: int, square root of n.
 */

int _sqrt_recursion(int n)
{
	return (sqrt_find(1, n));
}
