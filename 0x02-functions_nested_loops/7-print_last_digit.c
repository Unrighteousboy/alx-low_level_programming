#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @c: the character to be checked
 * Return: return value of the last digit
 */
int print_last_digit(int c)
{
	int last;

	last = c % 10;

	if (last < 0)
	{
		last = last * -1;
		putchar(last);
	}
	return (last);
}

