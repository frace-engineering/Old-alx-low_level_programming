#include <stdio.h>

/**
 * main - get all possible combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 53; i++)
	{
		for (j = 52; j <= 58; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 53 || j != 58)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
