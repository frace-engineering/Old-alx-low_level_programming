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
	int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	
	if (size == 0)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		_putchar(c);
	}
	return (ptr);


}


