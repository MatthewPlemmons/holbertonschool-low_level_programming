#include "holberton.h"

/**
 * _islower - checks for a lower-case character.
 * @c: ascii character to check for lower-case.
 * Return: 1, if lower-case.
 *         0, otherwise.
 */
int _islower(int c)
{
	unsigned char lower_case_a = 'a';
	unsigned char lower_case_z = 'z';

	if ((c < 0) || (c > 255))
	{
		return (0);
	}
	else if ((c >= lower_case_a) && (c <= lower_case_z))
	{
		return (1);
	}
	else
		return (0);
}
