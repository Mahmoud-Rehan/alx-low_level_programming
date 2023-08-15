#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: structure of type dog.
 * @name: The dog name.
 * @age: The dog age.
 * @owner: The owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
