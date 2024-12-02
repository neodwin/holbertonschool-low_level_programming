#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *store;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	store = malloc(sizeof(list_t));
	if (!store)
		return (NULL);

	store->str = strdup(str);
	store->len = len;
	store->next = NULL;

	if (*head == NULL)
	{
		*head = store;
		return (store);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = store;

	return (store);
}
