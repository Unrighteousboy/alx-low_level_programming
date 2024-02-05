#include "lists.h"
/**
 * add_nodeint_end - add an element at the end of a list
 * @head: head of the list
 * @n: element of the list
 * Return: the address of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;
	temp = *head;

	new = (listint_t *)malloc(sizeof(lisint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
