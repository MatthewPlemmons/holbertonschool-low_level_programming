#include <stdio.h>

/**
 * main - prints number of arguments passed in.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: int
 */

int main(int argc, char *argv[])
{
	(void) argv;

	while (argc >= 1)
	{
		printf("%i\n", argc - 1);
		return (0);
	}
	return (1);
}
