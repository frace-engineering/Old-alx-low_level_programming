#include "main.h"

/**
 * _isdigit - checks for a digit (0 - 9)
 * @c: character to be checked
 *
 * Return: 1 if c is a digit else 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 58))
	{
		_putchar(c);
	}
	return (c);
}
