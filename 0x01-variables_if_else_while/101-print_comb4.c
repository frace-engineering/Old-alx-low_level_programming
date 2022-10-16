
#include <stdio.h>

/**
 * main - get all possible combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 53; i++)
	{
		for (j = 46; j <= 58; j++)
		{
			for (k = 54; k < 58; k++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 53 || j != 58)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
