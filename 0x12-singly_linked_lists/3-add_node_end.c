#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node_end - add a node to the end of a list
 * @head: parameter
 * @str: parameter
 * Return: address of the elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newEnd;
	list_t *temp;
	int len = 0;

	temp = *head;

	while (str[len])
	{
		len++;
	}

	newEnd = (list_t *)malloc(sizeof(list_t));

	if (!newEnd)
	{
		return (NULL);
	}

	newEnd->str = strdup(str);
	newEnd->len = len;
	newEnd->nexr = NULL;

	if (*head == NULL)
	{
		*head = newEnd;
		return (newEnd);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newEnd;

	return (newEnd);
}
