#include "main.h"

/**
 * *_memcpy - fills the pointed memory witha given character
 * @s: the number of times the character will be  registered
 * @c: the string to be worked on
 *
 * Return: pointer
*/

char *_strchr(char *s, char c)
{
	int i;
	char *p;

	p = &c;


	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (p);
		}
	}
	else
	return (NULL);
}

