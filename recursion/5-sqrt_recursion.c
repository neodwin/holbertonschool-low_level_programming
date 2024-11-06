#include "main.h"
#include <math.h>

/**
 * sqrtcheck - check from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: On success 1.
 */

int sqrtcheck(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrtcheck(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: string returned
 * Return: number
 */

int _sqrt_recursion(int n)
{
	return (sqrtcheck(n, 1));
}