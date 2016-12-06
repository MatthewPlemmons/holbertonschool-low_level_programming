#include "holberton.h"

/**
 *
 *
 *
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c;
	long int i, flips;

	flips = 0;
	c = n ^ m;
	for (i = (sizeof(long)*4) - 1; i >= 0; i--)
	{
		if (c & (1 << i))
			flips++;
	}
	return (flips);
}
