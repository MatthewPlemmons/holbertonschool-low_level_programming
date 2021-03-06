#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars.
 * @size: size of array.
 * @c: char to initialize to array.
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(sizeof(char) * size);
	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	if (a)
		return (a);
	else
		return (NULL);
}
