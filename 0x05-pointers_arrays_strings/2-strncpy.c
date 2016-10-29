#include "holberton.h"

/**
 * _strncpy - copies a string.
 * @dest: first input.
 * @src: string to copy.
 * @n: bytes of src to copy.
 * Return: char pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *s = dest;
	int i = 0;

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i < n)
	{
		dest++;
		*dest = '\0';
		i++;
	}
	return (s);
}
