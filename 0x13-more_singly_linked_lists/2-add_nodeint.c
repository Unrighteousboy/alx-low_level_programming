#include "lists.h"
/**
 * add_nodeint - add to a list
 * @head: the head of the list
 * @n: element in the list
 * Return: address to the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));

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
	*head = new;

	new->n = n;

	return (*head);
}
