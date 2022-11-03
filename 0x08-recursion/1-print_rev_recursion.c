#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse flow
 * @s: string to work on.
 * Return void
 */

void _print_rev_recursion(char *s)
{
	int count;
	int i;

	count = 0;
	i = 0;

	for (; s[i] != '\0'; i++)
	{
		count += count;
	}
	for (count-- count > 0; count--)
	{
		_putchar(s[count]);
	}
}
