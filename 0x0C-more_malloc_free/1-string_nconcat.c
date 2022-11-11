#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings and return the pointer to
 * the new string
 * @s1: first input string
 * @s2: second input string
 * @n: number of characters to use from s2
 * Return: Pointer to new string on success else return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	

	i = 0;
	j = 0;


	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			_putchar(s1[i]);
			i++;
		}
	}
	else
	{
		return (" ");
	}
	if (s1[i] == '\0')
	{
		for (; j <= n; j++)
		{
			_putchar(s2[j]);
		}
		_putchar('\0');
	}
	return (s1);
}
