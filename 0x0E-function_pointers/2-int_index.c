#include <stdlib.h>

/**
 * int_index - searches for an int.
 * @array: array to search through.
 * @size: size of array.
 * @cmp: input fucntion.
 * Return: int, index of first element found by cmp.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
