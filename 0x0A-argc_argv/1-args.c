#include <stdlib.h>
#include <stdio.h>

/**
 * main- entry point
 * @argc: count of arguments supplied to the program
 * @argv: array of pointers to the strings which are those arguments
 *
 * Return: 0 Always.
 */

int main(int argc, char *argv[])
{
	int count;
	(void)**argv;

	for (count = 0; count < argc; count++)
	{}
	printf("%d\n", count - 1);

	return (0);
}
