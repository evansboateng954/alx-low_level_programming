#include "dog.h"

/**
 * init_dog - initializes objects of type dog
 * @d: instance of dog
 * @name: Member of dog (name of the dog)
 * @age: Member of dog (age of the dog)
 * @owner: owner of the dog (member variable)
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->owner = owner;
	d->age = age;
}
