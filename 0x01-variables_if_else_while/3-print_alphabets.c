#include <stdio.h>


/**
 * main - prints both lower and upper case alphabets from a to z in a new line
 * return: Always 0 (passed)
 */




int main(void)
{
	char ch;

	for(ch  ='a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for(ch ='A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return(0);
}
