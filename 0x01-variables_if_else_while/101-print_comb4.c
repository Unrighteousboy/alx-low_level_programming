#include <stdio.h>
/**
 * main - program to print the combination of 100's, 10's, 1's
 *
 * Return: 0 success
 *
 */
int main(void)
{
	int huns;
	int tens;
	int ones;

	for (huns = '0'; huns <= '9'; huns++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				if (!((tens > ones) || (tens == ones) || (huns > tens) || (huns == tens)))
				{
					putchar(huns);
					putchar(tens);
					putchar(ones);
					if (!(huns == '7' && tens == '8' && ones == '9'))
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
