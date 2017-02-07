#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);

	int array2[] = {22, 63, 12, 6, 77, 94, 44, 58, 81, 30, 1, 65, 73};
	size_t n2 = sizeof(array2) / sizeof(array2[0]);

	print_array(array, n);
	printf("\n");
	bubble_sort(array, n);
	printf("\n");
	print_array(array, n);

	printf("\n============\nNext array:\n============\n");
	print_array(array2, n2);
	printf("\n");
	bubble_sort(array2, n2);
	printf("\n");
	print_array(array2, n2);
	
	return (0);
}
