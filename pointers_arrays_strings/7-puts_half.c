#include "main.h"

/**
* puts_half - Prints the second half of a string
* @str: string printed
*/
void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i - 1) / 2 + 1;
	}
	for (; n < i; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
