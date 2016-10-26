#include "holberton.h"

/**
 * rev_string - reverses a string.
 * @s: string to reverse.
 * Return: void, reversed string
 */
void rev_string(char *s)
{
	int i, k;
	char rs;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	k = 0;
	while (k < i)
	{
		i--;
		rs = s[k];
		s[k] = *(s + i);
		*(s + i) = rs;
		k++;
	}
}
