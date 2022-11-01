#include "main.h"

/**
 * *_memcpy - fills the pointed memory witha given character
 * @dest: the character to fill the memory aerea with.
 * @n: the number of times the character will be  registered
 * @src: the string to be worked on
 *
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

