#include "main.h"
#include <stdlib.h>



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
