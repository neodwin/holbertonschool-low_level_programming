#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: numberz (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)

	putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
