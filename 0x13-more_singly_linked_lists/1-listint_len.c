#include "lists.h"
/**
 * listint_len - number of elements in a linked list
 * @h: parameter
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num_Elem = 0;

	while (h)
	{
		num_Elem++;
		h = h->next;
	}
	return (num_Elem);
}
