#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of the list
 * @index: index of the node, starting from 0
 * Return: pointer to the nth node, NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	dlistint_t *ptr_node = head;

	for (i = 0; ptr_node != NULL && i < index; i++)
	{
		ptr_node = ptr_node->next;
	}

	return (ptr_node);
}
