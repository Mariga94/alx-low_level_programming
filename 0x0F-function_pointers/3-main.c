#include "3-calc.h"
#include <stdlib.h>
/**
 * main - checks code
 * @argc: count of inputs
 * @argv: array of inputs
 *
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int a, b, c;
	int (*p)(int, int);

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);

		p = get_op_func(argv[2]);
		if (p == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		c = (*p)(a, b);

		printf("%d\n", c);
		return (0);
	}
	printf("Error\n");
	return (98);
}

