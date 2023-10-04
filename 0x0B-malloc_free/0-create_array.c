#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initialize it to a given char
 * @size: the size of the array
 * @c: the character to initialize the array
 * Return: Pointer to the array or NULL if it fails ie size = 0
 */
char *create_array(unsigned int size, char c)
{
	char  *ptr;
	unsigned int i = 0;


	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(size * sizeof(char));
	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	return (ptr);
}

