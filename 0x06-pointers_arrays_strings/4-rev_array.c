#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array to work on
 * @n: is the size of the array
 *
 * Return: voide
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i >= 0; i--)
	{
		_putchar(a[i] + '0');
	}
	_putchar('\n');
}
