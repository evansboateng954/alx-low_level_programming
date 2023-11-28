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

	else if (!d->name)
		printf("Name: (nil)");


	else if (!d->owner)
		printf("Owner: (nil)");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
