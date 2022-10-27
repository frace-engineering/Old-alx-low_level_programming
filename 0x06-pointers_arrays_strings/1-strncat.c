#include "main.h"

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
	int i, j;

	i = 0;
	j = 0;

	while (dest[i++] != '\0')
	{
		_putchar(dest[i]);
		if (dest[i] == '\0')
		{
			for (j = 0; j <= n; j++)
			{
				_putchar(src[j]);
			}
		}
		_putchar('\0');
		_putchar('\n');
	}
	return (dest);
}

