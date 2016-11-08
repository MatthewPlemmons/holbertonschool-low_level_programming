#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - allocates memory and stores duplicate string.
 * @str: string to duplicate.
 * Return: char pointer to new string address.
 * Or NULL, on error.
 */

char *_strdup(char *str)
{
	char *a;
	int len, i;

	i = 0;
	len = _strlen(str);
	a = malloc(sizeof(char) * len);
	if (a)
	{
		while (i < len)
		{
			a[i] = str[i];
			i++;
		}
		return (a);
	}
	else
		return (NULL);
}
