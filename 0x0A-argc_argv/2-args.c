#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 * @argc: count of arguments supplied to the program
 * @argv: array of pointers to the strings which are those arguments
 *
 * Return: 0 for success.
 */

int main(int argc, char *argv[])
{
	int count;


	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
