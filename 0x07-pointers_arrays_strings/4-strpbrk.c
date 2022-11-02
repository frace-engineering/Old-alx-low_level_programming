#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to string
 * @accept: substring to search for in the string s
 *
 * Return: the length of the substring..
*/
char *_strpbrk(char *s, char *accept)
{
	char *ptr = strpbrk(s, accept);

	return (ptr);
}
