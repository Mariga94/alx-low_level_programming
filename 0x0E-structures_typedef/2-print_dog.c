#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * d - dog
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
			printf("Name: %s\n", d->name);
		}
		else if (d->age <= 0)
		{
			d->age = 0;
			printf("Age: %.f\n", d->age);
		}
		else if (d->owner == NULL)
		{
			d->owner = "(nil)";
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Name: %s\nAge: %.f\nOwner: %s\n", d->name, d->age, d->owner);
		}
	}
}
