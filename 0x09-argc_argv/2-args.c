#include <stdio.h>

/**
 * main -
 * @argc:
 * @argv:
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
