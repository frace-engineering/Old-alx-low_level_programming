#include "main.h"

/**
 * _puts_recursion - prints a string folloewd by a new line
 * @s: is the string to be printed
 * Return: Void
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
