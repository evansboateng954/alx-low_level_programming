#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: A new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t my_dog;

	my_dog.name = name;
	my_dog.age = age;
	my_dog.owner = owner;
}
