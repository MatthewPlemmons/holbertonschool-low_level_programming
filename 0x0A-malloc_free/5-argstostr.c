#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates input arguments.
 * @ac: argument count.
 * @av: argument vector.
 * Return: char, pointer to string.
 */

char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *s, *s1;

	i = j = len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++;
		i++;
	}
	len++;

	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);

	s1 = s;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			*s = av[i][j];
			j++;
			s++;
		}
		*s = '\n';
		i++;
		s++;
	}
	return (s1);
}
