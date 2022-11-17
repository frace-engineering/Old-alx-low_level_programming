#include "function_pointers.h"

/**
 * print_name - prints a name given by the function
 * @name: name to be printed
 * @f: function pointer that takes a string
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
}
