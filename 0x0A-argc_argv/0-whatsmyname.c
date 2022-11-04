#include "main.h"
#include <stdio.h>

/**
 * what_is_myname - is s function that prints its name
 * @a: number of elements in array b
 * @b: array of arguments
 * Return: Always 0 (Success)
 */
int what_is_myname(int a, char *b[])
{
	printf("%s\n", *b);
	return (0);
}

int main(int argc, char *argv[])
{
	what_is_myname(argc, argv);
}
