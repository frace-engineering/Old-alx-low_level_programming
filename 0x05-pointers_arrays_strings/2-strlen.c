#include "main.h"

/**
 * _strlen - prints the lenght of a string
 * @s: is the string pointer to work on
 *Return: Always 0
 */

int _strlen(char *s)
{
	int n;

	n = 0;

	while (*(s + n) != 0)
	{
		n++;
	}
	return (n);
}

