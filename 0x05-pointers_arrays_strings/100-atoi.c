
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	int i, d, n, f, len, digit;

	i = 0;
	d = 0;
	n = 0;
	f = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
		len++
	while (i < len && f == 0)
	{
		if (s[i] == '-')
		{
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		digit = s[i] - '0';
