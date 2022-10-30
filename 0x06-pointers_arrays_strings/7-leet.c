#include "main.h"

/**
 * *leet - encodes a string to 1337
 * @s: string to work on
 * Return: string
 */
char *leet(char *s)
{
	int i, j;
	i = j = 0;

	char sc[] = {'A', 'E', 'O', 'T', 'L'};
	char replace[] = {4, 3, 0, 7, 1};

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == sc[j] || s[i] - 32 == sc[j])
			{	
				s[i] == replace[j];
			}
		}
		i++;

	}
	return (s);
}
