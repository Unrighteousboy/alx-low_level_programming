#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print number to 98
 * @n: character to be checked
 * Return: 0
 */
void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
			printf(", ");
		}
	}

	if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
			printf(", ");
		}
	}
	printf("\n");
}
