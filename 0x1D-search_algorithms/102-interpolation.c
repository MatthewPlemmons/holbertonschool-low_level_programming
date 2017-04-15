#include "search_algos.h"

/**
 * calc_probe_position - determine position of probe.
 * @array: array input.
 * @lo: lower index.
 * @hi: higher index.
 * @value: number to find.
 * Return: position of probe
 */
size_t calc_probe_position(int *array, size_t lo, size_t hi, int value)
{
	size_t pos;

	pos = lo + (((double)(hi - lo) /
		     (array[hi] - array[lo])) * (value - array[lo]));

	if (value < array[lo] || value > array[hi])
		printf("Value checked array[%lu] is out of range\n",
		       (unsigned long) pos);
	else
		printf("Value checked array[%lu] = [%lu]\n",
		       (unsigned long) pos, (unsigned long) array[pos]);
	return (pos);
}

/**
 * interpolation_search - algorithm to find value in sorted array.
 * @array: array to search.
 * @size: number of elements in array.
 * @value: number to find.
 * Return: first index where value is located, or -1 otherwise.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo, hi, pos;

	if (!array)
		return (-1);

	lo = 0;
	hi = size - 1;
	while (array[hi] != array[lo]
	       && value >= array[lo] && value <= array[hi])
	{
		pos = calc_probe_position(array, lo, hi, value);
		if (value == array[pos])
			return (value);
		if (value > array[pos])
			lo = pos;
		else
			hi = pos;
	}
	calc_probe_position(array, lo, hi, value);
	return (-1);
}
