#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: minimum integer
 * @max: maximum integer
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptrArray;
	int range, i;
	range = 0;

	if (min > max)
	{
		return (NULL);
	}

	range = ((max + 1) - min);

	ptrArray = malloc(sizeof(int) * range);

	if (ptrArray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < range; i++)
	{
		*(ptrArray + i) = (min + i);
	}
	return (ptrArray);
}
