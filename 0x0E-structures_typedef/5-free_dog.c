#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
/**
 * free_dog - free dogs.
 * @d: pointer to dog_t
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
