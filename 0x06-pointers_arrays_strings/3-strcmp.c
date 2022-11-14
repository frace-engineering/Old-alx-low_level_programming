#include "main.h"
#include <stdio.h>

/**
 * _strlen - calculates the number of characters in a string
 * @s: input string
 * Return: return the length
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
 * *_strcmp - compares two strings
 * @s1: first input string to be compared with s2
 * @s2: second input string to be compared with s1
 * Return: 0 if s1 = s2, negative if s2 > s1 else positve
 */
int _strcmp(char *s1, char *s2)
{
	int s1len = _strlen(s1);
	int i;

	char cmp;

	for (i = 0; i < s1len; i++)
	{
		if (s1[i] == s2[i])
		{
			cmp = 0;
		}
		if (s1[i] < s2[i])
		{
			cmp = -1;
		}
		if (s1[i] > s2[i])
		{
			cmp = 1;
		}
	}
	return (cmp);
}

