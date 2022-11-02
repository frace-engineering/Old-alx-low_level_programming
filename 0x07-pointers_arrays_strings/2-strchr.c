#include "main.h"
#include <string.h>

/**
 * *_strchr - fills the pointed memory witha given character
 * @s: pointer to char
 * @c: character that is searched for
 *
 * Return: pointer to 1st instance of char or NULL if char is
 * not found.
*/

char *_strchr(char *s, char c)
{
	char *ptr = strchr(s, (int) c);

	return (ptr);
}
