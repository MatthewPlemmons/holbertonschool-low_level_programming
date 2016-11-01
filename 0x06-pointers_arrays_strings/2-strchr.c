#include "holberton.h"

/**
 * _strchr - locates a character in a string.
 * @s: string to search.
 * @c: character to search for.
 * Return: char pointer to first occurence of c.
 * Or NULL if c is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
