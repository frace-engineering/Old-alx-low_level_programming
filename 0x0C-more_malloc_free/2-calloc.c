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

	i = 0;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if  (ptr == NULL)
	{
		return (NULL);
	}
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}




