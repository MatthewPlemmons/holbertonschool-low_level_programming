#include <stdio.h>
#include "holberton.h"


/**
 * print_array - prints n elements of an array of integers.
 * @a: array input.
 * @n: number of elements to print.
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%i", a[i]);
		i++;
		if (i < n)
			printf(", ");
	}
	printf("\n");
}
