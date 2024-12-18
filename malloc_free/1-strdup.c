#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies a string into a new buffer
 * @str: string copy
 * Return: pointer to new buffer
 */

char *_strdup(char *str)
{
	int i = 0;
	char *j;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;
	j = malloc(sizeof(char) * i + sizeof(char));
	if (j == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
	{
		j[i] = str[i];
		i++;
	}

	j[i] = '\0';
	return (j);
}
