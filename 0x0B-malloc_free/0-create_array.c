#include <stdlib.h>
#include "main.h"
/**
 * create_array - a function to create an array of chars
 * @size: size of space
 * @c: parameter
 * Return: Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptrArray;
	unsigned int i;

	ptrArray = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptrArray[i] = c;
	}
	return (ptrArray);
}
