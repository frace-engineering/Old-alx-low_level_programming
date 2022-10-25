
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates geygen.
 * Return: Always 0
 */

int main(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (b < 2772)
	{
		a = rand() % 128;
		if ((a + b) > 2772)
			break;
		b = a + b;
		printf("%d", a);
	}
	printf("%d\n", (2772 - a));
	return (0);
}
