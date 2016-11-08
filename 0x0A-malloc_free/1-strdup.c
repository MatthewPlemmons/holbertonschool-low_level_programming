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
	int i;

	i = 0;
	a = malloc(sizeof(str));
	if (a)
	{
		while (str[i])
		{
			a[i] = str[i];
			i++;
		}
		return (a);
	}
	else
		return (NULL);
}
