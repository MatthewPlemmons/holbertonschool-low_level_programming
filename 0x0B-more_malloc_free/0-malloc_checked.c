#include <stdlib.h>

/**
 * malloc_checked - allocates memory.
 * @b: memory to allocate.
 * Return: void, pointer to new memory address.
 */

void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);
	if (!a)
		exit(98);
	return (a);
}
