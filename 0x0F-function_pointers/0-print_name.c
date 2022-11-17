#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name given by the function
 * @name: name to be printed
 * @f: function pointer that takes a string
 */

void print_name(char *name, void (*f)(char *))
{
	char *ptr;

	ptr = malloc(sizeof(*ptr) * (*name));

	f(name);
}
