#include <stdlib.h>

/**
 * array_iterator - executes given function on each element of array.
 * @array: given array.
 * @size: given array size.
 * @action: given function.
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
