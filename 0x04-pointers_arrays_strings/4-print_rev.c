#include "holberton.h"

/**
 * print_rev - prints a string in reverse.
 * @s: string to print.
 * Return: void, reversed string
 */
void print_rev(char *s)
{
	char *rs = s;

	while (*rs != '\0')
		rs++;
	rs--;
	while (rs >= s)
	{
		_putchar(*rs);
		rs--;
	}
	_putchar('\n');
}
