#include <stdio.h>


/**
 * main - This prints the alphabets from a to z excluding q and e in lower case
 * return: Always 0 (correct)
 */
int main (void )
{
	char ch;

	for ( ch = 'a'; ch <= 'z'; ch++ )
		if ( ch !='q'&& ch != 'e' )
		{
			putchar (ch);
		}
		putchar ('\n');
	 return (0);
}
