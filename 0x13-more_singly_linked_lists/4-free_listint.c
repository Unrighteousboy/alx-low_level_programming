#include "lists.h"
/**
 * free_listint - free a list
 * @head: head of a node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
