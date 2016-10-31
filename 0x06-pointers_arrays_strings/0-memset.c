#include "holberton.h"

/**
 * _memset - fills memory area with a constant byte.
 * @s: memory area.
 * @b: constant byte.
 * @n: number of bytes to fill.
 * Return: char pointer to memory srea s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}
	return (s - i);
}
