#include "lists.h"
/**
 * insert_nodeint_at_index - Insert a new node at position nth
 * @head: head
 * @idx: index
 * @n: new element
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int i;
	listint_t *temp;

	temp = *head;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	for (i = 0; i < idx; i++)
	{
		temp = temp->next;
	}

	if (!temp)
	{
		return (NULL);
	}

	new->next = temp->next;
	temp->next = new;
	return (new);
}
