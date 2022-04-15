#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: separate strings
 * @n: number of strings passed
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *res;

	va_start(ap, n);
	for (i = 0; i < n; ++i)
	{
		res = va_arg(ap, char*);
		if (res != NULL)
		{
			printf("%s", res);
		}
		else
		{
			printf("(nill)");
		}

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
