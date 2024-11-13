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
	dog_t new_dog;
	dog_t *ptr = &new_dog;
	char *dog_name = name;
	char *dog_owner = owner;

	ptr->name = dog_name;
	ptr->age = age;
	ptr->owner = dog_owner;

	return (ptr);
}
