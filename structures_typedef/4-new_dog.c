#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - Creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (name == NULL || owner == NULL)
		return (NULL);

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->name = malloc(sizeof(name) + 1);
	ptr->owner = malloc(sizeof(owner) + 1);

	if (ptr->name == NULL || ptr->owner == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->name = name;
	ptr->owner = owner;
	ptr->age = age;
	return (ptr);
}
