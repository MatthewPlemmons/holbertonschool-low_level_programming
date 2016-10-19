#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet on a new line ten times.
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}

/**
 * print_alphabet - prints characters of the alphabet
 *
 * Return: 0
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
