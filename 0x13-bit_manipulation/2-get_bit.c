#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer input.
 * @index: index to retrieve value at.
 * Return: int, binary value at index.
 *          -1, on failure.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = (n & (1 << index) ? 1 : 0);
	if (i <= 1)
		return (i);
	return (-1);
}
