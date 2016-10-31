#include "holberton.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to search.
 * @needle: substring to search for.
 * Return: char pointer to beginning of located string,
 * or NULL if substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			i = 0;
			while (*(needle + i) == *(haystack + i))
			{
				if (*(needle + i + 1) == '\0')
				{
					return (haystack);
				}
				i++;
			}
		}
		haystack++;
	}
	return (haystack);
}