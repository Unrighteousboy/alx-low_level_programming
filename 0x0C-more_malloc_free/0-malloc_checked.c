#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size of memory
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *checked;

	checked = malloc(b);

	if (!checked)
	{
		exit(98);
	}
	return (checked);
}
