#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first int variale
 * @b: second int variable
 * Return: Always 0
 */


void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
