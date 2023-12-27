#include <stdio.h>
/**
 * main - print hexadecimal numbers
 *
 * Return: 0 success
 *
 */
int main(void)
{
	char i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		if (i >= 10)
		{
			putchar(i - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
