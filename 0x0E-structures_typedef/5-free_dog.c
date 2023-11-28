#include "dog.h"
/**
 * free_dog - frees dog
 * @d: The object to clear from memory
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);

	free(d);
}
