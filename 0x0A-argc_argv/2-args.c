#include "main.h"
#include <stdio.h>

/**
 * args_list - is s function that prints its name
 * @a: number of elements in array b
 * @b: array of arguments
 * Return: Always 0 (Success)
 */
int args_list(__attribute__((unused)) int a, char *b[])
{
	int i;

	for (i = 0; i < a; i++)
	{
		printf("%s\n", b[i]);
	}
	return (0);
}
/**
 * main - entry point for the program
 * @argc: argument count
 * @argv: parameter vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	args_list(argc, argv);
	return (0);
}
