#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 * Return: int pointer to new array.
 */

int *array_range(int min, int max)
{
	int i;
	int *a;

	i = 0;
	if (min > max)
		return (NULL);

	a = malloc(((max + 1) - min) * sizeof(max));
	if (!a)
		return (NULL);
	while (min <= max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
