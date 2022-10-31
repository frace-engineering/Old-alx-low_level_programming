#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 *
 * Return: void
 *
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; j++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				_putchar(j + '0');
			}
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
