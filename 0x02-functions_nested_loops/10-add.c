#include "main.h"

/**
 * add - adds two integers
 * @n: first number
 * @m: second number
 * Return: 0
 */


int add(int n, int m)
{
	int sum;

	sum = n + m;

	_putchar(sum / 10 + '0');
	_putchar(sum % 10 + '0');
	_putchar('\n');
	return (0);
}
