#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10
 * starting from 0 using only putchar fn
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 59; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
