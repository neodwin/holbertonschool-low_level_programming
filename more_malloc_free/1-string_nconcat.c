#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - return a concatenated string
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes in second string
 * Return: pointer shall point to a newly allocated space in memory,
 * NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int x = 0;
	unsigned int y;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n >= j)
		n = j;
	y = i + n + 1;
	concat = malloc(sizeof(char) * y);
	if (concat == NULL)
		return (NULL);
	j = 0;

	while (s1[x] != '\0')
	{
		concat[x] = s1[x];
		x++;
	}

	while (j < n)
	{
		concat[x] = s2[j];
		x++;
		j++;
	}

	concat[x] = '\0';
	return (concat);
}
