#include "main.h"

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
 * *_strncat - appends a determined number of  char from src string
 * to destinating string without a NULL terminator
 * @dest: destination string
 * @src: source string
 * @n: number of character to be appended from src
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	int destlen = _strlen(dest);
	int srclen = _strlen(src);

	if (srclen >= n)
	{
		for (i = 0; i < n; i++)
		{
			dest[destlen + 1] = src[i];
		}
	}
	if (srclen <= n)
	{
		for (i = 0; src[i] == '\0' || i == n; i++)
		{
			dest[destlen + i] = src[i];
		}
	}
	_putchar('\n');
	return (dest);
}
