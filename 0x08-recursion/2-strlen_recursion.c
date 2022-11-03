#include "main.h"


/**
 * _strlen_recursion - prints the length of the given string
 * @s: is the string to be worked on
 *
 * Return: Always 0 (Success
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s) + 1);
	}
}
