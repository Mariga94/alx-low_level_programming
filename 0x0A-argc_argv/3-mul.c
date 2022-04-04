#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**
 * main - Entry point
 * @argc: count of the arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: 0 Always. Otherwise 1
 */

int main(int argc, char *argv[])
{
	int a, b;
	int result;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		result = a * b;
		printf("%i\n", result);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
