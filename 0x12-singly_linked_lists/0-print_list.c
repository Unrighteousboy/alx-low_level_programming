#include "lists.h"
#include <stdio.h>
/**
 * print_list - print all elements in a list
 * @h: parameter
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}