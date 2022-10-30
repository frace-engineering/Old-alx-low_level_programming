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

	i = n;

	while (i >= 0)
	{
		if (i != 0)
		{
			_putchar(a[i - 1] + '0');
		}
		if (i != 0 && a[i - 1] != '\0')
		{
			_putchar(',');
		}
		i--;
	}
	_putchar('\n');
}
