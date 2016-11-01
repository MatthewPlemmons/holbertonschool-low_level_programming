#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - prints sum of two diagnoals in a square matrix of integers.
 * @a: array of integers.
 * @size: size of array.
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0, diagx = 0, diagy = 0;

	while (i < size)
	{
		diagx += *a;
		if (i + 1 < size)
			a += size + 1;
		i++;
	}
	while (i > 0)
	{
		a -= size - 1;
		diagy += *a;
		i--;
	}
	printf("%i, %i\n", diagx, diagy);
}
