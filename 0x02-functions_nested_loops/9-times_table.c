#include "main.h"

/**
 * times_table - this prints out a times tale from 0 to 9
 * Return: void
 */





void times_table(void)
{
	int n, m, product;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			product = n * m;
			if (product > 9)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(product + '0');
			}
		}
	}
}
