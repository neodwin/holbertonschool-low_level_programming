#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: number
 * @m: number converted
 * Return: number of bits need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 2;
	int result = 0;

	for (i = 2 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			result++;
	return (result);
}
