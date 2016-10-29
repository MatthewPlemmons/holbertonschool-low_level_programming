#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @c: string input.
 * Return: char pointer to string.
 */

char *string_toupper(char *c)
{
	char *s = c;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= ('a' - 'A');
		}
		s++;
	}
	return (c);
}
