#include <stdlib.h>
#include "holberton.h"

/**
 * clear_bit - sets value of bit to 0 at given index.
 * @n: int pointer input.
 * @index: index of binary value to be cleared.
 * Return: int, 1, on success.
 *          -1, on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	*n &= ~(1 << index);
	if (!(*n & (1 << index)))
		return (1);
	return (-1);
}
