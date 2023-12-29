#include <stdio.h>
/**
 * main - print possible numbers of 10's and 1's
 *
 * Return: 0 success
 *
 */
int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens <= '9'; tens++)
	{
		for (ones = 0; ones <= '9'; ones++)
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);
			}
			if (!(ones == 9 && tens == 8))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
putchar('\n');
return (0);
}
