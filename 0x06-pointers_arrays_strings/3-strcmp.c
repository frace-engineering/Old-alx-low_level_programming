#include "main.h"

/**
 * *_strcmp - compares two strings
 * @s1: first input string to be compared with s2
 * @s2: second input string to be compared with s1
 * Return: 0 if s1 = s2, negative if s2 > s1 else positve
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (i = 0; s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
