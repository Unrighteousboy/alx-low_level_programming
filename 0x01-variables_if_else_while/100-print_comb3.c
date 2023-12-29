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

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			if (!((tens > ones) || (tens == ones)))
			{
				putchar(tens);
				putchar(ones);
				if (!(tens == '8' && ones == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return(0);
}
