#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: pointer to the first occurrence of the character
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
