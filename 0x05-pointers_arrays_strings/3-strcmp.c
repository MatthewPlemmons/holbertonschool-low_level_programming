#include "holberton.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string input.
 * @s2: second string input.
 * Return: int comparison of the two strings.
 */

int _strcmp(char *s1, char *s2)
{
	int cmp;

	cmp = *s1 - *s2;
	return (cmp);
}
