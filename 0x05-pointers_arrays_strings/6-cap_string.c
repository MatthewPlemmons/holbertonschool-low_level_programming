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
	char sep[] = " \t\n,;.!?\"(){}";

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			i = 0;
			while (sep[i] != '\0')
			{
				if (*(s - 1) == sep[i])
				{
					*s -= ('a' - 'A');
					break;
				}
				i++;
			}
		}
		s++;
	}
	return (c);
}
