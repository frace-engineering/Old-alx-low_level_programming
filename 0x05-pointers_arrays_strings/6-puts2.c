#include "main.h"

/**
 * puts2 - prints 1 character out of 2 in a string
 * @str: string input
 * Return: void
 */

void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		else if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
}
