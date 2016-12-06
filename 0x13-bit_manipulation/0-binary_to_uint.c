#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - converts binary number to an unsigned int.
 * @b: binary string.
 * Return: unsigned int, converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int total;

	total = 0;
	while (*b)
	{
		total <<= 1;
		if (*b++ == '1')
			total += 1;
		else if (*b == '0')
			continue;
		else
			return (0);
	}
	return (total);

}
