#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c: the character to check
 * Return: 1 if c ia alphabet else 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
		return (0);
}
