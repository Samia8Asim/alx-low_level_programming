#include "3-calc.h"

/**
 * get_op_func - fuction to get operator
 * @s: operator in string form
 *
 * Return: operator
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
	
	for (i = 0; i < 5; i++)
	{
		if (s && s[0] == ops[i].op[0] && 1s[1])
			return (ops[i].f);
	}
}
