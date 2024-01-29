#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguments passed
 * Return: summed integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);

	unsigned int i;
	int results = 0;

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		results += va_arg(args, int);
	}
	va_end(args);
	return (results);
}
