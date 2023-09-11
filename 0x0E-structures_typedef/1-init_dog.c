#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - the new dog struct
 * initialized
 *
 * @d: pointer to the struct of the new dog
 * @name: name
 * @age: age
 * @owner: the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
