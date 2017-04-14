#include "search_algos.h"

/**
 * print_array - print array elements on single line
 * @array: array to print.
 * @start: start of array.
 * @end: end of array.
 * Return: void
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	while (start <= end)
	{
		printf("%d", array[start]);
		/*(unsigned int) i, (int) array[i]);*/
		if (start != end)
			printf(", ");
		++start;
	}
	printf("\n");
}

/**
 * binary_search - Search for value in sorted array of integers.
 * @array: array to search.
 * @size: number of elements in array.
 * @value: number to search for.
 * Return: first index where value is located, or -1 otherwise.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, end, mid;

	if (!array)
		return (-1);
	start = 0;
	end = size - 1;
	while (start <= end)
	{
		print_array(array, start, end);

		mid = (start + end) / 2;
		if (value == array[mid])
			return (mid);
		if (value > array[mid])
		{
			start = mid + 1;
			continue;
		}
		if (value < array[mid])
		{
			end = mid;
			continue;
		}
	}
	return (-1);
}
