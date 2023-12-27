#include <stdio.h>
/**
 * main - print all possible combinations of single digit number
 *
 * Return: 0 success
 *
 */
int main(void)
{
	char i,j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(", ");
		}
	}
	putchar('\n');
	return(0);
}
