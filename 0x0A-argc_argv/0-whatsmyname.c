#include "main.h"
#include <stdio.h>

/**
 * myname - is s function that prints its name
 * @a: number of elements in array b
 * @b: array of arguments
 * Return: Always 0 (Success)
 */
int myname(__attribute__((unused)) int a, char *b[])
{
	printf("%s\n", *b);
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
	myname(argc, argv);
	return (0);
}
