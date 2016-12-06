#include "holberton.h"

/**
 * flip_bits - return the number of bits different between n and m.
 * @n: first unsigned integer input.
 * @m: second unsigned integer input.
 * Return: unsigned int, number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c;
	long int i, flips;

	flips = 0;
	c = n ^ m;
	for (i = (sizeof(long) * 4) - 1; i >= 0; i--)
	{
		if (c & (1 << i))
			flips++;
	}
	return (flips);
}
