#include "holberton.h"

/**
 * pd_check - checks for palindrome.
 * @c: input string.
 * @s: input string.
 * Return: int; 1 if palindrome.  0, otherwise.
 */

int pd_check(char *c, char *s)
{
	if (*c != *s)
		return (0);
	if (*c == *s && (c - s) > 0)
		return (pd_check(c - 1, s + 1));
	else
		return (1);

}

/**
 * _strlen - recursively find string length.
 * @c: input string.
 * Return: int
 */

int _strlen(char *c)
{
	if (*c)
		return (_strlen(c + 1) + 1);
	return (0);
}


/**
 * is_palindrome - checks for palindrome.
 * @s: input string.
 * Return: int; 1 if palindrome.  0, otherwise.
 */

int is_palindrome(char *s)
{
	char *c = s;
	int len;

	len = _strlen(c);
	return (pd_check(c + len - 1, s));
}
