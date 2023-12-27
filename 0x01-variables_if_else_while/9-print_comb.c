#include <stdio.h>
/**
 * main - print all possible combinations of single digit number
 *
 * Return: 0 success
 *
 */
int main(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
		putchar(', ');
	}
	putchar('\n');
	return(0);
}
