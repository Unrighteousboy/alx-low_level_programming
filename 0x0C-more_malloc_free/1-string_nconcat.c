#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: character 1
 * @s2: character 2
 * @n: size
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptrStr;
	unsigned int count;
	unsigned int count1 = 0;
	unsigned int count2 = 0;
	unsigned int i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (; s1[count1] != '\0';)
	{
		count1++;
	}

	for (; s2[count2] != '\0';)
	{
		count2++;
	}

	count = count1 + count2;

	if (n >= count2)
	{
		n = count2;
	}
	else
	{
		count = count1 + n;
	}

	ptrStr = malloc(sizeof(char) * count + 1);

	if (ptrStr == NULL)
	{
		return (NULL);
	}

	for (; i < count1; i++)
	{
		ptrStr[i] = s1[i];
	}
	for (; i < count1 + n; i++)
	{
		ptrStr[i] = s2[i - count1];
	}
	ptrStr[count] = '\0';
	return (ptrStr);
}