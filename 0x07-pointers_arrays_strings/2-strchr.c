#include "main.h"

/**
 * *_strchr - fills the pointed memory witha given character
 * @s: pointer to char
 * @c: character that is searched for
 *
 * Return: pointer to 1st instance of char or NULL if char is
 * not found.
*/

char *_strchr(char *s, char c)
{
	int i;
	char *ptr;
	char a[] = "NULL";

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ptr = &c;
		}
		else
		{
			ptr = '\0';
		}
		i++;
	}
	_putchar('\n');
	return (ptr);
}
