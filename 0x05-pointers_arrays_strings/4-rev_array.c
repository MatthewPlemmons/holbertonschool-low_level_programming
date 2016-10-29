#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: int pointer to array.
 * @n: number of elements in array.
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[(n - i) - 1];
		a[(n - i) - 1] = tmp;
		i++;
	}
}
