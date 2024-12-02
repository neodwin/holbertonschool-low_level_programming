#include <stddef.h>
#include "lists.h"

/**
  * list_len - number of elements in a linked list_t list
  * @h: singly linked list to print
  * Return: number of nodes in the list
  */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
