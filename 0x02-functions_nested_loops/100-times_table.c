#include "main.h"


/**
 * print_times_table - prints times table nth number
 * @n: number to be worked on
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			product = i * j;
			if (product >= 100)
			{
				_putchar((product / 100) + '0');
				_putchar(((product % 100) / 10) + '0');
				_putchar(((product % 100) % 10) + '0');
			}
			else if (product >= 10)
			{
			_putchar(product / 10 + '0');
			_putchar(product % 10 + '0');
			}
			else
			{
				_putchar(product + '0');
			}
		}
		_putchar('\n');
	}
	}
}
