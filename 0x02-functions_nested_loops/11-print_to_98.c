#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from a give number to 98
 * @n: input number
 * Return: 0
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else if (i == 98)
		{
			printf("%d\n", i);
		}
	}
	if (i >= 98)
	{
		for (i = n; i > 98; i--)
		{
			if (i != 98)
			{
			printf("%d, ", i);
			}
			else 
			{
				printf("%d\n");
			}
		}
	}

}
