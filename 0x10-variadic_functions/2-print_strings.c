#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function to print strings
 * @separator: string
 * @n: numbee of strings passed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 1;
	char *strin;

	va_list args;

	va_start(args, n);

	for (; i <= n; i++)
	{
		strin = va_arg(args, char *);
		printf("%s", (strin == NULL) ? "(nil)" : strin);
		if (separator != NULL && i != n)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(args);
}
