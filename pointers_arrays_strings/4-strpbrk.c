#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: any of the bytes in the string
 * @accept: matches one of the bytes
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
