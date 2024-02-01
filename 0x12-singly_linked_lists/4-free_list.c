#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * free_list - free a list
 * @head: paramter
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(temp->str);
		free(temp->len);
		free(temp);
		head = temp;
	}
}
