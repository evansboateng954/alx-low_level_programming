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
	int len1 = 0;
	int len2 = 0;

	for (i = 0; name[i] != '\0'; i++)
		len1++;

	for (i = 0; owner[i] != '\0'; i++)
		len2++;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(sizeof(char) * (len1 + 1));
	
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->owner = malloc(sizeof(char) * (len2 + 1));

	if (ptr->owner == NULL)
	{
		free(ptr);
		free(ptr->name);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		ptr->name[i] = name[i];
	for (i = 0; i <len2; i++)
		ptr->owner[i] = owner[i];
	ptr->age = age;

	return (ptr);
}
