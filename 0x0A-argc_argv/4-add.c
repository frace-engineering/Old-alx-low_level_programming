#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add - is s function that prints its name
 * @a: number of elements in array b
 * @b: array of arguments
 * Return: Always 0 (Success)
 */
int add(__attribute__((unused)) int a, char *b[])
{
	int i;

	int sum = 0;


	for (i = 1; i < a; i++)
	{
		if (a == 1)
		{
			printf("0");
		}
		else
		{
			sum += atoi(b[i]);
		}
	}
	printf("%d\n", sum);
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
	add(argc, argv);
	return (0);
}
