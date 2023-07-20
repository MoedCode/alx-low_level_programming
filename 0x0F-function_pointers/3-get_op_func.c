#include "calc.h"
/**
 * get_op_func -return function pointer for crosponding arithmetic operators
 *
 * @s:char* to recive arithmetic operators
 *
 * Rreturn (fun_otr)if s is arithmetic operators
 *(NULL) any thing else
 */
int (*get_op_func(char *s))(int, int)
{
		int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	i = 0;
	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);

		i++;
	}

	return (NULL);
}

