#include "dog.h"
/**
 * print_dog - prints dog
 * @d: pointer to a dog
 * Return: nothig is returned
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL && d->age == 0 && d->owner == NULL)
		printf(" ");
	else if (d->name == NULL)
		printf("Name: (nil)");
	else if (d->age == 0)
		printf("Age: (nil)");
	else if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Name: %s \n Age: %f \n Owner: %s\n", d->name, d->age, d->owner);
}
