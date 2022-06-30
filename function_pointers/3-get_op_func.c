#include "3-calc.h"
#include <stddef.h>
#include <string.h>
/**
 * get_op_func - receives a char (the sign of an operation)
 * and returns a function that performs such operation
 * @s: input char (sign of operation)
 *
 * Return: pointer to function
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
		if (!strcmp(ops[i].op, s))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
