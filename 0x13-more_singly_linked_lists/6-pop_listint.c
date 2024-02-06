#include "lists.h"
/**
 * pop_listint - remove the head of a node
 * @head: head of the node
 * Return: the total node remaining
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!*head || !head)
		return;

	temp = *head;
	num = (*head)->n;

	*head = (*head)->next;
	free(temp);
	return (num);
}
