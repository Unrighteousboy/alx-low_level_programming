#include "main.h"
/**
 * str_concat - concatenate two strings
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: Null on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptrStr;
	unsigned int count = 0;
	unsigned int count1 = 0;
	unsigned int count2 = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}

	for (;s1[count1] != '\0';)
	{
		count1++;
	}
	for (;s2[count2] != '\0';)
	{
		count2++;
	}

	count = count1 + count2;

	ptrStr = malloc(sizeof(char) * count + 1);

	if (ptrStr == NULL)
	{
		return (NULL);
	}

	for (;i < count1; i++)
	{
		ptrStr[i] = s1[i];
	}
	for (;i <= count; i++)
	{
		ptrStr[i] = s2[j];
		j++;
	}
	return (ptrStr);
}
