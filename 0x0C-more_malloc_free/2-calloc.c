#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory fo an arry
 * @nmemb: number of items to allocate memory for
 * @size: size of each memory bytes
 * Return: pointer on seccess
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	ptr = 0;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		while (i <= nmemb)
		{
			ptr = malloc(sizeof(int) * size);
			i++;
			ptr++;
		}
	}
	return (ptr);
}




