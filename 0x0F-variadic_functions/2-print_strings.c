#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints given strings.
 * @separator: used to separate the strings.
 * @n: number of strings given.
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;
	char *str;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strs, char *);
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(strs);
	printf("\n");
}
