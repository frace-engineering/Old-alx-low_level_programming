#include "main.h"
#include <stdio.h>

/**
 * what_is_myname - is s function that prints its name
 * @a: number of elements in array b
 * @b: array of arguments
 * Return: Always 0 (Success)
 */
int myname(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

int main(int argc, char *argv[])
{
	myname(argc, argv);
	return (0);
}
