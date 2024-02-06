#include "lists.h"
/**
 * sum_listint - sum of all data in a node
 * @head: head of a node
 * Return: The sum of all the node data
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int num = 0;

	temp = head;

	if (!temp)
		return (0);

	while (temp)
	{
		num += temp->n;
		temp = temp->next;
	}
	return (num);
}
