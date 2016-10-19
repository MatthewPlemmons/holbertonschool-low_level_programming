#include "holberton.h"

/**
 * main - prints "Holberton" to stdout
 *
 * Return: 0
 */

int main(void)
{
	char n[9] = "Holberton";
	int i = 0;

	while (i <= 8)
	{
		_putchar(n[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
