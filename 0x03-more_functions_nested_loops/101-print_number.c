#include <stdio.h>

int get_digits(int n);

void print_number(int n)
{
	int digits = get_digits(n);
	/*printf("%i is %i digits long.\n", n, digits);*/

	int arr[8];
	int i = 0;
	int num = n;

	while (digits > i)
	{
		arr[i] = num % 10;
	        num = num / 10;
		i++;
	}

	while (digits > 0)
	{
		printf("%i", arr[digits - 1]);
		digits--;
	}
	printf("\n");

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

/*
int get_numbers(int digit, int num)
{
	int arr[digit] = num;

	while (digit > 0)
	{
		arr[n-1] = num % 10;
		num = num / 10;
		digit--;
	}
}
*/
