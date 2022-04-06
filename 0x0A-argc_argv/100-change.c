#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count of arguments
 * @b: array of pointer arguments
 *
 * Return: 0 for Success.
 *
 */
int main(int argc, char **b)
{
	int sum, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = atoi(*(b + 1));
	while (sum >= 25)
		sum -= 25, coins++;
	while (sum >= 10)
		sum -= 10, coins++;
	while (sum >= 5)
		sum -= 5, coins++;
	while (sum >= 2)
		sum -= 2, coins++;
	while (sum >= 1)
		sum--, coins++;
	printf("%d\n", coins);
	return (0);
}
