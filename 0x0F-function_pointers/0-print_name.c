#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name of object
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		(*f)(name);
	}
}
