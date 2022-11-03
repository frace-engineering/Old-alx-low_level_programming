#include "main.h"

/**
 * _puts_recursion - prints a string folloewd by a new line
 * @s: is the string to be printed
 * Return: Void
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
