#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a dog
 * @d: dog to print
 * Description: if d is NULL print nothing
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	else if (d->name == NULL)
		d->name = "(nil)";


	else if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
