#include <stdio.h>

/**
 * main - this function prints out the alphabets
 * from a to z in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

