#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - free dogs
 * @d: dog
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{

		free(d->owner);
		free(d->name);
		free(d);
	}
}

