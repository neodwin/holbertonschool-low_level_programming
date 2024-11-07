#include "main.h"

/**
  * checkprime - check recursive input from is_prime_number
  * @n: integer
  * @i: number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */

int checkprime(int n, int i)
{
	if (i % n == 0 || i < 2)
		return (0);
	else if (n == i - 1)
		return (1);
	else if (i > n)
		return (checkprime(n + 1, i));
	return (1);
}

/**
  * is_prime_number - check if the number is a prime number
  * @n: number check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */

int is_prime_number(int n)
{
	return (checkprime(2, n));
}
