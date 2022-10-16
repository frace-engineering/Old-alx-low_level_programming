#include <stdio.h>


/**
 * main - This prints the alphabets from a to z excluding q and e in lower case
 * Return: Always 0 (correct)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
