#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Return: 1 for success, 0 for failure
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
