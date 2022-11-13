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

	i = 0;
	j = 0;

	while (dest[i] != '\n')
	{
		_putchar(dest[i]);
		i++;
	}
	if (dest[i] == '\n')
	{
		while (src[j] != '\n')
		{
			_putchar(src[j]);
			i++;
		}
	}
	_putchar('\0');
	_putchar('\n')
	return (dest);
}
