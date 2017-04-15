#include <math.h>
#include "search_algos.h"

/**
 * _linear_search - algorithm to find value in an array.
 * @array: array to search.
 * @size: number of elements in array.
 * @start: starting index for search.
 * @value: number to find.
 * Return: index of value, or -1 if not found.
 */
int _linear_search(int *array, size_t size, size_t start, int value)
{
	size_t end;

	end = sqrt(size - 1) + start;
	printf("Value found between indexes [%u] and [%u]\n",
	       (unsigned int) start, (unsigned int) end);
	while (start <= end)
	{
		printf("Value checked array[%u] = [%d]\n",
		       (unsigned int) start, array[start]);
		if (value == array[start])
			return (start);
		if (end > size)
			return (-1);
		++start;
	}
	return (-1);
}

/**
 * jump_search - algorithm to find value in array using jump search.
 * @array: array to search.
 * @size: number of elements in array.
 * @value: number to find.
 * Return: first index where value is located, or -1 otherwise.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, jump;

	if (!array || size <= 0))
		return (-1);
	start = 0;
	jump = sqrt(size - 1);
	end = jump;
	while (end < size)
	{
		printf("Value checked array[%u] = [%d]\n",
		       (unsigned int) start, array[start]);
		if (value <= array[end])
			return (_linear_search(array, size, start, value));
		start = end;
		end += jump;
	}
	return (_linear_search(array, size, start, value));
}
