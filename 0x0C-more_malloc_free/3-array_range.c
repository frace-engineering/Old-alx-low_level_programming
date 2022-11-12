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
	int i;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(*ptr) * (max - min + 1));
	if (ptr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < max - min; i++)
	{
		_putchar(ptr[i]);
	}
	return (ptr);
}
