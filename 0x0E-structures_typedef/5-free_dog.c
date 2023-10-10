#include <stdio.h>
#include "dog.h"
#include "main.h"
/**
 * free_dog - frees memory occupied by dog
 * @d: pointer to dog
 * Return: nothing is returned
 */
void free_dog(dog_t *d)
{
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
}
