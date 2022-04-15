#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print all
 * @format: list of type of arguments
 * Return: nothing
 */
void chk_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * chk_int - prints the int
 * @list: the type
 * Return: nothing
 */
void chk_int(va_list list)
{
	printf("%i", va_arg(list, int));
}
/**
 * chk_float - prints the float
 * @list: the type
 * Return: nothing
 */
void chk_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * chk_string - prints the string
 * @list: the type
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int n = 0, i = 0;
	char *sep = ", ";
	char *str;

	va_start(valist, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(valist, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(valist, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(valist, double), sep);
			break;
		case 's':
			str = va_arg(valist, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(valist);
}
