#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - print attributes of dog
 * @d: type of struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", ((*d).name) ? (*d).name : "(nil)");
		printf("Age: %f\n", ((*d).age) ? (*d).age : 0);
		printf("Owner: %s\n", ((*d).owner) ? (*d).owner : "(nil)");
	}
}
