#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10 starting from 0 using only putchar fn
 * return: Always 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
		putchar(num);
	putchar('\n');
}
