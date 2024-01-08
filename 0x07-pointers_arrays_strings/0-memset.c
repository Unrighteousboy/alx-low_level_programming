#include "main.h"
/**
 * _memset - a function that fills memery with a constant byte
 * @n: character to be checked
 * @s: character to be checked
 * @b: character to be checked
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
