#include "dog.h"
/**
 * init_dog - initialize values to type struct dog
 * @d: struct dog
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
