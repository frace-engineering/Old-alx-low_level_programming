#include "main.h"
#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a : first number
 * @b: second number
 * @c: third number
 * Return: 0
 */

int largest_number(int a, int b, int c)
{

	if (a >= b && a >= c)
		printf("%d is the largestnumber.", a);
	else if (b >= a && b >= c)
		printf("%d is the largest number.", b);
	else if (c >= a && c >= b)
		printf("%d is the largest number.", c);

	return (0);
}
