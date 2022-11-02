#include "main.h"
#include <string.h>

/**
 * _strspn - finds substring from string s and get the length.
 * @s: pointer to string
 * @accept: substring to search for in the string s
 *
 * Return: the length of the substring..
*/
unsigned int _strspn(char *s, char *accept)
{
	int length = strspn(s, accept);

	return (length);
}
