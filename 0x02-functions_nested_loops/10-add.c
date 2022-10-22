#include "main.h"

/**
 * add - adds two integers
 * @n: first number
 * @m: second number
 * Return: 0
 */


int add(int n, int m)
{
	int addnum;

	addnum = n + m;

	if (addnum > 9)
	{
		_putchar((addnum / 10) + '0');
		_putchar((addnum % 10) + '0');
	}
	else
	{
		_putchar(addnum + '0');
	}
	return (0);
}
