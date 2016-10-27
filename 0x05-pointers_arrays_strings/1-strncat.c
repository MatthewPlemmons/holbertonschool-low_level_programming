#include "holberton.h"

/**
 * _strncat - concatenates two strings.
 * @dest: first input string.
 * @src: string to concatenate to first.
 * @n: how many bytes of second string to concatenate.
 * Return: char pointer to resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;
	int len = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && len < n)
	{
		*dest = *src;
		dest++;
		src++;
		len++;
	}
	*dest = '\0';
	return (s);
}
