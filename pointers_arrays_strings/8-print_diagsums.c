#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer
 * @size: size of diagonal
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int c = 0;

	for (i = 0; i < size; i++)

	{
		j += a[i * size + i];

		c += a[i * size + (size - i - 1)];

	}

	printf("%d, %d\n", j, c);
}
