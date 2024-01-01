#include "main.h"

/**
 * main - print lowercase alphabet
 *
 * Return: 0 success
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
	return (0);
}
