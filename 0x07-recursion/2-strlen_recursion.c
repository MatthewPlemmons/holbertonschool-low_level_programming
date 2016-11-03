#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: input string.
 * Return: int, length of string.
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
