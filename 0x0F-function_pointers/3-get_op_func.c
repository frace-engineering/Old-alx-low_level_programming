#include "3-calc.h"

/**
 * get_op_func - returns a pointer to a function
 * @s: is the operator passed as argument to the function
 * Return: Always 0 (Success)
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add}
		{"-", op_add}
		{"*", op_add}
		{"/", op_add}
		{"%", op_add}
		{'\0', '\0'}
	}
	int i;

	i = 0;

	while (i < 5)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}

	return ('\0');
}
