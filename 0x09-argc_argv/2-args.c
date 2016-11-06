#include <stdio.h>

/**
 * main - prints all arguments passed into program.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: int
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
