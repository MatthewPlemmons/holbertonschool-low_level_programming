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
	int (*opr)(int, int);

	opr = (*s == '+' ? &op_add :
	       *s == '-' ? &op_sub :
	       *s == '*' ? &op_mul :
	       *s == '/' ? &op_div :
	       *s == '%' ? &op_mod : NULL);

	if (opr == NULL)
		return (NULL);
	return (opr);
}
