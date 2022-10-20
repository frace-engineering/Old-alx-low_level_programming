#include "main.h"

/**
 * main - this prints the lowercase alphabets.
 * Return: 0
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
