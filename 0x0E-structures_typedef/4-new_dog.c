#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @age: ...
 * @name: ...
 * @owner: ...
 * Return: A new dog
 */
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int nameLen = 0, ownerLen = 0;

	if (name == NULL && owner == NULL)
	{
		return (NULL);
	}

	nameLen = _strlen(name);
	ownerLen = _strlen(owner);

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->owner = malloc(sizeof(char) * ownerLen + 1);
	if (newDog->owner == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->name = malloc(sizeof(char) * nameLen + 1);
	if (newDog->name == NULL)
	{
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	newDog->name = _strcpy(newDog->name, name);
	newDog->owner = _strcpy(newDog->owner, owner);
	newDog->age = age;

	return (newDog);
}

/**
 * _strcpy - copy a string into another string
 * @dest: string destination
 * @src: string source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

/**
 * _strlen - length of a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
	{
		i++;
	}
	return (i);
}
