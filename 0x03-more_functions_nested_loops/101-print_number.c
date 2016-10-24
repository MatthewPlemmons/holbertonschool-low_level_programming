#include "holberton.h"

int number_of_digits(int n);

/**
 * print_number - prints a given integer using only _putchar
 * @n: integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{

	if (n != 0)
	{
		int digits = number_of_digits(n);
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

/**
 * number_of_digits - finds how many digits in a given integer.
 * @n: integer to retrieve digits of.
 *
 * Return: int representing how many digits long n is.
 */
int number_of_digits(int n)
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
