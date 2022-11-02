#include "main.h"
#include <string.h>

/**
 * _strstr - searches a string for any of a set of bytes.
 * @haystack: pointer to string
 * @needle: substring to search for in the string haystack.
 *
 * Return: pointer to the begining of the found substring
 * if not found, return NULL..
*/
char *_strstr(char *haystack, char *needle)
{
	char *ptr = strstr(haystack, needle);

	return (ptr);
}
