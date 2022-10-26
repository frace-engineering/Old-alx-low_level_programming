#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements of an array followed by a new line
 * @a: input array
 * @n: input integer
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		{
			if (i != (n - 1))
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
