#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 *
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
