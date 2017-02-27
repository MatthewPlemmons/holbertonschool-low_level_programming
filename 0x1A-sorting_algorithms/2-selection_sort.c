#include "sort.h"

/**
 * selection sort - sort an array of ints in ascending order.
 * @array: array of ints.
 * @size: array size.
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k, tmp;
	int **arr = &array;

	if (!(array) || size < 1)
		return;
	
	i = j = k = tmp = 0;
	while (i < size)
	{
		j = k = i;
		while (j < size)
		{
			if (array[j] < array[k])
				k = j;
			j++;
		}
		if (i - k != 0)
		{
			tmp = (*arr)[i];
			(*arr)[i] = (*arr)[k];
			(*arr)[k] = tmp;
			print_array(array, size);
		}
		i++;
	}
}
