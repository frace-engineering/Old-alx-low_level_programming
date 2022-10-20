#include "main.h"


/**
 * print_sign - this prints the sign of an int
 * @n: this is the int to be checked
 *
 * Return: 1 if positive,-1 if negative else 0
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
