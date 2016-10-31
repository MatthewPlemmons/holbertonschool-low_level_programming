#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to search.
 * @accept: prefix chars to search for.
 * Return: unsigned int initial number of chars matching accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, n;

	i = 0;
	n = 0;
	while (*(accept + i) != '\0' && *s != '\0')
	{
		if (*(accept + i) == *s)
		{
			i = 0;
			s++;
			n++;
			continue;
		}
		i++;
	}
	return (n);
}
