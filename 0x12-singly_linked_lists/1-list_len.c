#include "lists.h"
#include <stddef.h>
/**
 * list_len - print the length of an item
 * @h: parameter
 * Return: length
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
