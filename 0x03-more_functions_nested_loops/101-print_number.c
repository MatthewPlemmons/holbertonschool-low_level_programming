#include "holberton.h"

int get_digits(int n);

void print_number(int n)
{

	if (n != 0)
	{
		int digits = get_digits(n);
		int arr[8];
		int i = 0;
		int num = n;

		while (digits > i)
		{
			arr[i] = num % 10;
			num = num / 10;

			if (arr[i] < 0)
			{
				arr[i] = arr[i] * -1;

				if (i == digits - 1)
				{
					arr[i + 1] = '-';
				}
			}
			i++;
		}

		while (digits > 0)
		{
			if (arr[digits] == '-')
			{
				_putchar(arr[i]);
			}
			_putchar(arr[digits - 1] + '0');
			digits--;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('0');
		_putchar('\n');
	}
}

int get_digits(int n)
{
	int digits = 0;

	if (n < 0)
	{
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}
