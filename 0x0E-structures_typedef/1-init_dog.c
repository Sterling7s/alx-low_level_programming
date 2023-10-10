#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize dog init
 * @d: Pointer to a structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = strdup(name);
		if (d->name == NULL)
		{
			return;
		}
		d->age = age;
		d->owner = strdup(owner);
		if (d->owner == NULL)
		{
			free(d->name);
			return;
		}
	}
}
