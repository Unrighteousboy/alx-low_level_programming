#include "lists.h"
/**
 * get_nodeint_at_index - nth node of a list
 * @head: head of a list
 * @index: index of a list
 * Return: the nth node of a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;

	if (!head)
		return (NULL);

	for (;i < index; i++)
	{
		temp = temp->next;
	}

	if (!temp)
	{
		return (NULL);
	}
	return (temp);
}
