#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/*#define CSPEC(token) ("%"#token)
 */

/**
 *
 *
 */

void _print_c(va_list a)
{
	printf("%c", va_arg(a, int));
}

void _print_i(va_list a)
{
	printf("%i", va_arg(a, int));
}

void _print_f(va_list a)
{
	printf("%f", va_arg(a, double));
}

void _print_s(va_list a)
{
	char *str;

	str = va_arg(a, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}



/**
 * print_all - prints anything.
 * @format: list of types of args.
 * Return: void
 */

void print_all(const char * const format, ...)
{
	typedef struct Dtypes
	{
		char cs;
		char (*f)(va_list a);
	}dtypes_t;

	va_list ap;
	int i, j;

	dtypes_t dtypes[] = {
		{'c', _print_c},
		{'i', _print_i},
		{'f', _print_f},
		{'s', _print_s},
	};

	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		j = 0;
		while (j <= 4)
		{
			if (dtypes[j].cs == format[i])
			{
				dtypes[j].f(ap);
				/*arg = va_arg(ap, dtypes[j].dtype);
				  printf(CSPEC(format[i]), arg); */
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
