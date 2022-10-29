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
	int i;
	int j;
	int count = 0;

	for (i = 0; ; i++)
	{
		if (dest[i] != '\0')
		{
			count++;
		}
		for (j = 0; j < n; j++)
		{
			dest[count + j] = src[j];
		}
	}
	return (dest);
}



