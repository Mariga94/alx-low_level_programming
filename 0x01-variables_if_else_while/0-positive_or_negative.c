#include <stdio.h>

/**
 * main - Entry point
 *
 * Desctiption - program that checks if n is positive or negative
 * Return: 0.
 */

int main(void)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
