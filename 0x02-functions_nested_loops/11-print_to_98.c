#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints to 98
 * @n: integer to start at
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d,", n);
			n--;
		}
	}
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d,", n);
			n++;
		}
	}
	printf("98\n");
}
