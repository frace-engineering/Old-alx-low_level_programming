#include <stdio.h>


/**
 * main - prints posible combinations of single-digit 
 * numbers.
 * return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
