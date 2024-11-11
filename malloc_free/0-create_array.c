#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars initialized with a specific char
 * @size: size of array allocate memory
 * @c: character initialize array
 * Return: pointer the array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (array == NULL)
	{
		return (NULL);
	}
	if (size == 0)
		return ('\0');
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	array[i] = '\0';
	return (array);
}
