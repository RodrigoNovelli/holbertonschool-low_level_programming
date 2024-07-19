#include "calc.h"
/**
 * get_op_func - identifies a char and returns
 * the correct function for each case
 * @s: The char you wanna identify
 * Return: A pointer to a function that could help.
 *
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
	int i = 0;

	while (i < 5)
	{
		i++;
	}
}
