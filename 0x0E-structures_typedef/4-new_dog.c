#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: A new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));
    
    if (newDog == NULL) 
{
        return NULL;  
}

    newDog->name = strdup(name);
    if (newDog->name == NULL)
{
         free(newDog);
	 return NULL;
}

    newDog->age = age;

    newDog->owner = strdup(owner);
    if (newDog->owner == NULL) {
        free(newDog->name);
        free(newDog);
        return NULL;
    }

    return newDog;
}

