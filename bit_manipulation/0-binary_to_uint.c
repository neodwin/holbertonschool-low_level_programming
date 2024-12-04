#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: char string
 * Return: the converted number, or 0 if there is one
 * or more chars in the string b that is not 0 or 1 b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int result = 0;
	unsigned int temp = 1;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (temp = 1, result = 0, len--; len >= 0; len--, temp *= 2)
	{
		if (b[len] == '1')
			result += temp;
	}

	return (result);
}
