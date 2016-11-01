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
		i = 0;
		while (*(haystack + i) == *(needle + i)
		       && *(haystack + i) != '\0' && *(needle + i) != '\0')
		{
			i++;
		}
		if (*(needle + i) == '\0')
		{
		    return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
