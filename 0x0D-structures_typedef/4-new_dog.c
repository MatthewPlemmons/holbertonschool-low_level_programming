#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * _strlen - calculate the length of a string.
 * @s: input string
 * Return: number of bytes in the string `s`.
 */
size_t _strlen(char *s)
{
	size_t i;

	for (i = 0; s[i]; ++i)
		;

	return (i);
}

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
	size_t n_len, o_len, i;

	if (!name || age < 0 || !owner)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));
	if (!my_dog)
		return (NULL);

	n_len = _strlen(name);
	my_dog->name = malloc(n_len + 1);

	o_len = _strlen(owner);
	my_dog->owner = malloc(o_len + 1);

	if (!my_dog->name || !my_dog->owner)
		return (NULL);

	for (i = 0; i <= n_len; ++i)
		my_dog->name[i] = name[i];

	for (i = 0; i <= o_len; ++i)
		my_dog->owner[i] = owner[i];

	my_dog->age = age;

	return (my_dog);
}
