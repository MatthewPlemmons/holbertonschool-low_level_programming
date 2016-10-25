#include "holberton.h"

/**
 * _puts - prints a string.
 * @str: pointer to string to be printed.
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
	{
		_putchar(*str);
		i++;
	}
	_putchar('\n');
}
