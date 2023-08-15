#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs.
 * @d: The dog struct.
 */

void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
