#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10 
 * starting from 0 using only putchar fn
 * ireturn: Always 0 (success)
 */
int main(void)
{
	int num = 0;

	for (; num < 10; num++)
	{
		putchar(num);
		putchar('\n');
		num++;
	}
	return (0);
}
