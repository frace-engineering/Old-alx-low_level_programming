#include "main.h"

/**
 * print_line - prints a straight line on the terminal
 * @n: number of times _ should be printed
 * Return: void
 */
void print_line(int n)
{
	int i = 0;
	
	while (i < n)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar('_');
		n++;
	}
	_putchar('\n');
	return;
}
