#include <string.h>
#include "main.h"
#include "dog.h"
/**
 * init_dog - initializes a variable of type dog
 * @d: pointer to an instance of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
