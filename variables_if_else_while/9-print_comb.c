#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: All possible combinations of single-digit numbers (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
		continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
