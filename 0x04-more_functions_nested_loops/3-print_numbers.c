#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * @c: number to be printed
 *
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
