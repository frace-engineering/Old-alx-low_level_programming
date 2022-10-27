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

	while (dest[i++] != '\n')
	{
		_putchar(dest[i]);
		if (dest[i] == '\n')
		{
			while (src[j++] != '\n')
			{
				_putchar(src[j]);
			}
		}
		_putchar('\n');
	}
	return (dest);
}
