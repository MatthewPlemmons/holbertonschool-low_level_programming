#include "holberton.h"

/**
 * print_alphabet - prints alphabet to stdout
 *
 * Return: Void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
