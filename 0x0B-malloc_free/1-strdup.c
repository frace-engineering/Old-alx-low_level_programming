#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: input string
 * Return: pointer on success else null
 */
char *_strdup(char *str)
{
	unsigned int num;
	char *ptr;
	ptr = str;

	num = 0;

	ptr = malloc(sizeof(*ptr) * num);

	if (str == NULL)
	{
		return ('\0');
	}
	while (str[num] != '\0')
	{
		_putchar(str[num]);
		num++;
	}
	return (ptr);
	free(ptr);
}


