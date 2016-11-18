#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - gets the needed operator function.
 * @s: operator input.
 * Return: int, function pointer if valid operator passed in.
 *         NULL, otherwise.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*(ops[i]).op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
