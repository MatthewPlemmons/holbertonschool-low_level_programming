#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to search.
 * @accept: chars to search for.
 * Return: char pointer to byte in s that matches a byte in accept.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		if (*(accept + i) == '\0')
		{
			i = 0;
			s++;
			continue;
		}
		if (*(accept + i) == *s)
		{
			return (s);
		}
		i++;
	}
	return ('\0');
}
