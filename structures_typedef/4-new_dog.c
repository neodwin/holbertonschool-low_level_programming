#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int j, k, i;
	dog_t *ptr;

	j = k = 0;
	while (name[j++])
		;
	while (owner[k++])
		;
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(j * sizeof(ptr->name));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < j; i++)
		ptr->name[i] = name[i];

	ptr->age = age;

	ptr->owner = malloc(k * sizeof(ptr->owner));
	if (ptr == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < k; i++)
		ptr->owner[i] = owner[i];

	strcpy(ptr->name, name);
	strcpy(ptr->owner, owner);
	return (ptr);
}
