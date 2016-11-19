#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints given integers.
 * @separator: char to separate numbers.
 * @n: number of integers given.
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, unsigned int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(nums);
	printf("\n");
}
