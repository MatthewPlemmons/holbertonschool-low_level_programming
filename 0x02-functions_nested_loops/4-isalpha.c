#include "holberton.h"

/**
 * _isalpha - checks for an alphabetic character.
 * @c: ascii character to check.
 * Return: 1, if alphabetic.
 *         0, otherwise.
 */
int _islower(int c)
{

	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
