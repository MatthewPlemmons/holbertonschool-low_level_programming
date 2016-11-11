#include <stdlib.h>

/**
 * _calloc - allocates memory for array.
 * @nmemb: number of elements in array.
 * @size: size in bytes of each element.
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;
	void *a;

	i = 0;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (!a)
		return (NULL);

	s = a;
	while (i < nmemb)
	{
		s[i] = 0;
		i++;
	}
	return (a);
}
