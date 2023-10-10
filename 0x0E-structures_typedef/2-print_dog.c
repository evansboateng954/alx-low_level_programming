#include "main.h"
#include <stdio.h>
/**
 * print_dog - prints dog
 * @d: pointer to a dog
 * Return: nothig is returned
 */
print_dog(struct dog *d)
{
	if (d->name == NULL && d->age == NULL && d->owner == NULL)
		printf(" ");
	else if (d->name == NULL)
		printf("Name: (nil)");
	else if (d->age == NULL)
		printf("Age: (nil)");
	else if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Name: %s \n Age: %f \n Owner: %s", d->name, d->age, d->owner);
}
