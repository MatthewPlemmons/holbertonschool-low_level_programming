#include "holberton.h"

/**
 * leet - encodes a string into l337.
 * @s: string to encode.
 * Return: char pointer to string.
 */

char *leet(char *s)
{
	int i;
	char *c = s;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	while (*s != '\0')
	{
		i = 0;
		while (s1[i] != '\0')
		{
			if (*s == s1[i])
			{
				*s = s2[i];
			}
			i++;
		}
		s++;
	}
	return (c);
}
