#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for the case og the character
 * @c: is the character to check
 * Return: 1 if true else 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
		return (0);
}
