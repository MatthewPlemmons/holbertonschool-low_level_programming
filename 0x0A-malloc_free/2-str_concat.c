#include <stdlib.h>
#include <string.h>

/**
 *
 *
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i, len;
	char *a;

	i = 0;
	a = malloc(sizeof(s1) + sizeof(s2));
	if (!a)
		return (NULL);

	len = strlen(s2);
	while (a)
	{
		a[i] = s1[i];
		a[len + i] = s2[i];
		i++;
	}
	return (a);
}
