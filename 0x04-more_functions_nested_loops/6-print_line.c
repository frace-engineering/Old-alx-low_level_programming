#include "main.h"

/**
 * print_line - prints a straight line on the terminal
 * @n: number of times _ should be printed
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	while (n >= 1)
	{
		_putchar('_');
		n++;
	}
	_putchar('\n');
	return;
}
