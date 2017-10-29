#include <stdio.h>

/**
 * wildcmp - Compare two strings to see if they can be considered identical.
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 1, if strings are identical. Otherwise, return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 && *s2 && *s1 == *s2)
                return (wildcmp(s1 + 1, s2 + 1));
	if (!(*s1 && *s2))
		return (1);
	if (*s2 == '*' && *(s2 + 1))
		return (0);
	if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)))
                return (1);
	return (0);
}
