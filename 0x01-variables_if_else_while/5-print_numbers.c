#include <stdio.h>

/**
 * main - This program prints out all the single digit unmbers of base 10 starting from 0
 * return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d\n", num);
	return (0);
}