#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly allocated space in memory
 * @str: parameter
 * Return: Null if fail
 */
char *_strdup(char *str)
{
    char *ptrStr;
    int count, i;
    
    
    for (count = 0; str[count] != '\0'; count++)
    {
        count++;
    }
    
    if (count == 0)
    {
        return (NULL);
    }
    
    ptrStr = malloc(i * sizeof(char) + 1);
    
    for (i = 0; i < count; i++)
    {
        ptrStr[i] = str[i];
    }
    
    ptrStr[count] = '\0';
    
    return (ptrStr);
}
