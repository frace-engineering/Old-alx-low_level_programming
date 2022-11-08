#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of characters
 * @c: charater input
 * @size: size of the array
 * Return: Null if size = 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	i = 0;
	
	ptr = malloc(sizeof(char) * size);
	
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


