#include "main.h"

/**
 * _atoi - converts the first number in a string to an int respecting sign
 * @s: string converted
 * Return: nb value
 */

int _atoi(char *s)
{
	int i = 0;
	int nb = 0;
	int n = 0;
	int j = 1;

	while ((s[i] < 48 || s[i] > 57) && s[i] != '\0')
	{
		if (s[i] == '-')
			n++;
		i++;
	}
	if (s[i] == '\0')
		return (0);
	if (n % 2 == 1)
		j = -1;
	while (s[i] > 47 && s[i] < 58)
	{
		nb *= 10;
		nb += ((s[i] - 48) * j);
		i++;
	}
	return (nb);
}
