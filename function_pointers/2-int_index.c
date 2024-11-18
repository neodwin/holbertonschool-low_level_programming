#include "function_pointers.h"
#include <stdlib.h>

/**
  * int_index - searches for an integer
  * @array: pointer to array
  * @size: size of array
  * @cmp: pointer to the function
  * Return: index of the first element
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = -1;

	if (size <= 0 || !(array) || !(cmp))
		return (-1);
	while (++i < size)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
