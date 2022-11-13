#include "main.h"

/**
 * *_strcat - concatenates 2 strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: String
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		_putchar(dest[i]);
	}
	for (j = 0; src[j] != '\0'; i++)
	{
		_putchar(src[j]);
	}
	_putchar('\n')
	return (dest);
}
