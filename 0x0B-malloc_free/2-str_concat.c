#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings and return a pointer
 * @s1: first input string
 * @s2: second input string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr;

	i = 0;
	j = 0;
	ptr = malloc(sizeof(*ptr) * i + j);
	for (i = 0; s1[i] != '\0'; i++)
	{
		_putchar(s1[i]);
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		_putchar(s2[j]);
	}
	return (ptr);
}
