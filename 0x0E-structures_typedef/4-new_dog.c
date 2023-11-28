#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i;
	int len = 0;

	for (i = 0; name[i] != '\0'; i++)
		len++;

	ptr->name = malloc(sizeof(char) * len);
	if
