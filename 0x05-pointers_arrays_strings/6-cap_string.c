#include "holberton.h"

/**
 * cap_string - capitalize all words of a string.
 * @s: string input.
 * Return: char pointer to string.
 */

char *cap_string(char *s)
{
	int i;
	char *c = s;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!',
			'?', '"', '(', ')', '{', '}'};

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			for (i = 0; i < 13; i++)
			{
				if (*(s - 1) == sep[i])
				{
					*s = *s - ('a' - 'A');
					break;
				}
			}
		}
		s++;
	}
	return (c);
}
