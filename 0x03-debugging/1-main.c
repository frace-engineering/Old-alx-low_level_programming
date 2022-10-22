#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incomming :\(\n");

	i = 0;

	/*while (1 < 10)*/
	{
		putchar(i);
	}
	printf("Infinte loop avoided! \\0/\n");

	return (0);

}
