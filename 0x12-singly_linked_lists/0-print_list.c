#include "lists.h"

/**
 * print_list -  prints all the elements of a list.
 * @h: singly linked list.
 * Return: number of the nodes.
 */
size_t print_list(const list_t *h)
{
	size_t elements;

	elements = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s", h->len, h->str);
		h = h->next;
		elements++;
	}
	return (elements);
}
