#include "holberton.h"

/**
 * puts_half - prints half of a string.
 * @str: string to print.
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
		len = len / 2;
	else
		len = (len - 1) / 2;
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
