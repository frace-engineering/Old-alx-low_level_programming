#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */

int _strlen(char *s)
{
	int a;

	int count = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		count ++;
	}
	return (count);
}
/**
 * _strcpy - function to copy string from source to destination
 *@dest: pointer to destinatioin of string to be copied
 *@src: pointer to source of string to be copied
 * Return: return the value at dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;
	int srclen = _strlen(src);

	for (a = 0; a < srclen; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
/**
 * *new_dog - function to create new dog struct
 * @name: char type
 * @age: float type
 * @owner: char type
 * Return: Always success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(struct newdog));
	if (newdog == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newdog->name == NULL)
		return (NULL);
	_strcpy(newdog->name, name);

	newdog->age = age;

	if (owner == NULL)
	{
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	newd->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newdog->owner == NULL)
		return (NULL);
	_strcpy(newdog->owner, owner);

	return (newdog);
}
