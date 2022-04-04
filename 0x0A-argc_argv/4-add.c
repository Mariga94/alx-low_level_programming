#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <errno.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: count of the arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: 0 Always. Otherwise 1
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
		return (0);
	}
	return (0);
}


