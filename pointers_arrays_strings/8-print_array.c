#include "main.h"
#include <stdio.h>

/**
* print_array - Prints n elements of an array of integers
* @a: Pointer to the array of integers
* @n: Number of elements to print
*/

void print_array(int *a, int n)
{

	int i = 0;

	for (i = 0; i < n; i++)

	{

		if (i == 0)

		printf("%d", a[i]);

		else

		printf(", %d", a[i]);

	}
	printf("\n");
}
