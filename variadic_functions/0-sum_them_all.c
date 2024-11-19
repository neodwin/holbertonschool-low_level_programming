#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * sum_them_all - sum of all its parameters
  * @n: number of arguments
  * @...: variable list
  * Return: sum of all its parameters
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ptr;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	for (i = sum = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
