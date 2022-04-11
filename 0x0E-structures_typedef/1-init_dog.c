#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize dog
 * @d: dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
		{
			return;
		}
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
