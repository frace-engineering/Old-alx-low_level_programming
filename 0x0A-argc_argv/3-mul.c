#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * multiply2_numbers - is s function that prints its name
 * @a: number of elements in array b
 * @cas: array of arguments
 * Return: Always 0 (Success)
 */
int multiply2_numbers(int a, char *cas[])
{
	if (a != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(cas[1]) * atoi(cas[2]));
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
	multiply2_numbers(argc, argv);
	return (0);
}
