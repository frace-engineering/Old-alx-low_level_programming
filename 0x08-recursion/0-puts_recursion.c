#include "main.h"

/**
 * _puts_recursion - prints a string folloewd by a new line
 * @s: is the string to be printed
 * Return: Void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
