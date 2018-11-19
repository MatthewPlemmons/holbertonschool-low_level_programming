#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog_t structure.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog_t structure or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	my_dog = malloc(sizeof(dog_t));
	if (!my_dog)
	{
		return (NULL);
	}

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
