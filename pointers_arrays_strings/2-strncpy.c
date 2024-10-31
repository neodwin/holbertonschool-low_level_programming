#include "main.h"

/**
 * _strncpy - copies a string up to n
 * @dest: Destination of the pointer to the string
 * @src: Source of the pointer to the string to copy
 * @n: Number of bytes to copy.
 * Return: Pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (i < n)
	{

		if (src[i] != '\0' && j == 0)
			dest[i] = src[i];
		else if (j == 1)
			dest[i] = 0;
		else
		{
			dest[i] = 0;
			j = 1;
		}
		i++;
	}
	return (dest);
}
