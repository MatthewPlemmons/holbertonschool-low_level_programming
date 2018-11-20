#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free dog_t structure.
 * @d: dog_t structure to be freed
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}
