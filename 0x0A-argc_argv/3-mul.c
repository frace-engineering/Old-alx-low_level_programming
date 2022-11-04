#include "main.h"
#include <stdio.h>

/**
 * multiply_numbers - is s function that prints its name
 * @a: number of elements in array b
 * @b: array of arguments
 * Return: Always 0 (Success)
 */
int multiply2_numbers(int a, char *b[])
{
	if (a <= 2)
	{
		printf("Error");
	}
	else if (a == 3)
	{
		printf("%d", *b[1] * (*b[2]));
	}
	printf("\n");
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
	multiply2_numbers(argc, argv);
	return (0);
}
