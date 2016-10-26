#include "holberton.h"

/**
 * puts2 - prints every other char.
 * @str: string input.
 * Return: void
 */
void puts2(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
