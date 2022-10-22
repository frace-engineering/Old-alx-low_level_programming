#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from a give number to 98
 * @n: input number
 * Return: 0
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
	{
		printf("%d, ", i);
	}
	for (i = n; i > 98; i--)
	{
		printf("%d, ", i);
	}
}
