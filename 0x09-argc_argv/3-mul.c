#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers together.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: int, product of input numbers.
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a;
		int b;

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
