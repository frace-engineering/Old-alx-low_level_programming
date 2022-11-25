#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int sum;

	sum = 0;
	va_start(list, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			sum += va_arg(list, int);
		}
	}
	va_end(list);
	return (sum);
}
