#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: structure of type dog.
 * @name: The dog name.
 * @age: The dog age.
 * @owner: The dog owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
