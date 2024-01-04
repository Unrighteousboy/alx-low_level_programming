#include "main.h"

/**
 * _abs - computes absolute value of a number
 * @c - number to be checked
 * Return: the absolute value
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs = c * -1;

		return (abs);
	}
	return (c);
}
