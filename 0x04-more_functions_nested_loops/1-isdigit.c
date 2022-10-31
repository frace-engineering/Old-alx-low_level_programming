#include "main.h"

/**
 * _isdigit - checks for a digit (0 - 9)
 * @c: character to be checked
 *
 * Return: 1 if c is a digit else 0
 */
int _isdigit(int c)
{
	int i;

	if ((c >= 0) && (c <= 9))
	{
		i = 1;
	}
	else
		i = 0;
	return (i);
}
