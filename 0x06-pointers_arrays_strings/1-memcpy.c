#include "holberton.h"

/**
 * _memcpy - copies memory area.
 * @dest: area to copy to.
 * @src: source to copy from.
 * @n: bytes to copy.
 * Return: char pointer to copied area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
