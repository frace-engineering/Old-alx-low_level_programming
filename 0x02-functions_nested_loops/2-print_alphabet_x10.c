#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times , then a new line
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ch;
	int count = 0;

	while (count++ < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
