#include "main.h"

/**
 * _sqr_root - checks for square
 * @n: input
 * @i: counter
 *
 * Return: square root
 */

int _sqr_root(int n, int i)
{
	if (i < 1)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqr_root(n, i - 1));
	}
}


/**
 * _sqrt_recursion - calculate the square root of natural numbers
 * @n: interger value to be calculated
 *
 * Return: squared number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{

		return (-1);
	}

	return (_sqr_root(n, (n + 1) / 2));
}
