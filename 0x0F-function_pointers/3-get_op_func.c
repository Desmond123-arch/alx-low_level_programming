#include "3-calc.h"
/**
 * get_op_func - chooses correct function to perform
 * @s: char of operator
 * Return: pointer function to fuction to be use
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = 
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i  = 0;

	while (i < 5)
	{
		if (*s == ops->op[i])
		{
			break;
		}
		i++;
	}
	return (ops[i].f);
}
