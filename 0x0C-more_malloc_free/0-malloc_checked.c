#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: undigned integer
 * Return: 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof(*ptr) * b);

	if (ptr == NULL)
	{
		_putchar(b);
	}
}


