#include <stdarg.h>
#include <stdio.h>

/**
 *
 *
 *
 *
 */

void print_all(const char * const format, ...)
{
	va_list pa;
	char *tmp;
	int i, args;

	i = args = 0;
	while (format[i])
	{
		if (format[i] == 'c' ||
		    format[i] == 'i' ||
		    format[i] == 'f' ||
		    format[i] == 's')
		{
			tmp += format[i]
			args++;
		}
		i++;
	}

	i = 0;
	va_start(pa, format);
	while (i < args)
	{
		va_arg(pa, tmp[i]);
		i++;
	}
	va_end(pa);
	printf("\n");
}
