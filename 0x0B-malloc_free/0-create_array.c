#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of characters
 * @c: charater input
 * @size: size of the array
 * Return: Null if size = 0
 */

char *create_array(unsigned int size, __attribute__((unused)) char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(*ptr) * size);

	if (size == 0)
	{
		return ('\0');
	}
	while (i < size)
	{
		_putchar(c);
		i++;
	}
	return (ptr);
}


