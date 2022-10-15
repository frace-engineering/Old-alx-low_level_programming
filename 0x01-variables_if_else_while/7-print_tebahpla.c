#include <stdio.h>

/**
 * main - prints the alphabets in reverse order
 * return: Always 0 (success)
 */
int main(void)
{
	char mine;
	for  (mine = 'z'; mine > 'a'; mine--)
	{
		putchar(mine);
	}
	putchar('\n');
	return(0);
}
