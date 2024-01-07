#include "main.h"
/**
 * _strlen - count the length of array
 * @s: character to be checked
 * Return: the length of array
 */
int _strlen(char *s)
{
	int i, count;
	
	count = 0;
	
	for (i = 0; s[i] != "\0"; i++)
	{
		count++;
		return (count);
	}
}
