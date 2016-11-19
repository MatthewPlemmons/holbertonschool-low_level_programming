#include <stdarg.h>
#include "variadic_functions.h"

/**
 *
 *
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list a;

	sum = 0;
	if (n == 0)
		return (0);

	va_start(a, n);
	for (i = 0; i < n; i++)
		sum += va_arg(a, int);
	va_end(a);
	return (sum);
}
