#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: int min
 * @max: int max
 * Return: pointer to the int array, NULL if failed
 */

int *array_range(int min, int max)
{
	int *array;
	int i = 0;
	int j = max - min + 1;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * j);

	if (array == NULL)
		return (NULL);
	for (; i < j; i++)
		array[i] = min + i;
	return (array);
}
