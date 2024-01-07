#include "main.h"
/**
 * swap_int - a program to swap number of two integer
 * @a: character to be checked
 * @b: character to be checked
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
