#include "main.h"
#include <stdio.h>

/**
 * arg_count - counts the number of arguments in a function
 * @a: number of elements in array b
 * @b: array of arguments
 * Return: Always 0 (Success)
 */
int args_count(int a, char *b[])
{
	printf("%d\n", a);
	return (0);
}

int main(int argc, char *argv[])
{
	args_count(argc, argv);
}
