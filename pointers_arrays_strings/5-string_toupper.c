#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @ptr: pointer
 * Return: pointer
 */

char *string_toupper(char *ptr)
{
	int i = 0;

	while (ptr[i] != '\0')

	{
		if (ptr[i] > 96 && ptr[i] < 123)
			ptr[i] = ptr[i] - 32;
		i++;
	}

	return (ptr);
}
