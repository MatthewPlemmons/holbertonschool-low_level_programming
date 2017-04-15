#include "search_algos.h"
#include "1-binary.c"

/**
 * _binary_search - find value in an arra with binary search algorithm.
 * @array: array input.
 * @lo: lower index.
 * @hi: higher index.
 * @value: number to find.
 * Return: index of value, or -1 otherwise.
 */
size_t _binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low <= high)
	{
		print_array(array, low, high);
		mid = (high + low) / 2;
		if (value == array[mid])
			return (mid);
		if (value > array[mid])
			low = mid + 1;
		else
			high = mid;
	}
	return (-1);
}

/**
 * exponential_search - algorithm to find value in sorted array.
 * @array: array to search.
 * @size: number of elements in array.
 * @value: number to find.
 * Return: first index where value is located, or -1 otherwise.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, end;

	if (!array)
		return (-1);

	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked by array[%lu] = [%d]\n",
		       bound, array[bound]);
		bound *= 2;
	}
	end = bound < size - 1 ? bound : size;
	return (_binary_search(array, bound/2, end, value));
}
