#include "search_algos.h"

/**
 * linear_search - Search for value in array of integers.
 * @array: array to search.
 * @size: number of elements in array.
 * @value: number to search for.
 * Return: first index where value is located, or -1 otherwise.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked at array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
