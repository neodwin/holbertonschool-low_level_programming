#include "main.h"

/**
 * leet - Leet Function
 * @str: string
 * Return: string
 */

char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char ltr[] = "aAeEoOtTlL";
	char nbr[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; ltr[j] != '\0'; j++)
			if (str[i] == ltr[j])
				str[i] = nbr[j / 2];
	}
	return (str);
}
