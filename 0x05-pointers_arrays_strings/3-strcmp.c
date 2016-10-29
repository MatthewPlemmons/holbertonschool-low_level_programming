#include "holberton.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string input.
 * @s2: second string input.
 * Return: int comparison of the two strings.
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}
	return (0);
}
