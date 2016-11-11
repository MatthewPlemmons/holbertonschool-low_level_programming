#include <stdlib.h>

/**
 * _strlen - finds length of string.
 * @s: string input.
 * Return: int, length of string.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}

/**
 * string_nconcat - concatenates two strings using n bytes.
 * @s1: string one.
 * @s2: string two.
 * @n: bytes of s2 to use.
 * Return: char pointer to new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1;
	char *a;

	i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	a = malloc((len1 + n + 1) * sizeof(*a));
	if (!a)
		return (NULL);

	while (s1[i])
	{
		a[i] = s1[i];
		i++;
	}

	i = 0;
	while (s2[i] && i < n)
	{
		a[len1 + i] = s2[i];
		i++;
	}
	a[len1 + i] = '\0';
	return (a);

}
