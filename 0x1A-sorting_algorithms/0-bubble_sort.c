#include "sort.h"

/**
 * bubble_sort - sorts array of ints in ascending order.
 * @array: array to sort.
 * @size: size of array.
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j;

	if (array == NULL || size < 1)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size; j++)
		{
			if (array[j - 1] > array[j])
			{
				tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
}
