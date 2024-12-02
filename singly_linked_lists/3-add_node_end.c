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
	list_t *temp;

	store = malloc(sizeof(size_t));

	if (store == NULL)
	return (NULL);

	store->str = strdup(str);
	store->len = strlen(str);
	store->next = NULL;

	if (*head == NULL)
	{
		*head = store;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = store;
	}
	return (store);
}
