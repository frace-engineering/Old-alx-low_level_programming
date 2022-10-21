#include "main"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = i; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
