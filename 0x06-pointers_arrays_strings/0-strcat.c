#include "main.h"
/**
 * _len - calculates the lenght of a string
 * @s: input string
 * Return: lenght of the string
 */

int _len(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != 0; i++)
	{
		len++;
	}
	return (len);
}

/**
 * *_strcat - concatenates 2 strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: String
 */

char *_strcat(char *dest, char *src)
{
	int i;

	int destlen = _len(dest);
	int srclen = _len(src);

	for (i = 0; i < srclen; i++)
	{
		dest[destlen + i] = src[i];
	}
	dest[destlen + i] = '\0';
	return (dest);
}
