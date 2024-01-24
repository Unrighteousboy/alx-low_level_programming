#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - Array function
 * @array: array
 * @size: size of array
 * @action: function pointer
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL || action != NULL)
	{
		for (int i = 0; i < (int) size; i++)
		{
			action(array[i]);
		}
	}
}
