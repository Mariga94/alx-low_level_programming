#include "main.h"

/**
 * is_prime - check if number is prime
 * @n: integer to check
 * @i:
 *
 * Return: prime
 */

int is_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, i - 1));
	}
}

/**
 * is_prime_number - function that checks if n is a prime number
 * @n: number to be checked
 *
 * Return: 1 if n is a prime number, Otherwise 0.
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (is_prime(n, n / 2) > 0)
	{
		return (1);
	}
	return (0);
}


