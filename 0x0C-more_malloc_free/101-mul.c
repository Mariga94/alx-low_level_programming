#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/*
 * mul - multiplies two positive numbers
 * @num1: number 1
 * @num2: number 2
 *
 * Return: 0 Always
 */
int mul(int argc, char *argv[])
{
	int *s;
	int a, b, ans;

	if (argc != 3)
	{
		printf("Error\n");
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if (!a || !b)
	{
		printf("Error\n");
		exit(98);
	}
	s = malloc(sizeof(*s) * a * b);

	if (s == NULL)
	{
		return (NULL);
	}

	return (s);

}
