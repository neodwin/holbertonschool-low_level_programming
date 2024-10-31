#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: string to be returned completed
 * @src: string to be appended to dest
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	char *cat = dest;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = src[j];
	return (cat);
}
