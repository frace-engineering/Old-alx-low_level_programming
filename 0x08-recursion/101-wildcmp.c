#include "main.h"

/**
 * wildcmp - compares two string.
 * @s1: second string
 * @s2: second string
 * Return: 1 if strings are identical else 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 != '\0')
	{
	if (*s1 == *s2)
	{
		return (1);
		s1++;
		s2++;
		wildcmp(s1, s2);
	}
	else
	{
		return (0);
	}
	}
}


