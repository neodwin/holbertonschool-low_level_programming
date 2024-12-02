#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node - adds a new node at the beginning of a list_t list
  * @head: current place in the list
  * @str: pointer to string
  * Return: the adress of the new element or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *store;
	unsigned int len = 0;

	while (str[len])
		len++;

	store = malloc(sizeof(list_t));
	if (!store)
		return (NULL);

	store->str = strdup(str);
	store->len = len;
	store->next = (*head);
	(*head) = store;

	return (*head);
}
