#include "main.h"
#include <stdio.h>

/**
 * args_count - is s function that prints its name
 * @a: number of elements in array b
 * @b: array of arguments
 * Return: Always 0 (Success)
 */
int args_count(__attribute__((unused)) int a, char *b[])
{
	printf("%d\n", a);
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
	args_count(argc, argv);
	return (0);
}
