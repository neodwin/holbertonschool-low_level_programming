#include "main.h"

/**
 * print_line - print the line
 * @n: times of character
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
