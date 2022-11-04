#include "main.h"
#include <stdio.h>

/**
 * print_arg - prints the arguments of a program
 * @a: number of elements in array b
 * @b: array of arguments
 * Return: Always 0 (Success)
 */
int print_arg(int a, char *b[])
{
	int i;

	for (i = 0; i < a; i++)
	{
		printf("%s\n", b[i]);
	}
	return (0);
}

int main(int argc, char *argv[])
{
	print_arg(argc, argv);
}
