#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of the element
 * Return: pointer to the array, NULL for failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i = 0;
	int j = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(j);

	if (array == NULL)
		return (NULL);
	i = 0;

	while (i < (nmemb * size))
	{
		array[i] = 0;
		i++;
	}

	return (array);
}
