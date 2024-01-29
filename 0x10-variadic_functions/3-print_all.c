#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Print anything
 * @format: list of arguments passed
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "", *str;

	va_list args;

	va_start(args, format);

	if (!format)
	{
		return;
	}

	while (*(format + i) != '\0')
	{
		switch(*(format + i))
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					str = "(nil)";
				}
				else
				{
					printf("%s%s", separator, str);
				}
				break;
			default:
				i++;
				continue;
		}
		i++;
		separator = ", ";
	}
	putchar('\n');
	va_end(args);
}
