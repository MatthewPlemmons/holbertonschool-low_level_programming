#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *
 *
 *
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
	return (a);
}
