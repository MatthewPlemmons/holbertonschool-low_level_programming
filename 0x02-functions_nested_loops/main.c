#include "holberton.h"

/**
 * main - test functions
 *
 * Return: 0
 */

int main(void)
{
	int r;

	r = _islower(48);
	_putchar(r + '0');
	r = _islower(-5);
	_putchar(r + '0');
	r = _islower('h');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
