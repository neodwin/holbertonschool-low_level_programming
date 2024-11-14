#include "dog.h"
#include <stdlib.h>

/**
  * _strlen - return length of string
  * @s: string
  * Return: string length
  */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}

/**
  * _strcpy - copy a string
  * @dest: destination
  * @src: source
  * Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = NULL;
	int i = 0;
	int j = 0;

	if (name != NULL && owner != NULL)
	{
		i = _strlen(name) + 1;
		j = _strlen(owner) + 1;
		ptr = malloc(sizeof(dog_t));
		if (ptr == NULL)
			return (NULL);
		ptr->name = malloc(sizeof(char) * i);
		if (ptr->name == NULL)
		{
			free(ptr);
				return (NULL);
		}

		ptr->owner = malloc(sizeof(char) * j);
		if (ptr->owner == NULL)
		{
			free(ptr->name);
			free(ptr);
				return (NULL);
		}

		ptr->name = _strcpy(ptr->name, name);
		ptr->owner = _strcpy(ptr->owner, owner);
		ptr->age = age;
	}

	return (ptr);
}
