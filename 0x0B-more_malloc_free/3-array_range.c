#include <stdlib.h>

/**
 *
 *
 *
 */

int *array_range(int min, int max)
{
	int i;
	int *a;

	i = 0;
	if (min > max)
		return (NULL);

	a = malloc((max + 1) * sizeof(max));
	if (!a)
		return (NULL);
	while (min <= max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
