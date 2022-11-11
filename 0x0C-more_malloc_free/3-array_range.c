#include "main.h"
#include <stdlib.h>

/**
 * array_range - allocates memory for an  array of inegers
 * @min: input minimun range
 * @max: input maximum range
 * Return: Always 0 on success
 */

int *array_range(int min, int max)
{
	int *ptr;
	size_t size;
	int i, j;

	size = 0;
	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		size++;
	}


	ptr = malloc(sizeof(*ptr) * size);
	if (ptr == 0)
	{
		return (NULL);
	}
	for (j = min; j <= max; j++)
	{
		_putchar(ptr[j]);
	}
	return (ptr);
}
