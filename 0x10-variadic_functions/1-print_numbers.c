#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed
 * @n: numbers of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 1;

	va_list args;
	va_start(args, n);

	for (; i <= n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i != n)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(args);
}
