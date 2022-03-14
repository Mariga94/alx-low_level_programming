#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the size in byte that a data type occupies in the computer memory.
 * Return: 0.
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %c byte(s)",sizeof(c));
	printf("Size of an int: %d byte(s)",sizeof(i));
	printf("Size of a long int: %ld byte(s)",sizeof(l));
	printf("Size of a long long int %li byte(s)",sizeof(ll));
	printf("Size of a float: %f byte(s)",sizeof(f));
	return(0);
}
