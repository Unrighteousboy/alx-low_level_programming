#include <stdio.h>
/**
 * main - print alphabet in reverse
 *
 * Return: 0 sucess
 *
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
