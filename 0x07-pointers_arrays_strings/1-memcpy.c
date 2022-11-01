#include "main.h"

/**
 * *_memset - fills the pointed memory witha given character
 * @b: the character to fill the memory aerea with.
 * @n: the number of times the character will be  registered
 * @s: the string to be worked on
 *
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		src[i] = dest[i];
		i++;
	}
	return (dest);
}

