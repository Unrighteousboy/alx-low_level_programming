#include <stdio.h>
/**
 * main - program to print the combination of 100's, 10's, 1's
 *
 * Return: 0 success
 *
 */
int main(void)
{
	int hundred;
	int tens;
	int ones;

	for (hundred = '0'; hundred <= '9'; hundred++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				if (!((tens > ones) || (tens == ones) || (hundred > tens) || (hundred == tens)))
				{
					putchar(hundred);
					putchar(tens);
					putchar(ones);
					if (!(hundred == '7' && tens == '8' && ones == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
