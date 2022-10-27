#include "main.h"

/**
 * string_toupper - converts a string to uppercase
 * @s: any character
 * Return: string
 */

char *string_toupper(char *s)
{
	char t[60];
	int i;

	for (i = 0; t[i] != '\0'; i++)
	{
		if (t[i] >= 'a' && t[i] <= 'z')
		{
			t[i] = t[i] - 32;
		}
		_putchar(t[i]);
	}
	return (0);
}
