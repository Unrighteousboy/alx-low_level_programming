#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - check for positive, negative and zero numbers
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int n;
	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d\n", n);
		printf(" Is positive\n");
	}
	else if (n < 0)
	{
		printf("%d\n", n);
		printf(" Is negative\n");
	}
	else
	{
		printf("%d\n", n);
		printf(" Is zero\n");
	}
	return (0);
}
