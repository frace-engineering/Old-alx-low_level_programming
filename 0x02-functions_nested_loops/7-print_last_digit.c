#include "main.h"

/**
 * print_last_digit - this function prits the last digit os a number
 * @n: the ineger to work on
 * Return: lastdigit
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;
	if (lastdigit < 0)
	{
		lastdigit = (lastdigit * -1);
	}
	_putchar(lastdigit + 0);
	return (0);
}
