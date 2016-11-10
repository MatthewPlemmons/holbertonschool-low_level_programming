#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 * Return: char, pointer to new string.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *a;

	i = j = k = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1 != '\0')
		i++;
	while (s2 != '\0')
		j++;

	a = malloc(i * sizeof(s1) + j * sizeof(s2));
	if (!a)
		return (NULL);
	while ((i + j) > k && s2 != '\0')
	{
		a[k] = s1[k];
		a[i + k] = s2[k];
		k++;
	}
	return (a);


}
