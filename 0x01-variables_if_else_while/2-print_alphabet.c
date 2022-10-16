#include <stdio.h>

/** 
 * main - this function prints out the alphabets 
 * from a to z in lower case
 * return: Always 0
 */
int main(void)
{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch ++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

