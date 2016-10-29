#include "holberton.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: string to encode.
 * Return: char pointer to string.
 */

char *rot13(char *s)
{
	char *c = s;

	while (*s != '\0')
	{
		while (*s >= 'a' && *s <= 'z')
		{
			*s = ((((*s + 13) - 97) % 26) + 97);
			break;
		}
		while (*s >= 'A' && *s <= 'Z')
		{
			*s = ((((*s + 13) - 65) % 26) + 65);
			break;
		}
		s++;
	}
	return (c);
}
