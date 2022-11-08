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
	char arr[] = "c";
	char *ptr;
	unsigned int i;

	ptr = arr;

	malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		if (size == 0)
		{
			return ('\0');
		}
		else 
		{
			_putchar(arr[i]);
		}
		return ('\0');
	}
	return (ptr);	
}


