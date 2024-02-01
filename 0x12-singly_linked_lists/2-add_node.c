#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - add nodes to the beginning of a list
 * @head: the parameter
 * @str: parameter
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	while (str[len])
	{
		len++;
	}

	new = (list_t *)malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		new->next = NULL;
	}
	else
	{
		new->next = *head;
	}
	new->str = strdup(str);
	new->len = len;

	*head = new;

	return (*head);
}
