#include "main.h"
/**
 * create_array - creates an array and initialize it with c
 *@size: The size of the array
 *@c: The char to initialize the array with
 *Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = (char *) malloc(sizeof(char) * size);

	if (ptr == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}
