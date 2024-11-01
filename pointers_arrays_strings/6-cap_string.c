#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: Return pointer string
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int i = 1;

	while (*ptr)

	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
		*ptr == ',' || *ptr == ';' || *ptr == '.' ||
		*ptr == '!' || *ptr == '?' || *ptr == '"' ||
		*ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')

		{

			i = 1;
		}

		else if (i && *ptr >= 'a' && *ptr <= 'z')
	{

		*ptr = *ptr - ('a' - 'A');
		i = 0;
	}

	else
	{

		i = 0;

	}

	ptr++;

	}

	return (str);
}
