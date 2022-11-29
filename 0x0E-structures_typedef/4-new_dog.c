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

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
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

	for (a = 0; src[a] != '\0'; a++)
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
	dog_t *new_dog;
	char *newname;
	char *newowner;


	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	printf("%s\n", new_dog->name);
	printf("%s\n", new_dog->name);
	newowner = malloc(sizeof(char) * (_strlen(new_dog->owner) + 1));
	newname = malloc(sizeof(char) * (_strlen(new_dog->name) + 1));
	printf("%s\n", new_dog->name);
	_strcpy(newname, new_dog->name);
	_strcpy(newowner, new_dog->owner);
	printf("My name is :%s\n", newname );
	printf("My owner is :%s\n", newowner);


	return (new_dog);
}
