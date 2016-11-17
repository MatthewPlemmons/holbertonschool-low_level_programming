#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints result of arithmetic on input integers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: int, 0 if successful.
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	op_func = (get_op_func(argv[2]));
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%i\n", op_func(a, b));
	return (0);
}
