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
	size_t len = strlen(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}

