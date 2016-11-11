#include <stdlib.h>

/**
 * _calloc - allocates memory for array.
 * @nmemb: number of elements in array.
 * @size: size in bytes of each element.
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	unsigned int *a;

	i = 0;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	a = malloc(nmemb * sizeof(size));
	if (!a)
		return (NULL);
	while (a[i])
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
