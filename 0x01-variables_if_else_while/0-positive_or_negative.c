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
	printf("The value of n is: %d\n", n);
	if(n > 0)
	{
		printf("Is positive\n");
	}
	else if(n < 0)
	{
		printf("Is negative\n");
	}
	else
	{
		printf("Is zero\n");
	}
	return (0);
}
