#include "lists.h"
/**
 * pop_listint - remove the head of a node
 * @head: head of the node
 * Return: the total node remaining
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	temp = *head;

	*head = (*head)->next;
	free(temp);
	return (*head);
}
