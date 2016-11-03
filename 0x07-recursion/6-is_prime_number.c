#include "holberton.h"

/**
 * check_prime - checks if number is prime.
 * @n: integer to test if prm is composite.
 * @prm: integer to evaluate.
 * Return: int, 1 if prm is prime.
 *              0, otherwise.
 */

int check_prime(int n, int prm)
{
	if (n == prm)
		return (1);
	else if (prm % n == 0 || prm <= 1)
		return (0);
	else
		return (check_prime(n + 1, prm));
}

/**
 * is_prime_number - checks if n is prime.
 * @n: input integer.
 * Return: int, 1 if prime.
 *              0, otherwise.
 */

int is_prime_number(int n)
{
	return (check_prime(2, n));
}
